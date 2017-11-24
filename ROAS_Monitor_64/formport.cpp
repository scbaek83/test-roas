#include "formport.h"
#include "ui_formport.h"
#include <QDebug>

#define ICON_GREEN      ":/icon/image/bullet_green.png"
#define ICON_BLACK      ":/icon/image/bullet_black.png"
#define ICON_RED        ":/icon/image/bullet_red.png"

FormPort::FormPort(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormPort)
{
    ui->setupUi(this);

    setChangeover(0, 0);
}

FormPort::~FormPort()
{
    delete ui;
}

void FormPort::setPortNum(int ch)
{
    m_portNum = ch;

    QString strPort = "Port " + QString::number(ch);
    ui->labelPortName->setText(strPort);
}

void FormPort::setPortName(QString &name)
{
    ui->textEdit->setText(name);
}

void FormPort::setValue(double value)
{
    ui->editPDValue->setText(QString::number(value, 'f', 2));
}

void FormPort::setChangeover(int select, int alarm)
{
    QIcon iconGreen, iconRed, iconBlack;
    iconGreen.addPixmap(QString(ICON_GREEN), QIcon::Active);
    iconGreen.addPixmap(QString(ICON_GREEN), QIcon::Disabled);
    iconRed.addPixmap(QString(ICON_RED), QIcon::Active);
    iconRed.addPixmap(QString(ICON_RED), QIcon::Disabled);
    iconBlack.addPixmap(QString(ICON_BLACK), QIcon::Active);
    iconBlack.addPixmap(QString(ICON_BLACK), QIcon::Disabled);

    if (select == 1) {
        if (alarm == 0) {
            ui->btnMain->setIcon(iconGreen);
        } else {
            ui->btnMain->setIcon(iconRed);
        }
        ui->btnSub->setIcon(iconBlack);
    } else {
        if (alarm == 0) {
            ui->btnSub->setIcon(iconGreen);
        } else {
            ui->btnSub->setIcon(iconRed);
        }
        ui->btnMain->setIcon(iconBlack);
    }
}

void FormPort::setSelectAutoManual(int select)
{
    if (select == 0) {
        ui->btnAuto->setIcon(QIcon(QPixmap(QString(ICON_GREEN))));
        ui->btnManual->setIcon(QIcon(QPixmap(QString(ICON_BLACK))));

        ui->gbMainSub->setEnabled(false);
    } else {
        ui->btnAuto->setIcon(QIcon(QPixmap(QString(ICON_BLACK))));
        ui->btnManual->setIcon(QIcon(QPixmap(QString(ICON_GREEN))));

        ui->gbMainSub->setEnabled(true);
    }
}

void FormPort::on_btnMain_clicked()
{
    emit sigBtnMain(m_portNum);
}

void FormPort::on_btnSub_clicked()
{
    emit sigBtnSub(m_portNum);
}

void FormPort::on_btnAuto_clicked()
{
    emit sigBtnAuto(m_portNum);
}

void FormPort::on_btnManual_clicked()
{
    emit sigBtnManual(m_portNum);
}
