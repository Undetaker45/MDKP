#ifndef GLOBAL_H
#define GLOBAL_H

#include <QObject>
#include <QGraphicsDropShadowEffect>
#include <QWidget>

enum {
    Unknown = -1,
    Admin = 1,
    Methodist = 2,
    Teacher = 3,
    Listener = 4
};

enum {
    UnknownStatus = -1,
    Fired = 0,
    Works = 1
};

enum {
    UnknownDepartment = -1,
    FullTime = 0,
    Correspondence = 1
};

enum {
    UnknownActivity = -1,
    Lessons = 0,
    Practic = 1
};

void AddShadowToChildren(QObject* obj);

#endif // GLOBAL_H
