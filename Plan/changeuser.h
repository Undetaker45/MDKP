#ifndef CHANGEUSER_H
#define CHANGEUSER_H

#include <QWidget>
#include "user.h"

namespace Ui {
class ChangeUser;
}

class ChangeUser : public QWidget
{
    Q_OBJECT

public:
    explicit ChangeUser(QWidget *parent = nullptr);
    ~ChangeUser();

    void setUserToChangeWidget(User user);

private:
    Ui::ChangeUser *ui;
    User user;
signals:
    void signalBackButtonCliked();
    void signalRefreshUser(User& user);
private slots:
    void slotConfirmButtonClicked();
};

#endif // CHANGEUSER_H
