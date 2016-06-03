/****************************************************************************
** Meta object code from reading C++ file 'numparteditorw.h'
**
** Created: Sat Feb 27 15:10:41 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/ui/numparteditorw.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'numparteditorw.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_NumPartEditorW[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      26,   15,   15,   15, 0x08,
      55,   15,   15,   15, 0x08,
      83,   15,   15,   15, 0x08,
     121,  118,   15,   15, 0x08,
     158,  156,   15,   15, 0x28,

       0        // eod
};

static const char qt_meta_stringdata_NumPartEditorW[] = {
    "NumPartEditorW\0\0changed()\0"
    "on_type_combo_activated(int)\0"
    "on_value_field_textEdited()\0"
    "on_increase_spinBox_valueChanged()\0"
    "t,\0setType(NumPartEditorW::type,bool)\0"
    "t\0setType(NumPartEditorW::type)\0"
};

void NumPartEditorW::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        NumPartEditorW *_t = static_cast<NumPartEditorW *>(_o);
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->on_type_combo_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_value_field_textEdited(); break;
        case 3: _t->on_increase_spinBox_valueChanged(); break;
        case 4: _t->setType((*reinterpret_cast< NumPartEditorW::type(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: _t->setType((*reinterpret_cast< NumPartEditorW::type(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData NumPartEditorW::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject NumPartEditorW::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_NumPartEditorW,
      qt_meta_data_NumPartEditorW, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NumPartEditorW::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NumPartEditorW::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NumPartEditorW::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NumPartEditorW))
        return static_cast<void*>(const_cast< NumPartEditorW*>(this));
    return QWidget::qt_metacast(_clname);
}

int NumPartEditorW::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void NumPartEditorW::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
