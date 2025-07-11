/****************************************************************************
** Meta object code from reading C++ file 'serialhandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../serialhandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'serialhandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SerialHandler_t {
    QByteArrayData data[24];
    char stringdata0[335];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SerialHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SerialHandler_t qt_meta_stringdata_SerialHandler = {
    {
QT_MOC_LITERAL(0, 0, 13), // "SerialHandler"
QT_MOC_LITERAL(1, 14, 15), // "wifiListChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 14), // "bleListChanged"
QT_MOC_LITERAL(4, 46, 19), // "wifiSwitchOnChanged"
QT_MOC_LITERAL(5, 66, 18), // "bleSwitchOnChanged"
QT_MOC_LITERAL(6, 85, 20), // "wifiConnectedChanged"
QT_MOC_LITERAL(7, 106, 19), // "bleConnectedChanged"
QT_MOC_LITERAL(8, 126, 20), // "connectedSSIDChanged"
QT_MOC_LITERAL(9, 147, 19), // "connectedMACChanged"
QT_MOC_LITERAL(10, 167, 17), // "wifiPasswordError"
QT_MOC_LITERAL(11, 185, 13), // "callRequested"
QT_MOC_LITERAL(12, 199, 12), // "smsRequested"
QT_MOC_LITERAL(13, 212, 10), // "readSerial"
QT_MOC_LITERAL(14, 223, 11), // "sendCommand"
QT_MOC_LITERAL(15, 235, 3), // "cmd"
QT_MOC_LITERAL(16, 239, 8), // "wifiList"
QT_MOC_LITERAL(17, 248, 7), // "bleList"
QT_MOC_LITERAL(18, 256, 12), // "wifiSwitchOn"
QT_MOC_LITERAL(19, 269, 11), // "bleSwitchOn"
QT_MOC_LITERAL(20, 281, 13), // "wifiConnected"
QT_MOC_LITERAL(21, 295, 12), // "bleConnected"
QT_MOC_LITERAL(22, 308, 13), // "connectedSSID"
QT_MOC_LITERAL(23, 322, 12) // "connectedMAC"

    },
    "SerialHandler\0wifiListChanged\0\0"
    "bleListChanged\0wifiSwitchOnChanged\0"
    "bleSwitchOnChanged\0wifiConnectedChanged\0"
    "bleConnectedChanged\0connectedSSIDChanged\0"
    "connectedMACChanged\0wifiPasswordError\0"
    "callRequested\0smsRequested\0readSerial\0"
    "sendCommand\0cmd\0wifiList\0bleList\0"
    "wifiSwitchOn\0bleSwitchOn\0wifiConnected\0"
    "bleConnected\0connectedSSID\0connectedMAC"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SerialHandler[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       8,   94, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    0,   80,    2, 0x06 /* Public */,
       4,    0,   81,    2, 0x06 /* Public */,
       5,    0,   82,    2, 0x06 /* Public */,
       6,    0,   83,    2, 0x06 /* Public */,
       7,    0,   84,    2, 0x06 /* Public */,
       8,    0,   85,    2, 0x06 /* Public */,
       9,    0,   86,    2, 0x06 /* Public */,
      10,    0,   87,    2, 0x06 /* Public */,
      11,    0,   88,    2, 0x06 /* Public */,
      12,    0,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,   90,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      14,    1,   91,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,   15,

 // properties: name, type, flags
      16, QMetaType::QStringList, 0x00495001,
      17, QMetaType::QStringList, 0x00495001,
      18, QMetaType::Bool, 0x00495103,
      19, QMetaType::Bool, 0x00495103,
      20, QMetaType::Bool, 0x00495001,
      21, QMetaType::Bool, 0x00495001,
      22, QMetaType::QString, 0x00495001,
      23, QMetaType::QString, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,

       0        // eod
};

void SerialHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SerialHandler *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->wifiListChanged(); break;
        case 1: _t->bleListChanged(); break;
        case 2: _t->wifiSwitchOnChanged(); break;
        case 3: _t->bleSwitchOnChanged(); break;
        case 4: _t->wifiConnectedChanged(); break;
        case 5: _t->bleConnectedChanged(); break;
        case 6: _t->connectedSSIDChanged(); break;
        case 7: _t->connectedMACChanged(); break;
        case 8: _t->wifiPasswordError(); break;
        case 9: _t->callRequested(); break;
        case 10: _t->smsRequested(); break;
        case 11: _t->readSerial(); break;
        case 12: _t->sendCommand((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SerialHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialHandler::wifiListChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SerialHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialHandler::bleListChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SerialHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialHandler::wifiSwitchOnChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SerialHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialHandler::bleSwitchOnChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SerialHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialHandler::wifiConnectedChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (SerialHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialHandler::bleConnectedChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (SerialHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialHandler::connectedSSIDChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (SerialHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialHandler::connectedMACChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (SerialHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialHandler::wifiPasswordError)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (SerialHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialHandler::callRequested)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (SerialHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialHandler::smsRequested)) {
                *result = 10;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SerialHandler *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = _t->wifiList(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = _t->bleList(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->wifiSwitchOn(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->bleSwitchOn(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->wifiConnected(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->bleConnected(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->connectedSSID(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->connectedMAC(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<SerialHandler *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setWifiSwitchOn(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setBleSwitchOn(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject SerialHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_SerialHandler.data,
    qt_meta_data_SerialHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SerialHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SerialHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SerialHandler.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SerialHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void SerialHandler::wifiListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SerialHandler::bleListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SerialHandler::wifiSwitchOnChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void SerialHandler::bleSwitchOnChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void SerialHandler::wifiConnectedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void SerialHandler::bleConnectedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void SerialHandler::connectedSSIDChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void SerialHandler::connectedMACChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void SerialHandler::wifiPasswordError()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void SerialHandler::callRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void SerialHandler::smsRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
