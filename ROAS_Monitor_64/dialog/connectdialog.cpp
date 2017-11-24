#include "connectdialog.h"
#include "ui_connectdialog.h"

ConnectDialog::ConnectDialog(int *com, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ConnectDialog)
{
    ui->setupUi(this);

    initUI();
    m_com = com;
}

ConnectDialog::~ConnectDialog()
{
    delete ui;
}

void ConnectDialog::initUI()
{
    int com = Settings::serialPortCom();

    for (int i=0; i<256; i++) {
        QString strCom("COM%1");
        ui->cbCom->addItem(strCom.arg(i+1));
    }
    ui->cbCom->setCurrentIndex(com - 1);
}

void ConnectDialog::accept()
{
    *m_com = ui->cbCom->currentIndex() + 1;
    Settings::setSerialPortCom(*m_com);
    QDialog::accept();
}

void ConnectDialog::on_btnConnect_clicked()
{
    accept();
}
