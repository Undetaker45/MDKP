#ifndef METHODISTWINDOW_H
#define METHODISTWINDOW_H

#include "abstractuserwindow.h"
#include "database.h"
#include "QTableView"
#include "lesson.h"
#include "settingswindow.h"
#include "timewindow.h"
#include <QWidget>

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
class MethodistWindow;
}

class MethodistWindow : public AbstractUserWindow
{
    Q_OBJECT

public:
    explicit MethodistWindow(const User& us,Database* database,QWidget *parent = nullptr);
    ~MethodistWindow();

private:
    Ui::MethodistWindow *ui;
    void fillProfile(const User& user);
    void configuringInterface();
    QSqlQueryModel* LessonModel;
    QTableView* viewLesson;
    Database* db;
    SettingsWindow* Settings;
    QStackedWidget* stackedWidgetLessonManagement;
    TimeWindow *time = new TimeWindow(user);
    void ShowSettings();
    void ShowViewLesson();
    void RefreshDataView();
signals:
    void signalLogoutButtonClicked();

public slots:
    void slotBackButtonSettingsWidgetCliked();
private slots:
    void slotDoubleClikedOnLesson(const QModelIndex index);
    void slotClicedOnButtonAdd();
    void slotRefreshLessonInDatabase(Lesson& lesson);
    void slotAddLessonInDatabase(Lesson& lesson);
    void slotClicedOnButtonTime();

};

#endif // METHODISTWINDOW_H
