#ifndef ALARMDIALOG_H
#define ALARMDIALOG_H

#include <QDialog>
#include "device.h"

namespace Ui {
class AlarmDialog;
}

class AlarmDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AlarmDialog(QString alarmInfo, QWidget *parent = 0);
    ~AlarmDialog();

private:
    Ui::AlarmDialog *ui;

    Device *m_device;

    void setLabelText(QString strAlarmInfo);
};

#endif // ALARMDIALOG_H
