/****************************************************************************
** Meta object code from reading C++ file 'exportpropertieswidget.h'
**
** Created: Sat Feb 27 15:09:29 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/exportpropertieswidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'exportpropertieswidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ExportPropertiesWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x05,
      40,   23,   23,   23, 0x05,
      62,   23,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
      78,   23,   23,   23, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ExportPropertiesWidget[] = {
    "ExportPropertiesWidget\0\0formatChanged()\0"
    "exportedAreaChanged()\0optionChanged()\0"
    "slot_chooseADirectory()\0"
};

void ExportPropertiesWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ExportPropertiesWidget *_t = static_cast<ExportPropertiesWidget *>(_o);
        switch (_id) {
        case 0: _t->formatChanged(); break;
        case 1: _t->exportedAreaChanged(); break;
        case 2: _t->optionChanged(); break;
        case 3: _t->slot_chooseADirectory(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ExportPropertiesWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ExportPropertiesWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ExportPropertiesWidget,
      qt_meta_data_ExportPropertiesWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ExportPropertiesWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ExportPropertiesWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ExportPropertiesWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ExportPropertiesWidget))
        return static_cast<void*>(const_cast< ExportPropertiesWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int ExportPropertiesWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void ExportPropertiesWidget::formatChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void ExportPropertiesWidget::exportedAreaChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void ExportPropertiesWidget::optionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
