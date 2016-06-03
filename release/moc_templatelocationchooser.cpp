/****************************************************************************
** Meta object code from reading C++ file 'templatelocationchooser.h'
**
** Created: Sat Feb 27 15:11:33 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/titleblock/templatelocationchooser.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'templatelocationchooser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TitleBlockTemplateLocationChooser[] = {

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
      35,   34,   34,   34, 0x09,
      55,   34,   34,   34, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_TitleBlockTemplateLocationChooser[] = {
    "TitleBlockTemplateLocationChooser\0\0"
    "updateCollections()\0updateTemplates()\0"
};

void TitleBlockTemplateLocationChooser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TitleBlockTemplateLocationChooser *_t = static_cast<TitleBlockTemplateLocationChooser *>(_o);
        switch (_id) {
        case 0: _t->updateCollections(); break;
        case 1: _t->updateTemplates(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData TitleBlockTemplateLocationChooser::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TitleBlockTemplateLocationChooser::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TitleBlockTemplateLocationChooser,
      qt_meta_data_TitleBlockTemplateLocationChooser, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TitleBlockTemplateLocationChooser::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TitleBlockTemplateLocationChooser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TitleBlockTemplateLocationChooser::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TitleBlockTemplateLocationChooser))
        return static_cast<void*>(const_cast< TitleBlockTemplateLocationChooser*>(this));
    return QWidget::qt_metacast(_clname);
}

int TitleBlockTemplateLocationChooser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
