/****************************************************************************
** Meta object code from reading C++ file 'parttext.h'
**
** Created: Sat Feb 27 15:12:23 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/editor/graphicspart/parttext.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'parttext.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PartText[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       4,   39, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x0a,
      34,    9,    9,    9, 0x2a,
      55,    9,    9,    9, 0x0a,
      73,    9,    9,    9, 0x0a,
      88,    9,    9,    9, 0x0a,

 // properties: name, type, flags
     107,  101, ((uint)QMetaType::QReal << 24) | 0x00095103,
     112,  101, ((uint)QMetaType::QReal << 24) | 0x00095003,
     127,  122, 0x01095003,
     141,  133, 0x0a095003,

       0        // eod
};

static const char qt_meta_stringdata_PartText[] = {
    "PartText\0\0adjustItemPosition(int)\0"
    "adjustItemPosition()\0setEditable(bool)\0"
    "startEdition()\0endEdition()\0qreal\0"
    "size\0real_size\0bool\0color\0QString\0"
    "text\0"
};

void PartText::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PartText *_t = static_cast<PartText *>(_o);
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

const QMetaObjectExtraData PartText::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PartText::staticMetaObject = {
    { &QGraphicsTextItem::staticMetaObject, qt_meta_stringdata_PartText,
      qt_meta_data_PartText, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PartText::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PartText::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PartText::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PartText))
        return static_cast<void*>(const_cast< PartText*>(this));
    if (!strcmp(_clname, "CustomElementPart"))
        return static_cast< CustomElementPart*>(const_cast< PartText*>(this));
    return QGraphicsTextItem::qt_metacast(_clname);
}

int PartText::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 0: *reinterpret_cast< qreal*>(_v) = size(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = realSize(); break;
        case 2: *reinterpret_cast< bool*>(_v) = isBlack(); break;
        case 3: *reinterpret_cast< QString*>(_v) = toPlainText(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setSize(*reinterpret_cast< qreal*>(_v)); break;
        case 1: setRealSize(*reinterpret_cast< qreal*>(_v)); break;
        case 2: setBlack(*reinterpret_cast< bool*>(_v)); break;
        case 3: setPlainText(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
