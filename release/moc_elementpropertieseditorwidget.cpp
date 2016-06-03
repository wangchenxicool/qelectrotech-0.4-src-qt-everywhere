/****************************************************************************
** Meta object code from reading C++ file 'elementpropertieseditorwidget.h'
**
** Created: Sat Feb 27 15:12:05 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/editor/ui/elementpropertieseditorwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'elementpropertieseditorwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ElementPropertiesEditorWidget[] = {

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
      31,   30,   30,   30, 0x08,
      63,   57,   30,   30, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ElementPropertiesEditorWidget[] = {
    "ElementPropertiesEditorWidget\0\0"
    "on_m_buttonBox_accepted()\0index\0"
    "on_m_base_type_cb_currentIndexChanged(int)\0"
};

void ElementPropertiesEditorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ElementPropertiesEditorWidget *_t = static_cast<ElementPropertiesEditorWidget *>(_o);
        switch (_id) {
        case 0: _t->on_m_buttonBox_accepted(); break;
        case 1: _t->on_m_base_type_cb_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ElementPropertiesEditorWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ElementPropertiesEditorWidget::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ElementPropertiesEditorWidget,
      qt_meta_data_ElementPropertiesEditorWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ElementPropertiesEditorWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ElementPropertiesEditorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ElementPropertiesEditorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ElementPropertiesEditorWidget))
        return static_cast<void*>(const_cast< ElementPropertiesEditorWidget*>(this));
    return QDialog::qt_metacast(_clname);
}

int ElementPropertiesEditorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
