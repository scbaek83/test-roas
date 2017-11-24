/****************************************************************************
** Meta object code from reading C++ file 'pdtabledialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../dialog/pdtabledialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pdtabledialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PdTableDialog_t {
    QByteArrayData data[15];
    char stringdata0[208];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PdTableDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PdTableDialog_t qt_meta_stringdata_PdTableDialog = {
    {
QT_MOC_LITERAL(0, 0, 13), // "PdTableDialog"
QT_MOC_LITERAL(1, 14, 18), // "slotVoltageMonitor"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 7), // "Device*"
QT_MOC_LITERAL(4, 42, 6), // "device"
QT_MOC_LITERAL(5, 49, 15), // "slotRecvCalData"
QT_MOC_LITERAL(6, 65, 7), // "chIndex"
QT_MOC_LITERAL(7, 73, 14), // "slotChangeOver"
QT_MOC_LITERAL(8, 88, 10), // "bitMainSub"
QT_MOC_LITERAL(9, 99, 11), // "slotBtnMain"
QT_MOC_LITERAL(10, 111, 10), // "slotBtnSub"
QT_MOC_LITERAL(11, 122, 21), // "on_btnSetVolt_clicked"
QT_MOC_LITERAL(12, 144, 24), // "on_btnWriteTable_clicked"
QT_MOC_LITERAL(13, 169, 32), // "on_cbChannel_currentIndexChanged"
QT_MOC_LITERAL(14, 202, 5) // "index"

    },
    "PdTableDialog\0slotVoltageMonitor\0\0"
    "Device*\0device\0slotRecvCalData\0chIndex\0"
    "slotChangeOver\0bitMainSub\0slotBtnMain\0"
    "slotBtnSub\0on_btnSetVolt_clicked\0"
    "on_btnWriteTable_clicked\0"
    "on_cbChannel_currentIndexChanged\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PdTableDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x0a /* Public */,
       5,    1,   57,    2, 0x0a /* Public */,
       7,    2,   60,    2, 0x0a /* Public */,
       9,    1,   65,    2, 0x0a /* Public */,
      10,    1,   68,    2, 0x0a /* Public */,
      11,    0,   71,    2, 0x08 /* Private */,
      12,    0,   72,    2, 0x08 /* Private */,
      13,    1,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::UChar,    6,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar,    6,    8,
    QMetaType::Void, QMetaType::UChar,    6,
    QMetaType::Void, QMetaType::UChar,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,

       0        // eod
};

void PdTableDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PdTableDialog *_t = static_cast<PdTableDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotVoltageMonitor((*reinterpret_cast< Device*(*)>(_a[1]))); break;
        case 1: _t->slotRecvCalData((*reinterpret_cast< uchar(*)>(_a[1]))); break;
        case 2: _t->slotChangeOver((*reinterpret_cast< uchar(*)>(_a[1])),(*reinterpret_cast< uchar(*)>(_a[2]))); break;
        case 3: _t->slotBtnMain((*reinterpret_cast< uchar(*)>(_a[1]))); break;
        case 4: _t->slotBtnSub((*reinterpret_cast< uchar(*)>(_a[1]))); break;
        case 5: _t->on_btnSetVolt_clicked(); break;
        case 6: _t->on_btnWriteTable_clicked(); break;
        case 7: _t->on_cbChannel_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
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
        }
    }
}

const QMetaObject PdTableDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PdTableDialog.data,
      qt_meta_data_PdTableDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PdTableDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PdTableDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PdTableDialog.stringdata0))
        return static_cast<void*>(const_cast< PdTableDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int PdTableDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
