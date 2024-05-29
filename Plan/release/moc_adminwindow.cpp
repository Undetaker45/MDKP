/****************************************************************************
** Meta object code from reading C++ file 'adminwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../adminwindow.h"
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
    uint offsetsAndSizes[32];
    char stringdata0[12];
    char stringdata1[26];
    char stringdata2[1];
    char stringdata3[37];
    char stringdata4[23];
    char stringdata5[12];
    char stringdata6[6];
    char stringdata7[30];
    char stringdata8[26];
    char stringdata9[6];
    char stringdata10[5];
    char stringdata11[15];
    char stringdata12[16];
    char stringdata13[25];
    char stringdata14[23];
    char stringdata15[32];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_AdminWindow_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_AdminWindow_t qt_meta_stringdata_AdminWindow = {
    {
        QT_MOC_LITERAL(0, 11),  // "AdminWindow"
        QT_MOC_LITERAL(12, 25),  // "signalLogoutButtonClicked"
        QT_MOC_LITERAL(38, 0),  // ""
        QT_MOC_LITERAL(39, 36),  // "slotBackButtonChangeUserWidge..."
        QT_MOC_LITERAL(76, 22),  // "slotDoubleClikedOnUser"
        QT_MOC_LITERAL(99, 11),  // "QModelIndex"
        QT_MOC_LITERAL(111, 5),  // "index"
        QT_MOC_LITERAL(117, 29),  // "slotRegistrationButtonClicked"
        QT_MOC_LITERAL(147, 25),  // "slotRefreshUserInDatabase"
        QT_MOC_LITERAL(173, 5),  // "User&"
        QT_MOC_LITERAL(179, 4),  // "user"
        QT_MOC_LITERAL(184, 14),  // "slotBlocedPole"
        QT_MOC_LITERAL(199, 15),  // "slotChangeGroup"
        QT_MOC_LITERAL(215, 24),  // "slotChangeSpecialization"
        QT_MOC_LITERAL(240, 22),  // "slotGroupButtonClicked"
        QT_MOC_LITERAL(263, 31)   // "slotSpecializationButtonClicked"
    },
    "AdminWindow",
    "signalLogoutButtonClicked",
    "",
    "slotBackButtonChangeUserWidgetCliked",
    "slotDoubleClikedOnUser",
    "QModelIndex",
    "index",
    "slotRegistrationButtonClicked",
    "slotRefreshUserInDatabase",
    "User&",
    "user",
    "slotBlocedPole",
    "slotChangeGroup",
    "slotChangeSpecialization",
    "slotGroupButtonClicked",
    "slotSpecializationButtonClicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_AdminWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   75,    2, 0x0a,    2 /* Public */,
       4,    1,   76,    2, 0x08,    3 /* Private */,
       7,    0,   79,    2, 0x08,    5 /* Private */,
       8,    1,   80,    2, 0x08,    6 /* Private */,
      11,    1,   83,    2, 0x08,    8 /* Private */,
      12,    0,   86,    2, 0x08,   10 /* Private */,
      13,    0,   87,    2, 0x08,   11 /* Private */,
      14,    0,   88,    2, 0x08,   12 /* Private */,
      15,    0,   89,    2, 0x08,   13 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

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
        // method 'signalLogoutButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotBackButtonChangeUserWidgetCliked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotDoubleClikedOnUser'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex, std::false_type>,
        // method 'slotRegistrationButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotRefreshUserInDatabase'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<User &, std::false_type>,
        // method 'slotBlocedPole'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'slotChangeGroup'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotChangeSpecialization'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotGroupButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotSpecializationButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void AdminWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AdminWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signalLogoutButtonClicked(); break;
        case 1: _t->slotBackButtonChangeUserWidgetCliked(); break;
        case 2: _t->slotDoubleClikedOnUser((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 3: _t->slotRegistrationButtonClicked(); break;
        case 4: _t->slotRefreshUserInDatabase((*reinterpret_cast< std::add_pointer_t<User&>>(_a[1]))); break;
        case 5: _t->slotBlocedPole((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->slotChangeGroup(); break;
        case 7: _t->slotChangeSpecialization(); break;
        case 8: _t->slotGroupButtonClicked(); break;
        case 9: _t->slotSpecializationButtonClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AdminWindow::*)();
            if (_t _q_method = &AdminWindow::signalLogoutButtonClicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
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
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void AdminWindow::signalLogoutButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
