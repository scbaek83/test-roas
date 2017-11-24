#ifndef LOGDATADIALOG_H
#define LOGDATADIALOG_H

#include <QDialog>
#include <QFileDialog>
#include <QString>
#include "device.h"

namespace Ui {
class LogDataDialog;
}

class LogDataDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LogDataDialog(Device *device, QWidget *parent = 0);
    ~LogDataDialog();

public slots:
    void slotSetLogData(int currentIndex, int maxIndex, char *log);

private slots:
    void on_btnLoad_clicked();    
    void on_btnSave_clicked();    
    void on_btnClear_clicked();
    
    void on_btnDelete_clicked();

private:
    Ui::LogDataDialog *ui;

    Device *m_device;
    QString m_strLog;
    QStringList listLog;
};

#endif // LOGDATADIALOG_H
