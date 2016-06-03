/****************************************************************************
** Meta object code from reading C++ file 'elementview.h'
**
** Created: Sat Feb 27 15:10:55 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/editor/elementview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'elementview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ElementView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      27,   12,   12,   12, 0x0a,
      50,   12,   12,   12, 0x0a,
      69,   12,   12,   12, 0x0a,
      78,   12,   12,   12, 0x0a,
      88,   12,   12,   12, 0x0a,
     103,   12,   12,   12, 0x0a,
     119,   12,   12,   12, 0x0a,
     129,   12,   12,   12, 0x0a,
     141,   12,   12,   12, 0x0a,
     159,   12,   12,   12, 0x0a,
     176,   12,   12,   12, 0x0a,
     182,   12,   12,   12, 0x0a,
     189,   12,   12,   12, 0x0a,
     197,   12,   12,   12, 0x0a,
     211,   12,   12,   12, 0x08,
     247,   12,  232,   12, 0x08,
     272,   12,  232,   12, 0x08,
     289,  287,  232,   12, 0x08,
     317,   12,  232,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ElementView[] = {
    "ElementView\0\0modeChanged()\0"
    "setVisualisationMode()\0setSelectionMode()\0"
    "zoomIn()\0zoomOut()\0zoomInSlowly()\0"
    "zoomOutSlowly()\0zoomFit()\0zoomReset()\0"
    "adjustSceneRect()\0resetSceneRect()\0"
    "cut()\0copy()\0paste()\0pasteInArea()\0"
    "getPasteArea(QRectF)\0ElementContent\0"
    "pasteAreaDefined(QRectF)\0paste(QPointF)\0"
    ",\0paste(QDomDocument,QPointF)\0"
    "pasteWithOffset(QDomDocument)\0"
};

void ElementView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ElementView *_t = static_cast<ElementView *>(_o);
        switch (_id) {
        case 0: _t->modeChanged(); break;
        case 1: _t->setVisualisationMode(); break;
        case 2: _t->setSelectionMode(); break;
        case 3: _t->zoomIn(); break;
        case 4: _t->zoomOut(); break;
        case 5: _t->zoomInSlowly(); break;
        case 6: _t->zoomOutSlowly(); break;
        case 7: _t->zoomFit(); break;
        case 8: _t->zoomReset(); break;
        case 9: _t->adjustSceneRect(); break;
        case 10: _t->resetSceneRect(); break;
        case 11: _t->cut(); break;
        case 12: _t->copy(); break;
        case 13: _t->paste(); break;
        case 14: _t->pasteInArea(); break;
        case 15: _t->getPasteArea((*reinterpret_cast< const QRectF(*)>(_a[1]))); break;
        case 16: { ElementContent _r = _t->pasteAreaDefined((*reinterpret_cast< const QRectF(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ElementContent*>(_a[0]) = _r; }  break;
        case 17: { ElementContent _r = _t->paste((*reinterpret_cast< const QPointF(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ElementContent*>(_a[0]) = _r; }  break;
        case 18: { ElementContent _r = _t->paste((*reinterpret_cast< const QDomDocument(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< ElementContent*>(_a[0]) = _r; }  break;
        case 19: { ElementContent _r = _t->pasteWithOffset((*reinterpret_cast< const QDomDocument(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ElementContent*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ElementView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ElementView::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_ElementView,
      qt_meta_data_ElementView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ElementView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ElementView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ElementView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ElementView))
        return static_cast<void*>(const_cast< ElementView*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int ElementView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void ElementView::modeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
