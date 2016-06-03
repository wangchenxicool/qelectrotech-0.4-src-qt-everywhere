/****************************************************************************
** Meta object code from reading C++ file 'conductorpropertieswidget.h'
**
** Created: Sat Feb 27 15:10:28 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/ui/conductorpropertieswidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'conductorpropertieswidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ConductorPropertiesWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      29,   27,   26,   26, 0x0a,
      49,   26,   26,   26, 0x2a,
      73,   65,   26,   26, 0x08,
     101,   65,   26,   26, 0x08,
     131,   26,   26,   26, 0x08,
     161,  155,   26,   26, 0x08,
     184,   26,   26,   26, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ConductorPropertiesWidget[] = {
    "ConductorPropertiesWidget\0\0b\0"
    "updatePreview(bool)\0updatePreview()\0"
    "checked\0on_m_earth_cb_toggled(bool)\0"
    "on_m_neutral_cb_toggled(bool)\0"
    "on_m_color_pb_clicked()\0color\0"
    "setColorButton(QColor)\0"
    "on_m_update_preview_pb_clicked()\0"
};

void ConductorPropertiesWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ConductorPropertiesWidget *_t = static_cast<ConductorPropertiesWidget *>(_o);
        switch (_id) {
        case 0: _t->updatePreview((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->updatePreview(); break;
        case 2: _t->on_m_earth_cb_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_m_neutral_cb_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_m_color_pb_clicked(); break;
        case 5: _t->setColorButton((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 6: _t->on_m_update_preview_pb_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ConductorPropertiesWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ConductorPropertiesWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ConductorPropertiesWidget,
      qt_meta_data_ConductorPropertiesWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ConductorPropertiesWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ConductorPropertiesWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ConductorPropertiesWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ConductorPropertiesWidget))
        return static_cast<void*>(const_cast< ConductorPropertiesWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int ConductorPropertiesWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
