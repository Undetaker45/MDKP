#include "lesson.h"

Lesson::Lesson(){
    valid = false;
}
Lesson::Lesson(QString ID, QString ID_Teacher, QString TypeOfActivity, QString Title, QString ID_Group, QString ID_Specialization, QString ID_LectureHall, QString Time, QString Payment) {
    id = ID.toInt();
    id_teacher = ID_Teacher.toInt();
    typeofactivity = TypeOfActivity.toInt();
    title = Title;
    id_group = ID_Group.toInt();
    id_speciazation = ID_Specialization.toInt();
    id_lecturehall = ID_LectureHall.toInt();
    time =  QDateTime::fromString(Time,"yyyy-MM-dd hh:mm:ss");
    payment = Payment.toDouble();
    valid = true;
}

int Lesson::GetId(){
    return id;
}

int Lesson::GetIdTeacher(){
    return id_teacher;
}

int Lesson::GetTypeOfActivity(){
    return typeofactivity;
}

QString Lesson::GetTitle(){
    return title;
}

int Lesson::GetIdGroup(){
    return id_group;
}

int Lesson::GetIdSpecialization(){
    return id_speciazation;
}

int Lesson::GetIdLectureHall(){
    return id_lecturehall;
}

QDateTime Lesson::GetTime(){
    return time;
}

double Lesson::GetPayment(){
    return payment;
}

QString Lesson::GetPaymentString(){
    return QString::number(payment);
}

bool Lesson::isValid(){
    return valid;
}

void Lesson::SetPayment(double Payment){
    payment = Payment;
}
void Lesson::SetTypeOfActivity(int TypeOfActivity){
    typeofactivity = TypeOfActivity;
}

