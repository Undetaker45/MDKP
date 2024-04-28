#ifndef TIMEWINDOW_H
#define TIMEWINDOW_H

#include <QWidget>
#include "lesson.h"
#include "user.h"
#include "database.h"


namespace Ui {
class TimeWindow;
}

class TimeWindow : public QWidget
{
    Q_OBJECT

public:
    explicit TimeWindow(const User& us, QWidget *parent = nullptr);
    ~TimeWindow();

private:
    Ui::TimeWindow *ui;
    QSqlQueryModel* groupModel;
    void createModelTeacherMetadist();
    void createModelTeacherTeacher(QString Teacher);
    void createModelGroup();
private slots:
    void changeTeacher();
    void changeGroup();
protected:
    User user;
};

#endif // TIMEWINDOW_H
