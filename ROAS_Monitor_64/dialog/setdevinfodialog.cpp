#include "setdevinfodialog.h"
#include "ui_setdevinfodialog.h"
#include <QDebug>

SetDevInfoDialog::SetDevInfoDialog(Device *device, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SetDevInfoDialog),
    m_device(device)
{
    ui->setupUi(this);

    initUI();
}

SetDevInfoDialog::~SetDevInfoDialog()
{
    delete ui;
}

void SetDevInfoDialog::initUI()
{
    QString name = m_device->infoName();

    QString ip0 = m_device->infoIP();
    QString gw0 = m_device->infoGW();
    QString sm0 = m_device->infoSM();

    QString ip1 = m_device->infoIP2();
    QString gw1 = m_device->infoGW2();
    QString sm1 = m_device->infoSM2();

    QString dns = m_device->infoDNS();

    ui->editDevName->setText(name);
    ui->editIP->setText(ip0);
    ui->editGW->setText(gw0);
    ui->editSM->setText(sm0);
    ui->editIP_2->setText(ip1);
    ui->editGW_2->setText(gw1);
    ui->editSM_2->setText(sm1);
    ui->editDNS->setText(dns);
}

void SetDevInfoDialog::accept()
{
    qDebug() << "accept()";
    QString strName = ui->editDevName->text();
    QString strIp0 = ui->editIP->text();
    QString strGw0 = ui->editGW->text();
    QString strSm0 = ui->editSM->text();
    QString strIp1 = ui->editIP_2->text();
    QString strGw1 = ui->editGW_2->text();
    QString strSm1 = ui->editSM_2->text();
    QString strDns = ui->editDNS->text();    

    char name[LEN_DEV_NAME] = {0};
    memcpy(name, strName.toUtf8().data(), LEN_DEV_NAME);
    uint ip0 = m_device->convertIpGwSmDns(strIp0);
    uint gw0 = m_device->convertIpGwSmDns(strGw0);
    uint sm0 = m_device->convertIpGwSmDns(strSm0);
    uint ip1 = m_device->convertIpGwSmDns(strIp1);
    uint gw1 = m_device->convertIpGwSmDns(strGw1);
    uint sm1 = m_device->convertIpGwSmDns(strSm1);
    uint dns = m_device->convertIpGwSmDns(strDns);

    DevInfo *tmpInfo = new DevInfo;
    memcpy(tmpInfo->name, name, 60);
    tmpInfo->ip0 = ip0;
    tmpInfo->gw0 = gw0;
    tmpInfo->sm0 = sm0;
    tmpInfo->ip1 = ip1;
    tmpInfo->gw1 = gw1;
    tmpInfo->sm1 = sm1;
    tmpInfo->dns = dns;

    qDebug() << tmpInfo->name;
    qDebug() << tmpInfo->ip0 << tmpInfo->ip1 << tmpInfo->dns;

    m_device->sendSetDevInfo(tmpInfo);

    QDialog::accept();
}
