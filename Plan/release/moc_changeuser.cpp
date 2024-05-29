/****************************************************************************
** Meta object code from reading C++ file 'changeuser.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../changeuser.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'changeuser.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_ChangeUser_t {
    uint offsetsAndSizes[18];
    char stringdata0[11];
    char stringdata1[23];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[6];
    char stringdata5[5];
    char stringdata6[25];
    char stringdata7[15];
    char stringdata8[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_ChangeUser_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_ChangeUser_t qt_meta_stringdata_ChangeUser = {
    {
        QT_MOC_LITERAL(0, 10),  // "ChangeUser"
        QT_MOC_LITERAL(11, 22),  // "signalBackButtonCliked"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 17),  // "signalRefreshUser"
        QT_MOC_LITERAL(53, 5),  // "User&"
        QT_MOC_LITERAL(59, 4),  // "user"
        QT_MOC_LITERAL(64, 24),  // "slotConfirmButtonClicked"
        QT_MOC_LITERAL(89, 14),  // "slotBlocedPole"
        QT_MOC_LITERAL(104, 5)   // "index"
    },
    "ChangeUser",
    "signalBackButtonCliked",
    "",
    "signalRefreshUser",
    "User&",
    "user",
    "slotConfirmButtonClicked",
    "slotBlocedPole",
    "index"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_ChangeUser[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x06,    1 /* Public */,
       3,    1,   39,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   42,    2, 0x08,    4 /* Private */,
       7,    1,   43,    2, 0x08,    5 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

Q_CONSTINIT const QMetaObject ChangeUser::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ChangeUser.offsetsAndSizes,
    qt_meta_data_ChangeUser,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_ChangeUser_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ChangeUser, std::true_type>,
        // method 'signalBackButtonCliked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'signalRefreshUser'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<User &, std::false_type>,
        // method 'slotConfirmButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotBlocedPole'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void ChangeUser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ChangeUser *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signalBackButtonCliked(); break;
        case 1: _t->signalRefreshUser((*reinterpret_cast< std::add_pointer_t<User&>>(_a[1]))); break;
        case 2: _t->slotConfirmButtonClicked(); break;
        case 3: _t->slotBlocedPole((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ChangeUser::*)();
            if (_t _q_method = &ChangeUser::signalBackButtonCliked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ChangeUser::*)(User & );
            if (_t _q_method = &ChangeUser::signalRefreshUser; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *ChangeUser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChangeUser::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ChangeUser.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ChangeUser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void ChangeUser::signalBackButtonCliked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ChangeUser::signalRefreshUser(User & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
