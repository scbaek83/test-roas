#ifndef PDTABLEDIALOG_H
#define PDTABLEDIALOG_H

#include <QDialog>
#include "define.h"
#include "device.h"

namespace Ui {
class PdTableDialog;
}

class PdTableDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PdTableDialog(Device *device, QWidget *parent = 0);
    ~PdTableDialog();

public slots:
    void slotVoltageMonitor(Device *device);
    void slotRecvCalData(uchar chIndex);
    void slotChangeOver(uchar chIndex, uchar bitMainSub);
    void slotBtnMain(uchar chIndex);
    void slotBtnSub(uchar chIndex);

private slots:
    void on_btnSetVolt_clicked();
    void on_btnWriteTable_clicked();

    void on_cbChannel_currentIndexChanged(int index);

private:
    Ui::PdTableDialog *ui;

    Device *m_device;

    void initUi();
    void setChTable(int chIndex);
    void setChTable(uchar chIndex, uchar bitMainSub);
    void setVoltTable();
};

#endif // PDTABLEDIALOG_H
