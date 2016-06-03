/****************************************************************************
** Meta object code from reading C++ file 'exportdialog.h'
**
** Created: Sat Feb 27 15:09:26 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/exportdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'exportdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ExportDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x0a,
      37,   13,   13,   13, 0x0a,
      61,   13,   13,   13, 0x0a,
      88,   13,   13,   13, 0x0a,
     108,   13,   13,   13, 0x0a,
     122,   13,   13,   13, 0x0a,
     145,   13,   13,   13, 0x0a,
     171,   13,   13,   13, 0x0a,
     203,   13,   13,   13, 0x2a,
     231,   13,   13,   13, 0x0a,
     256,   13,   13,   13, 0x0a,
     284,   13,   13,   13, 0x0a,
     308,   13,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ExportDialog[] = {
    "ExportDialog\0\0slot_correctWidth(int)\0"
    "slot_correctHeight(int)\0"
    "slot_keepRatioChanged(int)\0"
    "slot_resetSize(int)\0slot_export()\0"
    "slot_changeUseBorder()\0slot_checkDiagramsCount()\0"
    "slot_changeFilesExtension(bool)\0"
    "slot_changeFilesExtension()\0"
    "slot_previewDiagram(int)\0"
    "slot_exportToClipBoard(int)\0"
    "slot_selectAllClicked()\0"
    "slot_deSelectAllClicked()\0"
};

void ExportDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ExportDialog *_t = static_cast<ExportDialog *>(_o);
        switch (_id) {
        case 0: _t->slot_correctWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->slot_correctHeight((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->slot_keepRatioChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->slot_resetSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->slot_export(); break;
        case 5: _t->slot_changeUseBorder(); break;
        case 6: _t->slot_checkDiagramsCount(); break;
        case 7: _t->slot_changeFilesExtension((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->slot_changeFilesExtension(); break;
        case 9: _t->slot_previewDiagram((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->slot_exportToClipBoard((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->slot_selectAllClicked(); break;
        case 12: _t->slot_deSelectAllClicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ExportDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ExportDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ExportDialog,
      qt_meta_data_ExportDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ExportDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ExportDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ExportDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ExportDialog))
        return static_cast<void*>(const_cast< ExportDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ExportDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
