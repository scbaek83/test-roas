#include "devicewindow.h"
#include "ui_devicewindow.h"

DeviceWindow::DeviceWindow(Device *device, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DeviceWindow)
{
    ui->setupUi(this);

    m_device = device;
    initForm();
    initDevice();
    initUi();
    initGraph();

    m_device->sendReqPortName(0);
    m_progress = new QProgressDialog(this);
    m_progress->setRange(0, 16);
    m_progress->setModal(true);

    connect(this, SIGNAL(sigDeviceWindowClosed()), parent, SLOT(slotDeviceWindowClosed()));
    connect(device, SIGNAL(sigDisconnected(Device*)), this, SLOT(close()));

    ui->sbScanCycle->hide();
    ui->btnSetScanCycle->hide();
    ui->label_5->hide();

//    int interval = ui->sbScanCycle->value() * 1000;
//    m_tIdPdMonitor = startTimer(interval);

    //showMaximized();
}

DeviceWindow::~DeviceWindow()
{
    killTimer(m_tIdPdMonitor);

    for (int i=0; i<NUM_PORT; i++) {
        FormPort *form = m_portForm[i];

        disconnect(form, SIGNAL(sigBtnMain(int)), this, SLOT(slotBtnMain(int)));
        disconnect(form, SIGNAL(sigBtnSub(int)), this, SLOT(slotBtnSub(int)));
        disconnect(form, SIGNAL(sigBtnAuto(int)), this, SLOT(slotBtnMain(int)));
        disconnect(form, SIGNAL(sigBtnManual(int)), this, SLOT(slotBtnManual(int)));
    }

    disconnect(m_device, SIGNAL(sigPdMonitor(Device*)), this, SLOT(slotPdMonitor(Device*)));
    disconnect(m_device, SIGNAL(sigPortName(Device*,int)), this, SLOT(slotPortName(Device*,int)));
    disconnect(m_device, SIGNAL(sigSetPortName(Device*,int)), this, SLOT(slotSetPortName(Device*,int)));
    disconnect(m_device, SIGNAL(sigSetPortSwitch(Device*)), this, SLOT(slotSetPortSwitch(Device*)));
    disconnect(m_device, SIGNAL(sigSetAutoManual(Device*)), this, SLOT(slotSetAutoManual(Device*)));
    disconnect(m_device, SIGNAL(sigSetDetectionPeriod(Device*)), this, SLOT(slotDetectionPeriod(Device*)));
    disconnect(m_device, SIGNAL(sigSetSwTime(Device*)), this, SLOT(slotSwitchTime(Device*)));
    disconnect(m_device, SIGNAL(sigSetThreshold(Device*)), this, SLOT(slotPdThreshold(Device*)));

    if (m_device->type() == Device::USB) {
        delete m_device;
        m_device = NULL;

        emit sigDeviceWindowClosed();
    }

    delete ui;        
}

void DeviceWindow::timerEvent(QTimerEvent *event)
{
    int tId = event->timerId();

    if (tId == m_tIdPdMonitor) {
        m_device->sendPdMonitor();
    }
}

void DeviceWindow::initDevice()
{
    if (!m_device)
        return;

    qDebug() << "initDevice()";
    // TODO: connect signals and slots
    connect(m_device, SIGNAL(sigPdMonitor(Device*)), this, SLOT(slotPdMonitor(Device*)));
    connect(m_device, SIGNAL(sigPortName(Device*,int)), this, SLOT(slotPortName(Device*,int)));
    connect(m_device, SIGNAL(sigSetPortName(Device*,int)), this, SLOT(slotSetPortName(Device*,int)));
    connect(m_device, SIGNAL(sigSetPortSwitch(Device*)), this, SLOT(slotSetPortSwitch(Device*)));
    connect(m_device, SIGNAL(sigResSetPortSwitch(Device*,uchar,uchar,QString)), this, SLOT(slotSetPortSwitchCh(Device*,uchar,uchar)));
    connect(m_device, SIGNAL(sigSetAutoManual(Device*)), this, SLOT(slotSetAutoManual(Device*)));
    connect(m_device, SIGNAL(sigResSetAutoManual(Device*,uchar,uchar,QString)), this, SLOT(slotSetAutoManualCh(Device*,uchar,uchar)));
    connect(m_device, SIGNAL(sigShowPdTable()), this, SLOT(slotShowPdTable()));

    connect(m_device, SIGNAL(sigSetDetectionPeriod(Device*)), this, SLOT(slotDetectionPeriod(Device*)));
    connect(m_device, SIGNAL(sigSetSwTime(Device*)), this, SLOT(slotSwitchTime(Device*)));
    connect(m_device, SIGNAL(sigSetThreshold(Device*)), this, SLOT(slotPdThreshold(Device*)));

    slotDeviceInfo(m_device);
    qDebug() << "mainSub:" << m_device->info()->mainSub;
    qDebug() << "alarm:" << m_device->info()->alarm;
}

void DeviceWindow::initGraph()
{
    customPlot = ui->plotGraph;

    graph = customPlot->addGraph();
    graph->setPen(Qt::NoPen);
    graph->setBrush(QColor(200, 200, 200, 20));

    bar1 = new QCPBars(customPlot->xAxis, customPlot->yAxis);
    bar1->setWidth(0.4);
    bar1->setPen(Qt::NoPen);
    bar1->setBrush(QColor(10, 140, 70, 160));
    //bar1->setBrush(Qt::green);

    bar2 = new QCPBars(customPlot->xAxis, customPlot->yAxis);
    bar2->setWidth(0.4);
    bar2->setPen(Qt::NoPen);
    //bar2->setBrush(QColor(10, 100, 50, 70));
    bar2->setBrush(Qt::red);
    //bar2->setBrush(Qt::darkRed);

//    customPlot->addPlottable(bar1);
//    customPlot->addPlottable(bar2);

    // move bars above graphs and grid below bars:
    customPlot->addLayer("abovemain", customPlot->layer("main"), QCustomPlot::limAbove);
    customPlot->addLayer("belowmain", customPlot->layer("main"), QCustomPlot::limBelow);
    graph->setLayer("abovemain");
    customPlot->xAxis->grid()->setLayer("belowmain");
    customPlot->yAxis->grid()->setLayer("belowmain");

    // set some pens, brushes and backgrounds:
    customPlot->xAxis->setBasePen(QPen(Qt::white, 1));
    customPlot->yAxis->setBasePen(QPen(Qt::white, 1));
    customPlot->xAxis->setTickPen(QPen(Qt::white, 1));
    customPlot->yAxis->setTickPen(QPen(Qt::white, 1));
    customPlot->xAxis->setSubTickPen(QPen(Qt::white, 1));
    customPlot->yAxis->setSubTickPen(QPen(Qt::white, 1));
    customPlot->xAxis->setTickLabelColor(Qt::white);
    customPlot->yAxis->setTickLabelColor(Qt::white);
    customPlot->xAxis->grid()->setPen(QPen(QColor(140, 140, 140), 1, Qt::DotLine));
    customPlot->yAxis->grid()->setPen(QPen(QColor(140, 140, 140), 1, Qt::DotLine));
    customPlot->xAxis->grid()->setSubGridPen(QPen(QColor(80, 80, 80), 1, Qt::DotLine));
    customPlot->yAxis->grid()->setSubGridPen(QPen(QColor(80, 80, 80), 1, Qt::DotLine));
    customPlot->xAxis->grid()->setSubGridVisible(false);
    customPlot->yAxis->grid()->setSubGridVisible(true);
    customPlot->xAxis->grid()->setZeroLinePen(Qt::NoPen);
    customPlot->yAxis->grid()->setZeroLinePen(Qt::NoPen);
    customPlot->xAxis->setUpperEnding(QCPLineEnding::esSpikeArrow);
    customPlot->yAxis->setUpperEnding(QCPLineEnding::esSpikeArrow);
    QLinearGradient plotGradient;
    plotGradient.setStart(0, 0);
    plotGradient.setFinalStop(0, 350);
    plotGradient.setColorAt(0, QColor(80, 80, 80));
    plotGradient.setColorAt(1, QColor(50, 50, 50));
    customPlot->setBackground(plotGradient);
    QLinearGradient axisRectGradient;
    axisRectGradient.setStart(0, 0);
    axisRectGradient.setFinalStop(0, 350);
    axisRectGradient.setColorAt(0, QColor(80, 80, 80));
    axisRectGradient.setColorAt(1, QColor(30, 30, 30));
    customPlot->axisRect()->setBackground(axisRectGradient);

    customPlot->xAxis->setAutoTicks(false);
    customPlot->xAxis->setAutoTickLabels(false);
    customPlot->yAxis->setAutoTicks(false);
    customPlot->yAxis->setAutoTickLabels(false);

    customPlot->xAxis->setRange(0, 17);
    QVector<double> xVecRange(NUM_PORT + 2);
    for (int i=0; i<NUM_PORT + 2; i++)
        xVecRange[i] = (double)i;

    QVector<QString> xVecLabel(NUM_PORT + 2);
    for (int i=0; i<NUM_PORT + 2; i++)
        xVecLabel[i] = QString::number(i);
    customPlot->xAxis->setTickVector(xVecRange);
    customPlot->xAxis->setTickVectorLabels(xVecLabel);   

    customPlot->yAxis->setRange(0, 60);
    QVector<double> yVecRange(6);
    for (int i=0; i<6; i++)
        yVecRange[i] = i * 10;

    QVector<QString> yVecLabel(6);
    for (int i=0; i<6; i++)
        yVecLabel[i] = QString::number(LOW_LIMIT + i * 10);
    customPlot->yAxis->setTickVector(yVecRange);
    customPlot->yAxis->setTickVectorLabels(yVecLabel);

    customPlot->rescaleAxes();

    // Test code
//    QVector<double> xValue(NUM_PORT), yValue(NUM_PORT);
//    for (int i=0; i<NUM_PORT; i++) {
//        xValue[i] = i;
//        yValue[i] = i + 50;
//    }
//    drawGraph(bar1, xValue, yValue);

//    QVector<double> y2(NUM_PORT);
//    y2[4] = 20;
//    drawGraph(bar2, xValue, y2);
}

void DeviceWindow::drawGraph(QCPBars *bar, QVector<double> xValue, QVector<double> yValue)
{
    bar->setData(xValue, yValue);
    customPlot->replot();
}

void DeviceWindow::initUi()
{
    setDeviceInfo(m_device);
    // TODO:
    setPortSwitch(m_device);
    setAutoManual(m_device);
    //setDetectionPeriod(m_device);
    //setSwitchTiem(m_device);
    //setPdThreshold(m_device);
}

void DeviceWindow::initForm()
{
    for (int i=0; i<NUM_PORT; i++) {
        if (i == 0)
            m_portForm[i] = ui->widget_1;
        else if (i == 1)
            m_portForm[i] = ui->widget_2;
        else if (i == 2)
            m_portForm[i] = ui->widget_3;
        else if (i == 3)
            m_portForm[i] = ui->widget_4;
        else if (i == 4)
            m_portForm[i] = ui->widget_5;
        else if (i == 5)
            m_portForm[i] = ui->widget_6;
        else if (i == 6)
            m_portForm[i] = ui->widget_7;
        else if (i == 7)
            m_portForm[i] = ui->widget_8;
        else if (i == 8)
            m_portForm[i] = ui->widget_9;
        else if (i == 9)
            m_portForm[i] = ui->widget_10;
        else if (i == 10)
            m_portForm[i] = ui->widget_11;
        else if (i == 11)
            m_portForm[i] = ui->widget_12;
        else if (i == 12)
            m_portForm[i] = ui->widget_13;
        else if (i == 13)
            m_portForm[i] = ui->widget_14;
        else if (i == 14)
            m_portForm[i] = ui->widget_15;
        else if (i == 15)
            m_portForm[i] = ui->widget_16;

        m_portForm[i]->setPortNum(i + 1);        

        connect(m_portForm[i], SIGNAL(sigBtnMain(int)), this, SLOT(slotBtnMain(int)));
        connect(m_portForm[i], SIGNAL(sigBtnSub(int)), this, SLOT(slotBtnSub(int)));
        connect(m_portForm[i], SIGNAL(sigBtnAuto(int)), this, SLOT(slotBtnAuto(int)));
        connect(m_portForm[i], SIGNAL(sigBtnManual(int)), this, SLOT(slotBtnManual(int)));
    }
}

//////////////////// SLOT _ Device /////////////////////////////////

void DeviceWindow::slotDeviceInfo(Device *device)
{
    //qDebug() << "slotDeviceInfo()";
    setDeviceInfo(device);
    setPortSwitch(device);
    setAutoManual(device);
    setDetectionPeriod(device);
    setSwitchTime(m_device);
    setPdThreshold(m_device);
    setPortName(m_device);
}

void DeviceWindow::slotDeviceNameAddr(Device *device)
{
    setDeviceInfo(device);
}

void DeviceWindow::slotPdMonitor(Device *device)
{
    //qDebug() << "slotPdMonitor()";

    setPdMonitor(device);
}

void DeviceWindow::slotPortSwitch(Device *device)
{
    //qDebug() << "slotPortSwitch()";

    setPortSwitch(device);
}

void DeviceWindow::slotAutoManual(Device *device)
{
    //qDebug() << "slotPortSwitch()";

    setAutoManual(device);
}

void DeviceWindow::slotDetectionPeriod(Device *device)
{
    //qDebug() << "slotDetectionPeriod()";

    setDetectionPeriod(device);
}

void DeviceWindow::slotSwitchTime(Device *device)
{
    setSwitchTime(device);
}

void DeviceWindow::slotPdThreshold(Device *device)
{
    setPdThreshold(device);
}

void DeviceWindow::slotSetPortName(Device *device, int no)
{
    //qDebug() << "slotSetPortName()";
    //showPgBarPortName(no+1, 16);      //show progressbar

    if (no < 15) {
        device->sendSetPortName(no+1, device->tmpPortName[no+1]);
    } else {
        setPortName(device);
    }
}

void DeviceWindow::slotPortName(Device *device, int no)
{
    //qDebug() << "slotPortName()";

    m_progress->setLabelText(tr("Recieve Channel Name: Ch%1").arg(QString::number(no+1)));
    m_progress->setValue(no + 1);
    qApp->processEvents();
    if (m_progress->wasCanceled())
        return;

    qDebug() << "port index:" << no;

    if (no < 15) {
        device->sendReqPortName(no + 1);
    } else {
        setPortName(device);
        m_progress->close();

        int interval = ui->sbScanCycle->value() * 1000;
        m_tIdPdMonitor = startTimer(interval);
    }
}

void DeviceWindow::slotSetPortSwitch(Device *device)
{
    ushort alarm = device->info()->alarm;
    ushort mainsub = device->info()->mainSub;

    for (int i=0; i<NUM_PORT; i++) {
        uchar bitMainSub = (mainsub >> i) & 0x01;
        if (alarm >> i & 0x01) {
            if (bitMainSub == 0x00)
                m_portForm[i]->setChangeover(0, 1);
            else
                m_portForm[i]->setChangeover(1, 1);

        } else {
            if (bitMainSub == 0x00)
                m_portForm[i]->setChangeover(0, 0);
            else
                m_portForm[i]->setChangeover(1, 0);
        }
    }        
}

void DeviceWindow::slotSetPortSwitchCh(Device *device, uchar chIndex, uchar bitMainSub)
{
    ushort alarm = device->info()->alarm;
    int bitAlarm = (alarm >> chIndex) & 0x01;
    m_portForm[chIndex]->setChangeover(bitMainSub, bitAlarm);

    emit sigChangeOver(chIndex, bitMainSub);
}

void DeviceWindow::slotSetAutoManual(Device *device)
{
    ushort automanual = device->info()->autoMan;

    for (int i=0; i<NUM_PORT; i++) {
        uchar bitAutoMan = (automanual >> i) & 0x01;
        if (bitAutoMan == 0x00)
            m_portForm[i]->setSelectAutoManual(0);
        else
            m_portForm[i]->setSelectAutoManual(1);
    }
}

void DeviceWindow::slotSetAutoManualCh(Device *device, uchar chIndex, uchar bitAutoMan)
{
    m_portForm[chIndex]->setSelectAutoManual(bitAutoMan);
}

void DeviceWindow::slotShowPdTable()
{
    m_tIdPdMonitor = startTimer(1000);
    PdTableDialog *dlg = new PdTableDialog(m_device, this);
    connect(this, SIGNAL(sigDeviceWindowClosed()), dlg, SLOT(close()));
    connect(this, SIGNAL(sigChangeOver(uchar,uchar)), dlg, SLOT(slotChangeOver(uchar,uchar)));

    for (int i=0; i<NUM_PORT; i++) {
        qDebug() << m_device->info()->m_calData[2].ref << m_device->info()->m_calDataMain[2].ref;
    }
    dlg->setAttribute(Qt::WA_DeleteOnClose);
    dlg->show();
}

// slots - portForm
void DeviceWindow::slotBtnMain(int portNum)
{
    int chIndex = portNum - 1;
    m_device->sendSetPortSwitchCh(chIndex, 1);
}

void DeviceWindow::slotBtnSub(int portNum)
{
    int chIndex = portNum - 1;
    m_device->sendSetPortSwitchCh(chIndex, 0);
}

void DeviceWindow::slotBtnAuto(int portNum)
{
    int chIndex = portNum - 1;
    m_device->sendSetAutoManualCh(chIndex, 0);
}

void DeviceWindow::slotBtnManual(int portNum)
{
    int chIndex = portNum - 1;
    m_device->sendSetAutoManualCh(chIndex, 1);
}

void DeviceWindow::setDeviceInfo(Device *device)
{
    QString name = device->infoName();
    QString fwVer = device->infoVersion();
    QString ip = device->infoIP();
    QString mcuTemp = device->infoMCUTemp();

    ui->editName->setText(name);
    ui->editVersion->setText(fwVer);
    ui->editIP->setText(ip);
    ui->editMCUTemp->setText(mcuTemp);
}

void DeviceWindow::setPdMonitor(Device *device)
{
    // alarm status
    ushort alarm = device->info()->alarm;

    // PD values
    double *value = device->info()->pdValue;
    QVector<double> xAxis(NUM_PORT + 2);
    QVector<double> yAxis1(NUM_PORT + 2), yAxis2(NUM_PORT + 2);

    xAxis[0] = 0.0;
    xAxis[17] = 17.0;
    yAxis1[0] = 0.0;
    yAxis1[17] = 0.0;
    yAxis2[0] = 0.0;
    yAxis2[17] = 0.0;

    uchar bitAlarm = 0;
    for (int i=0; i<NUM_PORT; i++) {
        m_portForm[i]->setValue(value[i]);
        xAxis[i + 1] = (double)(i + 1);
        yAxis1[i + 1] = value[i] + (LOW_LIMIT * -1);
        yAxis2[i + 1] = 0.0;

        bitAlarm = (alarm >> i) & 0x01;
        if (bitAlarm == 1) {
            yAxis1[i + 1] = 0;
            yAxis2[i + 1] = value[i] + (LOW_LIMIT * -1);
        }
    }

    drawGraph(bar1, xAxis, yAxis1);
    drawGraph(bar2, xAxis, yAxis2);

    float temp = (float)device->info()->mcuTemp / 10;
    QString mcuTemp;
    ui->editMCUTemp->setText(mcuTemp.sprintf("%3.1f", temp));

    // Switching Main or Sub
    ushort mainSub = device->info()->mainSub;
    for (int i=0; i<NUM_PORT; i++) {
        uchar ms = (mainSub >> i) & 0x01;       // 0:main, 1:sub
        if ((alarm>>i) & 0x01) {
            if (ms == 0x00)
                m_portForm[i]->setChangeover(0, 1);
            else
                m_portForm[i]->setChangeover(1, 1);
        } else {
            if (ms == 0x00)
                m_portForm[i]->setChangeover(0, 0);
            else
                m_portForm[i]->setChangeover(1, 0);
        }
    }

    // Set Auto or Manual Switching
    ushort autoMan = device->info()->autoMan;
    for (int i=0; i<NUM_PORT; i++) {
        uchar am = (autoMan >> i) & 0x01;
        if (am == 0x00)
            m_portForm[i]->setSelectAutoManual(0);
        else
            m_portForm[i]->setSelectAutoManual(1);
    }
}

void DeviceWindow::setPortSwitch(Device *device)
{
    ushort alarm = device->info()->alarm;
    ushort selectMainSub = device->info()->mainSub;

    for (int i=0; i<NUM_PORT; i++) {
        uchar ms = 0;
        ms = (selectMainSub >> i) & 0x01;

        if ((alarm>>i) & 0x1) {
            if (ms == 0x00) m_portForm[i]->setChangeover(0, 1);
            else m_portForm[i]->setChangeover(1, 1);
        } else {
            if (ms == 0x00) m_portForm[i]->setChangeover(0, 0);
            else m_portForm[i]->setChangeover(1, 0);
        }
    }
}

void DeviceWindow::setAutoManual(Device *device)
{
    ushort selectAutoMan = device->info()->autoMan;
    qDebug() << "auto-manual:" << selectAutoMan;

    for (int i=0; i<NUM_PORT; i++) {
        uchar am = 0;
        am = (selectAutoMan >> i) & 0x01;
        if (am == 0x00) m_portForm[i]->setSelectAutoManual(0);
        else m_portForm[i]->setSelectAutoManual(1);
    }
}

void DeviceWindow::setDetectionPeriod(Device *device)
{
    int detectionPeriod = (int)device->info()->detectionPeriod;
    ui->sbDetectionPeriod->setValue(detectionPeriod);
    qDebug() << "detection period:" << detectionPeriod;
}

void DeviceWindow::setSwitchTime(Device *device)
{
    int swTime = (int)device->info()->swTime;
    ui->sbSwitchingTime->setValue(swTime);
    qDebug() << "switching time:" << swTime;
}

void DeviceWindow::setPdThreshold(Device *device)
{
    double threshold = (double)device->info()->threshold / 100.0;
    ui->dsbPdThreshold->setValue(threshold);
    qDebug() << "threshold:" << threshold;
}

void DeviceWindow::setPortName(Device *device)
{
    ui->widget_1->setPortName(QString::fromUtf8(device->info()->portName[0]));
    ui->widget_2->setPortName(QString::fromUtf8(device->info()->portName[1]));
    ui->widget_3->setPortName(QString::fromUtf8(device->info()->portName[2]));
    ui->widget_4->setPortName(QString::fromUtf8(device->info()->portName[3]));
    ui->widget_5->setPortName(QString::fromUtf8(device->info()->portName[4]));
    ui->widget_6->setPortName(QString::fromUtf8(device->info()->portName[5]));
    ui->widget_7->setPortName(QString::fromUtf8(device->info()->portName[6]));
    ui->widget_8->setPortName(QString::fromUtf8(device->info()->portName[7]));
    ui->widget_9->setPortName(QString::fromUtf8(device->info()->portName[8]));
    ui->widget_10->setPortName(QString::fromUtf8(device->info()->portName[9]));
    ui->widget_11->setPortName(QString::fromUtf8(device->info()->portName[10]));
    ui->widget_12->setPortName(QString::fromUtf8(device->info()->portName[11]));
    ui->widget_13->setPortName(QString::fromUtf8(device->info()->portName[12]));
    ui->widget_14->setPortName(QString::fromUtf8(device->info()->portName[13]));
    ui->widget_15->setPortName(QString::fromUtf8(device->info()->portName[14]));
    ui->widget_16->setPortName(QString::fromUtf8(device->info()->portName[15]));

    /*
    qDebug() << "test debug";
    for (int i=0; i<16; i++) {
        for (int j=0; j<32; j++) {
            qDebug() << device->info()->portName[i][j];
        }
    }
    */

    //hidePgBarPortName();

    //slotStartPdData();
//    m_tIdPdMonitor = startTimer(m_scanCycle*1000);
//    QTimer::singleShot(500, this, SLOT(slotEmitSigHeartBeat()));
    //emit sigStartHeartBeat();
}

void DeviceWindow::on_btnAutoAll_clicked()
{
    m_device->sendSetAutoManual(0x0000);
}

void DeviceWindow::on_btnManualAll_clicked()
{
    m_device->sendSetAutoManual(0xffff);
}

void DeviceWindow::on_btnMainAll_clicked()
{
    m_device->sendSetPortSwitch(0xffff);
}

void DeviceWindow::on_btnSubAll_clicked()
{
    m_device->sendSetPortSwitch(0x0000);
}

void DeviceWindow::on_actionSetPortName_triggered()
{
//    for (int i=0; i<NUM_PORT; i++)
//        memset(m_device->tmpPortName[i], 0x00, LEN_PORT_NAME);

    SetPortNameDialog dlg(m_device);
    if (dlg.exec()) {
        m_device->sendSetPortName(0, m_device->tmpPortName[0]);
    }
}

void DeviceWindow::on_actionSetDeviceInfo_triggered()
{
    SetDevInfoDialog dlg(m_device);
    if (dlg.exec() == QDialog::Accepted) {
        qDebug() << "dlg.exec()";
        //close();
    }
}

void DeviceWindow::on_actionSetAlarmMask_triggered()
{
    AlarmMaskDialog dlg(m_device);
    if (dlg.exec() == QDialog::Accepted) {
        qDebug() << "alarmMask:" << dlg.m_alarmMask;
        m_device->sendSetAlarmMask(dlg.m_alarmMask);
    }
}

void DeviceWindow::on_actionPdTable_triggered()
{
    killTimer(m_tIdPdMonitor);
    m_device->sendReqCalData(0);
//    PdTableDialog *dlg = new PdTableDialog(m_device, this);
//    if (dlg->exec() == QDialog::Accepted) {
//        qDebug() << "PD table accepted";
//    }
}

void DeviceWindow::on_actionGetLog_triggered()
{
    LogDataDialog dlg(m_device, this);
    connect(m_device, SIGNAL(sigSetLogData(int,int,char*)), &dlg, SLOT(slotSetLogData(int,int,char*)));
    dlg.exec();
}

void DeviceWindow::on_btnSetScanCycle_clicked()
{
    killTimer(m_tIdPdMonitor);
    int cycle = ui->sbScanCycle->value() * 1000;
    m_tIdPdMonitor = startTimer(cycle);
}

void DeviceWindow::on_btnSetDetectionPeriod_clicked()
{
    int sec = ui->sbDetectionPeriod->value();
    m_device->sendSetDetectionPeriod(sec);
}

void DeviceWindow::on_btnSetSwitchingTime_clicked()
{
    int swTime = ui->sbSwitchingTime->value();
    m_device->sendSetSwitchTime(swTime);
}

void DeviceWindow::on_btnSetThreshold_clicked()
{
    short threshold = (short)(ui->dsbPdThreshold->value() * 100);
    m_device->sendSetThreshold(threshold);
}








