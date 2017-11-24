#ifndef PROTO_H
#define PROTO_H

#include "device.h"
#include <QStringList>

class DevInfo;

class Proto
{
public:
    Proto();

    static bool chkCRC(unsigned char *packet);

    // Request protocol
    static int reqDevInfo(uchar *packet);
    static int reqPdMonitor(uchar *packet);
    static int reqPortName(uchar *packet, int no);
    static int reqSetPortName(uchar *packet, int no, char *name);
    static int reqSetPortSwitch(uchar *packet, ushort mainSub);
    static int reqSetPortSwitchCh(uchar *packet, uchar chIndex, uchar bitMainSub);
    static int reqSetAutoManual(uchar *packet, ushort autoMan);
    static int reqSetAutoManualCh(uchar *packet, uchar chIndex, uchar bitAutoMan);
    static int reqSetDetectionPeriod(uchar *packet, int sec);
    static int reqSetSwitchTime(uchar *packet, int swTime);
    static int reqSetThreshold(uchar *packet, short threshold);
    static int reqSetAlarmMask(uchar *packet, ushort alarmMask);
    static int reqSetDevInfo(uchar *packet, DevInfo *tmpInfo);
    static int reqCalData(uchar *packet, uchar chIndex);
    static int reqSetCalData(uchar *packet, uchar chIndex, float ref, ushort *volt);
    static int reqLogData(uchar *packet);
    static int reqClearLog(uchar *packet);

    static int testCommand(uchar *packet);

    // Response protocol
    static void resDevInfo(uchar *packet, DevInfo *info);
    static void resPdMonitor(uchar *packet, DevInfo *info);
    static void resPortName(uchar *packet, DevInfo *info, int *no);
    static void resSetPortName(uchar *packet, DevInfo *info, int *no);
    static void resSetPortSwitch(uchar *packet, DevInfo *info);
    static void resSetAutoManual(uchar *packet, DevInfo *info);
    static void resSetDetectionPeriod(uchar *packet, DevInfo *info);
    static void resSetSwitchTime(uchar *packet, DevInfo *info);
    static void resSetThreshold(uchar *packet, DevInfo *info);
    static void resSetAlarmMask(uchar *packet, DevInfo *info);
    static int resAlarm(uchar *packet, uchar chIndex, uchar bitMainSub, QString timeInfo);
    static int resLogData(uchar *packet, int currentIndex);


};

#endif // PROTO_H
