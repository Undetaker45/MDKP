#ifndef WINDOWNAVIGATOR_H
#define WINDOWNAVIGATOR_H

#include "Global.h"
#include <QObject>
#include "database.h"
#include "loginwindow.h"
#include "methodistwindow.h"
#include "listenerwindow.h"
#include "adminwindow.h"
#include "teacherwindow.h"
#include "abstractuserwindow.h"
#include "user.h"

class WindowNavigator : public QObject
{
    Q_OBJECT
public:
    explicit WindowNavigator(QObject *parent = nullptr, Database* db = nullptr);
private:
    Database* db;
    std::unique_ptr<AbstractUserWindow> windowForRole;
    std::unique_ptr<LoginWindow> loginWindow;

    void CreateAndShowLoginWindow();
    void HideAndRemoveLoginWindow();
    void HideAndRemoveRoleWindow();
public slots:
    void slotLoginSuccessful(const User& user);
    void slotLogout();
};

#endif // WINDOWNAVIGATOR_H