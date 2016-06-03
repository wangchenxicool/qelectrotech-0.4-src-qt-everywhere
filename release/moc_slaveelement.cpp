/****************************************************************************
** Meta object code from reading C++ file 'slaveelement.h'
**
** Created: Sat Feb 27 15:12:02 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/qetgraphicsitem/slaveelement.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'slaveelement.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SlaveElement[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SlaveElement[] = {
    "SlaveElement\0\0updateLabel()\0"
};

void SlaveElement::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SlaveElement *_t = static_cast<SlaveElement *>(_o);
        switch (_id) {
        case 0: _t->updateLabel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SlaveElement::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SlaveElement::staticMetaObject = {
    { &CustomElement::staticMetaObject, qt_meta_stringdata_SlaveElement,
      qt_meta_data_SlaveElement, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SlaveElement::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SlaveElement::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SlaveElement::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SlaveElement))
        return static_cast<void*>(const_cast< SlaveElement*>(this));
    return CustomElement::qt_metacast(_clname);
}

int SlaveElement::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CustomElement::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
