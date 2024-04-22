#include "loginwindow.h"
#include "ui_loginwindow.h"

LoginWindow::LoginWindow(Database* database, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    db = database;
//    AddShadowToChildren(this);
    connect(ui->pbvhod, SIGNAL(clicked()), SLOT(slot_LoginButton_clicked()));
}

LoginWindow::~LoginWindow()
{
    delete ui;
}



void LoginWindow::slot_LoginButton_clicked()
{
    qDebug() << "Слот сработал";
    User user = db->CheckLogin(ui->Login->text(),ui->Password->text());
    if(user.isEmpty()){
        return;
    }
    else{
        emit signalLoginSuccessful(user);
    }
}
