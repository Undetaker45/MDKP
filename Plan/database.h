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
    void InsertAdminAndSmallTestData();
    Lesson GetLessonById(int id);
    User GetUserById(int id);
    User CheckLogin(const QString login, const QString password);
    static int SearchSpecialization(QString Specialization);
    static int SearchGroup(QString Group);
    static int AddSpecialization(QString Specialization);
    static int AddGroup(QString Group, int ID_Specialization, QString Department);
    static void DeleteGroup(QString Group);
    static void DeleteSpecialization(QString Specialization);
    void RegisterUser(QString Surname, QString Name, QString MidleName, QString Specialization, QString Phone, QString WorkTime, QString Group, QString Login, QString Password, QString Role);
    void RefreshUserById(User user);
    void AddLesson(Lesson lesson);
    void RefreshLessonById(Lesson lesson);
    static int Time(int ID_Teacher, int ID_Group);
private:
    QSqlDatabase* sqlDatabase;

signals:
};

#endif // DATABASE_H
