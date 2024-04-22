/****************************************************************************
** Meta object code from reading C++ file 'adminwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Plan/adminwindow.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adminwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_AdminWindow_t {
    uint offsetsAndSizes[20];
    char stringdata0[12];
    char stringdata1[37];
    char stringdata2[1];
    char stringdata3[23];
    char stringdata4[12];
    char stringdata5[6];
    char stringdata6[30];
    char stringdata7[26];
    char stringdata8[6];
    char stringdata9[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_AdminWindow_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_AdminWindow_t qt_meta_stringdata_AdminWindow = {
    {
        QT_MOC_LITERAL(0, 11),  // "AdminWindow"
        QT_MOC_LITERAL(12, 36),  // "slotBackButtonChangeUserWidge..."
        QT_MOC_LITERAL(49, 0),  // ""
        QT_MOC_LITERAL(50, 22),  // "slotDoubleClikedOnUser"
        QT_MOC_LITERAL(73, 11),  // "QModelIndex"
        QT_MOC_LITERAL(85, 5),  // "index"
        QT_MOC_LITERAL(91, 29),  // "slotRegistrationButtonClicked"
        QT_MOC_LITERAL(121, 25),  // "slotRefreshUserInDatabase"
        QT_MOC_LITERAL(147, 5),  // "User&"
        QT_MOC_LITERAL(153, 4)   // "user"
    },
    "AdminWindow",
    "slotBackButtonChangeUserWidgetCliked",
    "",
    "slotDoubleClikedOnUser",
    "QModelIndex",
    "index",
    "slotRegistrationButtonClicked",
    "slotRefreshUserInDatabase",
    "User&",
    "user"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_AdminWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x0a,    1 /* Public */,
       3,    1,   39,    2, 0x08,    2 /* Private */,
       6,    0,   42,    2, 0x08,    4 /* Private */,
       7,    1,   43,    2, 0x08,    5 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

Q_CONSTINIT const QMetaObject AdminWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractUserWindow::staticMetaObject>(),
    qt_meta_stringdata_AdminWindow.offsetsAndSizes,
    qt_meta_data_AdminWindow,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_AdminWindow_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AdminWindow, std::true_type>,
        // method 'slotBackButtonChangeUserWidgetCliked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotDoubleClikedOnUser'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex, std::false_type>,
        // method 'slotRegistrationButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotRefreshUserInDatabase'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<User &, std::false_type>
    >,
    nullptr
} };

void AdminWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AdminWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->slotBackButtonChangeUserWidgetCliked(); break;
        case 1: _t->slotDoubleClikedOnUser((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 2: _t->slotRegistrationButtonClicked(); break;
        case 3: _t->slotRefreshUserInDatabase((*reinterpret_cast< std::add_pointer_t<User&>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *AdminWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdminWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AdminWindow.stringdata0))
        return static_cast<void*>(this);
    return AbstractUserWindow::qt_metacast(_clname);
}

int AdminWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractUserWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
