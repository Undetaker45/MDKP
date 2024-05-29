#ifndef ADMINWINDOW_H
#define ADMINWINDOW_H

#include "abstractuserwindow.h"
#include "changeuser.h"
#include "database.h"
#include "groupwindow.h"
#include "specializationwindow.h"

#include <QMainWindow>
#include <QPushButton>
#include <QVBoxLayout>
#include <QVBoxLayout>
#include <QTableView>
#include <QLayoutItem>
#include <QHeaderView>
#include <QtSql>
#include <QStackedWidget>
#include <QDebug>
#include <QMessageBox>
#include <QPushButton>
#include <QSize>
#include <QRegularExpression>
#include <QRegularExpressionValidator>
#include <stdexcept>


namespace Ui {
class AdminWindow;
}

class AdminWindow : public AbstractUserWindow
{
Q_OBJECT

public:
    explicit AdminWindow(const User& us,Database* database,QWidget *parent = nullptr);
    ~AdminWindow();
private:
    Ui::AdminWindow *ui;
    void configuringInterface();

    QSqlQueryModel* usersModel;
    QTableView* viewUsers;
    ChangeUser* changeUser;
    QStackedWidget* stackedWidgetUserManagement;
    Database* db;
    QSqlQueryModel* groupModel;
    QSqlQueryModel* specializationModel;
    GroupWindow* groupwindow = new GroupWindow();
    SpecializationWindow* specializationwindow = new SpecializationWindow();
    void createModelGroup();
    void createModelSpecialization();
    void fillProfile(const User& user);
    void ShowViewUsers();
    void ShowChangeUser();
    void RefreshDataView();
    void ClearDataRegistrationUserWidget();
    void CheckingFieldsEmpty();
    void SetValidationOnCreateUsers();
signals:
    void signalLogoutButtonClicked();
public slots:
    void slotBackButtonChangeUserWidgetCliked();
private slots:
    void slotDoubleClikedOnUser(const QModelIndex index);
    void slotRegistrationButtonClicked();
    void slotRefreshUserInDatabase(User& user);
    void slotBlocedPole(int index);
    void slotChangeGroup();
    void slotChangeSpecialization();
    void slotGroupButtonClicked();
    void slotSpecializationButtonClicked();
};

#endif // ADMINWINDOW_H
