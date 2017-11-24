#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QString title;
    title = qApp->applicationName() + " " + qApp->applicationVersion();
    setWindowTitle(title);

    refreshDeviceList();
    initEventTreeWidget();
    //ui->btnTest->hide();
    //addTreeChildren();
    qDebug() << "test";

}

MainWindow::~MainWindow()
{
    emit sigCloseMainWindow();

    disconnect(m_serialDevice, SIGNAL(sigDeviceWindow(Device*)), this, SLOT(slotDeviceWindow(Device*)));
    delete ui;
}

void MainWindow::initEventTreeWidget()
{
    ui->treeEventList->setColumnWidth(0, 100);
    ui->treeEventList->setColumnWidth(1, 50);
    ui->treeEventList->setColumnWidth(2, 200);
    ui->treeEventList->setColumnWidth(3, 50);
}

void MainWindow::refreshDeviceList()
{    
    // Delete devices
    for (int i=0; i<m_ListDevice.length(); i++) {
        Device *device = m_ListDevice.at(i);
        // TODO: disconnect signals and slots

        delete device;
    }

    // make device list
    m_ListDevice.clear();
    ui->treeDeviceList->clear();

    QStringList listDevIp = INI::devIpAll();

    foreach (QString ip, listDevIp) {
        QString name = INI::devNameFromIp(ip);

        Device *device = new Device;
        connect(device, SIGNAL(sigConnected(Device*)), this, SLOT(slotDeviceConnected(Device*)));
        connect(device, SIGNAL(sigDisconnected(Device*)), this, SLOT(slotDeviceDisconnected(Device*)));
        connect(device, SIGNAL(sigDeviceWindow(Device*)), this, SLOT(slotDeviceWindow(Device*)));
        //connect(device, SIGNAL(sigAlarmStatus(QString)), this, SLOT(slotAlarmStatus(QString)));
        connect(device, SIGNAL(sigAlarmStatus(Device*,uchar,uchar,QString)), this, SLOT(slotAlarmStatus(Device*,uchar,uchar,QString)));
        connect(device, SIGNAL(sigPortSwitching(Device*,uchar,ushort,QString)), this, SLOT(slotPortSwitching(Device*,uchar,ushort,QString)));
        connect(device, SIGNAL(sigResSetPortSwitch(Device*,uchar,uchar,QString)), this, SLOT(slotResSetPortSwitch(Device*,uchar,uchar,QString)));
        connect(device, SIGNAL(sigResSetAutoManual(Device*,uchar,uchar,QString)), this, SLOT(slotResSetAutoManual(Device*,uchar,uchar,QString)));

        device->setInfoName(name);
        device->setHostIp(ip);

        m_ListDevice.append(device);

        // TODO: connect signals and slots

        QTreeWidgetItem *item = new QTreeWidgetItem;
        item->setText(0, device->infoName());
        item->setTextAlignment(0, Qt::AlignCenter);
        item->setText(1, device->hostIp());
        item->setTextAlignment(1, Qt::AlignCenter);
        item->setText(2, "Disconnected");
        item->setTextAlignment(2, Qt::AlignCenter);
        item->setTextColor(2, Qt::darkGray);        

        item->setBackgroundColor(0, Qt::lightGray);
        item->setBackgroundColor(1, Qt::lightGray);
        item->setBackgroundColor(2, Qt::lightGray);

        ui->treeDeviceList->addTopLevelItem(item);        
    }
}

void MainWindow::connectDevice(QString &devIp)
{
    qDebug() << "connectDevice()";
    QString ip = devIp;
    for (int i=0; i<m_ListDevice.length(); i++) {
        Device *dev = m_ListDevice.at(i);
        if (ip == dev->hostIp()) {
            dev->connectToServer();
            /// TODO: check connection status.
            return;
        }
    }

    qDebug() << "no matched IP";
}

void MainWindow::disconnectDevice(QString &devIp)
{
    QString ip = devIp;
    for (int i=0; i<m_ListDevice.length(); i++) {
        Device *dev = m_ListDevice.at(i);
        if (ip == dev->hostIp()) {
            dev->disconnectFromServer();
            break;
        }
    }
}

void MainWindow::statusDevice()
{
    for (int i=0; i<m_ListDevice.length(); i++) {
        Device *device = m_ListDevice.at(i);
        bool isConnected = device->isConnected();

        QTreeWidgetItem *item = ui->treeDeviceList->topLevelItem(i);

        item->setText(0, device->infoName());
        if (isConnected) {
            item->setText(2, "Connected");
            item->setTextColor(2, Qt::blue);
        } else {
            item->setText(2, "Disconnected");
            item->setTextColor(2, Qt::gray);
        }
    }
}

void MainWindow::addTreeChildren()
{
    QTreeWidgetItem *item = ui->treeDeviceList->topLevelItem(0);

    QTreeWidgetItem *itemChild = new QTreeWidgetItem();
    itemChild->setText(0, "     child item");
    item->addChild(itemChild);

    QTreeWidgetItem *itemChild2 = new QTreeWidgetItem();
    itemChild2->setText(0, "     child item");
    item->addChild(itemChild2);
}

void MainWindow::addEventList(QString devName, QString strCh, QString strEvent, QString timeInfo)
{
    QTreeWidgetItem *item = new QTreeWidgetItem;
    item->setText(0, devName);
    item->setText(1, strCh);
    item->setText(2, strEvent);
    item->setText(3, timeInfo);

    item->setTextAlignment(0 , Qt::AlignHCenter);
    item->setTextAlignment(1 , Qt::AlignHCenter);
    //item->setTextAlignment(2 , Qt::AlignHCenter);
    item->setTextAlignment(3 , Qt::AlignHCenter);

    ui->treeEventList->addTopLevelItem(item);
    ui->treeEventList->scrollToBottom();
}

void MainWindow::clearEventList()
{
    ui->treeEventList->clear();
}

void MainWindow::slotDeviceConnected(Device *device)
{
    QString devIp = device->hostIp();
    QString devName = device->infoName();

    INI::modifyDevName(devIp, devName);

    statusDevice();

    // TODO: add event
    QString strEvent = "Connected";
    QString strTime = QDateTime::currentDateTime().toString("yyyy/MM/dd hh:mm:ss");
    addEventList(devName, "-", strEvent, strTime);
}

void MainWindow::slotDeviceDisconnected(Device *device)
{
    statusDevice();
    // TODO: add event
    QString devName = device->infoName();
    QString strEvent = "Disconnected";
    QString strTime = QDateTime::currentDateTime().toString("yyyy/MM/dd hh:mm:ss");
    addEventList(devName, "-", strEvent, strTime);
}

void MainWindow::slotDeviceWindow(Device *device)
{
    /// Construct DeviceWindow for USB connection

    qDebug() << "slotDeviceWindow()";
    DeviceWindow *wnd = new DeviceWindow(device, this);
    connect(this, SIGNAL(sigCloseMainWindow()), wnd, SLOT(close()));

    wnd->setAttribute(Qt::WA_DeleteOnClose);
    wnd->show();

    //ui->treeDeviceList->setEnabled(false);
    ui->actionConnectUSB->setEnabled(false);
}

void MainWindow::slotDeviceWindowClosed()
{
    ui->actionConnectUSB->setEnabled(true);
}

void MainWindow::slotAlarmStatus(QString alarmStatus)
{
    AlarmDialog *dlg = new AlarmDialog(alarmStatus, this);
    connect(this, SIGNAL(sigCloseMainWindow()), dlg, SLOT(close()));
    dlg->setAttribute(Qt::WA_DeleteOnClose);
    dlg->show();

    static int posX = 0;
    static int posY = 0;
    static int multiplyIndex = 1;

    int x = dlg->geometry().x();
    int y = dlg->geometry().y();

    dlg->setGeometry(posX + x, posY + y, dlg->geometry().width(), dlg->geometry().height());
    posX += 3;
    posY += 3;

    if (posY > 400) {
        posX = 3 * multiplyIndex;
        posY = 0;
        multiplyIndex++;
    }    

    QStringList list = alarmStatus.split(" ", QString::SkipEmptyParts);
    qDebug() << list;
}

void MainWindow::slotAlarmStatus(Device *device, uchar chIndex, uchar mainSub, QString timeInfo)
{
    QString devName = device->infoName();
    int ch = (int)chIndex + 1;
    QString strCh = "Ch" + QString::number(ch);
    QString strMS = "Sub";
    if (mainSub == 1)
        strMS = "Main";
    QString strEvent = "Alarm " + strMS;

    addEventList(devName, strCh, strEvent, timeInfo);
}

void MainWindow::slotPortSwitching(Device *device, uchar chIndex, ushort mainSub, QString timeInfo)
{
    QString devName = device->infoName();
    int ch = (int)chIndex + 1;
    QString strCh = "Ch" + QString::number(ch);
    QString strMS = "Sub ";
    int bitMS = (mainSub >> chIndex) & 0x01;
    if (bitMS == 1)
        strMS = "Main";
    QString strEvent = "Path changed to " + strMS;

    addEventList(devName, strCh, strEvent, timeInfo);
}

void MainWindow::slotResSetPortSwitch(Device *device, uchar chIndex, uchar bitMainSub, QString timeInfo)
{
    QString devName = device->infoName();
    int ch = (int)chIndex + 1;
    QString strCh = "Ch" + QString::number(ch);
    QString strMS = "Sub ";
    if (bitMainSub == 1)
        strMS = "Main";
    QString strEvent = "Path changed to " + strMS + " - Manual";

    addEventList(devName, strCh, strEvent, timeInfo);
}

void MainWindow::slotResSetAutoManual(Device *device, uchar chIndex, uchar bitAutoMan, QString timeInfo)
{
    QString devName = device->infoName();
    int ch = (int)chIndex + 1;
    QString strCh = "Ch" + QString::number(ch);
    QString strAM = "Auto";
    if (bitAutoMan == 1)
        strAM = "Manual";
    QString strEvent = "Mode Changed to " + strAM;

    addEventList(devName, strCh, strEvent, timeInfo);
}

void MainWindow::on_actionConnect_triggered()
{
    qDebug() << "on_actionConnect_triggered";
    QTreeWidgetItem *item = ui->treeDeviceList->currentItem();

    if (item) {
        QString devIp = item->text(1);
        connectDevice(devIp);
    }
}

void MainWindow::on_actionDisconnect_triggered()
{
    QTreeWidgetItem *item = ui->treeDeviceList->currentItem();

    if (item) {
        QString devIp = item->text(1);
        disconnectDevice(devIp);
    }
}

void MainWindow::on_actionDeviceAdd_triggered()
{
    AddDeviceDialog dlg;
    if (dlg.exec() == QDialog::Accepted) {
        qDebug() << "addDeviceDialog accepted";
        refreshDeviceList();
    }
}

void MainWindow::on_actionDeviceDelete_triggered()
{
    QTreeWidgetItem *item = ui->treeDeviceList->currentItem();

    if (item) {
        QString devIp = item->text(1);
        disconnectDevice(devIp);
    }
}

void MainWindow::on_treeDeviceList_doubleClicked(const QModelIndex &index)
{
    // Open device window
    int row = index.row();
    Device *device = m_ListDevice.at(row);
    bool isConnected = device->isConnected();

    if (isConnected) {
        PasswordDialog dlg(device);
        if (dlg.exec() == QDialog::Accepted) {
            qDebug() << "Accepted";
            // TODO: make device window object
            DeviceWindow *dw = new DeviceWindow(device, this);
            connect(this, SIGNAL(sigCloseMainWindow()), dw, SLOT(close()));
            dw->setAttribute(Qt::WA_DeleteOnClose);
            dw->show();
        }


//        // TODO: make device window object
//        DeviceWindow *dw = new DeviceWindow(device, this);
//        dw->show();
//        // TODO: check enable status of buttons

    }
    statusDevice();
}

void MainWindow::on_actionConnectUSB_triggered()
{
    int com = 0;

    ConnectDialog dlg(&com);
    if (dlg.exec() == QDialog::Accepted) {
        m_serialDevice = new Device(com);
        connect(m_serialDevice, SIGNAL(sigDeviceWindow(Device*)), this, SLOT(slotDeviceWindow(Device*)));
        //connect(m_serialDevice, SIGNAL(sigAlarmStatus(QString)),this, SLOT(slotAlarmStatus(QString)));
        connect(m_serialDevice, SIGNAL(sigAlarmStatus(Device*,uchar,ucahr,QString)), this, SLOT(slotAlarmStatus(Device*,uchar,uchar,QString)));
        connect(m_serialDevice, SIGNAL(sigPortSwitching(Device*,uchar,ushort,QString)), this, SLOT(slotPortSwitching(Device*,uchar,ushort,QString)));

        m_serialDevice->sendReqDevInfo();

//        DeviceWindow *wnd = new DeviceWindow(device, this);
//        wnd->setAttribute(Qt::WA_DeleteOnClose);
//        wnd->show();

//        //ui->treeDeviceList->setEnabled(false);
//        ui->actionConnectUSB->setEnabled(false);
    }
}

void MainWindow::on_btnClearEvent_clicked()
{
    clearEventList();
}

void MainWindow::on_actionAbout_triggered()
{
    QString strVersion = qApp->applicationName() + "    V" + qApp->applicationVersion();
    AboutDialog dlg(strVersion, this);
    dlg.exec();
}

#include <QDateTime>
#include <QFile>

void MainWindow::on_btnTest_clicked()
{

//    QString dirPath = QApplication::applicationDirPath();

//    QTreeWidgetItem *item = new QTreeWidgetItem;
//    item->setText(3, dirPath);
//    ui->treeEventList->addTopLevelItem(item);

//    QString fileName = dirPath + "/test.txt";
//    QFile file(fileName);
//    bool isSuccess = file.open(QIODevice::ReadOnly);
//    qDebug() << "isSuccess:" << isSuccess;
//    QString strSucess = "true";
//    if (isSuccess == false)
//        strSucess = "false";

//    QTreeWidgetItem *item2 = new QTreeWidgetItem;
//    item2->setText(3, strSucess);
//    ui->treeEventList->addTopLevelItem(item2);

//    QString newName = dirPath + "/test6.txt";
//    file.copy(fileName, newName);

//    QFile file("\\59.3.250.92/광시스템사업부2/TEST/test.txt");
//    bool isSuccess = file.copy("\\59.3.250.92/광시스템사업부2/TEST/test5.txt");
//    qDebug() << "isSuccess:" << isSuccess;

//    QDateTime cTime = QDateTime::currentDateTime();

//    QString strTime = cTime.toString("yyyy MM dd hh mm ss");
//    qDebug() << strTime;


//    int com = 0;

//    ConnectDialog dlg(&com);
//    if (dlg.exec() == QDialog::Accepted) {
//        qDebug() << "accepted";
//        m_serialDevice = new Device(com);
//        //connect(m_serialDevice, SIGNAL(sigDeviceWindow(Device*)), this, SLOT(slotDeviceWindow(Device*)));
//        m_serialDevice->sendTestCommand();
//    }


    //    Device *device = new Device;

//    device->setHostIp("59.3.250.107");
//    device->connectToServer();
}











