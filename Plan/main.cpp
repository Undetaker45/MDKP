#include "windownavigator.h"
#include <QApplication>
#include <QtSql>
#include <QString>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QSqlDatabase sdb = QSqlDatabase::addDatabase("QSQLITE");
    sdb.setDatabaseName("Plan.sqlite");
    if (!sdb.open()) {
        qDebug()<<"Не удалось открыть базу данных";
    }

    Database* db = new Database();
    db->SetSqlDatabase(sdb);
    db->CreateTables();
    db->InsertAdmin();
    //db->InsertTestData();

    WindowNavigator navigator(db);
    //LoginWindow login(db);
    //login.show();
    return a.exec();
}
