#include "passworddialog.h"
#include "ui_passworddialog.h"
#include <QMessageBox>

PasswordDialog::PasswordDialog(Device *device, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PasswordDialog)
{
    ui->setupUi(this);

    m_device = device;

    qDebug() << "password:" << m_device->infoPassword();
}

PasswordDialog::~PasswordDialog()
{
    delete ui;
}

void PasswordDialog::accept()
{
    QByteArray arrInput = ui->editPassword->text().toUtf8();
    QByteArray arrPw(m_device->info()->password);
    if (arrPw != arrInput) {
        QMessageBox::warning(this, tr("Waring"), tr("Wrong password"), QMessageBox::Ok);
        return;
    }

    QDialog::accept();
}

void PasswordDialog::on_btnOk_clicked()
{
    accept();
}
