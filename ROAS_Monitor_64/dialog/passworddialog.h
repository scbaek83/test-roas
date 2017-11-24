#ifndef PASSWORDDIALOG_H
#define PASSWORDDIALOG_H

#include <QDialog>
#include <QString>
#include "device.h"

namespace Ui {
class PasswordDialog;
}

class PasswordDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PasswordDialog(Device *device, QWidget *parent = 0);
    ~PasswordDialog();

protected:
    void accept();

private slots:
    void on_btnOk_clicked();

private:
    Ui::PasswordDialog *ui;

    Device *m_device;
};

#endif // PASSWORDDIALOG_H
