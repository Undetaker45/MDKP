#include "listenerwindow.h"
#include "ui_listenerwindow.h"

ListenerWindow::ListenerWindow(const User& us,Database* database, QWidget *parent) :
    AbstractUserWindow(us,parent),
    ui(new Ui::ListenerWindow)
{
    ui->setupUi(this);
}

ListenerWindow::~ListenerWindow()
{
    delete ui;
}
