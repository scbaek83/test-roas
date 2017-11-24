#ifndef DEFINE_H
#define DEFINE_H

#define TCPIP_PORT      5000

#define MAX_PACKET_SIZE     1024
#define SOT                 0x02
#define EOT                 0x03

#define LEN_DEV_NAME        60
#define LEN_PORT_NAME       120
#define LEN_PASSWORD        40
#define NUM_PORT            16

#define LOW_LIMIT           -40.0

#define MAX_CAL_STEP        11
#define LEN_LOG_DATA        60

// Command
#define CMD_REQ_DEV_INFO                    0x01
#define CMD_REQ_PD_MONITOR                  0x02
#define CMD_REQ_PORTNAME                    0x03
#define CMD_REQ_SET_PORTNAME                0x04
#define CMD_REQ_SET_PORT_SWITCH             0X05
#define CMD_REQ_SET_AUTO_MANUAL             0X06
#define CMD_REQ_SET_DETECTION_PERIOD        0X07
#define CMD_REQ_SET_SW_TIMES                0X08
#define CMD_REQ_SET_PD_THRESHOLD            0X09
#define CMD_REQ_ALARM_MASK                  0X0A
#define CMD_REQ_SET_ALARM_MASK              0x0B
#define CMD_REQ_SET_DEV_INFO                0x0C
#define CMD_ALARM                           0x0D
#define CMD_PORT_SWITCHING                  0x0E
#define CMD_REQ_SET_PORT_SWITCH_CH          0x0F
#define CMD_REQ_SET_AUTO_MANUAL_CH          0x10
#define CMD_REQ_CAL_DATA                    0x11
#define CMD_REQ_SET_CAL_DATA                0x12
#define CMD_REQ_LOG_DATA                    0x13
#define CMD_LOG_DATA                        0x14
#define CMD_REQ_CLEAR_LOG                   0x15

#define CMD_EXCESS_CONNECTION_LIMIT         0x99

#define CMD_REQ_TEST_COMMAND                0x88

#endif // DEFINE_H
