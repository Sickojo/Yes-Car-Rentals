/****************************************************************************
** Meta object code from reading C++ file 'centraladmin_rentrequest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../YES-Car-Rentals/centraladmin_rentrequest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'centraladmin_rentrequest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CentralAdmin_RentRequest_t {
    QByteArrayData data[11];
    char stringdata0[206];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CentralAdmin_RentRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CentralAdmin_RentRequest_t qt_meta_stringdata_CentralAdmin_RentRequest = {
    {
QT_MOC_LITERAL(0, 0, 24), // "CentralAdmin_RentRequest"
QT_MOC_LITERAL(1, 25, 23), // "on_pushButtonnw_clicked"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 17), // "on_reject_clicked"
QT_MOC_LITERAL(4, 68, 17), // "on_accept_clicked"
QT_MOC_LITERAL(5, 86, 18), // "on_signout_clicked"
QT_MOC_LITERAL(6, 105, 21), // "on_HomeButton_clicked"
QT_MOC_LITERAL(7, 127, 18), // "on_AddCars_clicked"
QT_MOC_LITERAL(8, 146, 22), // "on_ViewClients_clicked"
QT_MOC_LITERAL(9, 169, 16), // "on_Close_clicked"
QT_MOC_LITERAL(10, 186, 19) // "on_EditCars_clicked"

    },
    "CentralAdmin_RentRequest\0"
    "on_pushButtonnw_clicked\0\0on_reject_clicked\0"
    "on_accept_clicked\0on_signout_clicked\0"
    "on_HomeButton_clicked\0on_AddCars_clicked\0"
    "on_ViewClients_clicked\0on_Close_clicked\0"
    "on_EditCars_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CentralAdmin_RentRequest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CentralAdmin_RentRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CentralAdmin_RentRequest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButtonnw_clicked(); break;
        case 1: _t->on_reject_clicked(); break;
        case 2: _t->on_accept_clicked(); break;
        case 3: _t->on_signout_clicked(); break;
        case 4: _t->on_HomeButton_clicked(); break;
        case 5: _t->on_AddCars_clicked(); break;
        case 6: _t->on_ViewClients_clicked(); break;
        case 7: _t->on_Close_clicked(); break;
        case 8: _t->on_EditCars_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CentralAdmin_RentRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CentralAdmin_RentRequest.data,
    qt_meta_data_CentralAdmin_RentRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CentralAdmin_RentRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CentralAdmin_RentRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CentralAdmin_RentRequest.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int CentralAdmin_RentRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
