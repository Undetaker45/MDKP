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
    time =  Time;
    payment = Payment.toDouble();
    valid = true;
}

void Lesson::operator << (QSqlQuery& query){
    query.next();
    if(query.value(0).isNull()){
        valid = true;
        return;
    }
    valid = false;
    int Id = query.value("Lessons.ID").toString().toInt();
    id = Id;
    int Id_Teacher = query.value("Lessons.ID_Teacher").toString().toInt();
    id_teacher = Id_Teacher;
    int TypeOfActivity = Lesson::convertTypeOfActivityToInt(query.value("Lessons.TypeOfActivity").toString());
    typeofactivity = TypeOfActivity;
    title = query.value("Lessons.title").toString();
    int Id_Group = query.value("Lessons.ID_Group").toString().toInt();
    id_group = Id_Group;
    int Id_Specialization = query.value("Lessons.ID_Specialization").toString().toInt();
    id_speciazation = Id_Specialization;
    int ID_LectoreHall = query.value("Lessons.ID_LectoreHall").toString().toInt();
    id_lecturehall = ID_LectoreHall;
    QString Time = query.value("Lessons.Time").toString();
    time = Time;
    payment = query.value("Lessons.Payment").toString().toDouble();
}


int Lesson::GetId() const{
    return id;
}

int Lesson::GetIdTeacher() const{
    return id_teacher;
}

int Lesson::GetTypeOfActivity() const{
    return typeofactivity;
}

QString Lesson::GetTitle() const{
    return title;
}

int Lesson::GetIdGroup() const{
    return id_group;
}

int Lesson::GetIdSpecialization() const{
    return id_speciazation;
}

int Lesson::GetIdLectureHall() const{
    return id_lecturehall;
}

QString Lesson::GetTime() const{
    return time;
}

double Lesson::GetPayment() const{
    return payment;
}

bool Lesson::isValid() {
    return valid;
}


void Lesson::SetIdTeacher(int ID_Teacher){
    this->id_teacher = ID_Teacher;
}
void Lesson::SetTypeOfActivity(int TypeOfActivity){
    this->typeofactivity = TypeOfActivity;
}
void Lesson::SetTitle(QString Title){
    this->title = Title;
}
void Lesson::SetIdGroup(int ID_Group){
    this->id_group = ID_Group;
}
void Lesson::SetIdSpecialization(int ID_Specialization){
    this->id_speciazation = ID_Specialization;
}
void Lesson::SetIdLectureHall(int ID_LectureHall){
    this->id_lecturehall = ID_LectureHall;
}
void Lesson::SetTime(QString Time){
    this->time = Time;
}
void Lesson::SetPayment(double Payment){
    this->payment = Payment;
}

QString Lesson::convertTypeOfActivityToString(int TypeOfActivity){
    switch (TypeOfActivity) {
    case Lessons:
        return QString("Лекция");
        break;
    case Practic:
        return QString("Практическое занятие");
        break;
    case UnknownActivity:
        return QString("Unknow");
        break;
     default:
        break;
    }
    return QString("Unknow");

}
int Lesson::convertTypeOfActivityToInt(QString TypeOfActivity){
    if (TypeOfActivity == "Лекция"){
        return Lessons;
    }
    if (TypeOfActivity == "Практическое занятие"){
        return Practic;
    }
    return UnknownActivity;
}

QString Lesson::convertIdSpecializationToString(int ID_Specialization){
    QSqlQuery query;
    query.prepare("SELECT * "
                  "FROM Specialization "
                  "WHERE ID = :id_specialization;");
    query.bindValue(":id_specialization", ID_Specialization);
    bool queryResult = query.exec();

    if(!queryResult){
        qDebug() << query.lastError();
        throw std::runtime_error("Не удалось осуществить поиск специализации.");
    }

    if(query.next() && query.value(0).isNull()){
        return 0;
    }

    return query.value("Name").toString();
}
QString Lesson::convertIdGroupToString(int ID_Group){
    QSqlQuery query;
    query.prepare("SELECT * "
                  "FROM Groups "
                  "WHERE ID = :id_group;");
    query.bindValue(":id_group", ID_Group);
    bool queryResult = query.exec();

    if(!queryResult){
        qDebug() << query.lastError();
        throw std::runtime_error("Не удалось осуществить поиск группы.");
    }

    if(query.next() && query.value(0).isNull()){
        return 0;
    }

    return query.value("Name").toString();
}
int Lesson::convertSpecializationToInt(QString Specialization){
    QSqlQuery query;
    query.prepare("SELECT * "
                  "FROM Specialization "
                  "WHERE Name = :specialization;");
    query.bindValue(":specialization", Specialization);
    bool queryResult = query.exec();

    if(!queryResult){
        qDebug() << query.lastError();
        throw std::runtime_error("Не удалось осуществить поиск специализации.");
    }

    if(query.next() && query.value(0).isNull()){
        return 0;
    }

    return query.value("ID").toInt();
}
int Lesson::convertGroupToInt(QString Group, int ID_Specialization){
    QSqlQuery query;
    query.prepare("SELECT * "
                  "FROM Groups "
                  "WHERE Name = :name AND "
                  "ID_Specialization = :id_specialization;");
    query.bindValue(":name", Group);
    query.bindValue(":id_specialization", ID_Specialization);
    bool queryResult = query.exec();

    if(!queryResult){
        qDebug() << query.lastError();
        throw std::runtime_error("Не удалось осуществить поис группы.");
    }

    if(query.next() && query.value(0).isNull()){
        return 0;
    }

    return query.value("ID").toInt();
}

QString Lesson::convertIdLectureHallToString(int ID_LectureHall){
    QSqlQuery query;
    query.prepare("SELECT LectoreHall.Name ||' '|| LectoreHall.AcademicBuilding "
                  "FROM LectoreHall "
                  "WHERE LectoreHall.ID = :id_lecturehall;");
    query.bindValue(":id_lecturehall", ID_LectureHall);
    bool queryResult = query.exec();

    if(!queryResult){
        qDebug() << query.lastError();
        throw std::runtime_error("Не удалось осуществить поиск аудитории.");
    }

    if(query.next() && query.value(0).isNull()){
        return 0;
    }

    return query.value(0).toString();
}

QString Lesson::convertIdTeacherToString(int ID_Teacher){
    QSqlQuery query;
    query.prepare("SELECT User.Surname || ' ' || User.Name || ' ' || User.MiddleName "
                  "FROM Teacher "
                  "join User on  User.ID = Teacher.ID_User "
                  "WHERE Teacher.ID = :id_teacher;");
    query.bindValue(":id_teacher", ID_Teacher);
    bool queryResult = query.exec();

    if(!queryResult){
        qDebug() << query.lastError();
        throw std::runtime_error("Не удалось осуществить поиск аудитории.");
    }

    if(query.next() && query.value(0).isNull()){
        return 0;
    }

    return query.value(0).toString();
}

int Lesson::convertLectureHallToInt(QString LectureHall) {
    QSqlQuery query;
    QString Name = LectureHall.section(' ', 0, 0);
    QString Academic = LectureHall.section(' ', 1, 1);
    query.prepare("SELECT * "
                  "FROM LectoreHall "
                  "WHERE Name = :name AND "
                  "AcademicBuilding = :academic;");
    query.bindValue(":name", Name);
    query.bindValue(":academic", Academic);
    bool queryResult = query.exec();

    if (!queryResult) {
        qDebug() << query.lastError();
        throw std::runtime_error("Не удалось осуществить поиск аудитории.");
    }

    if (query.next() && query.value(0).isNull()) {
        return 0;
    }

    return query.value("ID").toInt();
}

int Lesson::convertTeacherToInt(QString Teacher, int ID_Specialization) {
    QString Surname = Teacher.section(' ', 0, 0);
    QString Name = Teacher.section(' ', 1, 1);
    QString MiddleName = Teacher.section(' ', 2, 2);
    QSqlQuery query;
    query.prepare("SELECT Teacher.ID AS TeacherI "
                  "FROM Teacher "
                  "JOIN User ON User.ID = Teacher.ID_User "
                  "WHERE Teacher.ID_Specialization = :id_specialization AND "
                  "User.Surname = :surname AND "
                  "User.Name = :name AND "
                  "(User.MiddleName = :middlename OR User.MiddleName = '');");
    query.bindValue(":id_specialization", ID_Specialization);
    query.bindValue(":surname", Surname);
    query.bindValue(":name", Name);
    query.bindValue(":middlename", MiddleName);
    bool queryResult = query.exec();

    if (!queryResult) {
        qDebug() << query.lastError();
        throw std::runtime_error("Не удалось осуществить поиск преподавателя.");
    }

    if (query.next() && query.value(0).isNull()) {
        return 0;
    }

    return query.value("TeacherI").toInt();
}
