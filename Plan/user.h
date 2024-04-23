#ifndef USER_H
#define USER_H
#include <QString>
#include <QtSql>
#include "Global.h"

class User
{
public:
    User(int id, int role, int isWork, QString Surname, QString Name, QString MiddleName, int ID_Specialization, QString phone, int WorkTime, int Department, int ID_Group);
    User(int id, int isWork, QString SurnName, QString Name, QString MiddleName, int ID_Specialization, QString Phone, int WorkTime, int Department, int ID_Group, QString Login, QString Password, QString Role);
    User(int id, int role, int isWork, QString SurnName, QString Name, QString MiddleName, int ID_Specialization, QString phone, int WorkTime, int Department, int ID_Group, QString Login, QString Password);
    User();
    int getRole() const;
private:
    int id;
    int role;
    int isWork;
    QString surname;
    QString name;
    QString middlename;
    int id_specialization;
    QString phone;
    int worktime;
    int department;
    int id_group;
    QString login;
    QString password;
    bool empty;

public:
    void operator << (QSqlQuery &query);
    void SetIsWork(int IsWork);
    void SetSurname(QString Surname);
    void SetName(QString Name);
    void SetMiddleName(QString MiddleName);
    void SetPhone(QString PhoneNumber);
    void SetSpecialization(int ID_Specialization);
    void SetRole(int Role);
    void SetWorkTime(int WorkTime);
    void SetDepartment(int Department);
    void SetGroup(int ID_Group);
    void SetPassword(QString Password);
    void SetLogin(QString Login);

    int GetId() const;
    int GetIsWork() const;
    QString GetSurname() const;
    QString GetName() const;
    QString GetMiddleName() const;
    QString GetPhone() const;
    int GetIdSpecialization() const;
    int GetRole() const;
    int GetWorkTime() const;
    int GetDepartment() const;
    int GetIdGroup() const;
    QString GetPassword() const;
    QString GetLogin() const;
    bool isEmpty() const;
    static QString convertRole(int role);
    static int convertRoleToInt(QString role);
    static QString convertStatusToString(int status);
    static int convertStatusToInt(QString status);
    static QString convertDepartmentToString(int Department);
    static int convertDepartmentToInt(QString Department);
    static QString convertIdSpecializationToString(int ID_Specialization);
    static QString convertIdGroupToString(int ID_Group);
    static int convertSpecializationToInt(QString Specialization);
    static int convertGroupToInt(QString Group, int ID_Specialization);
};
//Q_DECLARE_METATYPE(User)

#endif // USER_H
