/****************************************************************************
** Meta object code from reading C++ file 'helpercell.h'
**
** Created: Sat Feb 27 15:11:18 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/titleblock/helpercell.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'helpercell.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_HelperCell[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      46,   11,   11,   11, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_HelperCell[] = {
    "HelperCell\0\0contextMenuTriggered(HelperCell*)\0"
    "doubleClicked(HelperCell*)\0"
};

void HelperCell::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        HelperCell *_t = static_cast<HelperCell *>(_o);
        switch (_id) {
        case 0: _t->contextMenuTriggered((*reinterpret_cast< HelperCell*(*)>(_a[1]))); break;
        case 1: _t->doubleClicked((*reinterpret_cast< HelperCell*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData HelperCell::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject HelperCell::staticMetaObject = {
    { &QGraphicsObject::staticMetaObject, qt_meta_stringdata_HelperCell,
      qt_meta_data_HelperCell, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &HelperCell::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *HelperCell::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *HelperCell::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HelperCell))
        return static_cast<void*>(const_cast< HelperCell*>(this));
    if (!strcmp(_clname, "QGraphicsLayoutItem"))
        return static_cast< QGraphicsLayoutItem*>(const_cast< HelperCell*>(this));
    if (!strcmp(_clname, "com.trolltech.Qt.QGraphicsLayoutItem"))
        return static_cast< QGraphicsLayoutItem*>(const_cast< HelperCell*>(this));
    return QGraphicsObject::qt_metacast(_clname);
}

int HelperCell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void HelperCell::contextMenuTriggered(HelperCell * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void HelperCell::doubleClicked(HelperCell * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
