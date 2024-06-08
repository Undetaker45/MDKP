#include "user.h"

User::User(int id, int role, int isWork, QString Surname, QString Name, QString MiddleName, int ID_Specialization, QString phone, int WorkTime, int Department, int ID_Group) {
    empty = false;
    this->id = id;
    this->role = role;
    this->isWork = isWork;
    this->surname = Surname;
    this->name = Name;
    this->middlename = MiddleName;
    switch(role){
    case(1):
        break;
    case(2):
        break;
    case(3):
        this->id_specialization = ID_Specialization;
        this->phone = phone;
        this->worktime = WorkTime;
        break;
    case(4):
        this->id_specialization = ID_Specialization;
        this->department = Department;
        this->id_group = ID_Group;
        break;
    default:
        break;
    };
}

User::User(int Id, int iswork, QString Surname, QString Name, QString MiddleName, int ID_Specialization, QString Phone, int WorkTime, int Department, int ID_Group, QString Login, QString Password, QString Role) {
    empty = false;
    id = Id;
    int post = User::convertRoleToInt(Role);
    role = post;
    isWork = iswork;
    surname = Surname;
    name = Name;
    middlename = MiddleName;
    switch(post){
    case(1):
        break;
    case(2):
        id_specialization = ID_Specialization;
        phone = Phone;
        worktime = WorkTime;
        break;
    case(3):
        break;
    case(4):
        id_specialization = ID_Specialization;
        department = Department;
        id_group = ID_Group;
        break;
    default:
        break;
    };
    login = Login;
    password = Password;
}

User::User(int id, int role, int isWork, QString Surname, QString Name, QString MiddleName, int ID_Specialization, QString phone, int WorkTime, int Department, int ID_Group, QString Login, QString Password) {
    empty = false;
    this->id = id;
    this->role = role;
    this->isWork = isWork;
    this->surname = Surname;
    this->name = Name;
    this->middlename = MiddleName;
    switch(role){
    case(1):
        break;
    case(2):
        break;
    case(3):
        this->id_specialization = ID_Specialization;
        this->phone = phone;
        this->worktime = WorkTime;
        break;
    case(4):
        this->id_specialization = ID_Specialization;
        this->department = Department;
        this->id_group = ID_Group;
        break;
    default:
        break;
    };
    this->login = Login;
    this->password = Password;
}
//(int id, int post, bool isWork, QString Surname, QString Name, QString MidleName, QString Specialization, QString phone, QString WorkTime, QString Department, QString Group, QString branch, QString Login, QString Password)

User::User(){
    empty = true;
}

int User::getRole() const{
    return role;
}

void User::operator << (QSqlQuery& query){
    query.next();
    if(query.value(0).isNull()){
        empty = true;
        return;
    }
    empty = false;
    int Department;
    int Id = query.value("User.ID").toString().toInt();
    id = Id;
    isWork = query.value("User.Flag").toString().toInt();
    surname = query.value("User.Surname").toString();
    name = query.value("User.Name").toString();
    middlename = query.value("User.MiddleName").toString();
    login = query.value("User.Login").toString();
    password = query.value("User.Password").toString();
    int Role = User::convertRoleToInt(query.value("User.Role").toString());
    role = Role;
    switch (Role) {
    case (1):

        break;
    case(2):

        break;
    case(3):
        id_specialization = query.value("Teacher.ID_Specialization").toString().toInt();
        phone = query.value("Teacher.PhoneNumber").toString();
        worktime = query.value("Teacher.WorkExperience").toString().toInt();
        break;
    case(4):
        id_specialization = query.value("Groups.ID_Specialization").toString().toInt();
        Department = convertDepartmentToInt(query.value("Groups.Department").toString());
        department = Department;
        id_group = query.value("Listener.ID_Group").toString().toInt();
        break;
    default:
        break;
    }
}

int User::convertRoleToInt(QString role){
    if(role == "Администратор"){
        return Admin;
    }
    if(role == "Методист"){
        return Methodist;
    }
    if(role == "Преподаватель"){
        return Teacher;
    }
    if(role == "Слушатель"){
        return Listener;
    }

    return Unknown;
}

bool User::isEmpty() const{
    return empty;
}

void User::SetIsWork(int status){
    this->isWork = status;
}
void User::SetSurname(QString Surname){
    this->surname = Surname;
}
void User::SetName(QString Name){
    this->name = Name;
}
void User::SetMiddleName(QString MiddleName){
    this->middlename = MiddleName;
}
void User::SetPhone(QString PhoneNumber){
    this->phone = PhoneNumber;
}
void User::SetSpecialization(int ID_Specialization){
    this->id_specialization = ID_Specialization;
}
void User::SetRole(int Role){
    this->role = Role;
}
void User::SetWorkTime(int WorkTime){
    this->worktime = WorkTime;
}
void User::SetDepartment(int Department){
    this->department = Department;
}
void User::SetGroup(int ID_Group){
    this->id_group = ID_Group;
}
void User::SetPassword(QString Password){
    this->password = Password;
}
void User::SetLogin(QString Login){
    this->login = Login;
}

int User::GetId() const{
    return id;
}
QString User::GetSurname() const{
    return surname;
}

QString User::GetName() const{
    return name;
}

QString User::GetMiddleName() const{
    return middlename;
}
QString User::GetPhone() const{
    return phone;
}

int User::GetRole() const{
    return role;
}

int User::GetIsWork() const{
    return isWork;
}

int User::GetIdSpecialization() const{
    return id_specialization;
}

int User::GetWorkTime() const{
    return worktime;
}

int User::GetDepartment() const{
    return department;
}

int User::GetIdGroup() const{
    return id_group;
}

QString User::GetLogin() const{
    return login;
}

QString User::GetPassword() const{
    return password;
}

QString User::convertRole(int role){
    switch (role) {
    case Admin:
        return QString("Администратор");
        break;
    case Methodist:
        return QString("Методист");
        break;
    case Teacher:
        return QString("Преподаватель");
        break;
    case Listener:
        return QString("Слушатель");
        break;
    case Unknown:
        return QString("Unknown");
        break;
    default:
        break;
    }
    return QString("Unknown");
}

int User::convertStatusToInt(QString status){
    if(status == "Работает"){
        return Works;
    }
    if(status == "Не работает"){
        return Fired;
    }
    return UnknownStatus;
}

QString User::convertStatusToString(int status){
    switch (status) {
    case Fired:
        return QString("Не работает");
        break;
    case Works:
        return QString("Работает");
        break;
    case UnknownStatus:
        return QString("Unknown");
        break;
    default:
        break;
    }
    return QString("Unknown");
}

int User::convertDepartmentToInt(QString Department){
    if(Department == "Очное"){
        return FullTime;
    }
    if(Department == "Заочное"){
        return Correspondence;
    }
    return UnknownDepartment;
}

QString User::convertDepartmentToString(int Department){
    switch (Department) {
    case FullTime:
        return QString("Очное");
        break;
    case Correspondence:
        return QString("Заочное");
        break;
    case UnknownDepartment:
        return QString("Unknown");
        break;
    default:
        break;
    }
    return QString("Unknown");
}




QString User::convertIdSpecializationToString(int ID_Specialization){
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
QString User::convertIdGroupToString(int ID_Group){
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
int User::convertSpecializationToInt(QString Specialization){
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
int User::convertGroupToInt(QString Group, int ID_Specialization){
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
