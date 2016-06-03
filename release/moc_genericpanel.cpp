/****************************************************************************
** Meta object code from reading C++ file 'genericpanel.h'
**
** Created: Sat Feb 27 15:09:34 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/genericpanel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'genericpanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GenericPanel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   13,   14,   13, 0x05,
      36,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      58,   13,   13,   13, 0x09,
     100,   98,   13,   13, 0x09,
     135,   98,   13,   13, 0x09,
     175,  172,   13,   13, 0x09,
     248,   98,  224,   13, 0x09,
     296,   98,   13,   13, 0x09,
     334,   98,   13,   13, 0x09,
     401,   98,   13,   13, 0x09,
     461,   13,   13,   13, 0x09,
     508,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_GenericPanel[] = {
    "GenericPanel\0\0bool\0firstActivated()\0"
    "panelContentChanged()\0"
    "projectInformationsChanged(QETProject*)\0"
    ",\0diagramAdded(QETProject*,Diagram*)\0"
    "diagramRemoved(QETProject*,Diagram*)\0"
    ",,\0projectDiagramsOrderChanged(QETProject*,int,int)\0"
    "QList<ElementsLocation>\0"
    "elementIntegrated(QETProject*,ElementsLocation)\0"
    "diagramTitleChanged(Diagram*,QString)\0"
    "templatesCollectionChanged(TitleBlockTemplatesCollection*,QString)\0"
    "diagramUsedTemplate(TitleBlockTemplatesCollection*,QString)\0"
    "elementsCollectionChanged(ElementsCollection*)\0"
    "emitFirstActivated()\0"
};

void GenericPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GenericPanel *_t = static_cast<GenericPanel *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->firstActivated();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: _t->panelContentChanged(); break;
        case 2: _t->projectInformationsChanged((*reinterpret_cast< QETProject*(*)>(_a[1]))); break;
        case 3: _t->diagramAdded((*reinterpret_cast< QETProject*(*)>(_a[1])),(*reinterpret_cast< Diagram*(*)>(_a[2]))); break;
        case 4: _t->diagramRemoved((*reinterpret_cast< QETProject*(*)>(_a[1])),(*reinterpret_cast< Diagram*(*)>(_a[2]))); break;
        case 5: _t->projectDiagramsOrderChanged((*reinterpret_cast< QETProject*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: { QList<ElementsLocation> _r = _t->elementIntegrated((*reinterpret_cast< QETProject*(*)>(_a[1])),(*reinterpret_cast< const ElementsLocation(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<ElementsLocation>*>(_a[0]) = _r; }  break;
        case 7: _t->diagramTitleChanged((*reinterpret_cast< Diagram*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: _t->templatesCollectionChanged((*reinterpret_cast< TitleBlockTemplatesCollection*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 9: _t->diagramUsedTemplate((*reinterpret_cast< TitleBlockTemplatesCollection*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 10: _t->elementsCollectionChanged((*reinterpret_cast< ElementsCollection*(*)>(_a[1]))); break;
        case 11: _t->emitFirstActivated(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GenericPanel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GenericPanel::staticMetaObject = {
    { &QTreeWidget::staticMetaObject, qt_meta_stringdata_GenericPanel,
      qt_meta_data_GenericPanel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GenericPanel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GenericPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GenericPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GenericPanel))
        return static_cast<void*>(const_cast< GenericPanel*>(this));
    return QTreeWidget::qt_metacast(_clname);
}

int GenericPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
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
bool GenericPanel::firstActivated()
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}

// SIGNAL 1
void GenericPanel::panelContentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
