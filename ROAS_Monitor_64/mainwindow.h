#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QTreeWidget>
#include <QTreeWidgetItem>
#include "define.h"
#include "device.h"
#include "devicewindow.h"
#include "dialog/adddevicedialog.h"
#include "dialog/connectdialog.h"
#include "dialog/passworddialog.h"
#include "dialog/alarmdialog.h"
#include "dialog/aboutdialog.h"
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    Device *m_serialDevice;

public slots:
    void slotDeviceConnected(Device *device);
    void slotDeviceDisconnected(Device *device);
    void slotDeviceWindow(Device *device);
    void slotDeviceWindowClosed();
    void slotAlarmStatus(QString alarmStatus);
    void slotAlarmStatus(Device *device, uchar chIndex, uchar mainSub, QString timeInfo);
    void slotPortSwitching(Device *device, uchar chIndex, ushort mainSub, QString timeInfo);
    void slotResSetPortSwitch(Device *device, uchar chIndex, uchar bitMainSub, QString timeInfo);
    void slotResSetAutoManual(Device *device, uchar chIndex, uchar bitAutoMan, QString timeInfo);

private slots:
    void on_btnClearEvent_clicked();
    void on_btnTest_clicked();
    void on_actionConnect_triggered();
    void on_actionDisconnect_triggered();
    void on_actionDeviceAdd_triggered();
    void on_actionDeviceDelete_triggered();
    void on_treeDeviceList_doubleClicked(const QModelIndex &index);
    void on_actionConnectUSB_triggered();    

    void on_actionAbout_triggered();

private:
    Ui::MainWindow *ui;

    void initEventTreeWidget();
    void refreshDeviceList();
    void connectDevice(QString &devIp);
    void disconnectDevice(QString &devIp);
    void statusDevice();
    void addTreeChildren();
    void addEventList(QString devName, QString strCh, QString strEvent, QString timeInfo);
    void clearEventList();

    QList<Device*> m_ListDevice;

signals:
    void sigCloseMainWindow();
};

#endif // MAINWINDOW_H
