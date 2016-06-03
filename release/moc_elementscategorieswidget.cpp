/****************************************************************************
** Meta object code from reading C++ file 'elementscategorieswidget.h'
**
** Created: Sat Feb 27 15:09:11 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/elementscategorieswidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'elementscategorieswidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ElementsCategoriesWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      26,   25,   25,   25, 0x0a,
      40,   25,   25,   25, 0x0a,
      55,   25,   25,   25, 0x0a,
      72,   25,   25,   25, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ElementsCategoriesWidget[] = {
    "ElementsCategoriesWidget\0\0newCategory()\0"
    "editCategory()\0removeCategory()\0"
    "updateButtons()\0"
};

void ElementsCategoriesWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ElementsCategoriesWidget *_t = static_cast<ElementsCategoriesWidget *>(_o);
        switch (_id) {
        case 0: _t->newCategory(); break;
        case 1: _t->editCategory(); break;
        case 2: _t->removeCategory(); break;
        case 3: _t->updateButtons(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ElementsCategoriesWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ElementsCategoriesWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ElementsCategoriesWidget,
      qt_meta_data_ElementsCategoriesWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ElementsCategoriesWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ElementsCategoriesWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ElementsCategoriesWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ElementsCategoriesWidget))
        return static_cast<void*>(const_cast< ElementsCategoriesWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int ElementsCategoriesWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
