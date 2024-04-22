#ifndef TEACHERWINDOW_H
#define TEACHERWINDOW_H

#include "abstractuserwindow.h"
#include "database.h"

namespace Ui {
class TeacherWindow;
}

class TeacherWindow : public AbstractUserWindow
{
    Q_OBJECT

public:
    explicit TeacherWindow(const User& us,Database* database,QWidget *parent = nullptr);
    ~TeacherWindow();

private:
    Ui::TeacherWindow *ui;
};

#endif // TEACHERWINDOW_H
