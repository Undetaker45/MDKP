#ifndef LESSON_H
#define LESSON_H
#include <QDateTime>
#include <QString>

class Lesson
{
public:
    Lesson();
    Lesson(QString ID, QString ID_Teacher, QString TypeOfActivity, QString Title, QString ID_Group, QString ID_Specialization, QString ID_LectureHall, QString Time, QString Payment);
    int GetId();
    int GetIdTeacher();
    int GetTypeOfActivity();
    QString GetTitle();
    int GetIdGroup();
    int GetIdSpecialization();
    int GetIdLectureHall();
    QDateTime GetTime();
    double GetPayment();
    QString GetPaymentString();
    void SetTypeOfActivity(int TypeOfActivity);
    void SetPayment(double Payment);
    bool isValid();
private:
    int id;
    int id_teacher;
    int typeofactivity;
    QString title;
    int id_group;
    int id_speciazation;
    int id_lecturehall;
    QDateTime time;
    double payment;
    bool valid;
};

#endif // LESSON_H
