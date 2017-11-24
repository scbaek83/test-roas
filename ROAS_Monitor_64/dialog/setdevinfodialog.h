#ifndef SETDEVINFODIALOG_H
#define SETDEVINFODIALOG_H

#include <QDialog>
#include "device.h"

namespace Ui {
class SetDevInfoDialog;
}

class SetDevInfoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SetDevInfoDialog(Device *device, QWidget *parent = 0);
    ~SetDevInfoDialog();

protected:
    void accept();

private:
    Ui::SetDevInfoDialog *ui;

    void initUI();

    Device *m_device;
};

#endif // SETDEVINFODIALOG_H
