#ifndef DEVICEWINDOW_H
#define DEVICEWINDOW_H

#include <QMainWindow>
#include <QProgressDialog>
#include "define.h"
#include "formport.h"
#include "device.h"
#include "dialog/setportnamedialog.h"
#include "dialog/setdevinfodialog.h"
#include "dialog/alarmmaskdialog.h"
#include "dialog/pdtabledialog.h"
#include "dialog/logdatadialog.h"
#include "qcustomplot.h"

namespace Ui {
class DeviceWindow;
}

class DeviceWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit DeviceWindow(Device *device, QWidget *parent = 0);
    ~DeviceWindow();    

public slots:
    // slots - device
    void slotDeviceInfo(Device *device);
    void slotDeviceNameAddr(Device *device);
    void slotPdMonitor(Device *device);
    void slotPortSwitch(Device *device);
    void slotAutoManual(Device *device);
    void slotDetectionPeriod(Device *device);
    void slotSwitchTime(Device *device);
    void slotPdThreshold(Device *device);
    void slotSetPortName(Device *device, int no);
    void slotPortName(Device *device, int no);
    void slotSetPortSwitch(Device *device);
    void slotSetPortSwitchCh(Device *device, uchar chIndex, uchar bitMainSub);
    void slotSetAutoManual(Device *device);
    void slotSetAutoManualCh(Device *device, uchar chIndex, uchar bitAutoMan);
    void slotShowPdTable();

    // slots - portForm
    void slotBtnMain(int portNum);
    void slotBtnSub(int portNum);
    void slotBtnAuto(int portNum);
    void slotBtnManual(int portNum);

signals:
    void sigDeviceWindowClosed();
    void sigChangeOver(uchar chIndex, uchar bitMainSub);
    void sigBtnMain(uchar chIndex);
    void sigBtnSub(uchar chIndex);

protected:
    void timerEvent(QTimerEvent *event);

private slots:
    void on_btnAutoAll_clicked();
    void on_btnManualAll_clicked();
    void on_btnMainAll_clicked();
    void on_btnSubAll_clicked();
    void on_actionSetPortName_triggered();
    void on_btnSetScanCycle_clicked();
    void on_btnSetDetectionPeriod_clicked();
    void on_btnSetSwitchingTime_clicked();
    void on_btnSetThreshold_clicked();
    void on_actionSetDeviceInfo_triggered();

    void on_actionSetAlarmMask_triggered();

    void on_actionPdTable_triggered();

    void on_actionGetLog_triggered();

private:
    Ui::DeviceWindow *ui;

    FormPort *m_portForm[NUM_PORT];
    Device *m_device;

    QProgressDialog *m_progress;

    QCustomPlot *customPlot;
    QCPGraph *graph;
    QCPBars *bar1;
    QCPBars *bar2;      // alarm, red
    QVector<double> xAxis1, xAxis2;
    QVector<double> yAxis;

    int m_tIdPdMonitor;

private:
    void initUi();
    void initForm();
    void initDevice();
    void initGraph();

    void drawGraph(QCPBars *bar, QVector<double> xValue, QVector<double> yValue);

    void setDeviceInfo(Device *device);
    void setPdMonitor(Device *device);
    void setPortSwitch(Device *device);
    void setAutoManual(Device *device);
    void setDetectionPeriod(Device *device);
    void setSwitchTime(Device *device);
    void setPdThreshold(Device *device);
    void setPortName(Device *device);
};

#endif // DEVICEWINDOW_H
