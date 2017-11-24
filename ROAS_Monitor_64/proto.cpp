#include "proto.h"

Proto::Proto()
{

}

unsigned short CRC16Table[256] = {
    0x0000, 0xc0c1, 0xc181, 0x0140, 0xc301, 0x03c0, 0x0280, 0xc241, 0xc601, 0x06c0,
    0x0780, 0xc741, 0x0500, 0xc5c1, 0xc481, 0x0440, 0xcc01, 0x0cc0, 0x0d80, 0xcd41,
    0x0f00, 0xcfc1, 0xce81, 0x0e40, 0x0a00, 0xcac1, 0xcb81, 0x0b40, 0xc901, 0x09c0,
    0x0880, 0xc841, 0xd801, 0x18c0, 0x1980, 0xd941, 0x1b00, 0xdbc1, 0xda81, 0x1a40,
    0x1e00, 0xdec1, 0xdf81, 0x1f40, 0xdd01, 0x1dc0, 0x1c80, 0xdc41, 0x1400, 0xd4c1,
    0xd581, 0x1540, 0xd701, 0x17c0, 0x1680, 0xd641, 0xd201, 0x12c0, 0x1380, 0xd341,
    0x1100, 0xd1c1, 0xd081, 0x1040, 0xf001, 0x30c0, 0x3180, 0xf141, 0x3300, 0xf3c1,
    0xf281, 0x3240, 0x3600, 0xf6c1, 0xf781, 0x3740, 0xf501, 0x35c0, 0x3480, 0xf441,
    0x3c00, 0xfcc1, 0xfd81, 0x3d40, 0xff01, 0x3fc0, 0x3e80, 0xfe41, 0xfa01, 0x3ac0,
    0x3b80, 0xfb41, 0x3900, 0xf9c1, 0xf881, 0x3840, 0x2800, 0xe8c1, 0xe981, 0x2940,
    0xeb01, 0x2bc0, 0x2a80, 0xea41, 0xee01, 0x2ec0, 0x2f80, 0xef41, 0x2d00, 0xedc1,
    0xec81, 0x2c40, 0xe401, 0x24c0, 0x2580, 0xe541, 0x2700, 0xe7c1, 0xe681, 0x2640,
    0x2200, 0xe2c1, 0xe381, 0x2340, 0xe101, 0x21c0, 0x2080, 0xe041, 0xa001, 0x60c0,
    0x6180, 0xa141, 0x6300, 0xa3c1, 0xa281, 0x6240, 0x6600, 0xa6c1, 0xa781, 0x6740,
    0xa501, 0x65c0, 0x6480, 0xa441, 0x6c00, 0xacc1, 0xad81, 0x6d40, 0xaf01, 0x6fc0,
    0x6e80, 0xae41, 0xaa01, 0x6ac0, 0x6b80, 0xab41, 0x6900, 0xa9c1, 0xa881, 0x6840,
    0x7800, 0xb8c1, 0xb981, 0x7940, 0xbb01, 0x7bc0, 0x7a80, 0xba41, 0xbe01, 0x7ec0,
    0x7f80, 0xbf41, 0x7d00, 0xbdc1, 0xbc81, 0x7c40, 0xb401, 0x74c0, 0x7580, 0xb541,
    0x7700, 0xb7c1, 0xb681, 0x7640, 0x7200, 0xb2c1, 0xb381, 0x7340, 0xb101, 0x71c0,
    0x7080, 0xb041, 0x5000, 0x90c1, 0x9181, 0x5140, 0x9301, 0x53c0, 0x5280, 0x9241,
    0x9601, 0x56c0, 0x5780, 0x9741, 0x5500, 0x95c1, 0x9481, 0x5440, 0x9c01, 0x5cc0,
    0x5d80, 0x9d41, 0x5f00, 0x9fc1, 0x9e81, 0x5e40, 0x5a00, 0x9ac1, 0x9b81, 0x5b40,
    0x9901, 0x59c0, 0x5880, 0x9841, 0x8801, 0x48c0, 0x4980, 0x8941, 0x4b00, 0x8bc1,
    0x8a81, 0x4a40, 0x4e00, 0x8ec1, 0x8f81, 0x4f40, 0x8d01, 0x4dc0, 0x4c80, 0x8c41,
    0x4400, 0x84c1, 0x8581, 0x4540, 0x8701, 0x47c0, 0x4680, 0x8641, 0x8201, 0x42c0,
    0x4380, 0x8341, 0x4100, 0x81c1, 0x8081, 0x4040
};

unsigned short getCRC16(unsigned char p[], int len) {
    unsigned short CRC16 = 0xffff;

    for (int i=0; i<len; i++) {
        unsigned short value = (unsigned short)p[i];
        CRC16 = (CRC16>>8) ^ CRC16Table[(CRC16^value) & 0x00FF];
    }
    return CRC16;
}

bool Proto::chkCRC(unsigned char *packet)
{
    int len = packet[3]<<8 | packet[4];

    unsigned short crc = packet[len]<<8 | packet[len+1];
    unsigned short CRC16 = getCRC16(packet, len);

    if (crc == CRC16) return true;
    else return false;
}

int Proto::reqDevInfo(uchar *packet)
{
    int dataLen = 6;            // length from SOT to EOT
    memset(packet, 0x00, dataLen + 2);

    packet[0] = SOT;
    packet[1] = CMD_REQ_DEV_INFO;
    packet[2] = 0;              // 0: request, 1: response
    packet[3] = (dataLen>>8) & 0xFF;
    packet[4] = dataLen & 0XFF;
    packet[5] = EOT;

    unsigned short crc = getCRC16(packet, dataLen);
    packet[6] = (crc>>8) & 0xFF;
    packet[7] = crc & 0xFF;

    return dataLen+2;
}

int Proto::reqPdMonitor(uchar *packet)
{
    int dataLen = 6;            // length from SOT to EOT
    memset(packet, 0x00, dataLen + 2);

    packet[0] = SOT;
    packet[1] = CMD_REQ_PD_MONITOR;
    packet[2] = 0;              // 0: request, 1: response
    packet[3] = (dataLen>>8) & 0xFF;
    packet[4] = dataLen & 0XFF;
    packet[dataLen - 1] = EOT;

    unsigned short crc = getCRC16(packet, dataLen);
    packet[dataLen] = (crc>>8) & 0xFF;
    packet[dataLen + 1] = crc & 0xFF;

    return dataLen+2;
}

int Proto::reqPortName(uchar *packet, int no)
{
    int dataLen = 7;            // length from SOT to EOT
    memset(packet, 0x00, dataLen + 2);

    packet[0] = SOT;
    packet[1] = CMD_REQ_PORTNAME;
    packet[2] = 0;              // 0: request, 1: response
    packet[3] = (dataLen>>8) & 0xFF;
    packet[4] = dataLen & 0XFF;
    packet[5] = no;
    packet[dataLen - 1] = EOT;

    unsigned short crc = getCRC16(packet, dataLen);
    packet[dataLen] = (crc>>8) & 0xFF;
    packet[dataLen + 1] = crc & 0xFF;

    return dataLen+2;
}

int Proto::reqSetPortName(uchar *packet, int no, char *name)
{
    int dataLen = 127;            // length from SOT to EOT
    memset(packet, 0x00, dataLen + 2);

    packet[0] = SOT;
    packet[1] = CMD_REQ_SET_PORTNAME;
    packet[2] = 0;              // 0: request, 1: response
    packet[3] = (dataLen>>8) & 0xFF;
    packet[4] = dataLen & 0XFF;
    packet[5] = no;
    memcpy(&packet[6], name, LEN_PORT_NAME);
    packet[dataLen - 1] = EOT;

    unsigned short crc = getCRC16(packet, dataLen);
    packet[dataLen] = (crc>>8) & 0xFF;
    packet[dataLen + 1] = crc & 0xFF;

    return dataLen+2;
}

int Proto::reqSetPortSwitch(uchar *packet, ushort mainSub)
{
    int dataLen = 8;            // length from SOT to EOT
    memset(packet, 0x00, dataLen + 2);

    packet[0] = SOT;
    packet[1] = CMD_REQ_SET_PORT_SWITCH;
    packet[2] = 0;              // 0: request, 1: response
    packet[3] = (dataLen>>8) & 0xFF;
    packet[4] = dataLen & 0XFF;

    memcpy(&packet[5], &mainSub, 2);
    packet[dataLen - 1] = EOT;

    unsigned short crc = getCRC16(packet, dataLen);
    packet[dataLen] = (crc>>8) & 0xFF;
    packet[dataLen + 1] = crc & 0xFF;

    return dataLen+2;
}

int Proto::reqSetPortSwitchCh(uchar *packet, uchar chIndex, uchar bitMainSub)
{
    int dataLen = 8;            // length from SOT to EOT
    memset(packet, 0x00, dataLen + 2);

    packet[0] = SOT;
    packet[1] = CMD_REQ_SET_PORT_SWITCH_CH;
    packet[2] = 0;              // 0: request, 1: response
    packet[3] = (dataLen>>8) & 0xFF;
    packet[4] = dataLen & 0XFF;

    packet[5] = chIndex;
    packet[6] = bitMainSub;
    packet[dataLen - 1] = EOT;

    unsigned short crc = getCRC16(packet, dataLen);
    packet[dataLen] = (crc>>8) & 0xFF;
    packet[dataLen + 1] = crc & 0xFF;

    return dataLen+2;
}

int Proto::reqSetAutoManual(uchar *packet, ushort autoMan)
{
    int dataLen = 8;            // length from SOT to EOT
    memset(packet, 0x00, dataLen + 2);

    packet[0] = SOT;
    packet[1] = CMD_REQ_SET_AUTO_MANUAL;
    packet[2] = 0;              // 0: request, 1: response
    packet[3] = (dataLen>>8) & 0xFF;
    packet[4] = dataLen & 0XFF;

    memcpy(&packet[5], &autoMan, 2);
    packet[dataLen - 1] = EOT;

    unsigned short crc = getCRC16(packet, dataLen);
    packet[dataLen] = (crc>>8) & 0xFF;
    packet[dataLen + 1] = crc & 0xFF;

    return dataLen+2;
}

int Proto::reqSetAutoManualCh(uchar *packet, uchar chIndex, uchar bitAutoMan)
{
    int dataLen = 8;            // length from SOT to EOT
    memset(packet, 0x00, dataLen + 2);

    packet[0] = SOT;
    packet[1] = CMD_REQ_SET_AUTO_MANUAL_CH;
    packet[2] = 0;              // 0: request, 1: response
    packet[3] = (dataLen>>8) & 0xFF;
    packet[4] = dataLen & 0XFF;

    packet[5] = chIndex;
    packet[6] = bitAutoMan;
    packet[dataLen - 1] = EOT;

    unsigned short crc = getCRC16(packet, dataLen);
    packet[dataLen] = (crc>>8) & 0xFF;
    packet[dataLen + 1] = crc & 0xFF;

    return dataLen+2;
}

int Proto::reqSetDetectionPeriod(uchar *packet, int sec)
{
    int dataLen = 7;            // length from SOT to EOT
    memset(packet, 0x00, dataLen + 2);

    packet[0] = SOT;
    packet[1] = CMD_REQ_SET_DETECTION_PERIOD;
    packet[2] = 0;              // 0: request, 1: response
    packet[3] = (dataLen>>8) & 0xFF;
    packet[4] = dataLen & 0XFF;

    packet[5] = (uchar)sec;
    packet[dataLen - 1] = EOT;

    unsigned short crc = getCRC16(packet, dataLen);
    packet[dataLen] = (crc>>8) & 0xFF;
    packet[dataLen + 1] = crc & 0xFF;

    return dataLen+2;
}

int Proto::reqSetSwitchTime(uchar *packet, int swTime)
{
    int dataLen = 7;            // length from SOT to EOT
    memset(packet, 0x00, dataLen + 2);

    packet[0] = SOT;
    packet[1] = CMD_REQ_SET_SW_TIMES;
    packet[2] = 0;              // 0: request, 1: response
    packet[3] = (dataLen>>8) & 0xFF;
    packet[4] = dataLen & 0XFF;

    packet[5] = (uchar)swTime;
    packet[dataLen - 1] = EOT;

    unsigned short crc = getCRC16(packet, dataLen);
    packet[dataLen] = (crc>>8) & 0xFF;
    packet[dataLen + 1] = crc & 0xFF;

    return dataLen+2;
}

int Proto::reqSetThreshold(uchar *packet, short threshold)
{
    int dataLen = 8;            // length from SOT to EOT
    memset(packet, 0x00, dataLen + 2);

    packet[0] = SOT;
    packet[1] = CMD_REQ_SET_PD_THRESHOLD;
    packet[2] = 0;              // 0: request, 1: response
    packet[3] = (dataLen>>8) & 0xFF;
    packet[4] = dataLen & 0XFF;

    memcpy(&packet[5], &threshold, 2);
    packet[dataLen - 1] = EOT;

    unsigned short crc = getCRC16(packet, dataLen);
    packet[dataLen] = (crc>>8) & 0xFF;
    packet[dataLen + 1] = crc & 0xFF;

    return dataLen+2;
}

int Proto::reqSetAlarmMask(uchar *packet, ushort alarmMask)
{
    int dataLen = 8;            // length from SOT to EOT
    memset(packet, 0x00, dataLen + 2);

    packet[0] = SOT;
    packet[1] = CMD_REQ_SET_ALARM_MASK;
    packet[2] = 0;              // 0: request, 1: response
    packet[3] = (dataLen>>8) & 0xFF;
    packet[4] = dataLen & 0XFF;

    memcpy(&packet[5], &alarmMask, 2);
    packet[dataLen - 1] = EOT;

    unsigned short crc = getCRC16(packet, dataLen);
    packet[dataLen] = (crc>>8) & 0xFF;
    packet[dataLen + 1] = crc & 0xFF;

    return dataLen+2;
}

int Proto::reqSetDevInfo(uchar *packet, DevInfo *tmpInfo)
{
    int dataLen = 94;            // length from SOT to EOT
    memset(packet, 0x00, dataLen + 2);

    packet[0] = SOT;
    packet[1] = CMD_REQ_SET_DEV_INFO;
    packet[2] = 0;              // 0: request, 1: response
    packet[3] = (dataLen>>8) & 0xFF;
    packet[4] = dataLen & 0XFF;

    memcpy(&packet[5], tmpInfo->name, 60);
    memcpy(&packet[65], &tmpInfo->ip0, 4);
    memcpy(&packet[69], &tmpInfo->gw0, 4);
    memcpy(&packet[73], &tmpInfo->sm0, 4);
    memcpy(&packet[77], &tmpInfo->ip1, 4);
    memcpy(&packet[81], &tmpInfo->gw1, 4);
    memcpy(&packet[85], &tmpInfo->sm1, 4);
    memcpy(&packet[89], &tmpInfo->dns, 4);
    packet[dataLen - 1] = EOT;

    qDebug() << packet[65] << packet[66] << packet[67] << packet[68];

    unsigned short crc = getCRC16(packet, dataLen);
    packet[dataLen] = (crc>>8) & 0xFF;
    packet[dataLen + 1] = crc & 0xFF;

    return dataLen+2;
}

int Proto::reqCalData(uchar *packet, uchar chIndex)
{
    int dataLen = 7;            // length from SOT to EOT
    memset(packet, 0x00, dataLen + 2);

    packet[0] = SOT;
    packet[1] = CMD_REQ_CAL_DATA;
    packet[2] = 0;              // 0: request, 1: response
    packet[3] = (dataLen>>8) & 0xFF;
    packet[4] = dataLen & 0XFF;

    packet[5] = chIndex;
    packet[dataLen - 1] = EOT;

    unsigned short crc = getCRC16(packet, dataLen);
    packet[dataLen] = (crc>>8) & 0xFF;
    packet[dataLen + 1] = crc & 0xFF;

    return dataLen+2;
}

int Proto::reqSetCalData(uchar *packet, uchar chIndex, float ref, ushort *volt)
{
    int dataLen = 33;            // length from SOT to EOT
    memset(packet, 0x00, dataLen + 2);

    packet[0] = SOT;
    packet[1] = CMD_REQ_SET_CAL_DATA;
    packet[2] = 0;              // 0: request, 1: response
    packet[3] = (dataLen>>8) & 0xFF;
    packet[4] = dataLen & 0XFF;

    packet[5] = chIndex;
    memcpy(&packet[6], &ref, 4);
    memcpy(&packet[10], volt, MAX_CAL_STEP * 2);

    packet[dataLen - 1] = EOT;

    unsigned short crc = getCRC16(packet, dataLen);
    packet[dataLen] = (crc>>8) & 0xFF;
    packet[dataLen + 1] = crc & 0xFF;

    return dataLen+2;
}

int Proto::reqLogData(uchar *packet)
{
    int dataLen = 6;            // length from SOT to EOT
    memset(packet, 0x00, dataLen + 2);

    packet[0] = SOT;
    packet[1] = CMD_REQ_LOG_DATA;
    packet[2] = 0;              // 0: request, 1: response
    packet[3] = (dataLen>>8) & 0xFF;
    packet[4] = dataLen & 0XFF;

    packet[dataLen - 1] = EOT;

    unsigned short crc = getCRC16(packet, dataLen);
    packet[dataLen] = (crc>>8) & 0xFF;
    packet[dataLen + 1] = crc & 0xFF;

    return dataLen+2;
}

int Proto::reqClearLog(uchar *packet)
{
    int dataLen = 6;            // length from SOT to EOT
    memset(packet, 0x00, dataLen + 2);

    packet[0] = SOT;
    packet[1] = CMD_REQ_CLEAR_LOG;
    packet[2] = 0;              // 0: request, 1: response
    packet[3] = (dataLen>>8) & 0xFF;
    packet[4] = dataLen & 0XFF;

    packet[dataLen - 1] = EOT;

    unsigned short crc = getCRC16(packet, dataLen);
    packet[dataLen] = (crc>>8) & 0xFF;
    packet[dataLen + 1] = crc & 0xFF;

    return dataLen+2;
}

int Proto::testCommand(uchar *packet)
{
    int dataLen = 150;            // length from SOT to EOT
    memset(packet, 0x00, dataLen + 2);

    packet[0] = SOT;
    packet[1] = CMD_REQ_TEST_COMMAND;
    packet[2] = 0;              // 0: request, 1: response
    packet[3] = (dataLen>>8) & 0xFF;
    packet[4] = dataLen & 0XFF;

    for (int i=0; i<dataLen - 6; i++)
        packet[5+i] = i;
    packet[dataLen - 1] = EOT;

    unsigned short crc = getCRC16(packet, dataLen);
    packet[dataLen] = (crc>>8) & 0xFF;
    packet[dataLen + 1] = crc & 0xFF;

    return dataLen+2;
}

//////////////////////// RESPONSE PROTOCOL //////////////////////////
void Proto::resDevInfo(uchar *packet, DevInfo *info)
{
    memcpy(info->name, &packet[5], LEN_DEV_NAME);
    memcpy(&info->fwVersion, &packet[65], 2);

    memcpy(&info->ip0, &packet[67], 4);
    memcpy(&info->sm0, &packet[71], 4);
    memcpy(&info->gw0, &packet[75], 4);
    memcpy(&info->ip1, &packet[79], 4);
    memcpy(&info->sm1, &packet[83], 4);
    memcpy(&info->gw1, &packet[87], 4);
    memcpy(&info->dns, &packet[91], 4);

    //TODO: check eth0 and eth1 address info

    memcpy(&info->mainSub, &packet[95], 2);
    memcpy(&info->autoMan, &packet[97], 2);
    memcpy(&info->threshold, &packet[99], 2);
    info->detectionPeriod = packet[101];
    info->swTime = packet[102];
    memcpy(&info->alarm, &packet[103], 2);
    memcpy(&info->mcuTemp, &packet[105], 2);
    memcpy(&info->alarmMask, &packet[107], 2);
    memcpy(info->password, &packet[109], LEN_PASSWORD);
}

void Proto::resPdMonitor(uchar *packet, DevInfo *info)
{
    double ipower = 0.0;
    for (int i=0; i<NUM_PORT; i++) {
        memcpy(&ipower, &packet[5 + i * 8], 8);
        info->pdValue[i] = ipower;
        //qDebug() << ipower;
    }

    memcpy(&info->threshold, &packet[133], 2);
    memcpy(&info->mainSub, &packet[135], 2);
    memcpy(&info->autoMan, &packet[137], 2);
    memcpy(&info->alarm, &packet[139], 2);
    memcpy(&info->mcuTemp, &packet[141], 2);
    memcpy(&info->pdVolt, &packet[143], 2 * NUM_PORT);
}

void Proto::resPortName(uchar *packet, DevInfo *info, int *no)
{
    *no = packet[5];
    memcpy(info->portName[*no], &packet[6], LEN_PORT_NAME);
}

void Proto::resSetPortName(uchar *packet, DevInfo *info, int *no)
{
    *no = packet[5];
    memcpy(info->portName[*no], &packet[6], LEN_PORT_NAME);
}

void Proto::resSetPortSwitch(uchar *packet, DevInfo *info)
{
    memcpy(&info->mainSub, &packet[5], 2);
}

void Proto::resSetAutoManual(uchar *packet, DevInfo *info)
{
    memcpy(&info->autoMan, &packet[5], 2);
}

void Proto::resSetDetectionPeriod(uchar *packet, DevInfo *info)
{
    info->detectionPeriod = (int)packet[5];
}

void Proto::resSetSwitchTime(uchar *packet, DevInfo *info)
{
    info->swTime = (int)packet[5];
}

void Proto::resSetThreshold(uchar *packet, DevInfo *info)
{
    memcpy(&info->threshold, &packet[5], 2);
}

void Proto::resSetAlarmMask(uchar *packet, DevInfo *info)
{
    memcpy(&info->alarmMask, &packet[5], 2);
}

int Proto::resAlarm(uchar *packet, uchar chIndex, uchar bitMainSub, QString timeInfo)
{
    int dataLen = 15;            // length from SOT to EOT
    memset(packet, 0x00, dataLen + 2);

    QStringList list = timeInfo.split(" ");
    QString strDate = list.at(0);
    QString strTime = list.at(1);
    QString strYear = strDate.split("/").at(0);
    ushort year = (ushort)strYear.toInt();

    packet[0] = SOT;
    packet[1] = CMD_ALARM;
    packet[2] = 1;              // 0: request, 1: response
    packet[3] = (dataLen>>8) & 0xFF;
    packet[4] = dataLen & 0XFF;

    packet[5] = chIndex;
    packet[6] = bitMainSub;

    memcpy(&packet[7], &year, 2);
    packet[9] = (uchar)strDate.split("/").at(1).toInt();        // month
    packet[10] = (uchar)strDate.split("/").at(2).toInt();       // day
    packet[11] = (uchar)strTime.split(":").at(0).toInt();       // hour
    packet[12] = (uchar)strTime.split(":").at(1).toInt();       // minute
    packet[13] = (uchar)strTime.split(":").at(2).toInt();       // second

    packet[dataLen - 1] = EOT;

    unsigned short crc = getCRC16(packet, dataLen);
    packet[dataLen] = (crc>>8) & 0xFF;
    packet[dataLen + 1] = crc & 0xFF;

    return dataLen+2;
}

int Proto::resLogData(uchar *packet, int currentIndex)
{
    int dataLen = 10;            // length from SOT to EOT
    memset(packet, 0x00, dataLen + 2);

    packet[0] = SOT;
    packet[1] = CMD_LOG_DATA;
    packet[2] = 1;              // 0: request, 1: response
    packet[3] = (dataLen>>8) & 0xFF;
    packet[4] = dataLen & 0XFF;

    memcpy(&packet[5], &currentIndex, 4);

    packet[dataLen - 1] = EOT;

    unsigned short crc = getCRC16(packet, dataLen);
    packet[dataLen] = (crc>>8) & 0xFF;
    packet[dataLen + 1] = crc & 0xFF;

    return dataLen+2;
}




