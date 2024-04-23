#ifndef DATABASE_H
#define DATABASE_H

#include <QObject>
#include <QtSql>
#include <QList>
#include "lesson.h"
#include "user.h"
#include <stdexcept>

class Database : public QObject
{
    Q_OBJECT
public:
    explicit Database(QObject *parent = nullptr);
    void SetSqlDatabase(QSqlDatabase &sdb);
    void CreateTables();
    void InsertTestData();
    void InsertAdmin();
    Lesson GetLessonById(int id);
    User GetUserById(int id);
    User CheckLogin(const QString login, const QString password);
    int SearchSpecialization(QString Specialization);
    int SearchGroup(QString Group, int ID_Specialization);
    int AddSpecialization(QString Specialization);
    int AddGroup(QString Group, int ID_Specialization);
    void RegisterUser(QString Surname, QString Name, QString MidleName, QString Specialization, QString Phone, QString WorkTime, QString Department, QString Group, QString Login, QString Password, QString Role);
    void RefreshUserById(User user);
    void AddLesson(Lesson lesson);
    void RefreshLessonById(Lesson lesson);
    int Time(QString ID_Teacher, QString ID_Group);
private:
    QSqlDatabase* sqlDatabase;

signals:
};

#endif // DATABASE_H
