/****************************************************************************
** Meta object code from reading C++ file 'xmlelementscollection.h'
**
** Created: Sat Feb 27 15:10:22 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/xmlelementscollection.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xmlelementscollection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_XmlElementsCollection[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
      33,   22,   22,   22, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_XmlElementsCollection[] = {
    "XmlElementsCollection\0\0written()\0"
    "componentWritten()\0"
};

void XmlElementsCollection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        XmlElementsCollection *_t = static_cast<XmlElementsCollection *>(_o);
        switch (_id) {
        case 0: _t->written(); break;
        case 1: _t->componentWritten(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData XmlElementsCollection::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XmlElementsCollection::staticMetaObject = {
    { &ElementsCollection::staticMetaObject, qt_meta_stringdata_XmlElementsCollection,
      qt_meta_data_XmlElementsCollection, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XmlElementsCollection::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XmlElementsCollection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XmlElementsCollection::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XmlElementsCollection))
        return static_cast<void*>(const_cast< XmlElementsCollection*>(this));
    return ElementsCollection::qt_metacast(_clname);
}

int XmlElementsCollection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ElementsCollection::qt_metacall(_c, _id, _a);
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
void XmlElementsCollection::written()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
