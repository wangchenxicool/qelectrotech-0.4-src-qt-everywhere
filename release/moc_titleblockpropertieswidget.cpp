/****************************************************************************
** Meta object code from reading C++ file 'titleblockpropertieswidget.h'
**
** Created: Sat Feb 27 15:10:44 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/ui/titleblockpropertieswidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'titleblockpropertieswidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TitleBlockPropertiesWidget[] = {

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
      30,   28,   27,   27, 0x05,

 // slots: signature, parameters, type, tag, flags
      67,   27,   27,   27, 0x08,
      99,   27,   27,   27, 0x08,
     136,   27,   27,   27, 0x08,
     162,  157,   27,   27, 0x08,
     203,   27,   27,   27, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TitleBlockPropertiesWidget[] = {
    "TitleBlockPropertiesWidget\0\0,\0"
    "editTitleBlockTemplate(QString,bool)\0"
    "editCurrentTitleBlockTemplate()\0"
    "duplicateCurrentTitleBlockTemplate()\0"
    "updateTemplateList()\0name\0"
    "changeCurrentTitleBlockTemplate(QString)\0"
    "on_m_date_now_pb_clicked()\0"
};

void TitleBlockPropertiesWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TitleBlockPropertiesWidget *_t = static_cast<TitleBlockPropertiesWidget *>(_o);
        switch (_id) {
        case 0: _t->editTitleBlockTemplate((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->editCurrentTitleBlockTemplate(); break;
        case 2: _t->duplicateCurrentTitleBlockTemplate(); break;
        case 3: _t->updateTemplateList(); break;
        case 4: _t->changeCurrentTitleBlockTemplate((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->on_m_date_now_pb_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TitleBlockPropertiesWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TitleBlockPropertiesWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TitleBlockPropertiesWidget,
      qt_meta_data_TitleBlockPropertiesWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TitleBlockPropertiesWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TitleBlockPropertiesWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TitleBlockPropertiesWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TitleBlockPropertiesWidget))
        return static_cast<void*>(const_cast< TitleBlockPropertiesWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int TitleBlockPropertiesWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void TitleBlockPropertiesWidget::editTitleBlockTemplate(const QString & _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
