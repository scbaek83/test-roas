#include "serialcomm.h"
#include <QDebug>
#include <QTime>

SerialComm::SerialComm(QSerialPort *port, QObject *parent) :
    QThread(parent),
    m_stopped(false),
    m_port(port)
{

}

void SerialComm::run()
{
    qDebug() << "start recv data";

    uchar packet[255] = {2};
    char ch = 0;
    int len = 0;
    //QByteArray readData;
    int packetLen = 0;
    int ret = 0;
    QByteArray responseData;

    while (!m_stopped)
    {
#if 1
        responseData += m_port->readAll();
        while (m_port->waitForReadyRead(10))
            responseData += m_port->readAll();

        int arrayLen = responseData.length();
        if (arrayLen > 255) {
            responseData.clear();
            continue;
        }

        if (arrayLen != 0) {
            memcpy(packet, responseData.data(), arrayLen);
            int packetLength = packet[3]<<8 | packet[4];

            //if (packet[0] == 0x02 && arrayLen == packetLength + 2 && packet[packetLength - 1] == EOT) {
            if (packet[0] == 0x02 && packet[packetLength - 1] == EOT) {
                qDebug() << "[revc serial]";
                //QString response(responseData);
                //qDebug() << response;
                emit sigReadyReadSerial(packet, packetLength + 2);
                responseData.clear();
            } else {
                qDebug() << "bad packet" << "SOT:"  << packet[0] << "len:" << arrayLen << packetLength;
                for (int i=0; i<arrayLen; i++) {
                    qDebug() << packet[i];
                }
            }
        }


//    } else {
////        QString strError = QString("SerialComm Error:%1").arg(QTime::currentTime().toString());
////        qDebug() << strError;
//    }

#else

        ret = m_port->read(&ch, 1);
        if (ret == 0) {

        } else if (ret < 0) {
            m_stopped = true;
        } else {
            packet[len++] = ch;

            if (len == 1 && ch != SOT) {
                len = 0;
                qDebug() << "SOT error" << packet[0];

            } //else if (len >= 5 && (len == packet[4] + 2) && (packet[len - 3] == EOT)) {
            else if (len >= 5 && (packet[len - 3] == EOT)) {
                //qDebug() << "[recv serial]";
                //packetLen = packet[4];

//                uchar sendPacket[255] = {0};
//                for (int i=0; i<packetLen; i++) {
//                    sendPacket[i] = packet[i];
//                }
                emit sigReadyReadSerial(packet, len);

                msleep(10);

                len = 0;
                packetLen = 0;
            } else {
                qDebug() << "ch:" << (uchar)ch;
                if (len >= 254) {
                    len = 0;
                    packetLen = 0;
                }
            }
        }

#endif
    }
}

void SerialComm::stop()
{
    m_stopped = true;
    this->exit();
}
