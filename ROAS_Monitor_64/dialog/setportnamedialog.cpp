#include "setportnamedialog.h"
#include "ui_setportnamedialog.h"

SetPortNameDialog::SetPortNameDialog(Device *device, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SetPortNameDialog)
{
    ui->setupUi(this);

    m_device = device;
    initUi();

}

SetPortNameDialog::~SetPortNameDialog()
{
    delete ui;
}

void SetPortNameDialog::accept()
{
    QByteArray arrPort1 = ui->editPortName1->text().toUtf8();
    QByteArray arrPort2 = ui->editPortName2->text().toUtf8();
    QByteArray arrPort3 = ui->editPortName3->text().toUtf8();
    QByteArray arrPort4 = ui->editPortName4->text().toUtf8();
    QByteArray arrPort5 = ui->editPortName5->text().toUtf8();
    QByteArray arrPort6 = ui->editPortName6->text().toUtf8();
    QByteArray arrPort7 = ui->editPortName7->text().toUtf8();
    QByteArray arrPort8 = ui->editPortName8->text().toUtf8();
    QByteArray arrPort9 = ui->editPortName9->text().toUtf8();
    QByteArray arrPort10 = ui->editPortName10->text().toUtf8();
    QByteArray arrPort11 = ui->editPortName11->text().toUtf8();
    QByteArray arrPort12 = ui->editPortName12->text().toUtf8();
    QByteArray arrPort13 = ui->editPortName13->text().toUtf8();
    QByteArray arrPort14 = ui->editPortName14->text().toUtf8();
    QByteArray arrPort15 = ui->editPortName15->text().toUtf8();
    QByteArray arrPort16 = ui->editPortName16->text().toUtf8();
    memcpy(m_device->tmpPortName[0], arrPort1.data(), LEN_PORT_NAME);
    memcpy(m_device->tmpPortName[1], arrPort2.data(), LEN_PORT_NAME);
    memcpy(m_device->tmpPortName[2], arrPort3.data(), LEN_PORT_NAME);
    memcpy(m_device->tmpPortName[3], arrPort4.data(), LEN_PORT_NAME);
    memcpy(m_device->tmpPortName[4], arrPort5.data(), LEN_PORT_NAME);
    memcpy(m_device->tmpPortName[5], arrPort6.data(), LEN_PORT_NAME);
    memcpy(m_device->tmpPortName[6], arrPort7.data(), LEN_PORT_NAME);
    memcpy(m_device->tmpPortName[7], arrPort8.data(), LEN_PORT_NAME);
    memcpy(m_device->tmpPortName[8], arrPort9.data(), LEN_PORT_NAME);
    memcpy(m_device->tmpPortName[9], arrPort10.data(), LEN_PORT_NAME);
    memcpy(m_device->tmpPortName[10], arrPort11.data(), LEN_PORT_NAME);
    memcpy(m_device->tmpPortName[11], arrPort12.data(), LEN_PORT_NAME);
    memcpy(m_device->tmpPortName[12], arrPort13.data(), LEN_PORT_NAME);
    memcpy(m_device->tmpPortName[13], arrPort14.data(), LEN_PORT_NAME);
    memcpy(m_device->tmpPortName[14], arrPort15.data(), LEN_PORT_NAME);
    memcpy(m_device->tmpPortName[15], arrPort16.data(), LEN_PORT_NAME);

    QDialog::accept();
}

void SetPortNameDialog::initUi()
{
    ui->editPortName1->setText(QString::fromUtf8(m_device->info()->portName[0]));
    ui->editPortName2->setText(QString::fromUtf8(m_device->info()->portName[1]));
    ui->editPortName3->setText(QString::fromUtf8(m_device->info()->portName[2]));
    ui->editPortName4->setText(QString::fromUtf8(m_device->info()->portName[3]));
    ui->editPortName5->setText(QString::fromUtf8(m_device->info()->portName[4]));
    ui->editPortName6->setText(QString::fromUtf8(m_device->info()->portName[5]));
    ui->editPortName7->setText(QString::fromUtf8(m_device->info()->portName[6]));
    ui->editPortName8->setText(QString::fromUtf8(m_device->info()->portName[7]));
    ui->editPortName9->setText(QString::fromUtf8(m_device->info()->portName[8]));
    ui->editPortName10->setText(QString::fromUtf8(m_device->info()->portName[9]));
    ui->editPortName11->setText(QString::fromUtf8(m_device->info()->portName[10]));
    ui->editPortName12->setText(QString::fromUtf8(m_device->info()->portName[11]));
    ui->editPortName13->setText(QString::fromUtf8(m_device->info()->portName[12]));
    ui->editPortName14->setText(QString::fromUtf8(m_device->info()->portName[13]));
    ui->editPortName15->setText(QString::fromUtf8(m_device->info()->portName[14]));
    ui->editPortName16->setText(QString::fromUtf8(m_device->info()->portName[15]));
}
