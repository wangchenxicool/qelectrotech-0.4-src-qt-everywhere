/****************************************************************************
** Meta object code from reading C++ file 'parttextfield.h'
**
** Created: Sat Feb 27 15:12:25 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/editor/graphicspart/parttextfield.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'parttextfield.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PartTextField[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       6,   39, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x0a,
      39,   14,   14,   14, 0x2a,
      60,   14,   14,   14, 0x0a,
      78,   14,   14,   14, 0x0a,
      93,   14,   14,   14, 0x0a,

 // properties: name, type, flags
     114,  106, 0x0a095003,
     123,  119, 0x02095103,
     134,  128, ((uint)QMetaType::QReal << 24) | 0x00095003,
     144,  128, ((uint)QMetaType::QReal << 24) | 0x00095003,
     164,  159, 0x01095003,
     171,  106, 0x0a095103,

       0        // eod
};

static const char qt_meta_stringdata_PartTextField[] = {
    "PartTextField\0\0adjustItemPosition(int)\0"
    "adjustItemPosition()\0setEditable(bool)\0"
    "startEdition()\0endEdition()\0QString\0"
    "text\0int\0size\0qreal\0real_size\0"
    "rotation_angle\0bool\0rotate\0tagg\0"
};

void PartTextField::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PartTextField *_t = static_cast<PartTextField *>(_o);
        switch (_id) {
        case 0: _t->adjustItemPosition((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->adjustItemPosition(); break;
        case 2: _t->setEditable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->startEdition(); break;
        case 4: _t->endEdition(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PartTextField::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PartTextField::staticMetaObject = {
    { &QGraphicsTextItem::staticMetaObject, qt_meta_stringdata_PartTextField,
      qt_meta_data_PartTextField, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PartTextField::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PartTextField::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PartTextField::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PartTextField))
        return static_cast<void*>(const_cast< PartTextField*>(this));
    if (!strcmp(_clname, "CustomElementPart"))
        return static_cast< CustomElementPart*>(const_cast< PartTextField*>(this));
    return QGraphicsTextItem::qt_metacast(_clname);
}

int PartTextField::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsTextItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = toPlainText(); break;
        case 1: *reinterpret_cast< int*>(_v) = size(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = realSize(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = rotation(); break;
        case 4: *reinterpret_cast< bool*>(_v) = followParentRotations(); break;
        case 5: *reinterpret_cast< QString*>(_v) = tagg(); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setPlainText(*reinterpret_cast< QString*>(_v)); break;
        case 1: setSize(*reinterpret_cast< int*>(_v)); break;
        case 2: setRealSize(*reinterpret_cast< qreal*>(_v)); break;
        case 3: setRotationAngle(*reinterpret_cast< qreal*>(_v)); break;
        case 4: setFollowParentRotations(*reinterpret_cast< bool*>(_v)); break;
        case 5: setTagg(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
