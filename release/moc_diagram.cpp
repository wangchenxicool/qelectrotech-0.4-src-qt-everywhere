/****************************************************************************
** Meta object code from reading C++ file 'diagram.h'
**
** Created: Sat Feb 27 15:08:54 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/diagram.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'diagram.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Diagram[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x05,
      31,    8,    8,    8, 0x05,
      41,    8,    8,    8, 0x05,
      82,   80,    8,    8, 0x05,
     120,    8,    8,    8, 0x05,
     158,    8,    8,    8, 0x05,
     196,    8,    8,    8, 0x05,
     229,    8,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
     253,    8,    8,    8, 0x0a,
     278,  275,    8,    8, 0x0a,
     331,    8,    8,    8, 0x0a,
     366,   80,    8,    8, 0x0a,
     409,    8,    8,    8, 0x2a,
     444,    8,    8,    8, 0x0a,
     475,    8,    8,    8, 0x0a,
     487,    8,    8,    8, 0x0a,
     501,    8,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Diagram[] = {
    "Diagram\0\0showDiagram(Diagram*)\0written()\0"
    "usedTitleBlockTemplateChanged(QString)\0"
    ",\0diagramTitleChanged(Diagram*,QString)\0"
    "findElementRequired(ElementsLocation)\0"
    "editElementRequired(ElementsLocation)\0"
    "reportPropertiesChanged(QString)\0"
    "XRefPropertiesChanged()\0titleChanged(QString)\0"
    ",,\0diagramTextChanged(DiagramTextItem*,QString,QString)\0"
    "titleBlockTemplateChanged(QString)\0"
    "titleBlockTemplateRemoved(QString,QString)\0"
    "titleBlockTemplateRemoved(QString)\0"
    "setTitleBlockTemplate(QString)\0"
    "selectAll()\0deselectAll()\0invertSelection()\0"
};

void Diagram::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Diagram *_t = static_cast<Diagram *>(_o);
        switch (_id) {
        case 0: _t->showDiagram((*reinterpret_cast< Diagram*(*)>(_a[1]))); break;
        case 1: _t->written(); break;
        case 2: _t->usedTitleBlockTemplateChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->diagramTitleChanged((*reinterpret_cast< Diagram*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->findElementRequired((*reinterpret_cast< const ElementsLocation(*)>(_a[1]))); break;
        case 5: _t->editElementRequired((*reinterpret_cast< const ElementsLocation(*)>(_a[1]))); break;
        case 6: _t->reportPropertiesChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->XRefPropertiesChanged(); break;
        case 8: _t->titleChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->diagramTextChanged((*reinterpret_cast< DiagramTextItem*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 10: _t->titleBlockTemplateChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->titleBlockTemplateRemoved((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 12: _t->titleBlockTemplateRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->setTitleBlockTemplate((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->selectAll(); break;
        case 15: _t->deselectAll(); break;
        case 16: _t->invertSelection(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Diagram::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Diagram::staticMetaObject = {
    { &QGraphicsScene::staticMetaObject, qt_meta_stringdata_Diagram,
      qt_meta_data_Diagram, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Diagram::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Diagram::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Diagram::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Diagram))
        return static_cast<void*>(const_cast< Diagram*>(this));
    return QGraphicsScene::qt_metacast(_clname);
}

int Diagram::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsScene::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void Diagram::showDiagram(Diagram * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Diagram::written()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Diagram::usedTitleBlockTemplateChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Diagram::diagramTitleChanged(Diagram * _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Diagram::findElementRequired(const ElementsLocation & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Diagram::editElementRequired(const ElementsLocation & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Diagram::reportPropertiesChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Diagram::XRefPropertiesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}
QT_END_MOC_NAMESPACE
