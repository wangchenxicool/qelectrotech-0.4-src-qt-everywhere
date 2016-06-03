/****************************************************************************
** Meta object code from reading C++ file 'selectautonumw.h'
**
** Created: Sat Feb 27 15:10:44 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/ui/selectautonumw.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'selectautonumw.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SelectAutonumW[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      31,   15,   15,   15, 0x08,
      55,   15,   15,   15, 0x08,
      82,   15,   15,   15, 0x08,
     121,   15,   15,   15, 0x08,
     139,   15,   15,   15, 0x28,
     153,   15,   15,   15, 0x08,
     176,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SelectAutonumW[] = {
    "SelectAutonumW\0\0applyPressed()\0"
    "on_add_button_clicked()\0"
    "on_remove_button_clicked()\0"
    "on_buttonBox_clicked(QAbstractButton*)\0"
    "applyEnable(bool)\0applyEnable()\0"
    "on_m_next_pb_clicked()\0"
    "on_m_previous_pb_clicked()\0"
};

void SelectAutonumW::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SelectAutonumW *_t = static_cast<SelectAutonumW *>(_o);
        switch (_id) {
        case 0: _t->applyPressed(); break;
        case 1: _t->on_add_button_clicked(); break;
        case 2: _t->on_remove_button_clicked(); break;
        case 3: _t->on_buttonBox_clicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 4: _t->applyEnable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->applyEnable(); break;
        case 6: _t->on_m_next_pb_clicked(); break;
        case 7: _t->on_m_previous_pb_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SelectAutonumW::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SelectAutonumW::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SelectAutonumW,
      qt_meta_data_SelectAutonumW, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SelectAutonumW::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SelectAutonumW::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SelectAutonumW::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SelectAutonumW))
        return static_cast<void*>(const_cast< SelectAutonumW*>(this));
    return QWidget::qt_metacast(_clname);
}

int SelectAutonumW::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void SelectAutonumW::applyPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
