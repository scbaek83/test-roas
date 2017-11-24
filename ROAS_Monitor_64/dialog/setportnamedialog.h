#ifndef SETPORTNAMEDIALOG_H
#define SETPORTNAMEDIALOG_H

#include <QDialog>
#include "device.h"

namespace Ui {
class SetPortNameDialog;
}

class SetPortNameDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SetPortNameDialog(Device *device, QWidget *parent = 0);
    ~SetPortNameDialog();

protected:
    void accept();

private:
    Ui::SetPortNameDialog *ui;

    void initUi();
    Device *m_device;
};

#endif // SETPORTNAMEDIALOG_H
