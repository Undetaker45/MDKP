#ifndef LESSON_H
#define LESSON_H
#include <QDateTime>
#include <QString>
#include <QtSql>
#include "Global.h"

class Lesson
{
public:
    Lesson();
    Lesson(QString ID, QString ID_Teacher, QString TypeOfActivity, QString Title, QString ID_Group, QString ID_Specialization, QString ID_LectureHall, QString Time, QString Payment);
    int GetId() const;
    int GetIdTeacher() const;
    int GetTypeOfActivity() const;
    QString GetTitle() const;
    int GetIdGroup() const;
    int GetIdSpecialization() const;
    int GetIdLectureHall() const;
    QString GetTime() const;
    double GetPayment() const;

    void SetIdTeacher(int ID_Teacher);
    void SetTypeOfActivity(int TypeOfActivity);
    void SetTitle(QString Title);
    void SetIdGroup(int ID_Group);
    void SetIdSpecialization(int ID_Specialization);
    void SetIdLectureHall(int ID_LectureHall);
    void SetTime(QString Time);
    void SetPayment(double Payment);

    bool isValid();
    void operator << (QSqlQuery& query);
    static QString convertTypeOfActivityToString(int TypeOfActivity);
    static int convertTypeOfActivityToInt(QString TypeOfActivity);
    static QString convertIdSpecializationToString(int ID_Specialization);
    static QString convertIdGroupToString(int ID_Group);
    static QString convertIdLectureHallToString(int ID_LectureHall);
    static QString convertIdTeacherToString(int ID_Teacher);
    static int convertSpecializationToInt(QString Specialization);
    static int convertGroupToInt(QString Group, int ID_Specialization);
    static int convertLectureHallToInt(QString LectureHall);
    static int convertTeacherToInt(QString Teacher, int ID_Specialization);
private:
    int id;
    int id_teacher;
    int typeofactivity;
    QString title;
    int id_group;
    int id_speciazation;
    int id_lecturehall;
    QString time;
    double payment;
    bool valid;
};

#endif // LESSON_H
