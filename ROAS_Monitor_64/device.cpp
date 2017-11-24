#include "device.h"

#include <QDebug>
#include <QDateTime>

Device::Device(QObject *parent) :
    QObject(parent)
{
    m_socket = NULL;
    m_hostPort = TCPIP_PORT;
    m_isConnected = false;

    initTCPIP();
    initDevInfo();
}

Device::Device(int usbCom, QObject *parent) :
    QObject(parent)
{
    qDebug() << "Construct Serial device";
    m_socket = NULL;
    m_serialComm = NULL;
    m_serialPort = NULL;
    //m_hostPort = TCPIP_PORT;

    m_usbCom = usbCom;

    m_isConnected = false;
    m_isFirstInfo = true;

    initDevInfo();
    initSerial();
}

Device::~Device()
{
    if (m_socket) {
        disconnect(m_socket, SIGNAL(connected()), this, SLOT(slotConnected()));
        disconnect(m_socket, SIGNAL(disconnected()), this, SLOT(slotDisconnected()));
        disconnect(m_socket, SIGNAL(readyRead()), this, SLOT(slotReadyRead()));
        disconnect(m_socket, SIGNAL(error(QAbstractSocket::SocketError)), this, SLOT(slotSocketError(QAbstractSocket::SocketError)));
    }

    if (m_serialComm) {
        m_serialComm->stop();
        disconnect(m_serialComm, SIGNAL(sigReadyReadSerial(uchar*,int)), this, SLOT(slotReadyReadSerial(uchar*,int)));
        closePort();
    }
}

void Device::initTCPIP()
{
    m_type = TCPIP;
    m_socket = new QTcpSocket;

    // TODO: add connect
    connect(m_socket, SIGNAL(connected()), this, SLOT(slotConnected()));
    connect(m_socket, SIGNAL(disconnected()), this, SLOT(slotDisconnected()));
    connect(m_socket, SIGNAL(readyRead()), this, SLOT(slotReadyRead()));
    connect(m_socket, SIGNAL(error(QAbstractSocket::SocketError)), this, SLOT(slotSocketError(QAbstractSocket::SocketError)));
}

bool Device::initSerial()
{
    m_type = USB;

    qDebug() << "m_usbCom" << m_usbCom;
    if (openPortSerial(m_usbCom)) {
        m_serialComm = new SerialComm(m_serialPort);
        // TODO: connect signal slot
        connect(m_serialComm, SIGNAL(sigReadyReadSerial(uchar*,int)), this, SLOT(slotReadyReadSerial(uchar*,int)));

        m_serialComm->start();

        return true;
    } else {
        qDebug() << "failed - initSerial";
        return false;
    }
    return true;
}

void Device::initDevInfo()
{
    memset(m_devInfo.name, 0x00, LEN_DEV_NAME);

    for (int i=0; i<NUM_PORT; i++) {
        memset(m_devInfo.portName[i], 0x00, LEN_PORT_NAME);
    }

    // TODO: initialize another member variables of DevInfo
}

bool Device::openPortSerial(int com)
{
    QString portName = QString("COM%1").arg(com);
    m_serialPort = new QSerialPort();
    m_serialPort->setPortName(portName);
    if (!m_serialPort->open(QIODevice::ReadWrite)) {
        delete m_serialPort;
        m_serialPort = NULL;
        qDebug() << "failed - openPortSerial";

        return false;
    }

    m_serialPort->setBaudRate(QSerialPort::Baud115200);
    m_serialPort->setFlowControl(QSerialPort::NoFlowControl);
    m_serialPort->setParity(QSerialPort::NoParity);
    m_serialPort->setDataBits(QSerialPort::Data8);
    m_serialPort->setStopBits(QSerialPort::OneStop);
    m_serialPort->setDataTerminalReady(false);
    m_serialPort->setRequestToSend(false);

    qDebug() << "Serial port open:" << m_serialPort->isOpen();

    return true;
}

void Device::closePort()
{
    if (m_serialPort) {
        m_serialPort->close();
        delete m_serialPort;
        m_serialPort = NULL;
    }
}

bool Device::connectToServer()
{
    qDebug() << "connectToServer()";
    if (!m_socket) {
        return false;
    }

//    if (m_socket->isOpen()) {
//        qDebug() << "TCP socket is already opened";
//        return false;
//    }

    m_socket->connectToHost(m_hostIp, m_hostPort);
    return true;
}

bool Device::disconnectFromServer()
{
    if (!m_socket)
        return false;

    m_socket->disconnectFromHost();
    m_socket->close();
    return true;
}

QString Device::infoName()
{
    QString infoName(info()->name);
    return infoName;
}

QString Device::infoVersion()
{
     return QString("%1.%2")
             .arg((uchar)(info()->fwVersion>>8)).arg((uchar)(info()->fwVersion & 0xff));
}

QString Device::infoIP()
{
    return QString("%1.%2.%3.%4")
            .arg((uchar)(info()->ip0>>24)).arg((uchar)(info()->ip0>>16))
            .arg((uchar)(info()->ip0>>8)).arg((uchar)(info()->ip0));
}

QString Device::infoGW()
{
    return QString("%1.%2.%3.%4")
            .arg((uchar)(info()->gw0>>24)).arg((uchar)(info()->gw0>>16))
            .arg((uchar)(info()->gw0>>8)).arg((uchar)(info()->gw0));
}

QString Device::infoSM()
{
    return QString("%1.%2.%3.%4")
            .arg((uchar)(info()->sm0>>24)).arg((uchar)(info()->sm0>>16))
            .arg((uchar)(info()->sm0>>8)).arg((uchar)(info()->sm0));
}

QString Device::infoIP2()
{
    return QString("%1.%2.%3.%4")
            .arg((uchar)(info()->ip1>>24)).arg((uchar)(info()->ip1>>16))
            .arg((uchar)(info()->ip1>>8)).arg((uchar)(info()->ip1));
}

QString Device::infoGW2()
{
    return QString("%1.%2.%3.%4")
            .arg((uchar)(info()->gw1>>24)).arg((uchar)(info()->gw1>>16))
            .arg((uchar)(info()->gw1>>8)).arg((uchar)(info()->gw1));
}

QString Device::infoSM2()
{
    return QString("%1.%2.%3.%4")
            .arg((uchar)(info()->sm1>>24)).arg((uchar)(info()->sm1>>16))
            .arg((uchar)(info()->sm1>>8)).arg((uchar)(info()->sm1));
}

QString Device::infoDNS()
{
    return QString("%1.%2.%3.%4")
            .arg((uchar)(info()->dns>>24)).arg((uchar)(info()->dns>>16))
            .arg((uchar)(info()->dns>>8)).arg((uchar)(info()->dns));
}

QString Device::infoMCUTemp()
{
    return QString("%1").arg(((double)info()->mcuTemp) / 10.0);
}

QString Device::infoPassword()
{
    return QString::fromUtf8(info()->password);
}

uint Device::convertIpGwSmDns(QString strAddr)
{
    QStringList list = strAddr.split(".");
    if (list.length() != 4)
        return 0;

    uint ret = 0;
    QString tmp;
    tmp = list.at(0);
    uchar digit1 = tmp.toInt();
    tmp = list.at(1);
    uchar digit2 = tmp.toInt();
    tmp = list.at(2);
    uchar digit3 = tmp.toInt();
    tmp = list.at(3);
    uchar digit4 = tmp.toInt();

    ret = digit1<<24 | digit2<<16 | digit3<<8 | digit4;

    return ret;
}

void Device::setInfoName(QString strName)
{
    for (int i=0; i<LEN_DEV_NAME; i++)
        info()->name[i] = 0;

    int len = strName.length();
    memcpy(info()->name, strName.toLatin1().data(), len);
}

void Device::slotConnected()
{
    qDebug() << "slotConnected()";
    m_isConnected = true;
    qDebug() << "isConnected:" << isConnected();

    // TODO: send request device infomation
    emit sigConnected(this);
    sendReqDevInfo();
}

void Device::slotDisconnected()
{
    qDebug() << "slotDisconnected()";
    m_isConnected = false;
    m_socket->close();
    emit sigDisconnected(this);
}

void Device::slotReadyRead()
{
//    QString strTime = QDateTime::currentDateTime().toString("hh:mm:ss");
//    qDebug() << "slotReadyRead()" << strTime;
    uchar packet[MAX_PACKET_SIZE] = {0};
    int packetLen = m_socket->read((char*)packet, MAX_PACKET_SIZE);

    processCommand(packet, packetLen);
}

void Device::slotReadyReadSerial(uchar *packet, int packetLen)
{
    qDebug() << "slotReadyReadSerial";
    processCommand(packet, packetLen);
}

void Device::slotSocketError(QAbstractSocket::SocketError socketError)
{
    qDebug() << "Socket Error: " << m_socket->errorString();
    m_isConnected = false;
    qDebug() << "isConnected:" << isConnected();

    switch (socketError) {
    case QAbstractSocket::ConnectionRefusedError:
        // TODO: add print error string at status bar
        qDebug() << "ConnectionRefusedError";
        disconnectFromServer();

        break;
    default:
        break;
    }
}

void Device::slotBadPacket()
{
    if (m_type == Type::USB && m_isFirstInfo) {

    }
}

void Device::processCommand(uchar *packet, const int len)
{
    //printPacket(packet, len);
    if (packet[0] != SOT) {
        qDebug() << "SOT error" << packet[0];
        //return;
    }

    if (!Proto::chkCRC(packet)) {
        qDebug() << "CRC error";
        //return;
    }

    int cmd = packet[1];
    qDebug("cmd: %02X", cmd);

    if (cmd == CMD_REQ_DEV_INFO) {
        Proto::resDevInfo(packet,info());
        //sendReqPortName(0);
        qDebug() << "m_type:" << m_type << "m_isFirstInfo:" << m_isFirstInfo;
        if (m_type == USB && m_isFirstInfo == true) {
            m_isFirstInfo = false;
            emit sigDeviceWindow(this);
        }

    } else if (cmd == CMD_REQ_PD_MONITOR) {        
        Proto::resPdMonitor(packet, info());
        emit sigPdMonitor(this);                // signal to DeviceWindow

    } else if (cmd == CMD_REQ_PORTNAME) {
        int no = 0;
        Proto::resPortName(packet, info(), &no);
        emit sigPortName(this, no);

    } else if (cmd == CMD_REQ_SET_PORTNAME) {
        qDebug() << "CMD_REQ_SET_PORT_NAME";
        int no = 0;
        Proto::resSetPortName(packet, info(), &no);
        emit sigSetPortName(this, no);

    } else if (cmd ==CMD_REQ_SET_PORT_SWITCH) {
        qDebug() << "CMD_REQ_SET_PORT_SWITCH";

        Proto::resSetPortSwitch(packet, info());
        emit sigSetPortSwitch(this);

    } else if (cmd == CMD_REQ_SET_AUTO_MANUAL) {
        qDebug() << "CMD_REQ_SET_AUTO_MANUAL";

        Proto::resSetAutoManual(packet, info());
        emit sigSetAutoManual(this);

    } else if (cmd == CMD_REQ_SET_DETECTION_PERIOD) {
        Proto::resSetDetectionPeriod(packet, info());
        emit sigSetDetectionPeriod(this);

    } else if (cmd == CMD_REQ_SET_SW_TIMES) {
        Proto::resSetSwitchTime(packet, info());
        emit sigSetSwTime(this);

    } else if (cmd == CMD_REQ_SET_PD_THRESHOLD) {
        Proto::resSetThreshold(packet, info());
        emit sigSetThreshold(this);

    } else if (cmd == CMD_REQ_SET_ALARM_MASK) {
        Proto::resSetAlarmMask(packet, info());
        qDebug() << "alarmMask:" << info()->alarmMask;

    } else if (cmd == CMD_REQ_TEST_COMMAND) {
        qDebug() << "[recv] CMD_REQ_TEST_COMMAND";
        int length = packet[4];
        printPacket(packet, length + 2);
        sendTestCommand();

    } else if (cmd == CMD_ALARM) {
        qDebug() << "CMD_ALARM";

        uchar chIndex = packet[5];
        uchar bitMS = packet[6];
        QString ms = "Sub";
        if (bitMS == 1)
            ms = "Main";
        ushort year;
        memcpy(&year, &packet[7], 2);

        QString strYear, strMonth, strDay;
        strYear.sprintf("%d/", year);
        strMonth.sprintf("%02d/", packet[9]);
        strDay.sprintf("%02d ", packet[10]);
        QString strHour, strMinute, strSec;
        strHour.sprintf("%02d:", packet[11]);
        strMinute.sprintf("%02d:", packet[12]);
        strSec.sprintf("%02d", packet[13]);
        QString strTime =strYear + strMonth + strDay + strHour + strMinute + strSec;

        sendResAlarm(packet[5], bitMS, strTime);
        //emit sigAlarmStatus(alarmStatus);
        emit sigAlarmStatus(this, chIndex, bitMS, strTime);

    } else if (cmd == CMD_PORT_SWITCHING) {
        uchar chIndex = packet[5];
        ushort mainSub;
        memcpy(&mainSub, &packet[6], 2);
        ushort year;
        memcpy(&year, &packet[8], 2);

        QString strYear, strMonth, strDay;
        strYear.sprintf("%d/", year);
        strMonth.sprintf("%02d/", packet[10]);
        strDay.sprintf("%02d ", packet[11]);
        QString strHour, strMinute, strSec;
        strHour.sprintf("%02d:", packet[12]);
        strMinute.sprintf("%02d:", packet[13]);
        strSec.sprintf("%02d", packet[14]);
        QString strTime =strYear + strMonth + strDay + strHour + strMinute + strSec;

        emit sigPortSwitching(this, chIndex, mainSub, strTime);

    } else if (cmd == CMD_REQ_SET_PORT_SWITCH_CH) {
        uchar chIndex = packet[5];
        uchar bitMS = packet[6];
        QString ms = "Sub";
        if (bitMS == 1)
            ms = "Main";
        ushort year;
        memcpy(&year, &packet[7], 2);

        QString strYear, strMonth, strDay;
        strYear.sprintf("%d/", year);
        strMonth.sprintf("%02d/", packet[9]);
        strDay.sprintf("%02d ", packet[10]);
        QString strHour, strMinute, strSec;
        strHour.sprintf("%02d:", packet[11]);
        strMinute.sprintf("%02d:", packet[12]);
        strSec.sprintf("%02d", packet[13]);
        QString strTime =strYear + strMonth + strDay + strHour + strMinute + strSec;

        emit sigResSetPortSwitch(this, chIndex, bitMS, strTime);        

    } else if (cmd == CMD_REQ_SET_AUTO_MANUAL_CH) {
        uchar chIndex = packet[5];
        uchar bitAM = packet[6];
        QString am = "Auto";
        if (bitAM == 1)
            am = "Manual";
        ushort year;
        memcpy(&year, &packet[7], 2);

        QString strYear, strMonth, strDay;
        strYear.sprintf("%d/", year);
        strMonth.sprintf("%02d/", packet[9]);
        strDay.sprintf("%02d ", packet[10]);
        QString strHour, strMinute, strSec;
        strHour.sprintf("%02d:", packet[11]);
        strMinute.sprintf("%02d:", packet[12]);
        strSec.sprintf("%02d", packet[13]);
        QString strTime =strYear + strMonth + strDay + strHour + strMinute + strSec;

        emit sigResSetAutoManual(this, chIndex, bitAM, strTime);

    } else if (cmd == CMD_REQ_CAL_DATA) {
        uchar chIndex = packet[5];

        float ref;
        memcpy(&ref, &packet[6], 4);
        info()->m_calData[chIndex].ref = ref;
        memcpy(info()->m_calData[chIndex].volt, &packet[10], MAX_CAL_STEP * 2);

        float refMain;
        memcpy(&refMain, &packet[32], 4);
        info()->m_calDataMain[chIndex].ref = refMain;
        memcpy(info()->m_calDataMain[chIndex].volt, &packet[36], MAX_CAL_STEP * 2);
        qDebug() << refMain;

        if (chIndex < NUM_PORT - 1)
            sendReqCalData(++chIndex);
        else
            emit sigShowPdTable();

    } else if (cmd == CMD_REQ_SET_CAL_DATA) {
        qDebug() << "CMD_REQ_SET_CAL_DATA";
        uchar chIndex = packet[5];

        uchar mainSub = (info()->mainSub >> chIndex) & 0x01;
        if (mainSub == 1) {
            memcpy(&info()->m_calDataMain[chIndex].ref, &packet[6], 4);
            memcpy(info()->m_calDataMain[chIndex].volt, &packet[10], MAX_CAL_STEP * 2);
        } else {
            memcpy(&info()->m_calData[chIndex].ref, &packet[6], 4);
            memcpy(info()->m_calData[chIndex].volt, &packet[10], MAX_CAL_STEP * 2);
        }

        emit sigRecvCalData(chIndex);

    } else if (cmd == CMD_LOG_DATA) {
        uint currentIndex;
        uint maxIndex;
        memcpy(&currentIndex, &packet[5], 4);
        memcpy(&maxIndex, &packet[9], 4);

        char log[LEN_LOG_DATA] = {0};
        memcpy(log, &packet[13], LEN_LOG_DATA);
        emit sigSetLogData(currentIndex, maxIndex, log);
        sendResLogData(currentIndex);

    }
    else if (cmd == CMD_EXCESS_CONNECTION_LIMIT) {
        qDebug() << "excess connection limit";

        disconnectFromServer();
    }
}

void Device::printPacket(uchar *packet, int packetLen)
{
    qDebug() << "printPacket()";
//    QString str;
//    for (int i=0; i<packetLen; i++) {
//        str += QString::number(packet[i]) + " ";
//        qDebug() << i << packet[i];
//        if (i % 9 == 0)
//            str = str + QString::fromLatin1('\n');
//    }

    char *str = new char[packetLen*8];
    //char str[512] = {0};
    char tmp[8];
    memset(str, 0x00, packetLen);
    qDebug() << "packetLen:" << packetLen;

    for (int i=0; i<packetLen; i++) {
        sprintf(tmp, "%02d ", packet[i]);
        strcat(str, tmp);

        if (i != 0 && i % 10 == 0) {
            strcat(str, "\n");
        }
    }

    qDebug() << str;
}

bool Device::sendReqDevInfo()
{
    qDebug() << "sendReqDevInfo()";
    qDebug() << "m_type:" << m_type;
    uchar packet[MAX_PACKET_SIZE] = {0};
    int len = Proto::reqDevInfo(packet);
    printPacket(packet, len);

    if (m_type == TCPIP) {
        if (!(m_socket && m_socket->isOpen()))
            return false;
        m_socket->write((char*)packet, len);
    } else {
        if (!(m_serialPort && m_serialPort->isOpen())) {
            qDebug() << "failed";
            return false;
        }
        m_serialPort->write((char*)packet, len);
        //m_serialPort->waitForBytesWritten(1000);
        qDebug() << "write serial data";
    }

    return true;
}

bool Device::sendPdMonitor()
{
    //qDebug() << "sendPdMonitor()";
    uchar packet[MAX_PACKET_SIZE] = {0};
    int len = Proto::reqPdMonitor(packet);
    printPacket(packet, len);

    if (m_type == TCPIP) {
        if (!(m_socket && m_socket->isOpen()))
            return false;
        m_socket->write((char*)packet, len);
    } else {
        if (!(m_serialPort && m_serialPort->isOpen())) {
            qDebug() << "failed";
            return false;
        }
        m_serialPort->write((char*)packet, len);
        qDebug() << "write serial data";
    }
    return true;
}

bool Device::sendReqPortName(int no)
{
    qDebug() << "sendReqPortName() index:" << no;
    uchar packet[MAX_PACKET_SIZE] = {0};
    int len = Proto::reqPortName(packet, no);
    printPacket(packet, len);

    if (m_type == TCPIP) {
        if (!(m_socket && m_socket->isOpen()))
            return false;
        m_socket->write((char*)packet, len);
    } else {
        if (!(m_serialPort && m_serialPort->isOpen())) {
            qDebug() << "failed";
            return false;
        }
        m_serialPort->write((char*)packet, len);
        m_serialPort->waitForBytesWritten(1000);
        qDebug() << "write serial data";
    }
    return true;
}

bool Device::sendSetPortName(int no, char *portname)
{
    qDebug() << "sendSetPortName()";
    uchar packet[MAX_PACKET_SIZE] = {0};
    int len = Proto::reqSetPortName(packet, no, portname);
    //printPacket(packet, len);

    if (m_type == TCPIP) {
        if (!(m_socket && m_socket->isOpen()))
            return false;
        m_socket->write((char*)packet, len);
    } else {
        if (!(m_serialPort && m_serialPort->isOpen())) {
            qDebug() << "failed";
            return false;
        }
        m_serialPort->write((char*)packet, len);
        qDebug() << "write serial data";
    }
    return true;
}

bool Device::sendSetPortSwitch(ushort mainSub)
{
    uchar packet[MAX_PACKET_SIZE] = {0};
    int len = Proto::reqSetPortSwitch(packet, mainSub);
    //printPacket(packet, len);

    if (m_type == TCPIP) {
        if (!(m_socket && m_socket->isOpen()))
            return false;
        m_socket->write((char*)packet, len);
    } else {
        if (!(m_serialPort && m_serialPort->isOpen())) {
            qDebug() << "failed";
            return false;
        }
        m_serialPort->write((char*)packet, len);
        qDebug() << "write serial data";
    }
    return true;
}

bool Device::sendSetPortSwitchCh(uchar chIndex, uchar bitMainSub)
{
    uchar packet[MAX_PACKET_SIZE] = {0};
    int len = Proto::reqSetPortSwitchCh(packet, chIndex, bitMainSub);
    //printPacket(packet, len);

    if (m_type == TCPIP) {
        if (!(m_socket && m_socket->isOpen()))
            return false;
        m_socket->write((char*)packet, len);
    } else {
        if (!(m_serialPort && m_serialPort->isOpen())) {
            qDebug() << "failed";
            return false;
        }
        m_serialPort->write((char*)packet, len);
        qDebug() << "write serial data";
    }
    return true;
}

bool Device::sendSetAutoManual(ushort autoMan)
{
    uchar packet[MAX_PACKET_SIZE] = {0};
    int len = Proto::reqSetAutoManual(packet, autoMan);

    if (m_type == TCPIP) {
        if (!(m_socket && m_socket->isOpen()))
            return false;
        m_socket->write((char*)packet, len);
    } else {
        if (!(m_serialPort && m_serialPort->isOpen())) {
            qDebug() << "failed";
            return false;
        }
        m_serialPort->write((char*)packet, len);
        qDebug() << "write serial data";
    }
    return true;
}

bool Device::sendSetAutoManualCh(uchar chIndex, uchar bitAutoMan)
{
    uchar packet[MAX_PACKET_SIZE] = {0};
    int len = Proto::reqSetAutoManualCh(packet, chIndex, bitAutoMan);

    if (m_type == TCPIP) {
        if (!(m_socket && m_socket->isOpen()))
            return false;
        m_socket->write((char*)packet, len);
    } else {
        if (!(m_serialPort && m_serialPort->isOpen())) {
            qDebug() << "failed";
            return false;
        }
        m_serialPort->write((char*)packet, len);
        qDebug() << "write serial data";
    }
    return true;
}

bool Device::sendSetDetectionPeriod(int sec)
{
    uchar packet[MAX_PACKET_SIZE] = {0};
    int len = Proto::reqSetDetectionPeriod(packet, sec);

    if (m_type == TCPIP) {
        if (!(m_socket && m_socket->isOpen()))
            return false;
        m_socket->write((char*)packet, len);
    } else {
        if (!(m_serialPort && m_serialPort->isOpen())) {
            qDebug() << "failed";
            return false;
        }
        m_serialPort->write((char*)packet, len);
        qDebug() << "write serial data";
    }
    return true;
}

bool Device::sendSetSwitchTime(int swTime)
{
    uchar packet[MAX_PACKET_SIZE] = {0};
    int len = Proto::reqSetSwitchTime(packet, swTime);

    if (m_type == TCPIP) {
        if (!(m_socket && m_socket->isOpen()))
            return false;
        m_socket->write((char*)packet, len);
    } else {
        if (!(m_serialPort && m_serialPort->isOpen())) {
            qDebug() << "failed";
            return false;
        }
        m_serialPort->write((char*)packet, len);
        qDebug() << "write serial data";
    }
    return true;
}

bool Device::sendSetThreshold(short threshold)
{
    uchar packet[MAX_PACKET_SIZE] = {0};
    int len = Proto::reqSetThreshold(packet, threshold);

    if (m_type == TCPIP) {
        if (!(m_socket && m_socket->isOpen()))
            return false;
        m_socket->write((char*)packet, len);
    } else {
        if (!(m_serialPort && m_serialPort->isOpen())) {
            qDebug() << "failed";
            return false;
        }
        m_serialPort->write((char*)packet, len);
    }
    return true;
}

bool Device::sendSetAlarmMask(short alarmMask)
{
    uchar packet[MAX_PACKET_SIZE] = {0};
    int len = Proto::reqSetAlarmMask(packet, alarmMask);

    if (m_type == TCPIP) {
        if (!(m_socket && m_socket->isOpen()))
            return false;
        m_socket->write((char*)packet, len);
    } else {
        if (!(m_serialPort && m_serialPort->isOpen())) {
            qDebug() << "failed";
            return false;
        }
        m_serialPort->write((char*)packet, len);
    }
    return true;
}

bool Device::sendSetDevInfo(DevInfo *tmpInfo)
{
    uchar packet[MAX_PACKET_SIZE] = {0};
    int len = Proto::reqSetDevInfo(packet, tmpInfo);

    if (m_type == TCPIP) {
        if (!(m_socket && m_socket->isOpen()))
            return false;
        m_socket->write((char*)packet, len);
    } else {
        if (!(m_serialPort && m_serialPort->isOpen())) {
            qDebug() << "failed";
            return false;
        }
        m_serialPort->write((char*)packet, len);
    }
    return true;
}

bool Device::sendResAlarm(uchar chIndex, uchar bitMainSub, QString timeInfo)
{
    uchar packet[MAX_PACKET_SIZE] = {0};
    int len = Proto::resAlarm(packet, chIndex, bitMainSub, timeInfo);

    if (m_type == TCPIP) {
        if (!(m_socket && m_socket->isOpen()))
            return false;
        m_socket->write((char*)packet, len);
    } else {
        if (!(m_serialPort && m_serialPort->isOpen())) {
            qDebug() << "failed";
            return false;
        }
        m_serialPort->write((char*)packet, len);
    }
    return true;
}

bool Device::sendReqCalData(uchar chIndex)
{
    uchar packet[MAX_PACKET_SIZE] = {0};
    int len = Proto::reqCalData(packet, chIndex);

    if (m_type == TCPIP) {
        if (!(m_socket && m_socket->isOpen()))
            return false;
        m_socket->write((char*)packet, len);
    } else {
        if (!(m_serialPort && m_serialPort->isOpen())) {
            qDebug() << "failed";
            return false;
        }
        m_serialPort->write((char*)packet, len);
    }
    return true;
}

bool Device::sendReqSetCalData(uchar chIndex, float ref, ushort *volt)
{
    uchar packet[MAX_PACKET_SIZE] = {0};
    int len = Proto::reqSetCalData(packet, chIndex, ref, volt);

    if (m_type == TCPIP) {
        if (!(m_socket && m_socket->isOpen()))
            return false;
        m_socket->write((char*)packet, len);
    } else {
        if (!(m_serialPort && m_serialPort->isOpen())) {
            return false;
        }
        m_serialPort->write((char*)packet, len);
    }
    return true;
}

bool Device::sendReqLogData()
{
    uchar packet[MAX_PACKET_SIZE] = {0};
    int len = Proto::reqLogData(packet);

    if (m_type == TCPIP) {
        if (!(m_socket && m_socket->isOpen()))
            return false;
        m_socket->write((char*)packet, len);
    } else {
        if (!(m_serialPort && m_serialPort->isOpen())) {
            return false;
        }
        m_serialPort->write((char*)packet, len);
    }
    return true;
}

bool Device::sendReqClearLog()
{
    uchar packet[MAX_PACKET_SIZE] = {0};
    int len = Proto::reqClearLog(packet);

    if (m_type == TCPIP) {
        if (!(m_socket && m_socket->isOpen()))
            return false;
        m_socket->write((char*)packet, len);
    } else {
        if (!(m_serialPort && m_serialPort->isOpen())) {
            return false;
        }
        m_serialPort->write((char*)packet, len);
    }
    return true;
}

bool Device::sendResLogData(int currentIndex)
{
    uchar packet[MAX_PACKET_SIZE] = {0};
    int len = Proto::resLogData(packet, currentIndex);

    if (m_type == TCPIP) {
        if (!(m_socket && m_socket->isOpen()))
            return false;
        m_socket->write((char*)packet, len);
    } else {
        if (!(m_serialPort && m_serialPort->isOpen())) {
            return false;
        }
        m_serialPort->write((char*)packet, len);
    }
    return true;
}

bool Device::sendTestCommand()
{
    qDebug() << "sendTestCommand()";
    uchar packet[MAX_PACKET_SIZE] = {0};
    int len = Proto::testCommand(packet);
    printPacket(packet, len);

    if (m_type == TCPIP) {
        if (!(m_socket && m_socket->isOpen()))
            return false;
        m_socket->write((char*)packet, len);
    } else {
        if (!(m_serialPort && m_serialPort->isOpen())) {
            qDebug() << "failed";
            return false;
        }
        m_serialPort->write((char*)packet, len);
        m_serialPort->waitForBytesWritten(1000);
    }
    return true;
}



