#ifndef TEACHERWINDOW_H
#define TEACHERWINDOW_H

#include "abstractuserwindow.h"
#include "timewindow.h"


#include <QMainWindow>
#include <QPushButton>
#include <QTableView>
#include <QHeaderView>
#include <QtSql>
#include <QStackedWidget>
#include <QDebug>
#include <QMessageBox>
#include <QPushButton>
#include <QSize>
#include <stdexcept>

namespace Ui {
class TeacherWindow;
}

class TeacherWindow : public AbstractUserWindow
{
    Q_OBJECT

public:
    explicit TeacherWindow(const User& us,QWidget *parent = nullptr);
    ~TeacherWindow();

private:
    Ui::TeacherWindow *ui;
    void fillProfile(const User& user);
    void configuringInterface(const User& user);
    QSqlQueryModel* LessonModel;
    QTableView* viewLesson;
signals:
    void signalLogoutButtonClicked();
private slots:
    void slotClicedOnButtonTime();
};

#endif // TEACHERWINDOW_H
