#ifndef SERIALCOMM_H
#define SERIALCOMM_H

#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QThread>
#include "define.h"

class SerialComm : public QThread
{
    Q_OBJECT
public:
    explicit SerialComm(QSerialPort *port, QObject *parent = 0);

    void stop();

protected:
    void run();

signals:
    void sigReadyReadSerial(uchar *packet, int packetLen);
    void sigBadPacket();

private:
    QSerialPort *m_port;
    volatile bool m_stopped;
};

#endif // SERIALCOMM_H
