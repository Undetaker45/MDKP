QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Global.cpp \
    abstractuserwindow.cpp \
    adminwindow.cpp \
    changeuser.cpp \
    database.cpp \
    lesson.cpp \
    listenerwindow.cpp \
    loginwindow.cpp \
    main.cpp \
    mainwindow.cpp \
    methodistwindow.cpp \
    settingswindow.cpp \
    teacherwindow.cpp \
    timewindow.cpp \
    user.cpp \
    windownavigator.cpp

HEADERS += \
    Global.h \
    abstractuserwindow.h \
    adminwindow.h \
    changeuser.h \
    database.h \
    lesson.h \
    listenerwindow.h \
    loginwindow.h \
    mainwindow.h \
    methodistwindow.h \
    settingswindow.h \
    teacherwindow.h \
    timewindow.h \
    user.h \
    windownavigator.h

FORMS += \
    MethodistWindow.ui \
    adminwindow.ui \
    changeuser.ui \
    listenerwindow.ui \
    loginwindow.ui \
    mainwindow.ui \
    settingswindow.ui \
    settingswindow1.ui \
    teacherwindow.ui \
    timewindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources/resources.qrc

