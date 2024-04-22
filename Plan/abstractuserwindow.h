#ifndef ABSTRACTUSERWINDOW_H
#define ABSTRACTUSERWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include "user.h"

class AbstractUserWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit AbstractUserWindow(const User& user, QWidget *parent = nullptr);
    ~AbstractUserWindow();

signals:
    void signalLogout();

public:
    User getUser();

protected:
    User user;
};

#endif // ABSTRACTUSERWINDOW_H
