/****************************************************************************
** Meta object code from reading C++ file 'elementscategorieslist.h'
**
** Created: Sat Feb 27 15:09:09 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/elementscategorieslist.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'elementscategorieslist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ElementsCategoriesList[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
      58,   23,   23,   23, 0x0a,
      69,   67,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ElementsCategoriesList[] = {
    "ElementsCategoriesList\0\0"
    "locationChanged(ElementsLocation)\0"
    "reload()\0,\0"
    "selectionChanged(QTreeWidgetItem*,QTreeWidgetItem*)\0"
};

void ElementsCategoriesList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ElementsCategoriesList *_t = static_cast<ElementsCategoriesList *>(_o);
        switch (_id) {
        case 0: _t->locationChanged((*reinterpret_cast< const ElementsLocation(*)>(_a[1]))); break;
        case 1: _t->reload(); break;
        case 2: _t->selectionChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ElementsCategoriesList::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ElementsCategoriesList::staticMetaObject = {
    { &GenericPanel::staticMetaObject, qt_meta_stringdata_ElementsCategoriesList,
      qt_meta_data_ElementsCategoriesList, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ElementsCategoriesList::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ElementsCategoriesList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ElementsCategoriesList::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ElementsCategoriesList))
        return static_cast<void*>(const_cast< ElementsCategoriesList*>(this));
    return GenericPanel::qt_metacast(_clname);
}

int ElementsCategoriesList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GenericPanel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void ElementsCategoriesList::locationChanged(const ElementsLocation & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
