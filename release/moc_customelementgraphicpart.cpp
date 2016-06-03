/****************************************************************************
** Meta object code from reading C++ file 'customelementgraphicpart.h'
**
** Created: Sat Feb 27 15:12:08 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/editor/graphicspart/customelementgraphicpart.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'customelementgraphicpart.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CustomElementGraphicPart[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       5,   14, // properties
       4,   29, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      35,   25, 0x0009500b,
      57,   46, 0x0009500b,
      77,   69, 0x0009510b,
      91,   85, 0x0009510b,
     102,   97, 0x01095003,

 // enums: name, flags, count, data
      25, 0x0,    4,   45,
      46, 0x0,    5,   53,
      69, 0x0,    6,   63,
      85, 0x0,    5,   75,

 // enum data: key, value
     112, uint(CustomElementGraphicPart::NormalStyle),
     124, uint(CustomElementGraphicPart::DashedStyle),
     136, uint(CustomElementGraphicPart::DottedStyle),
     148, uint(CustomElementGraphicPart::DashdottedStyle),
     164, uint(CustomElementGraphicPart::NoneWeight),
     175, uint(CustomElementGraphicPart::ThinWeight),
     186, uint(CustomElementGraphicPart::NormalWeight),
     199, uint(CustomElementGraphicPart::UltraWeight),
     211, uint(CustomElementGraphicPart::BigWeight),
     221, uint(CustomElementGraphicPart::NoneFilling),
     233, uint(CustomElementGraphicPart::BlackFilling),
     246, uint(CustomElementGraphicPart::WhiteFilling),
     259, uint(CustomElementGraphicPart::GreenFilling),
     272, uint(CustomElementGraphicPart::RedFilling),
     283, uint(CustomElementGraphicPart::BlueFilling),
     295, uint(CustomElementGraphicPart::BlackColor),
     306, uint(CustomElementGraphicPart::WhiteColor),
     317, uint(CustomElementGraphicPart::GreenColor),
     328, uint(CustomElementGraphicPart::RedColor),
     337, uint(CustomElementGraphicPart::BlueColor),

       0        // eod
};

static const char qt_meta_stringdata_CustomElementGraphicPart[] = {
    "CustomElementGraphicPart\0LineStyle\0"
    "line_style\0LineWeight\0line_weight\0"
    "Filling\0filling\0Color\0color\0bool\0"
    "antialias\0NormalStyle\0DashedStyle\0"
    "DottedStyle\0DashdottedStyle\0NoneWeight\0"
    "ThinWeight\0NormalWeight\0UltraWeight\0"
    "BigWeight\0NoneFilling\0BlackFilling\0"
    "WhiteFilling\0GreenFilling\0RedFilling\0"
    "BlueFilling\0BlackColor\0WhiteColor\0"
    "GreenColor\0RedColor\0BlueColor\0"
};

void CustomElementGraphicPart::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData CustomElementGraphicPart::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CustomElementGraphicPart::staticMetaObject = {
    { &QGraphicsObject::staticMetaObject, qt_meta_stringdata_CustomElementGraphicPart,
      qt_meta_data_CustomElementGraphicPart, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CustomElementGraphicPart::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CustomElementGraphicPart::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CustomElementGraphicPart::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CustomElementGraphicPart))
        return static_cast<void*>(const_cast< CustomElementGraphicPart*>(this));
    if (!strcmp(_clname, "CustomElementPart"))
        return static_cast< CustomElementPart*>(const_cast< CustomElementGraphicPart*>(this));
    return QGraphicsObject::qt_metacast(_clname);
}

int CustomElementGraphicPart::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< LineStyle*>(_v) = lineStyle(); break;
        case 1: *reinterpret_cast< LineWeight*>(_v) = lineWeight(); break;
        case 2: *reinterpret_cast< Filling*>(_v) = filling(); break;
        case 3: *reinterpret_cast< Color*>(_v) = color(); break;
        case 4: *reinterpret_cast< bool*>(_v) = antialiased(); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setLineStyle(*reinterpret_cast< LineStyle*>(_v)); break;
        case 1: setLineWeight(*reinterpret_cast< LineWeight*>(_v)); break;
        case 2: setFilling(*reinterpret_cast< Filling*>(_v)); break;
        case 3: setColor(*reinterpret_cast< Color*>(_v)); break;
        case 4: setAntialiased(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
