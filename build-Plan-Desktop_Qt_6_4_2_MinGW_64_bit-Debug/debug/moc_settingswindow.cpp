/****************************************************************************
** Meta object code from reading C++ file 'settingswindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Plan/settingswindow.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settingswindow.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_SettingsWindow_t {
    uint offsetsAndSizes[30];
    char stringdata0[15];
    char stringdata1[23];
    char stringdata2[1];
    char stringdata3[20];
    char stringdata4[8];
    char stringdata5[7];
    char stringdata6[16];
    char stringdata7[19];
    char stringdata8[16];
    char stringdata9[6];
    char stringdata10[25];
    char stringdata11[15];
    char stringdata12[18];
    char stringdata13[5];
    char stringdata14[21];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_SettingsWindow_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_SettingsWindow_t qt_meta_stringdata_SettingsWindow = {
    {
        QT_MOC_LITERAL(0, 14),  // "SettingsWindow"
        QT_MOC_LITERAL(15, 22),  // "signalBackButtonCliked"
        QT_MOC_LITERAL(38, 0),  // ""
        QT_MOC_LITERAL(39, 19),  // "signalRefreshLesson"
        QT_MOC_LITERAL(59, 7),  // "Lesson&"
        QT_MOC_LITERAL(67, 6),  // "lesson"
        QT_MOC_LITERAL(74, 15),  // "signalAddLesson"
        QT_MOC_LITERAL(90, 18),  // "signalClearBackBtn"
        QT_MOC_LITERAL(109, 15),  // "slotBlockedPole"
        QT_MOC_LITERAL(125, 5),  // "index"
        QT_MOC_LITERAL(131, 24),  // "slotChangeSpecialization"
        QT_MOC_LITERAL(156, 14),  // "Specialization"
        QT_MOC_LITERAL(171, 17),  // "slotDateSelection"
        QT_MOC_LITERAL(189, 4),  // "Data"
        QT_MOC_LITERAL(194, 20)   // "slotBackButtonCliked"
    },
    "SettingsWindow",
    "signalBackButtonCliked",
    "",
    "signalRefreshLesson",
    "Lesson&",
    "lesson",
    "signalAddLesson",
    "signalClearBackBtn",
    "slotBlockedPole",
    "index",
    "slotChangeSpecialization",
    "Specialization",
    "slotDateSelection",
    "Data",
    "slotBackButtonCliked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_SettingsWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    1 /* Public */,
       3,    1,   63,    2, 0x06,    2 /* Public */,
       6,    1,   66,    2, 0x06,    4 /* Public */,
       7,    0,   69,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    1,   70,    2, 0x08,    7 /* Private */,
      10,    1,   73,    2, 0x08,    9 /* Private */,
      12,    1,   76,    2, 0x08,   11 /* Private */,
      14,    0,   79,    2, 0x08,   13 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QDate,   13,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject SettingsWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_SettingsWindow.offsetsAndSizes,
    qt_meta_data_SettingsWindow,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_SettingsWindow_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SettingsWindow, std::true_type>,
        // method 'signalBackButtonCliked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'signalRefreshLesson'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Lesson &, std::false_type>,
        // method 'signalAddLesson'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Lesson &, std::false_type>,
        // method 'signalClearBackBtn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotBlockedPole'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'slotChangeSpecialization'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotDateSelection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QDate, std::false_type>,
        // method 'slotBackButtonCliked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void SettingsWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SettingsWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signalBackButtonCliked(); break;
        case 1: _t->signalRefreshLesson((*reinterpret_cast< std::add_pointer_t<Lesson&>>(_a[1]))); break;
        case 2: _t->signalAddLesson((*reinterpret_cast< std::add_pointer_t<Lesson&>>(_a[1]))); break;
        case 3: _t->signalClearBackBtn(); break;
        case 4: _t->slotBlockedPole((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->slotChangeSpecialization((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->slotDateSelection((*reinterpret_cast< std::add_pointer_t<QDate>>(_a[1]))); break;
        case 7: _t->slotBackButtonCliked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SettingsWindow::*)();
            if (_t _q_method = &SettingsWindow::signalBackButtonCliked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SettingsWindow::*)(Lesson & );
            if (_t _q_method = &SettingsWindow::signalRefreshLesson; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SettingsWindow::*)(Lesson & );
            if (_t _q_method = &SettingsWindow::signalAddLesson; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SettingsWindow::*)();
            if (_t _q_method = &SettingsWindow::signalClearBackBtn; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *SettingsWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SettingsWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SettingsWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SettingsWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void SettingsWindow::signalBackButtonCliked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SettingsWindow::signalRefreshLesson(Lesson & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SettingsWindow::signalAddLesson(Lesson & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SettingsWindow::signalClearBackBtn()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
