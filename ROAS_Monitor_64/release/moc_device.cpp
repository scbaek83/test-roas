/****************************************************************************
** Meta object code from reading C++ file 'device.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../device.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'device.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Device_t {
    QByteArrayData data[43];
    char stringdata0[551];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Device_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Device_t qt_meta_stringdata_Device = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Device"
QT_MOC_LITERAL(1, 7, 12), // "sigConnected"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 7), // "Device*"
QT_MOC_LITERAL(4, 29, 6), // "device"
QT_MOC_LITERAL(5, 36, 15), // "sigDisconnected"
QT_MOC_LITERAL(6, 52, 12), // "sigPdMonitor"
QT_MOC_LITERAL(7, 65, 11), // "sigPortName"
QT_MOC_LITERAL(8, 77, 2), // "no"
QT_MOC_LITERAL(9, 80, 14), // "sigSetPortName"
QT_MOC_LITERAL(10, 95, 16), // "sigSetPortSwitch"
QT_MOC_LITERAL(11, 112, 16), // "sigSetAutoManual"
QT_MOC_LITERAL(12, 129, 21), // "sigSetDetectionPeriod"
QT_MOC_LITERAL(13, 151, 12), // "sigSetSwTime"
QT_MOC_LITERAL(14, 164, 15), // "sigSetThreshold"
QT_MOC_LITERAL(15, 180, 14), // "sigShowPdTable"
QT_MOC_LITERAL(16, 195, 14), // "sigRecvCalData"
QT_MOC_LITERAL(17, 210, 7), // "chIndex"
QT_MOC_LITERAL(18, 218, 15), // "sigDeviceWindow"
QT_MOC_LITERAL(19, 234, 14), // "sigAlarmStatus"
QT_MOC_LITERAL(20, 249, 10), // "bitMainSub"
QT_MOC_LITERAL(21, 260, 8), // "timeInfo"
QT_MOC_LITERAL(22, 269, 16), // "sigPortSwitching"
QT_MOC_LITERAL(23, 286, 7), // "mainSub"
QT_MOC_LITERAL(24, 294, 19), // "sigResSetPortSwitch"
QT_MOC_LITERAL(25, 314, 19), // "sigResSetAutoManual"
QT_MOC_LITERAL(26, 334, 10), // "bitAutoMan"
QT_MOC_LITERAL(27, 345, 13), // "sigSetLogData"
QT_MOC_LITERAL(28, 359, 12), // "currentIndex"
QT_MOC_LITERAL(29, 372, 8), // "maxIndex"
QT_MOC_LITERAL(30, 381, 5), // "char*"
QT_MOC_LITERAL(31, 387, 3), // "log"
QT_MOC_LITERAL(32, 391, 13), // "slotConnected"
QT_MOC_LITERAL(33, 405, 16), // "slotDisconnected"
QT_MOC_LITERAL(34, 422, 13), // "slotReadyRead"
QT_MOC_LITERAL(35, 436, 15), // "slotSocketError"
QT_MOC_LITERAL(36, 452, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(37, 481, 11), // "socketError"
QT_MOC_LITERAL(38, 493, 19), // "slotReadyReadSerial"
QT_MOC_LITERAL(39, 513, 6), // "uchar*"
QT_MOC_LITERAL(40, 520, 6), // "packet"
QT_MOC_LITERAL(41, 527, 9), // "packetLen"
QT_MOC_LITERAL(42, 537, 13) // "slotBadPacket"

    },
    "Device\0sigConnected\0\0Device*\0device\0"
    "sigDisconnected\0sigPdMonitor\0sigPortName\0"
    "no\0sigSetPortName\0sigSetPortSwitch\0"
    "sigSetAutoManual\0sigSetDetectionPeriod\0"
    "sigSetSwTime\0sigSetThreshold\0"
    "sigShowPdTable\0sigRecvCalData\0chIndex\0"
    "sigDeviceWindow\0sigAlarmStatus\0"
    "bitMainSub\0timeInfo\0sigPortSwitching\0"
    "mainSub\0sigResSetPortSwitch\0"
    "sigResSetAutoManual\0bitAutoMan\0"
    "sigSetLogData\0currentIndex\0maxIndex\0"
    "char*\0log\0slotConnected\0slotDisconnected\0"
    "slotReadyRead\0slotSocketError\0"
    "QAbstractSocket::SocketError\0socketError\0"
    "slotReadyReadSerial\0uchar*\0packet\0"
    "packetLen\0slotBadPacket"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Device[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      18,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  134,    2, 0x06 /* Public */,
       5,    1,  137,    2, 0x06 /* Public */,
       6,    1,  140,    2, 0x06 /* Public */,
       7,    2,  143,    2, 0x06 /* Public */,
       9,    2,  148,    2, 0x06 /* Public */,
      10,    1,  153,    2, 0x06 /* Public */,
      11,    1,  156,    2, 0x06 /* Public */,
      12,    1,  159,    2, 0x06 /* Public */,
      13,    1,  162,    2, 0x06 /* Public */,
      14,    1,  165,    2, 0x06 /* Public */,
      15,    0,  168,    2, 0x06 /* Public */,
      16,    1,  169,    2, 0x06 /* Public */,
      18,    1,  172,    2, 0x06 /* Public */,
      19,    4,  175,    2, 0x06 /* Public */,
      22,    4,  184,    2, 0x06 /* Public */,
      24,    4,  193,    2, 0x06 /* Public */,
      25,    4,  202,    2, 0x06 /* Public */,
      27,    3,  211,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      32,    0,  218,    2, 0x0a /* Public */,
      33,    0,  219,    2, 0x0a /* Public */,
      34,    0,  220,    2, 0x0a /* Public */,
      35,    1,  221,    2, 0x0a /* Public */,
      38,    2,  224,    2, 0x0a /* Public */,
      42,    0,  229,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    8,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    8,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UChar,   17,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::UChar, QMetaType::UChar, QMetaType::QString,    4,   17,   20,   21,
    QMetaType::Void, 0x80000000 | 3, QMetaType::UChar, QMetaType::UShort, QMetaType::QString,    4,   17,   23,   21,
    QMetaType::Void, 0x80000000 | 3, QMetaType::UChar, QMetaType::UChar, QMetaType::QString,    4,   17,   20,   21,
    QMetaType::Void, 0x80000000 | 3, QMetaType::UChar, QMetaType::UChar, QMetaType::QString,    4,   17,   26,   21,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 30,   28,   29,   31,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 36,   37,
    QMetaType::Void, 0x80000000 | 39, QMetaType::Int,   40,   41,
    QMetaType::Void,

       0        // eod
};

void Device::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Device *_t = static_cast<Device *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sigConnected((*reinterpret_cast< Device*(*)>(_a[1]))); break;
        case 1: _t->sigDisconnected((*reinterpret_cast< Device*(*)>(_a[1]))); break;
        case 2: _t->sigPdMonitor((*reinterpret_cast< Device*(*)>(_a[1]))); break;
        case 3: _t->sigPortName((*reinterpret_cast< Device*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->sigSetPortName((*reinterpret_cast< Device*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->sigSetPortSwitch((*reinterpret_cast< Device*(*)>(_a[1]))); break;
        case 6: _t->sigSetAutoManual((*reinterpret_cast< Device*(*)>(_a[1]))); break;
        case 7: _t->sigSetDetectionPeriod((*reinterpret_cast< Device*(*)>(_a[1]))); break;
        case 8: _t->sigSetSwTime((*reinterpret_cast< Device*(*)>(_a[1]))); break;
        case 9: _t->sigSetThreshold((*reinterpret_cast< Device*(*)>(_a[1]))); break;
        case 10: _t->sigShowPdTable(); break;
        case 11: _t->sigRecvCalData((*reinterpret_cast< uchar(*)>(_a[1]))); break;
        case 12: _t->sigDeviceWindow((*reinterpret_cast< Device*(*)>(_a[1]))); break;
        case 13: _t->sigAlarmStatus((*reinterpret_cast< Device*(*)>(_a[1])),(*reinterpret_cast< uchar(*)>(_a[2])),(*reinterpret_cast< uchar(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 14: _t->sigPortSwitching((*reinterpret_cast< Device*(*)>(_a[1])),(*reinterpret_cast< uchar(*)>(_a[2])),(*reinterpret_cast< ushort(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 15: _t->sigResSetPortSwitch((*reinterpret_cast< Device*(*)>(_a[1])),(*reinterpret_cast< uchar(*)>(_a[2])),(*reinterpret_cast< uchar(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 16: _t->sigResSetAutoManual((*reinterpret_cast< Device*(*)>(_a[1])),(*reinterpret_cast< uchar(*)>(_a[2])),(*reinterpret_cast< uchar(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 17: _t->sigSetLogData((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< char*(*)>(_a[3]))); break;
        case 18: _t->slotConnected(); break;
        case 19: _t->slotDisconnected(); break;
        case 20: _t->slotReadyRead(); break;
        case 21: _t->slotSocketError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 22: _t->slotReadyReadSerial((*reinterpret_cast< uchar*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 23: _t->slotBadPacket(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Device* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Device* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Device* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Device* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Device* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Device* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Device* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Device* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Device* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Device* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Device* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Device* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Device* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Device* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Device* >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Device::*_t)(Device * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Device::sigConnected)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Device::*_t)(Device * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Device::sigDisconnected)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Device::*_t)(Device * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Device::sigPdMonitor)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Device::*_t)(Device * , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Device::sigPortName)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Device::*_t)(Device * , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Device::sigSetPortName)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (Device::*_t)(Device * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Device::sigSetPortSwitch)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (Device::*_t)(Device * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Device::sigSetAutoManual)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (Device::*_t)(Device * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Device::sigSetDetectionPeriod)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (Device::*_t)(Device * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Device::sigSetSwTime)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (Device::*_t)(Device * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Device::sigSetThreshold)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (Device::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Device::sigShowPdTable)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (Device::*_t)(uchar );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Device::sigRecvCalData)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (Device::*_t)(Device * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Device::sigDeviceWindow)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (Device::*_t)(Device * , uchar , uchar , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Device::sigAlarmStatus)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (Device::*_t)(Device * , uchar , ushort , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Device::sigPortSwitching)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (Device::*_t)(Device * , uchar , uchar , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Device::sigResSetPortSwitch)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (Device::*_t)(Device * , uchar , uchar , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Device::sigResSetAutoManual)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (Device::*_t)(int , int , char * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Device::sigSetLogData)) {
                *result = 17;
                return;
            }
        }
    }
}

const QMetaObject Device::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Device.data,
      qt_meta_data_Device,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Device::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Device::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Device.stringdata0))
        return static_cast<void*>(const_cast< Device*>(this));
    return QObject::qt_metacast(_clname);
}

int Device::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    }
    return _id;
}

// SIGNAL 0
void Device::sigConnected(Device * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Device::sigDisconnected(Device * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Device::sigPdMonitor(Device * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Device::sigPortName(Device * _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Device::sigSetPortName(Device * _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Device::sigSetPortSwitch(Device * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Device::sigSetAutoManual(Device * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Device::sigSetDetectionPeriod(Device * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Device::sigSetSwTime(Device * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Device::sigSetThreshold(Device * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Device::sigShowPdTable()
{
    QMetaObject::activate(this, &staticMetaObject, 10, Q_NULLPTR);
}

// SIGNAL 11
void Device::sigRecvCalData(uchar _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void Device::sigDeviceWindow(Device * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void Device::sigAlarmStatus(Device * _t1, uchar _t2, uchar _t3, QString _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void Device::sigPortSwitching(Device * _t1, uchar _t2, ushort _t3, QString _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void Device::sigResSetPortSwitch(Device * _t1, uchar _t2, uchar _t3, QString _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void Device::sigResSetAutoManual(Device * _t1, uchar _t2, uchar _t3, QString _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void Device::sigSetLogData(int _t1, int _t2, char * _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
