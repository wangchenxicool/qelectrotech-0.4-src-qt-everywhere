/****************************************************************************
** Meta object code from reading C++ file 'qetprintpreviewdialog.h'
**
** Created: Sat Feb 27 15:10:00 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/qetprintpreviewdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qetprintpreviewdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QETPrintPreviewDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   23,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
      91,   22,   22,   22, 0x0a,
     103,   22,   22,   22, 0x0a,
     118,   22,   22,   22, 0x0a,
     129,   22,   22,   22, 0x0a,
     140,   22,   22,   22, 0x0a,
     152,   22,   22,   22, 0x0a,
     170,   22,   22,   22, 0x0a,
     193,   22,   22,   22, 0x0a,
     202,   22,   22,   22, 0x0a,
     212,   22,   22,   22, 0x0a,
     232,   22,   22,   22, 0x0a,
     250,   22,   22,   22, 0x08,
     274,   22,   22,   22, 0x08,
     295,   22,   22,   22, 0x08,
     324,   22,   22,   22, 0x08,
     353,   22,   22,   22, 0x08,
     370,   22,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QETPrintPreviewDialog[] = {
    "QETPrintPreviewDialog\0\0,,,\0"
    "paintRequested(QList<Diagram*>,bool,ExportProperties,QPrinter*)\0"
    "firstPage()\0previousPage()\0nextPage()\0"
    "lastPage()\0pageSetup()\0useFullPage(bool)\0"
    "fitDiagramToPage(bool)\0zoomIn()\0"
    "zoomOut()\0selectAllDiagrams()\0"
    "selectNoDiagram()\0requestPaint(QPrinter*)\0"
    "checkDiagramsCount()\0setDiagramsListVisible(bool)\0"
    "setPrintOptionsVisible(bool)\0"
    "updateZoomList()\0updatePreviewZoom()\0"
};

void QETPrintPreviewDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QETPrintPreviewDialog *_t = static_cast<QETPrintPreviewDialog *>(_o);
        switch (_id) {
        case 0: _t->paintRequested((*reinterpret_cast< const QList<Diagram*>(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const ExportProperties(*)>(_a[3])),(*reinterpret_cast< QPrinter*(*)>(_a[4]))); break;
        case 1: _t->firstPage(); break;
        case 2: _t->previousPage(); break;
        case 3: _t->nextPage(); break;
        case 4: _t->lastPage(); break;
        case 5: _t->pageSetup(); break;
        case 6: _t->useFullPage((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->fitDiagramToPage((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->zoomIn(); break;
        case 9: _t->zoomOut(); break;
        case 10: _t->selectAllDiagrams(); break;
        case 11: _t->selectNoDiagram(); break;
        case 12: _t->requestPaint((*reinterpret_cast< QPrinter*(*)>(_a[1]))); break;
        case 13: _t->checkDiagramsCount(); break;
        case 14: _t->setDiagramsListVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->setPrintOptionsVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->updateZoomList(); break;
        case 17: _t->updatePreviewZoom(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QETPrintPreviewDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QETPrintPreviewDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QETPrintPreviewDialog,
      qt_meta_data_QETPrintPreviewDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QETPrintPreviewDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QETPrintPreviewDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QETPrintPreviewDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QETPrintPreviewDialog))
        return static_cast<void*>(const_cast< QETPrintPreviewDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QETPrintPreviewDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void QETPrintPreviewDialog::paintRequested(const QList<Diagram*> & _t1, bool _t2, const ExportProperties _t3, QPrinter * _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
