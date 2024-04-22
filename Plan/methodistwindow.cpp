#include "methodistwindow.h"
#include "ui_methodistwindow.h"

MethodistWindow::MethodistWindow(const User& us,Database* database, QWidget *parent) :
    AbstractUserWindow(us,parent),
    ui(new Ui::MethodistWindow)
{
    ui->setupUi(this);
}

MethodistWindow::~MethodistWindow()
{
    delete ui;
}
