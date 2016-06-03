/****************************************************************************
** Meta object code from reading C++ file 'partline.h'
**
** Created: Sat Feb 27 15:12:14 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/editor/graphicspart/partline.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'partline.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PartLine[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       6,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      17,    9, 0x1a095103,
      20,    9, 0x1a095103,
      36,   23, 0x0009500b,
      41,   23, 0x0009500b,
      52,   46, ((uint)QMetaType::QReal << 24) | 0x00095003,
      60,   46, ((uint)QMetaType::QReal << 24) | 0x00095003,

       0        // eod
};

static const char qt_meta_stringdata_PartLine[] = {
    "PartLine\0QPointF\0p1\0p2\0Qet::EndType\0"
    "end1\0end2\0qreal\0length1\0length2\0"
};

void PartLine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

#ifdef Q_NO_DATA_RELOCATION
static const QMetaObjectAccessor qt_meta_extradata_PartLine[] = {
        Qet::getStaticMetaObject,
#else
static const QMetaObject *qt_meta_extradata_PartLine[] = {
        &Qet::staticMetaObject,
#endif //Q_NO_DATA_RELOCATION
    0
};

const QMetaObjectExtraData PartLine::staticMetaObjectExtraData = {
    qt_meta_extradata_PartLine,  qt_static_metacall 
};

const QMetaObject PartLine::staticMetaObject = {
    { &CustomElementGraphicPart::staticMetaObject, qt_meta_stringdata_PartLine,
      qt_meta_data_PartLine, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PartLine::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PartLine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PartLine::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PartLine))
        return static_cast<void*>(const_cast< PartLine*>(this));
    return CustomElementGraphicPart::qt_metacast(_clname);
}

int PartLine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CustomElementGraphicPart::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPointF*>(_v) = p1(); break;
        case 1: *reinterpret_cast< QPointF*>(_v) = p2(); break;
        case 2: *reinterpret_cast< Qet::EndType*>(_v) = firstEndType(); break;
        case 3: *reinterpret_cast< Qet::EndType*>(_v) = secondEndType(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = firstEndLength(); break;
        case 5: *reinterpret_cast< qreal*>(_v) = secondEndLength(); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setP1(*reinterpret_cast< QPointF*>(_v)); break;
        case 1: setP2(*reinterpret_cast< QPointF*>(_v)); break;
        case 2: setFirstEndType(*reinterpret_cast< Qet::EndType*>(_v)); break;
        case 3: setSecondEndType(*reinterpret_cast< Qet::EndType*>(_v)); break;
        case 4: setFirstEndLength(*reinterpret_cast< qreal*>(_v)); break;
        case 5: setSecondEndLength(*reinterpret_cast< qreal*>(_v)); break;
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
