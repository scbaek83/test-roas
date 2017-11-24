#include "adddevicedialog.h"
#include "ui_adddevicedialog.h"
#include <QMessageBox>

AddDeviceDialog::AddDeviceDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddDeviceDialog)
{
    ui->setupUi(this);

    setWindowTitle(tr("Add Device Dialog"));
}

AddDeviceDialog::~AddDeviceDialog()
{
    delete ui;
}

void AddDeviceDialog::accept()
{
    QString name = ui->editDeviceName->text();
    if (name.isNull())
        name = "None";
    QString ip = ui->editIPAddress->text();

    QStringList listDevIp = INI::devIpAll();

    for (int i=0; i<listDevIp.length(); i++) {
        QString devIp = listDevIp.at(i);

        if (ip == devIp) {
            QMessageBox::warning(this, "Warning", "Overlapped IP Address: " + ip);
            return;
        }
    }

    INI::addDevice(ip, name);

    QDialog::accept();
}
