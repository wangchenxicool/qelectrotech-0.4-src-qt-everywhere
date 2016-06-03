/****************************************************************************
** Meta object code from reading C++ file 'templateview.h'
**
** Created: Sat Feb 27 15:11:41 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/titleblock/templateview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'templateview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TitleBlockTemplateView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      44,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x05,
      69,   23,   23,   23, 0x05,
     125,  123,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
     154,   23,   23,   23, 0x0a,
     197,   23,   23,   23, 0x0a,
     216,   23,   23,   23, 0x0a,
     225,   23,   23,   23, 0x0a,
     235,   23,   23,   23, 0x0a,
     245,   23,   23,   23, 0x0a,
     280,   23,  257,   23, 0x0a,
     286,   23,  257,   23, 0x0a,
     298,   23,  293,   23, 0x0a,
     331,   23,  309,   23, 0x0a,
     345,   23,   23,   23, 0x0a,
     353,   23,   23,   23, 0x0a,
     370,   23,   23,   23, 0x0a,
     384,   23,   23,   23, 0x0a,
     402,   23,   23,   23, 0x0a,
     417,   23,   23,   23, 0x0a,
     434,   23,   23,   23, 0x0a,
     448,   23,   23,   23, 0x0a,
     472,   23,   23,   23, 0x2a,
     485,   23,   23,   23, 0x0a,
     506,   23,   23,   23, 0x2a,
     516,   23,   23,   23, 0x0a,
     531,   23,   23,   23, 0x0a,
     543,   23,   23,   23, 0x0a,
     564,   23,   23,   23, 0x0a,
     584,   23,   23,   23, 0x0a,
     594,   23,   23,   23, 0x0a,
     615,   23,   23,   23, 0x0a,
     636,   23,   23,   23, 0x0a,
     651,   23,   23,   23, 0x0a,
     675,   23,   23,   23, 0x0a,
     702,   23,   23,   23, 0x0a,
     731,   23,   23,   23, 0x0a,
     749,   23,   23,   23, 0x09,
     774,   23,   23,   23, 0x29,
     795,   23,   23,   23, 0x09,
     818,   23,   23,   23, 0x29,
     837,   23,   23,   23, 0x09,
     861,   23,   23,   23, 0x09,
     888,   23,   23,   23, 0x08,
     927,   23,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TitleBlockTemplateView[] = {
    "TitleBlockTemplateView\0\0"
    "selectedCellsChanged(QList<TitleBlockCell*>)\0"
    "gridModificationRequested(TitleBlockTemplateCommand*)\0"
    ",\0previewWidthChanged(int,int)\0"
    "setTitleBlockTemplate(TitleBlockTemplate*)\0"
    "selectionChanged()\0zoomIn()\0zoomOut()\0"
    "zoomFit()\0zoomReset()\0QList<TitleBlockCell*>\0"
    "cut()\0copy()\0bool\0mayPaste()\0"
    "QList<TitleBlockCell>\0pastedCells()\0"
    "paste()\0addColumnAtEnd()\0addRowAtEnd()\0"
    "addColumnBefore()\0addRowBefore()\0"
    "addColumnAfter()\0addRowAfter()\0"
    "editColumn(HelperCell*)\0editColumn()\0"
    "editRow(HelperCell*)\0editRow()\0"
    "deleteColumn()\0deleteRow()\0"
    "mergeSelectedCells()\0splitSelectedCell()\0"
    "refresh()\0changePreviewWidth()\0"
    "setPreviewWidth(int)\0updateLayout()\0"
    "rowsDimensionsChanged()\0"
    "columnsDimensionsChanged()\0"
    "updateDisplayedMinMaxWidth()\0"
    "setReadOnly(bool)\0applyColumnsWidths(bool)\0"
    "applyColumnsWidths()\0applyRowsHeights(bool)\0"
    "applyRowsHeights()\0updateRowsHelperCells()\0"
    "updateColumnsHelperCells()\0"
    "updateLastContextMenuCell(HelperCell*)\0"
    "adjustSceneRect()\0"
};

void TitleBlockTemplateView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TitleBlockTemplateView *_t = static_cast<TitleBlockTemplateView *>(_o);
        switch (_id) {
        case 0: _t->selectedCellsChanged((*reinterpret_cast< QList<TitleBlockCell*>(*)>(_a[1]))); break;
        case 1: _t->gridModificationRequested((*reinterpret_cast< TitleBlockTemplateCommand*(*)>(_a[1]))); break;
        case 2: _t->previewWidthChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->setTitleBlockTemplate((*reinterpret_cast< TitleBlockTemplate*(*)>(_a[1]))); break;
        case 4: _t->selectionChanged(); break;
        case 5: _t->zoomIn(); break;
        case 6: _t->zoomOut(); break;
        case 7: _t->zoomFit(); break;
        case 8: _t->zoomReset(); break;
        case 9: { QList<TitleBlockCell*> _r = _t->cut();
            if (_a[0]) *reinterpret_cast< QList<TitleBlockCell*>*>(_a[0]) = _r; }  break;
        case 10: { QList<TitleBlockCell*> _r = _t->copy();
            if (_a[0]) *reinterpret_cast< QList<TitleBlockCell*>*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->mayPaste();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { QList<TitleBlockCell> _r = _t->pastedCells();
            if (_a[0]) *reinterpret_cast< QList<TitleBlockCell>*>(_a[0]) = _r; }  break;
        case 13: _t->paste(); break;
        case 14: _t->addColumnAtEnd(); break;
        case 15: _t->addRowAtEnd(); break;
        case 16: _t->addColumnBefore(); break;
        case 17: _t->addRowBefore(); break;
        case 18: _t->addColumnAfter(); break;
        case 19: _t->addRowAfter(); break;
        case 20: _t->editColumn((*reinterpret_cast< HelperCell*(*)>(_a[1]))); break;
        case 21: _t->editColumn(); break;
        case 22: _t->editRow((*reinterpret_cast< HelperCell*(*)>(_a[1]))); break;
        case 23: _t->editRow(); break;
        case 24: _t->deleteColumn(); break;
        case 25: _t->deleteRow(); break;
        case 26: _t->mergeSelectedCells(); break;
        case 27: _t->splitSelectedCell(); break;
        case 28: _t->refresh(); break;
        case 29: _t->changePreviewWidth(); break;
        case 30: _t->setPreviewWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 31: _t->updateLayout(); break;
        case 32: _t->rowsDimensionsChanged(); break;
        case 33: _t->columnsDimensionsChanged(); break;
        case 34: _t->updateDisplayedMinMaxWidth(); break;
        case 35: _t->setReadOnly((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 36: _t->applyColumnsWidths((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 37: _t->applyColumnsWidths(); break;
        case 38: _t->applyRowsHeights((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 39: _t->applyRowsHeights(); break;
        case 40: _t->updateRowsHelperCells(); break;
        case 41: _t->updateColumnsHelperCells(); break;
        case 42: _t->updateLastContextMenuCell((*reinterpret_cast< HelperCell*(*)>(_a[1]))); break;
        case 43: _t->adjustSceneRect(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TitleBlockTemplateView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TitleBlockTemplateView::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_TitleBlockTemplateView,
      qt_meta_data_TitleBlockTemplateView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TitleBlockTemplateView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TitleBlockTemplateView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TitleBlockTemplateView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TitleBlockTemplateView))
        return static_cast<void*>(const_cast< TitleBlockTemplateView*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int TitleBlockTemplateView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 44)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 44;
    }
    return _id;
}

// SIGNAL 0
void TitleBlockTemplateView::selectedCellsChanged(QList<TitleBlockCell*> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TitleBlockTemplateView::gridModificationRequested(TitleBlockTemplateCommand * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TitleBlockTemplateView::previewWidthChanged(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
