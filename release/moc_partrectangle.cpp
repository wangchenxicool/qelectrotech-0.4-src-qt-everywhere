/****************************************************************************
** Meta object code from reading C++ file 'partrectangle.h'
**
** Created: Sat Feb 27 15:12:19 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/editor/graphicspart/partrectangle.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'partrectangle.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PartRectangle[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      22,   14, 0x1a095103,
      40,   34, ((uint)QMetaType::QReal << 24) | 0x00095103,
      46,   34, ((uint)QMetaType::QReal << 24) | 0x00095103,

       0        // eod
};

static const char qt_meta_stringdata_PartRectangle[] = {
    "PartRectangle\0QPointF\0rectTopLeft\0"
    "qreal\0width\0height\0"
};

void PartRectangle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PartRectangle::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PartRectangle::staticMetaObject = {
    { &CustomElementGraphicPart::staticMetaObject, qt_meta_stringdata_PartRectangle,
      qt_meta_data_PartRectangle, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PartRectangle::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PartRectangle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PartRectangle::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PartRectangle))
        return static_cast<void*>(const_cast< PartRectangle*>(this));
    return CustomElementGraphicPart::qt_metacast(_clname);
}

int PartRectangle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CustomElementGraphicPart::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPointF*>(_v) = rectTopLeft(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = width(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = height(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setRectTopLeft(*reinterpret_cast< QPointF*>(_v)); break;
        case 1: setWidth(*reinterpret_cast< qreal*>(_v)); break;
        case 2: setHeight(*reinterpret_cast< qreal*>(_v)); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
