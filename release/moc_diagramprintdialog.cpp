/****************************************************************************
** Meta object code from reading C++ file 'diagramprintdialog.h'
**
** Created: Sat Feb 27 15:08:57 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/diagramprintdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'diagramprintdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DiagramPrintDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   20,   19,   19, 0x08,
      73,   68,   19,   19, 0x08,
     142,  138,   19,   19, 0x28,
     197,   19,   19,   19, 0x08,
     221,   19,   19,   19, 0x08,
     245,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DiagramPrintDialog[] = {
    "DiagramPrintDialog\0\0,,\0"
    "print(QList<Diagram*>,bool,ExportProperties)\0"
    ",,,,\0"
    "printDiagram(Diagram*,bool,ExportProperties,QPainter*,QPrinter*)\0"
    ",,,\0printDiagram(Diagram*,bool,ExportProperties,QPainter*)\0"
    "updatePrintTypeDialog()\0acceptPrintTypeDialog()\0"
    "browseFilePrintTypeDialog()\0"
};

void DiagramPrintDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DiagramPrintDialog *_t = static_cast<DiagramPrintDialog *>(_o);
        switch (_id) {
        case 0: _t->print((*reinterpret_cast< const QList<Diagram*>(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const ExportProperties(*)>(_a[3]))); break;
        case 1: _t->printDiagram((*reinterpret_cast< Diagram*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const ExportProperties(*)>(_a[3])),(*reinterpret_cast< QPainter*(*)>(_a[4])),(*reinterpret_cast< QPrinter*(*)>(_a[5]))); break;
        case 2: _t->printDiagram((*reinterpret_cast< Diagram*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const ExportProperties(*)>(_a[3])),(*reinterpret_cast< QPainter*(*)>(_a[4]))); break;
        case 3: _t->updatePrintTypeDialog(); break;
        case 4: _t->acceptPrintTypeDialog(); break;
        case 5: _t->browseFilePrintTypeDialog(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DiagramPrintDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DiagramPrintDialog::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_DiagramPrintDialog,
      qt_meta_data_DiagramPrintDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DiagramPrintDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DiagramPrintDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DiagramPrintDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DiagramPrintDialog))
        return static_cast<void*>(const_cast< DiagramPrintDialog*>(this));
    return QWidget::qt_metacast(_clname);
}

int DiagramPrintDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
