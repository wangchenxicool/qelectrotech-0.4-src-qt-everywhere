/****************************************************************************
** Meta object code from reading C++ file 'projectconfigpages.h'
**
** Created: Sat Feb 27 15:09:47 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/projectconfigpages.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'projectconfigpages.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ProjectConfigPage[] = {

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

static const char qt_meta_stringdata_ProjectConfigPage[] = {
    "ProjectConfigPage\0"
};

void ProjectConfigPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ProjectConfigPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ProjectConfigPage::staticMetaObject = {
    { &ConfigPage::staticMetaObject, qt_meta_stringdata_ProjectConfigPage,
      qt_meta_data_ProjectConfigPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ProjectConfigPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ProjectConfigPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ProjectConfigPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ProjectConfigPage))
        return static_cast<void*>(const_cast< ProjectConfigPage*>(this));
    return ConfigPage::qt_metacast(_clname);
}

int ProjectConfigPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConfigPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_ProjectMainConfigPage[] = {

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

static const char qt_meta_stringdata_ProjectMainConfigPage[] = {
    "ProjectMainConfigPage\0"
};

void ProjectMainConfigPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ProjectMainConfigPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ProjectMainConfigPage::staticMetaObject = {
    { &ProjectConfigPage::staticMetaObject, qt_meta_stringdata_ProjectMainConfigPage,
      qt_meta_data_ProjectMainConfigPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ProjectMainConfigPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ProjectMainConfigPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ProjectMainConfigPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ProjectMainConfigPage))
        return static_cast<void*>(const_cast< ProjectMainConfigPage*>(this));
    return ProjectConfigPage::qt_metacast(_clname);
}

int ProjectMainConfigPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ProjectConfigPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_ProjectAutoNumConfigPage[] = {

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
      26,   25,   25,   25, 0x08,
      49,   25,   25,   25, 0x08,
      63,   25,   25,   25, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ProjectAutoNumConfigPage[] = {
    "ProjectAutoNumConfigPage\0\0"
    "updateContext(QString)\0saveContext()\0"
    "removeContext()\0"
};

void ProjectAutoNumConfigPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ProjectAutoNumConfigPage *_t = static_cast<ProjectAutoNumConfigPage *>(_o);
        switch (_id) {
        case 0: _t->updateContext((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->saveContext(); break;
        case 2: _t->removeContext(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ProjectAutoNumConfigPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ProjectAutoNumConfigPage::staticMetaObject = {
    { &ProjectConfigPage::staticMetaObject, qt_meta_stringdata_ProjectAutoNumConfigPage,
      qt_meta_data_ProjectAutoNumConfigPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ProjectAutoNumConfigPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ProjectAutoNumConfigPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ProjectAutoNumConfigPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ProjectAutoNumConfigPage))
        return static_cast<void*>(const_cast< ProjectAutoNumConfigPage*>(this));
    return ProjectConfigPage::qt_metacast(_clname);
}

int ProjectAutoNumConfigPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ProjectConfigPage::qt_metacall(_c, _id, _a);
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
