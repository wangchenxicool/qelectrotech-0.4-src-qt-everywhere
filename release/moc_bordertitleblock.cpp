/****************************************************************************
** Meta object code from reading C++ file 'bordertitleblock.h'
**
** Created: Sat Feb 27 15:08:49 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/bordertitleblock.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bordertitleblock.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BorderTitleBlock[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      40,   18,   17,   17, 0x05,
      69,   17,   17,   17, 0x05,
      86,   17,   17,   17, 0x05,
     115,   17,   17,   17, 0x05,
     131,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
     163,   17,   17,   17, 0x0a,
     200,  198,   17,   17, 0x0a,
     261,   17,   17,   17, 0x2a,
     296,   17,   17,   17, 0x0a,
     320,   17,   17,   17, 0x0a,
     341,   17,   17,   17, 0x0a,
     359,   17,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_BorderTitleBlock[] = {
    "BorderTitleBlock\0\0old_border,new_border\0"
    "borderChanged(QRectF,QRectF)\0"
    "displayChanged()\0diagramTitleChanged(QString)\0"
    "needFolioData()\0needTitleBlockTemplate(QString)\0"
    "titleBlockTemplateChanged(QString)\0,\0"
    "titleBlockTemplateRemoved(QString,const TitleBlockTemplate*)\0"
    "titleBlockTemplateRemoved(QString)\0"
    "displayTitleBlock(bool)\0displayColumns(bool)\0"
    "displayRows(bool)\0displayBorder(bool)\0"
};

void BorderTitleBlock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BorderTitleBlock *_t = static_cast<BorderTitleBlock *>(_o);
        switch (_id) {
        case 0: _t->borderChanged((*reinterpret_cast< QRectF(*)>(_a[1])),(*reinterpret_cast< QRectF(*)>(_a[2]))); break;
        case 1: _t->displayChanged(); break;
        case 2: _t->diagramTitleChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->needFolioData(); break;
        case 4: _t->needTitleBlockTemplate((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->titleBlockTemplateChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->titleBlockTemplateRemoved((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const TitleBlockTemplate*(*)>(_a[2]))); break;
        case 7: _t->titleBlockTemplateRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->displayTitleBlock((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->displayColumns((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->displayRows((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->displayBorder((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BorderTitleBlock::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BorderTitleBlock::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_BorderTitleBlock,
      qt_meta_data_BorderTitleBlock, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BorderTitleBlock::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BorderTitleBlock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BorderTitleBlock::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BorderTitleBlock))
        return static_cast<void*>(const_cast< BorderTitleBlock*>(this));
    return QObject::qt_metacast(_clname);
}

int BorderTitleBlock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void BorderTitleBlock::borderChanged(QRectF _t1, QRectF _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BorderTitleBlock::displayChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void BorderTitleBlock::diagramTitleChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void BorderTitleBlock::needFolioData()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void BorderTitleBlock::needTitleBlockTemplate(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
