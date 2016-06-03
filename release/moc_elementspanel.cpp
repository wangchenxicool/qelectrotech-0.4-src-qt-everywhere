/****************************************************************************
** Meta object code from reading C++ file 'elementspanel.h'
**
** Created: Sat Feb 27 15:09:22 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/elementspanel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'elementspanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ElementsPanel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,
      46,   14,   14,   14, 0x05,
      74,   14,   14,   14, 0x05,
     120,  117,   14,   14, 0x05,
     199,   14,   14,   14, 0x05,
     256,   14,   14,   14, 0x05,
     278,   14,   14,   14, 0x05,
     298,  296,   14,   14, 0x05,
     325,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     343,  296,   14,   14, 0x0a,
     382,   14,   14,   14, 0x0a,
     395,   14,   14,   14, 0x2a,
     404,  296,   14,   14, 0x0a,
     435,   14,   14,   14, 0x2a,
     451,   14,   14,   14, 0x0a,
     481,   14,   14,   14, 0x0a,
     516,   14,  511,   14, 0x0a,
     550,   14,   14,   14, 0x0a,
     568,   14,   14,   14, 0x0a,
     612,   14,   14,   14, 0x0a,
     662,   14,   14,   14, 0x0a,
     685,  117,   14,   14, 0x0a,
     752,  296,   14,   14, 0x2a,
     807,   14,   14,   14, 0x2a,
     847,   14,   14,   14, 0x09,
     865,   14,   14,   14, 0x09,
     910,  296,  886,   14, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ElementsPanel[] = {
    "ElementsPanel\0\0requestForProject(QETProject*)\0"
    "requestForDiagram(Diagram*)\0"
    "requestForCollectionItem(ElementsLocation)\0"
    ",,\0"
    "requestForMoveElements(ElementsCollectionItem*,ElementsCollectionItem*"
    ",QPoint)\0"
    "requestForTitleBlockTemplate(TitleBlockTemplateLocation)\0"
    "readingAboutToBegin()\0readingFinished()\0"
    ",\0loadingProgressed(int,int)\0"
    "loadingFinished()\0"
    "slot_doubleClick(QTreeWidgetItem*,int)\0"
    "reload(bool)\0reload()\0"
    "filter(QString,QET::Filtering)\0"
    "filter(QString)\0projectWasOpened(QETProject*)\0"
    "projectWasClosed(QETProject*)\0bool\0"
    "scrollToElement(ElementsLocation)\0"
    "buildFilterList()\0"
    "applyCurrentFilter(QList<QTreeWidgetItem*>)\0"
    "ensureHierarchyIsVisible(QList<QTreeWidgetItem*>)\0"
    "scrollToSelectedItem()\0"
    "highlightItems(QList<QTreeWidgetItem*>,const QObject*,const char*)\0"
    "highlightItems(QList<QTreeWidgetItem*>,const QObject*)\0"
    "highlightItems(QList<QTreeWidgetItem*>)\0"
    "firstActivation()\0panelContentChange()\0"
    "QList<ElementsLocation>\0"
    "elementIntegrated(QETProject*,ElementsLocation)\0"
};

void ElementsPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ElementsPanel *_t = static_cast<ElementsPanel *>(_o);
        switch (_id) {
        case 0: _t->requestForProject((*reinterpret_cast< QETProject*(*)>(_a[1]))); break;
        case 1: _t->requestForDiagram((*reinterpret_cast< Diagram*(*)>(_a[1]))); break;
        case 2: _t->requestForCollectionItem((*reinterpret_cast< const ElementsLocation(*)>(_a[1]))); break;
        case 3: _t->requestForMoveElements((*reinterpret_cast< ElementsCollectionItem*(*)>(_a[1])),(*reinterpret_cast< ElementsCollectionItem*(*)>(_a[2])),(*reinterpret_cast< QPoint(*)>(_a[3]))); break;
        case 4: _t->requestForTitleBlockTemplate((*reinterpret_cast< const TitleBlockTemplateLocation(*)>(_a[1]))); break;
        case 5: _t->readingAboutToBegin(); break;
        case 6: _t->readingFinished(); break;
        case 7: _t->loadingProgressed((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->loadingFinished(); break;
        case 9: _t->slot_doubleClick((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->reload((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->reload(); break;
        case 12: _t->filter((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QET::Filtering(*)>(_a[2]))); break;
        case 13: _t->filter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->projectWasOpened((*reinterpret_cast< QETProject*(*)>(_a[1]))); break;
        case 15: _t->projectWasClosed((*reinterpret_cast< QETProject*(*)>(_a[1]))); break;
        case 16: { bool _r = _t->scrollToElement((*reinterpret_cast< const ElementsLocation(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: _t->buildFilterList(); break;
        case 18: _t->applyCurrentFilter((*reinterpret_cast< const QList<QTreeWidgetItem*>(*)>(_a[1]))); break;
        case 19: _t->ensureHierarchyIsVisible((*reinterpret_cast< const QList<QTreeWidgetItem*>(*)>(_a[1]))); break;
        case 20: _t->scrollToSelectedItem(); break;
        case 21: _t->highlightItems((*reinterpret_cast< const QList<QTreeWidgetItem*>(*)>(_a[1])),(*reinterpret_cast< const QObject*(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3]))); break;
        case 22: _t->highlightItems((*reinterpret_cast< const QList<QTreeWidgetItem*>(*)>(_a[1])),(*reinterpret_cast< const QObject*(*)>(_a[2]))); break;
        case 23: _t->highlightItems((*reinterpret_cast< const QList<QTreeWidgetItem*>(*)>(_a[1]))); break;
        case 24: _t->firstActivation(); break;
        case 25: _t->panelContentChange(); break;
        case 26: { QList<ElementsLocation> _r = _t->elementIntegrated((*reinterpret_cast< QETProject*(*)>(_a[1])),(*reinterpret_cast< const ElementsLocation(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<ElementsLocation>*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ElementsPanel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ElementsPanel::staticMetaObject = {
    { &GenericPanel::staticMetaObject, qt_meta_stringdata_ElementsPanel,
      qt_meta_data_ElementsPanel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ElementsPanel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ElementsPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ElementsPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ElementsPanel))
        return static_cast<void*>(const_cast< ElementsPanel*>(this));
    return GenericPanel::qt_metacast(_clname);
}

int ElementsPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GenericPanel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
    return _id;
}

// SIGNAL 0
void ElementsPanel::requestForProject(QETProject * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ElementsPanel::requestForDiagram(Diagram * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ElementsPanel::requestForCollectionItem(const ElementsLocation & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ElementsPanel::requestForMoveElements(ElementsCollectionItem * _t1, ElementsCollectionItem * _t2, QPoint _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ElementsPanel::requestForTitleBlockTemplate(const TitleBlockTemplateLocation & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ElementsPanel::readingAboutToBegin()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void ElementsPanel::readingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void ElementsPanel::loadingProgressed(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void ElementsPanel::loadingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}
QT_END_MOC_NAMESPACE
