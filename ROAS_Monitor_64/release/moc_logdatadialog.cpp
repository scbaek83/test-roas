/****************************************************************************
** Meta object code from reading C++ file 'logdatadialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../dialog/logdatadialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'logdatadialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LogDataDialog_t {
    QByteArrayData data[11];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LogDataDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LogDataDialog_t qt_meta_stringdata_LogDataDialog = {
    {
QT_MOC_LITERAL(0, 0, 13), // "LogDataDialog"
QT_MOC_LITERAL(1, 14, 14), // "slotSetLogData"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 12), // "currentIndex"
QT_MOC_LITERAL(4, 43, 8), // "maxIndex"
QT_MOC_LITERAL(5, 52, 5), // "char*"
QT_MOC_LITERAL(6, 58, 3), // "log"
QT_MOC_LITERAL(7, 62, 18), // "on_btnLoad_clicked"
QT_MOC_LITERAL(8, 81, 18), // "on_btnSave_clicked"
QT_MOC_LITERAL(9, 100, 19), // "on_btnClear_clicked"
QT_MOC_LITERAL(10, 120, 20) // "on_btnDelete_clicked"

    },
    "LogDataDialog\0slotSetLogData\0\0"
    "currentIndex\0maxIndex\0char*\0log\0"
    "on_btnLoad_clicked\0on_btnSave_clicked\0"
    "on_btnClear_clicked\0on_btnDelete_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LogDataDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   39,    2, 0x0a /* Public */,
       7,    0,   46,    2, 0x08 /* Private */,
       8,    0,   47,    2, 0x08 /* Private */,
       9,    0,   48,    2, 0x08 /* Private */,
      10,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 5,    3,    4,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LogDataDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LogDataDialog *_t = static_cast<LogDataDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotSetLogData((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< char*(*)>(_a[3]))); break;
        case 1: _t->on_btnLoad_clicked(); break;
        case 2: _t->on_btnSave_clicked(); break;
        case 3: _t->on_btnClear_clicked(); break;
        case 4: _t->on_btnDelete_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject LogDataDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_LogDataDialog.data,
      qt_meta_data_LogDataDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LogDataDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LogDataDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LogDataDialog.stringdata0))
        return static_cast<void*>(const_cast< LogDataDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int LogDataDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
