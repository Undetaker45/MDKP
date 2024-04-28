#ifndef LISTENERWINDOW_H
#define LISTENERWINDOW_H

#include "abstractuserwindow.h"

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
class ListenerWindow;
}

class ListenerWindow : public AbstractUserWindow
{
    Q_OBJECT

public:
    explicit ListenerWindow(const User& us, QWidget *parent = nullptr);
    ~ListenerWindow();

private:
    Ui::ListenerWindow *ui;
    void fillProfile(const User& user);
    void configuringInterface(const User& user);
    QSqlQueryModel* LessonModel;
    QTableView* viewLesson;
signals:
    void signalLogoutButtonClicked();
};

#endif // LISTENERWINDOW_H
