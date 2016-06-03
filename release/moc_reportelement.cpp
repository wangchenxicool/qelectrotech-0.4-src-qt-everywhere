/****************************************************************************
** Meta object code from reading C++ file 'reportelement.h'
**
** Created: Sat Feb 27 15:12:00 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/qetgraphicsitem/reportelement.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'reportelement.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ReportElement[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   15,   14,   14, 0x08,
      39,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ReportElement[] = {
    "ReportElement\0\0label\0setLabel(QString)\0"
    "updateLabel()\0"
};

void ReportElement::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ReportElement *_t = static_cast<ReportElement *>(_o);
        switch (_id) {
        case 0: _t->setLabel((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->updateLabel(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ReportElement::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ReportElement::staticMetaObject = {
    { &CustomElement::staticMetaObject, qt_meta_stringdata_ReportElement,
      qt_meta_data_ReportElement, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ReportElement::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ReportElement::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ReportElement::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ReportElement))
        return static_cast<void*>(const_cast< ReportElement*>(this));
    return CustomElement::qt_metacast(_clname);
}

int ReportElement::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CustomElement::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
