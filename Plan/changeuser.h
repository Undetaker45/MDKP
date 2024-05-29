#ifndef CHANGEUSER_H
#define CHANGEUSER_H

#include <QWidget>
#include "user.h"
#include <QMessageBox>

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
    void change();

private:
    Ui::ChangeUser *ui;
    User user;
    QSqlQueryModel* groupModel;
    QSqlQueryModel* specializationModel;
    void createModelGroup();
    void createModelSpecialization();
    void CheckingFieldsEmpty();
signals:
    void signalBackButtonCliked();
    void signalRefreshUser(User& user);
private slots:
    void slotConfirmButtonClicked();
    void slotBlocedPole(int index);
};

#endif // CHANGEUSER_H
