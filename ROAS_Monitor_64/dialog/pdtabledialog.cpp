#include "pdtabledialog.h"
#include "ui_pdtabledialog.h"

PdTableDialog::PdTableDialog(Device *device, QWidget *parent) :
    QDialog(parent),
    m_device(device),
    ui(new Ui::PdTableDialog)
{
    ui->setupUi(this);

    connect(m_device, SIGNAL(sigPdMonitor(Device*)), this, SLOT(slotVoltageMonitor(Device*)));
    connect(m_device, SIGNAL(sigRecvCalData(uchar)), this, SLOT(slotRecvCalData(uchar)));

    initUi();
}

PdTableDialog::~PdTableDialog()
{
    qDebug() << "Destructor PD Table Dialog";
    disconnect(m_device, SIGNAL(sigPdMonitor(Device*)), this, SLOT(slotVoltageMonitor(Device*)));
    disconnect(m_device, SIGNAL(sigRecvCalData(uchar)), this, SLOT(slotRecvCalData(uchar)));
    delete ui;
}

void PdTableDialog::initUi()
{
    QString strCh = "Ch";    

    for (int i=0; i<NUM_PORT; i++) {
        strCh = "Ch" + QString::number(i + 1);
        ui->cbChannel->addItem(strCh);
    }

    setChTable(0);

    ui->tableWidget->setShowGrid(true);
}

void PdTableDialog::setChTable(int chIndex)
{
    float ref = 0.0;
    ushort volt[MAX_CAL_STEP] = {0};
    uchar mainSub = (m_device->info()->mainSub >> chIndex) & 0x01;
    qDebug() << "mainSub:" << mainSub;

    if (mainSub == 1) {     // reverse mainSub
        ref = m_device->info()->m_calDataMain[chIndex].ref;
        memcpy(volt, m_device->info()->m_calDataMain[chIndex].volt, MAX_CAL_STEP * 2);
    } else {                // reverse mainSub
        ref = m_device->info()->m_calData[chIndex].ref;
        memcpy(volt, m_device->info()->m_calData[chIndex].volt, MAX_CAL_STEP * 2);
    }

    QString strRef = QString::number(ref, 'f', 2);
    ui->editRef->setText(strRef);

    for (int i=0; i<MAX_CAL_STEP; i++) {
        QTableWidgetItem *item = new QTableWidgetItem;
        QString strVolt = QString::number(volt[i]);
        item->setText(strVolt);
        ui->tableWidget->setItem(0, i, item);
    }
}

void PdTableDialog::setChTable(uchar chIndex, uchar bitMainSub)
{
    float ref = 0.0;
    ushort volt[MAX_CAL_STEP] = {0};

    if (bitMainSub == 1) {     // reverse mainSub
        ref = m_device->info()->m_calDataMain[chIndex].ref;
        memcpy(volt, m_device->info()->m_calDataMain[chIndex].volt, MAX_CAL_STEP * 2);
    } else {                // reverse mainSub
        ref = m_device->info()->m_calData[chIndex].ref;
        memcpy(volt, m_device->info()->m_calData[chIndex].volt, MAX_CAL_STEP * 2);
    }

    QString strRef = QString::number(ref, 'f', 2);
    ui->editRef->setText(strRef);

    for (int i=0; i<MAX_CAL_STEP; i++) {
        QTableWidgetItem *item = new QTableWidgetItem;
        QString strVolt = QString::number(volt[i]);
        item->setText(strVolt);
        ui->tableWidget->setItem(0, i, item);
    }
}

void PdTableDialog::slotVoltageMonitor(Device *device)
{
    int chIndex = ui->cbChannel->currentIndex();
    QString strVolt = QString::number(device->info()->pdVolt[chIndex]);
    ui->editVolt->setText(strVolt);
}

void PdTableDialog::slotRecvCalData(uchar chIndex)
{
    // TODO: set label text main-sub

    ui->cbChannel->setCurrentIndex((int)chIndex);
    setChTable(chIndex);
}

void PdTableDialog::slotChangeOver(uchar chIndex, uchar bitMainSub)
{
    uchar currentCh = (uchar)ui->cbChannel->currentIndex();
    if (currentCh == chIndex) {
        setChTable(chIndex, bitMainSub);
    }
}

void PdTableDialog::slotBtnMain(uchar chIndex)
{
    qDebug() << "slotBtnMain()";
    uchar currentCh = (uchar)ui->cbChannel->currentIndex();
    if (currentCh == chIndex) {
        setChTable(chIndex);
    }
}

void PdTableDialog::slotBtnSub(uchar chIndex)
{
    qDebug() << "slotBtnSub()";
    uchar currentCh = (uchar)ui->cbChannel->currentIndex();
    if (currentCh == chIndex) {
        setChTable(chIndex);
    }
}

void PdTableDialog::setVoltTable()
{
    QString strVolt = ui->editVolt->text();    
    QTableWidgetItem *item = new QTableWidgetItem;
    item->setText(strVolt);
    int row = ui->tableWidget->currentRow();
    int col = ui->tableWidget->currentColumn();

    ui->tableWidget->setItem(row, col, item);
}

void PdTableDialog::on_btnSetVolt_clicked()
{
    setVoltTable();
}

void PdTableDialog::on_btnWriteTable_clicked()
{
    uchar chIndex = (uchar)ui->cbChannel->currentIndex();
    float ref = ui->editRef->text().toFloat();
    ushort volt[MAX_CAL_STEP] = {0};
    for (int i=0; i<MAX_CAL_STEP; i++) {
        volt[i] = (ushort)ui->tableWidget->item(0, i)->text().toInt();
        //qDebug() << i << volt[i];
    }
    m_device->sendReqSetCalData(chIndex, ref, volt);
}

void PdTableDialog::on_cbChannel_currentIndexChanged(int index)
{
    setChTable(index);
}
