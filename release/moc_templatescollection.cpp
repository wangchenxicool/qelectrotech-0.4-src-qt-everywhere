/****************************************************************************
** Meta object code from reading C++ file 'templatescollection.h'
**
** Created: Sat Feb 27 15:11:39 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/titleblock/templatescollection.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'templatescollection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TitleBlockTemplatesCollection[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      33,   31,   30,   30, 0x05,
      81,   30,   30,   30, 0x25,
     121,   31,   30,   30, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_TitleBlockTemplatesCollection[] = {
    "TitleBlockTemplatesCollection\0\0,\0"
    "changed(TitleBlockTemplatesCollection*,QString)\0"
    "changed(TitleBlockTemplatesCollection*)\0"
    "aboutToRemove(TitleBlockTemplatesCollection*,QString)\0"
};

void TitleBlockTemplatesCollection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TitleBlockTemplatesCollection *_t = static_cast<TitleBlockTemplatesCollection *>(_o);
        switch (_id) {
        case 0: _t->changed((*reinterpret_cast< TitleBlockTemplatesCollection*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->changed((*reinterpret_cast< TitleBlockTemplatesCollection*(*)>(_a[1]))); break;
        case 2: _t->aboutToRemove((*reinterpret_cast< TitleBlockTemplatesCollection*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TitleBlockTemplatesCollection::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TitleBlockTemplatesCollection::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TitleBlockTemplatesCollection,
      qt_meta_data_TitleBlockTemplatesCollection, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TitleBlockTemplatesCollection::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TitleBlockTemplatesCollection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TitleBlockTemplatesCollection::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TitleBlockTemplatesCollection))
        return static_cast<void*>(const_cast< TitleBlockTemplatesCollection*>(this));
    return QObject::qt_metacast(_clname);
}

int TitleBlockTemplatesCollection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void TitleBlockTemplatesCollection::changed(TitleBlockTemplatesCollection * _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 2
void TitleBlockTemplatesCollection::aboutToRemove(TitleBlockTemplatesCollection * _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
static const uint qt_meta_data_TitleBlockTemplatesProjectCollection[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_TitleBlockTemplatesProjectCollection[] = {
    "TitleBlockTemplatesProjectCollection\0"
};

void TitleBlockTemplatesProjectCollection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData TitleBlockTemplatesProjectCollection::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TitleBlockTemplatesProjectCollection::staticMetaObject = {
    { &TitleBlockTemplatesCollection::staticMetaObject, qt_meta_stringdata_TitleBlockTemplatesProjectCollection,
      qt_meta_data_TitleBlockTemplatesProjectCollection, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TitleBlockTemplatesProjectCollection::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TitleBlockTemplatesProjectCollection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TitleBlockTemplatesProjectCollection::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TitleBlockTemplatesProjectCollection))
        return static_cast<void*>(const_cast< TitleBlockTemplatesProjectCollection*>(this));
    return TitleBlockTemplatesCollection::qt_metacast(_clname);
}

int TitleBlockTemplatesProjectCollection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TitleBlockTemplatesCollection::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_TitleBlockTemplatesFilesCollection[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      40,   36,   35,   35, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TitleBlockTemplatesFilesCollection[] = {
    "TitleBlockTemplatesFilesCollection\0\0"
    "str\0fileSystemChanged(QString)\0"
};

void TitleBlockTemplatesFilesCollection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TitleBlockTemplatesFilesCollection *_t = static_cast<TitleBlockTemplatesFilesCollection *>(_o);
        switch (_id) {
        case 0: _t->fileSystemChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TitleBlockTemplatesFilesCollection::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TitleBlockTemplatesFilesCollection::staticMetaObject = {
    { &TitleBlockTemplatesCollection::staticMetaObject, qt_meta_stringdata_TitleBlockTemplatesFilesCollection,
      qt_meta_data_TitleBlockTemplatesFilesCollection, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TitleBlockTemplatesFilesCollection::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TitleBlockTemplatesFilesCollection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TitleBlockTemplatesFilesCollection::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TitleBlockTemplatesFilesCollection))
        return static_cast<void*>(const_cast< TitleBlockTemplatesFilesCollection*>(this));
    return TitleBlockTemplatesCollection::qt_metacast(_clname);
}

int TitleBlockTemplatesFilesCollection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TitleBlockTemplatesCollection::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
