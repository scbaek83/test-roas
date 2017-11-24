#ifndef DEVICE_H
#define DEVICE_H

#include <QTcpSocket>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QStringList>
#include <QString>
#include "define.h"
#include "proto.h"
#include "serialcomm.h"

typedef struct __pow_cal_data {
    float ref;
    ushort volt[MAX_CAL_STEP];
} POW_CAL_DATA;

class DevInfo {
public:
    char name[LEN_DEV_NAME];
    ushort fwVersion;

    // eth0 info
    uint ip0;
    uint sm0;
    uint gw0;

    // eth1 info
    uint ip1;
    uint sm1;
    uint gw1;

    uint dns;

    ushort mainSub;                   // 0:sub 1:main, 16bit -> 16channel
    ushort autoMan;                   // 0:auto 1:manual, 16bit -> 16channel    
    uchar detectionPeriod;
    uchar swTime;
    short threshold;                  // dBm x 100;
    ushort alarm;
    ushort mcuTemp;
    ushort alarmMask;                 // 0:off 1:on, 16bit -> 16channel

    char portName[NUM_PORT][LEN_PORT_NAME];

    double pdValue[NUM_PORT];
    ushort pdVolt[NUM_PORT];

    POW_CAL_DATA m_calData[NUM_PORT];
    POW_CAL_DATA m_calDataMain[NUM_PORT];

    char password[LEN_PASSWORD];
};

class Device : public QObject
{
    Q_OBJECT
public:
    // Functions
    explicit Device(QObject *parent = 0);
    explicit Device(int usbCom, QObject *parent = 0);
    ~Device();

    enum Type {
        TCPIP = 0,
        USB = 1
    };
    Type type() {return m_type;}

    void initTCPIP();
    bool initSerial();
    void initDevInfo();

    // Serial port
    bool openPortSerial(int com);
    void closePort();

    bool connectToServer();
    bool disconnectFromServer();
    bool isConnected() {return m_isConnected;}

    // Get & Set DevInfo
    DevInfo* info() {return &m_devInfo;}
    void setInfoName(QString strName);
    QString infoName();
    QString infoVersion();
    QString infoIP();
    QString infoGW();
    QString infoSM();
    QString infoIP2();
    QString infoGW2();
    QString infoSM2();
    QString infoDNS();
    QString infoMCUTemp();
    QString infoPassword();
    uint convertIpGwSmDns(QString strAddr);

    // Get & Set IP Information
    QString hostIp() {return m_hostIp;}
    void setHostIp(QString hostIp) {m_hostIp = hostIp;}
    int hostPort() {return m_hostPort;}
    void setHostPort(int hostPort) {m_hostPort = hostPort;}

    // send command
    bool sendReqDevInfo();
    bool sendPdMonitor();
    bool sendReqPortName(int no);
    bool sendSetPortName(int no, char *portname);
    bool sendSetPortSwitch(ushort mainSub);
    bool sendSetPortSwitchCh(uchar chIndex, uchar bitMainSub);
    bool sendSetAutoManual(ushort autoMan);
    bool sendSetAutoManualCh(uchar chIndex, uchar bitAutoMan);
    bool sendSetDetectionPeriod(int sec);
    bool sendSetSwitchTime(int swTime);
    bool sendSetThreshold(short threshold);
    bool sendSetAlarmMask(short alarmMask);
    bool sendSetDevInfo(DevInfo *tmpInfo);
    bool sendResAlarm(uchar chIndex, uchar bitMainSub, QString timeInfo);
    bool sendReqCalData(uchar chIndex);
    bool sendReqSetCalData(uchar chIndex, float ref, ushort *volt);
    bool sendReqLogData();
    bool sendReqClearLog();

    bool sendResLogData(int currentIndex);

    bool sendTestCommand();

public:
    // Variables
    QString m_hostIp;
    int m_hostPort;
    char tmpPortName[NUM_PORT][LEN_PORT_NAME];

public slots:
    void slotConnected();
    void slotDisconnected();
    void slotReadyRead();
    void slotSocketError(QAbstractSocket::SocketError socketError);
    void slotReadyReadSerial(uchar *packet, int packetLen);
    void slotBadPacket();

private:
    DevInfo m_devInfo;
    QTcpSocket *m_socket;

    SerialComm *m_serialComm;
    QSerialPort *m_serialPort;
    int m_usbCom;

    Type m_type;

    bool m_isFirstInfo;

    // status
    bool m_isConnected;

    void processCommand(uchar *packet, const int len);
    void printPacket(uchar *packet, int packetLen);

signals:
    void sigConnected(Device *device);
    void sigDisconnected(Device *device);
    void sigPdMonitor(Device *device);
    void sigPortName(Device *device, int no);
    void sigSetPortName(Device *device, int no);
    void sigSetPortSwitch(Device *device);
    void sigSetAutoManual(Device *device);
    void sigSetDetectionPeriod(Device *device);
    void sigSetSwTime(Device *device);
    void sigSetThreshold(Device *device);
    void sigShowPdTable();
    void sigRecvCalData(uchar chIndex);

    // signal - connected to mainwindow
    void sigDeviceWindow(Device *device);        
    //void sigAlarmStatus(QString alarmInfo);
    void sigAlarmStatus(Device *device, uchar chIndex, uchar bitMainSub, QString timeInfo);
    void sigPortSwitching(Device *device, uchar chIndex, ushort mainSub, QString timeInfo);
    void sigResSetPortSwitch(Device *device, uchar chIndex, uchar bitMainSub, QString timeInfo);
    void sigResSetAutoManual(Device *device, uchar chIndex, uchar bitAutoMan, QString timeInfo);

    // signal - connected to LogDataDialog
    void sigSetLogData(int currentIndex, int maxIndex, char *log);

};

#endif // DEVICE_H
