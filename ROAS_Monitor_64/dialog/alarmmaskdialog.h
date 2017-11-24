#ifndef ALARMMASKDIALOG_H
#define ALARMMASKDIALOG_H

#include <QDialog>
#include <QCheckBox>
#include <device.h>
#include <define.h>

namespace Ui {
class AlarmMaskDialog;
}

class AlarmMaskDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AlarmMaskDialog(Device *device, QWidget *parent = 0);
    ~AlarmMaskDialog();

    ushort m_alarmMask;

protected:
    void accept();

private slots:
    void on_btnAllch_clicked();

private:
    Ui::AlarmMaskDialog *ui;

    void initUI();

    Device *m_device;
    QCheckBox *m_chkAlarmMask[NUM_PORT];
};

#endif // ALARMMASKDIALOG_H
