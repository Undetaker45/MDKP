#ifndef METHODISTWINDOW_H
#define METHODISTWINDOW_H

#include "abstractuserwindow.h"
#include "database.h"
#include "QTableView"
#include "user.h"
#include <QWidget>

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
};

#endif // METHODISTWINDOW_H
