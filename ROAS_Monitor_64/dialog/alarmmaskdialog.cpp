#include "alarmmaskdialog.h"
#include "ui_alarmmaskdialog.h"

AlarmMaskDialog::AlarmMaskDialog(Device *device, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AlarmMaskDialog),
    m_device(device)
{
    ui->setupUi(this);

    initUI();
}

AlarmMaskDialog::~AlarmMaskDialog()
{
    delete ui;
}

void AlarmMaskDialog::initUI()
{
    m_chkAlarmMask[0] = ui->chkCh1;
    m_chkAlarmMask[1] = ui->chkCh2;
    m_chkAlarmMask[2] = ui->chkCh3;
    m_chkAlarmMask[3] = ui->chkCh4;
    m_chkAlarmMask[4] = ui->chkCh5;
    m_chkAlarmMask[5] = ui->chkCh6;
    m_chkAlarmMask[6] = ui->chkCh7;
    m_chkAlarmMask[7] = ui->chkCh8;
    m_chkAlarmMask[8] = ui->chkCh9;
    m_chkAlarmMask[9] = ui->chkCh10;
    m_chkAlarmMask[10] = ui->chkCh11;
    m_chkAlarmMask[11] = ui->chkCh12;
    m_chkAlarmMask[12] = ui->chkCh13;
    m_chkAlarmMask[13] = ui->chkCh14;
    m_chkAlarmMask[14] = ui->chkCh15;
    m_chkAlarmMask[15] = ui->chkCh16;

    ushort mask = m_device->info()->alarmMask;
    qDebug() << "alarmMask:" << mask;
    bool bitMask = true;
    for (int i=0; i<NUM_PORT; i++) {
        if (((mask >> i) & 0x01) == 0)
            bitMask = false;            
        else
            bitMask = true;
        m_chkAlarmMask[i]->setChecked(bitMask);
    }
}

void AlarmMaskDialog::accept()
{
    ushort alarmMask = 0x0000;
    for (int i=0; i<NUM_PORT; i++) {
        if (m_chkAlarmMask[i]->isChecked())
            alarmMask |= 0x01 << i;         // bit set : 1
        else
            alarmMask &= ~(0x01 << i);      // bit clear : 0
    }

    m_alarmMask = alarmMask;
    QDialog::accept();
}

void AlarmMaskDialog::on_btnAllch_clicked()
{
    bool check;
    if (ui->btnAllch->text() == "All Channel Check") {
        check = true;
        ui->btnAllch->setText("All Channel Uncheck");
    } else {
        check = false;
        ui->btnAllch->setText("All Channel Check");
    }

    for (int i=0; i<NUM_PORT; i++)
        m_chkAlarmMask[i]->setChecked(check);
}
