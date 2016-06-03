/****************************************************************************
** Meta object code from reading C++ file 'qetapp.h'
**
** Created: Sat Feb 27 15:09:52 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/qetapp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qetapp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QETApp[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x0a,
      51,    7,    7,    7, 0x0a,
      71,    7,    7,    7, 0x0a,
      92,    7,    7,    7, 0x0a,
     115,    7,    7,    7, 0x0a,
     139,    7,    7,    7, 0x0a,
     162,    7,    7,    7, 0x0a,
     186,    7,    7,    7, 0x0a,
     220,    7,    7,    7, 0x0a,
     255,    7,    7,    7, 0x0a,
     274,    7,    7,    7, 0x0a,
     298,    7,  293,    7, 0x0a,
     319,  317,    7,    7, 0x0a,
     359,    7,    7,    7, 0x0a,
     396,    7,    7,    7, 0x0a,
     419,    7,    7,    7, 0x0a,
     429,    7,    7,    7, 0x0a,
     453,    7,    7,    7, 0x0a,
     478,    7,    7,    7, 0x0a,
     502,    7,    7,    7, 0x0a,
     532,    7,    7,    7, 0x0a,
     562,    7,    7,    7, 0x0a,
     608,  317,    7,    7, 0x0a,
     664,    7,    7,    7, 0x2a,
     715,    7,    7,    7, 0x0a,
     747,    7,    7,    7, 0x0a,
     788,    7,    7,    7, 0x0a,
     803,    7,    7,    7, 0x0a,
     814,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QETApp[] = {
    "QETApp\0\0systray(QSystemTrayIcon::ActivationReason)\0"
    "reduceEveryEditor()\0restoreEveryEditor()\0"
    "reduceDiagramEditors()\0restoreDiagramEditors()\0"
    "reduceElementEditors()\0restoreElementEditors()\0"
    "reduceTitleBlockTemplateEditors()\0"
    "restoreTitleBlockTemplateEditors()\0"
    "newDiagramEditor()\0newElementEditor()\0"
    "bool\0closeEveryEditor()\0,\0"
    "setMainWindowVisible(QMainWindow*,bool)\0"
    "invertMainWindowVisibility(QWidget*)\0"
    "useSystemPalette(bool)\0quitQET()\0"
    "checkRemainingWindows()\0"
    "messageReceived(QString)\0"
    "openFiles(QETArguments)\0"
    "openProjectFiles(QStringList)\0"
    "openElementFiles(QStringList)\0"
    "openElementLocations(QList<ElementsLocation>)\0"
    "openTitleBlockTemplate(TitleBlockTemplateLocation,bool)\0"
    "openTitleBlockTemplate(TitleBlockTemplateLocation)\0"
    "openTitleBlockTemplate(QString)\0"
    "openTitleBlockTemplateFiles(QStringList)\0"
    "configureQET()\0aboutQET()\0cleanup()\0"
};

void QETApp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QETApp *_t = static_cast<QETApp *>(_o);
        switch (_id) {
        case 0: _t->systray((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 1: _t->reduceEveryEditor(); break;
        case 2: _t->restoreEveryEditor(); break;
        case 3: _t->reduceDiagramEditors(); break;
        case 4: _t->restoreDiagramEditors(); break;
        case 5: _t->reduceElementEditors(); break;
        case 6: _t->restoreElementEditors(); break;
        case 7: _t->reduceTitleBlockTemplateEditors(); break;
        case 8: _t->restoreTitleBlockTemplateEditors(); break;
        case 9: _t->newDiagramEditor(); break;
        case 10: _t->newElementEditor(); break;
        case 11: { bool _r = _t->closeEveryEditor();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: _t->setMainWindowVisible((*reinterpret_cast< QMainWindow*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 13: _t->invertMainWindowVisibility((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 14: _t->useSystemPalette((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->quitQET(); break;
        case 16: _t->checkRemainingWindows(); break;
        case 17: _t->messageReceived((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->openFiles((*reinterpret_cast< const QETArguments(*)>(_a[1]))); break;
        case 19: _t->openProjectFiles((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 20: _t->openElementFiles((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 21: _t->openElementLocations((*reinterpret_cast< const QList<ElementsLocation>(*)>(_a[1]))); break;
        case 22: _t->openTitleBlockTemplate((*reinterpret_cast< const TitleBlockTemplateLocation(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 23: _t->openTitleBlockTemplate((*reinterpret_cast< const TitleBlockTemplateLocation(*)>(_a[1]))); break;
        case 24: _t->openTitleBlockTemplate((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 25: _t->openTitleBlockTemplateFiles((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 26: _t->configureQET(); break;
        case 27: _t->aboutQET(); break;
        case 28: _t->cleanup(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QETApp::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QETApp::staticMetaObject = {
    { &QETSingleApplication::staticMetaObject, qt_meta_stringdata_QETApp,
      qt_meta_data_QETApp, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QETApp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QETApp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QETApp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QETApp))
        return static_cast<void*>(const_cast< QETApp*>(this));
    return QETSingleApplication::qt_metacast(_clname);
}

int QETApp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QETSingleApplication::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    }
    return _id;
}
static const uint qt_meta_data_QETStyle[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   16,   10,    9, 0x09,
      99,   97,   10,    9, 0x29,
     162,    9,   10,    9, 0x29,

       0        // eod
};

static const char qt_meta_stringdata_QETStyle[] = {
    "QETStyle\0\0QIcon\0,,\0"
    "standardIconImplementation(StandardPixmap,const QStyleOption*,const QW"
    "idget*)\0"
    ",\0standardIconImplementation(StandardPixmap,const QStyleOption*)\0"
    "standardIconImplementation(StandardPixmap)\0"
};

void QETStyle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QETStyle *_t = static_cast<QETStyle *>(_o);
        switch (_id) {
        case 0: { QIcon _r = _t->standardIconImplementation((*reinterpret_cast< StandardPixmap(*)>(_a[1])),(*reinterpret_cast< const QStyleOption*(*)>(_a[2])),(*reinterpret_cast< const QWidget*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QIcon*>(_a[0]) = _r; }  break;
        case 1: { QIcon _r = _t->standardIconImplementation((*reinterpret_cast< StandardPixmap(*)>(_a[1])),(*reinterpret_cast< const QStyleOption*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QIcon*>(_a[0]) = _r; }  break;
        case 2: { QIcon _r = _t->standardIconImplementation((*reinterpret_cast< StandardPixmap(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QIcon*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QETStyle::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QETStyle::staticMetaObject = {
    { &QPlastiqueStyle::staticMetaObject, qt_meta_stringdata_QETStyle,
      qt_meta_data_QETStyle, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QETStyle::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QETStyle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QETStyle::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QETStyle))
        return static_cast<void*>(const_cast< QETStyle*>(this));
    return QPlastiqueStyle::qt_metacast(_clname);
}

int QETStyle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlastiqueStyle::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
