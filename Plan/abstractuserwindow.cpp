#include "abstractuserwindow.h"

AbstractUserWindow::AbstractUserWindow(const User& us, QWidget *parent)
    : QMainWindow{parent}
{
    user = us;

    qDebug() << "call abstract constructor";

}

AbstractUserWindow::~AbstractUserWindow(){
    qDebug() << "call abstract destructor";
}

User AbstractUserWindow::getUser(){
    return user;
}
