/****************************************************************************
** Meta object code from reading C++ file 'diagramview.h'
**
** Created: Sat Feb 27 15:09:02 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/diagramview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'diagramview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DiagramView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      41,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,
      32,   12,   12,   12, 0x05,
      48,   46,   12,   12, 0x05,
      83,   12,   12,   12, 0x05,
     103,   12,   12,   12, 0x05,
     167,   12,   12,   12, 0x05,
     205,   12,   12,   12, 0x05,
     243,   46,   12,   12, 0x05,
     280,   12,   12,   12, 0x05,
     292,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
     314,   12,   12,   12, 0x0a,
     330,   12,   12,   12, 0x0a,
     342,   12,   12,   12, 0x0a,
     357,   12,   12,   12, 0x0a,
     375,   12,   12,   12, 0x0a,
     393,   12,   12,   12, 0x0a,
     407,   12,   12,   12, 0x0a,
     430,   12,   12,   12, 0x0a,
     449,   12,   12,   12, 0x0a,
     458,   12,   12,   12, 0x0a,
     468,   12,   12,   12, 0x0a,
     483,   12,   12,   12, 0x0a,
     499,   12,   12,   12, 0x0a,
     509,   12,   12,   12, 0x0a,
     523,   12,   12,   12, 0x0a,
     535,   12,   12,   12, 0x0a,
     541,   12,   12,   12, 0x0a,
     548,   46,   12,   12, 0x0a,
     580,   12,   12,   12, 0x2a,
     595,   12,   12,   12, 0x2a,
     603,   12,   12,   12, 0x0a,
     615,   12,   12,   12, 0x0a,
     633,   12,   12,   12, 0x0a,
     653,   12,   12,   12, 0x0a,
     679,   12,   12,   12, 0x0a,
     708,   12,   12,   12, 0x0a,
     739,   12,   12,   12, 0x0a,
     757,   12,   12,   12, 0x08,
     777,   12,   12,   12, 0x08,
     834,   12,   12,   12, 0x08,
     853,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DiagramView[] = {
    "DiagramView\0\0selectionChanged()\0"
    "modeChanged()\0,\0titleChanged(DiagramView*,QString)\0"
    "aboutToAddElement()\0"
    "aboutToSetDroppedTitleBlockTemplate(TitleBlockTemplateLocation)\0"
    "findElementRequired(ElementsLocation)\0"
    "editElementRequired(ElementsLocation)\0"
    "editTitleBlockTemplate(QString,bool)\0"
    "itemAdded()\0showDiagram(Diagram*)\0"
    "selectNothing()\0selectAll()\0selectInvert()\0"
    "deleteSelection()\0rotateSelection()\0"
    "rotateTexts()\0setVisualisationMode()\0"
    "setSelectionMode()\0zoomIn()\0zoomOut()\0"
    "zoomInSlowly()\0zoomOutSlowly()\0zoomFit()\0"
    "zoomContent()\0zoomReset()\0cut()\0copy()\0"
    "paste(QPointF,QClipboard::Mode)\0"
    "paste(QPointF)\0paste()\0pasteHere()\0"
    "adjustSceneRect()\0updateWindowTitle()\0"
    "editSelectionProperties()\0"
    "editSelectedConductorColor()\0"
    "editConductorColor(Conductor*)\0"
    "resetConductors()\0addDroppedElement()\0"
    "setDroppedTitleBlockTemplate(TitleBlockTemplateLocation)\0"
    "adjustGridToZoom()\0applyReadOnly()\0"
};

void DiagramView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DiagramView *_t = static_cast<DiagramView *>(_o);
        switch (_id) {
        case 0: _t->selectionChanged(); break;
        case 1: _t->modeChanged(); break;
        case 2: _t->titleChanged((*reinterpret_cast< DiagramView*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->aboutToAddElement(); break;
        case 4: _t->aboutToSetDroppedTitleBlockTemplate((*reinterpret_cast< const TitleBlockTemplateLocation(*)>(_a[1]))); break;
        case 5: _t->findElementRequired((*reinterpret_cast< const ElementsLocation(*)>(_a[1]))); break;
        case 6: _t->editElementRequired((*reinterpret_cast< const ElementsLocation(*)>(_a[1]))); break;
        case 7: _t->editTitleBlockTemplate((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 8: _t->itemAdded(); break;
        case 9: _t->showDiagram((*reinterpret_cast< Diagram*(*)>(_a[1]))); break;
        case 10: _t->selectNothing(); break;
        case 11: _t->selectAll(); break;
        case 12: _t->selectInvert(); break;
        case 13: _t->deleteSelection(); break;
        case 14: _t->rotateSelection(); break;
        case 15: _t->rotateTexts(); break;
        case 16: _t->setVisualisationMode(); break;
        case 17: _t->setSelectionMode(); break;
        case 18: _t->zoomIn(); break;
        case 19: _t->zoomOut(); break;
        case 20: _t->zoomInSlowly(); break;
        case 21: _t->zoomOutSlowly(); break;
        case 22: _t->zoomFit(); break;
        case 23: _t->zoomContent(); break;
        case 24: _t->zoomReset(); break;
        case 25: _t->cut(); break;
        case 26: _t->copy(); break;
        case 27: _t->paste((*reinterpret_cast< const QPointF(*)>(_a[1])),(*reinterpret_cast< QClipboard::Mode(*)>(_a[2]))); break;
        case 28: _t->paste((*reinterpret_cast< const QPointF(*)>(_a[1]))); break;
        case 29: _t->paste(); break;
        case 30: _t->pasteHere(); break;
        case 31: _t->adjustSceneRect(); break;
        case 32: _t->updateWindowTitle(); break;
        case 33: _t->editSelectionProperties(); break;
        case 34: _t->editSelectedConductorColor(); break;
        case 35: _t->editConductorColor((*reinterpret_cast< Conductor*(*)>(_a[1]))); break;
        case 36: _t->resetConductors(); break;
        case 37: _t->addDroppedElement(); break;
        case 38: _t->setDroppedTitleBlockTemplate((*reinterpret_cast< const TitleBlockTemplateLocation(*)>(_a[1]))); break;
        case 39: _t->adjustGridToZoom(); break;
        case 40: _t->applyReadOnly(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DiagramView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DiagramView::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_DiagramView,
      qt_meta_data_DiagramView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DiagramView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DiagramView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DiagramView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DiagramView))
        return static_cast<void*>(const_cast< DiagramView*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int DiagramView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 41)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 41;
    }
    return _id;
}

// SIGNAL 0
void DiagramView::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void DiagramView::modeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void DiagramView::titleChanged(DiagramView * _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DiagramView::aboutToAddElement()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void DiagramView::aboutToSetDroppedTitleBlockTemplate(const TitleBlockTemplateLocation & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void DiagramView::findElementRequired(const ElementsLocation & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void DiagramView::editElementRequired(const ElementsLocation & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void DiagramView::editTitleBlockTemplate(const QString & _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void DiagramView::itemAdded()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}

// SIGNAL 9
void DiagramView::showDiagram(Diagram * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_END_MOC_NAMESPACE
