/****************************************************************************
** Meta object code from reading C++ file 'templatecellwidget.h'
**
** Created: Sat Feb 27 15:11:28 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/titleblock/templatecellwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'templatecellwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TitleBlockTemplateCellWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   29,   29,   29, 0x05,
      53,   29,   29,   29, 0x05,

 // slots: signature, parameters, type, tag, flags
      96,   29,   29,   29, 0x0a,
     116,   29,   29,   29, 0x0a,
     138,   29,   29,   29, 0x0a,
     149,   29,   29,   29, 0x0a,
     160,   29,   29,   29, 0x0a,
     181,   29,   29,   29, 0x0a,
     193,   29,   29,   29, 0x0a,
     205,   29,   29,   29, 0x0a,
     221,   29,   29,   29, 0x0a,
     236,   29,   29,   29, 0x0a,
     249,   29,   29,   29, 0x0a,
     260,   29,   29,   29, 0x0a,
     307,   29,   29,   29, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_TitleBlockTemplateCellWidget[] = {
    "TitleBlockTemplateCellWidget\0\0"
    "logoEditionRequested()\0"
    "cellModified(ModifyTitleBlockCellCommand*)\0"
    "updateFormType(int)\0edit(TitleBlockCell*)\0"
    "editType()\0editName()\0editLabelDisplayed()\0"
    "editLabel()\0editValue()\0editAlignment()\0"
    "editFontSize()\0editAdjust()\0editLogo()\0"
    "updateLogosComboBox(const TitleBlockTemplate*)\0"
    "setReadOnly(bool)\0"
};

void TitleBlockTemplateCellWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TitleBlockTemplateCellWidget *_t = static_cast<TitleBlockTemplateCellWidget *>(_o);
        switch (_id) {
        case 0: _t->logoEditionRequested(); break;
        case 1: _t->cellModified((*reinterpret_cast< ModifyTitleBlockCellCommand*(*)>(_a[1]))); break;
        case 2: _t->updateFormType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->edit((*reinterpret_cast< TitleBlockCell*(*)>(_a[1]))); break;
        case 4: _t->editType(); break;
        case 5: _t->editName(); break;
        case 6: _t->editLabelDisplayed(); break;
        case 7: _t->editLabel(); break;
        case 8: _t->editValue(); break;
        case 9: _t->editAlignment(); break;
        case 10: _t->editFontSize(); break;
        case 11: _t->editAdjust(); break;
        case 12: _t->editLogo(); break;
        case 13: _t->updateLogosComboBox((*reinterpret_cast< const TitleBlockTemplate*(*)>(_a[1]))); break;
        case 14: _t->setReadOnly((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TitleBlockTemplateCellWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TitleBlockTemplateCellWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TitleBlockTemplateCellWidget,
      qt_meta_data_TitleBlockTemplateCellWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TitleBlockTemplateCellWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TitleBlockTemplateCellWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TitleBlockTemplateCellWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TitleBlockTemplateCellWidget))
        return static_cast<void*>(const_cast< TitleBlockTemplateCellWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int TitleBlockTemplateCellWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void TitleBlockTemplateCellWidget::logoEditionRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void TitleBlockTemplateCellWidget::cellModified(ModifyTitleBlockCellCommand * _t1)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< TitleBlockTemplateCellWidget *>(this), &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
