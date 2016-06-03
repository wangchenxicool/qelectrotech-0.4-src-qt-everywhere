/****************************************************************************
** Meta object code from reading C++ file 'qet.h'
**
** Created: Sat Feb 27 15:09:51 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/qet.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qet.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Qet[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       2,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       4, 0x0,    5,   22,
      12, 0x0,    4,   32,

 // enum data: key, value
      24, uint(Qet::None),
      29, uint(Qet::Simple),
      36, uint(Qet::Triangle),
      45, uint(Qet::Circle),
      52, uint(Qet::Diamond),
      60, uint(Qet::North),
      66, uint(Qet::East),
      71, uint(Qet::South),
      77, uint(Qet::West),

       0        // eod
};

static const char qt_meta_stringdata_Qet[] = {
    "Qet\0EndType\0Orientation\0None\0Simple\0"
    "Triangle\0Circle\0Diamond\0North\0East\0"
    "South\0West\0"
};

void Qet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Qet::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Qet::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Qet,
      qt_meta_data_Qet, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Qet::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Qet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Qet::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Qet))
        return static_cast<void*>(const_cast< Qet*>(this));
    return QObject::qt_metacast(_clname);
}

int Qet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
