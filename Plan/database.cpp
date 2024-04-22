#include "database.h"
#include <QDateTime>

Database::Database(QObject *parent)
    : QObject{parent}
{

}

void Database::SetSqlDatabase(QSqlDatabase &sdb){
    sqlDatabase = &sdb;
}

void  Database::CreateTables(){
    QSqlQuery query;
    QString str_query = "CREATE TABLE if not exists Lessons ("
                            "ID INTEGER PRIMARY KEY NOT NULL, "
                            "ID_Teacher INTEGER NOT NULL, "
                            "TypeOfActivity INTEGER NOT NULL, "
                            "Title NVARCHAR (40), "
                            "ID_Group INTEGER NOT NULL, "
                            "ID_Specialization INTEGER NOT NULL, "
                            "ID_LectureHall INTEGER NOT NULL, "
                            "TIME DATE NOT NULL, "
                            "Payment FLOAT NOT NULL, "
                            "Status INTEGER NOT NULL, "
                            "FOREIGN KEY (ID_Teacher) REFERENCES Teacher(ID), "
                            "FOREIGN KEY (ID_Group) REFERENCES Groups(ID), "
                            "FOREIGN KEY (ID_Specialization) REFERENCES Specialization(ID), "
                            "FOREIGN KEY (ID_LectureHall) REFERENCES LectureHall(ID));";
    bool queryResult = query.exec(str_query);
    if(!queryResult){
        qDebug() << "Не удаётся создать таблицу Lessons";
        qDebug() << query.lastError();
    }

    str_query = "CREATE TABLE if not exists User ("
                    "ID INTEGER PRIMARY KEY NOT NULL, "
                    "Flag INTEGER NOT NULL, "
                    "Login NVARCHAR(40) NOT NULL, "
                    "Password NVARCHAR(40) NOT NULL, "
                    "Name NVARCHAR(40) NOT NULL, "
                    "Surname NVARCHAR(40) NOT NULL, "
                    "MiddleName NVARCHAR(40) NULL, "
                    "Role NVARCHAR(40) NOT NULL);";
    queryResult = query.exec(str_query);
    if(!queryResult){
        qDebug() << "Не удаётся создать таблицу User";
        qDebug() << query.lastError();
    }

    str_query = "CREATE TABLE if not exists Listener ("
                    "ID INTEGER PRIMARY KEY NOT NULL, "
                    "Department NVARCHAR(20) NOT NULL, "
                    "ID_Group INTEGER NOT NULL, "
                    "ID_User INTEGER NOT NULL, "
                    "FOREIGN KEY (ID_Group) REFERENCES Groups(ID), "
                    "FOREIGN KEY (ID_User) REFERENCES User(ID));";
    queryResult = query.exec(str_query);
    if(!queryResult){
        qDebug() << "Не удаётся создать таблицу Listener";
        qDebug() << query.lastError();
    }

    str_query = "CREATE TABLE if not exists Teacher ("
                    "ID INTEGER PRIMARY KEY NOT NULL, "
                    "ID_Specialization INTEGER NOT NULL, "
                    "PhoneNumber NVARCHAR(20) NOT NULL, "
                    "WorkExperience INTEGER NOT NULL, "
                    "ID_User INTEGER NOT NULL, "
                    "FOREIGN KEY (ID_Specialization) REFERENCES Specialization(ID), "
                    "FOREIGN KEY (ID_User) REFERENCES User(ID));";
    queryResult = query.exec(str_query);
    if(!queryResult){
        qDebug() << "Не удаётся создать таблицу Teacher";
        qDebug() << query.lastError();
    }

    str_query = "CREATE TABLE if not exists Groups ("
                "ID INTEGER PRIMARY KEY NOT NULL, "
                "Name NVARCHAR(20) NOT NULL, "
                "ID_Specialization INTEGER NOT NULL, "
                "FOREIGN KEY (ID_Specialization) REFERENCES Specialization(ID));";
    queryResult = query.exec(str_query);
    if(!queryResult){
        qDebug() << "Не удаётся создать таблицу Groups";
        qDebug() << query.lastError();
    }
    str_query = "CREATE TABLE if not exists LectoreHall ("
                "ID INTEGER PRIMARY KEY NOT NULL, "
                "Name NVARCHAR(15) NOT NULL, "
                "AcademicBuilding NVARCHAR(15) NOT NULL);";
    queryResult = query.exec(str_query);
    if(!queryResult){
        qDebug() << "Не удаётся создать таблицу LectoreHall";
        qDebug() << query.lastError();
    }
    str_query = "CREATE TABLE if not exists Specialization ("
                "ID INTEGER PRIMARY KEY NOT NULL, "
                "Name NVARCHAR(40) NOT NULL);";
    queryResult = query.exec(str_query);
    if(!queryResult){
        qDebug() << "Не удаётся создать таблицу Specialization";
        qDebug() << query.lastError();
    }


}

Lesson Database::GetLessonById(int id){
    QSqlQuery query;
    QString str_query = QString("SELECT *"
                                "FROM Lessons "
                                "WHERE ID = %1;").arg(id);

    bool queryResult = query.exec(str_query);

    if(!queryResult){
        qDebug() << query.lastError();
        return Lesson();
    }


    if(query.next() && query.value(0).isNull()){
        return Lesson();
    }
    QString ID = query.value("ID").toString();
    QString ID_Teacher = query.value("ID_Teacher").toString();
    QString TypeOfActivity = query.value("TypeOfActivity").toString();
    QString Title = query.value("Title").toString();
    QString ID_Group = query.value("ID_Group").toString();
    QString ID_Specialization = query.value("ID_Specialization").toString();
    QString ID_LectureHall = query.value("ID_LectureHall").toString();
    QString Time = query.value("Time").toString();
    QString Payment = query.value("Payment").toString();

    return Lesson(ID,ID_Teacher,TypeOfActivity,Title,ID_Group,ID_Specialization,ID_LectureHall,Time,Payment);
}


User Database::GetUserById(int id){
    QSqlQuery query;
    QString str_query;
    str_query = QString("SELECT * "
                            "FROM User "
                            "WHERE ID = '%1';").arg(id);

    bool queryResult = query.exec(str_query);

    if(!queryResult){
        qDebug() << query.lastError();
        return User();
    }


    User user;
    user << query;

    return user;
}

User Database::CheckLogin(const QString login, const QString password){
    QSqlQuery query;
    QString str_query = QString("SELECT * "
                                "FROM User "
                                "WHERE Login = '%1' AND Password = '%2';").arg(login, password);

    bool queryResult = query.exec(str_query);
    if(!queryResult){
        qDebug() << query.lastError();
        qDebug() << "Не нашел";
        return User();
    }
    qDebug() << "Нашел";
    User user;
    user << query;
    return user;
}
int Database::SearchSpecialization(QString Specialization){
    QSqlQuery query;
    query.prepare("SELECT * "
                  "FROM Specialization "
                  "WHERE Name = :name;");
    query.bindValue(":name", Specialization);
    bool queryResult = query.exec();

    if(!queryResult){
        qDebug() << query.lastError();
        throw std::runtime_error("Не удалось осуществить поиск вставленной специализации.");
    }

    if(query.next() && query.value(0).isNull()){
        qDebug() << query.lastError();
        return 0;
    }

    return query.value("ID").toInt();
}

int Database::SearchGroup(QString Group, QString ID_Specialization){
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
        throw std::runtime_error("Не удалось осуществить поиск группы.");
    }

    if(query.next() && query.value(0).isNull()){
        return 0;
    }

    return query.value("ID").toInt();
}

int Database::AddSpecialization(QString Specialization){
    QSqlQuery query;
    query.prepare("INSERT INTO Specialization (Name) VALUES"
                  "(:name)");
    query.bindValue(":name", Specialization);

    bool queryResult = query.exec();;

    if(!queryResult){
        qDebug() << query.lastError();
        throw std::runtime_error("Не удалось вставить данные о специализации в БД.");
    }
    int ID_Specialization = SearchSpecialization(Specialization);
    return ID_Specialization;
}
int Database::AddGroup(QString Group, QString ID_Specialization){
    QSqlQuery query;
    query.prepare("INSERT INTO Groups (Name, ID_Specialization) VALUES"
                  "(:name, id_specialization)");
    query.bindValue(":name", Group);
    query.bindValue(":id_specialization", ID_Specialization);


    bool queryResult = query.exec();;

    if(!queryResult){
        qDebug() << query.lastError();
        throw std::runtime_error("Не удалось вставить данные о группе в БД.");
    }
    int ID_Group = SearchGroup(Group, ID_Specialization);
    return ID_Group;
}

void Database::RegisterUser(QString Surname, QString Name, QString MiddleName, QString Specialization, QString Phone, QString WorkTime, QString Department, QString Group, QString Login, QString Password, QString Role){
    QSqlQuery query;
    QString str_query;
    int ID_User;
    int ID_Specialization;
    if (Specialization != ""){
        ID_Specialization = SearchSpecialization(Specialization);

        if (ID_Specialization == 0){
            ID_Specialization = AddSpecialization(Specialization);
        }
    }
    int Post = User::convertRoleToInt(Role);
    int ID_Group;
    if (Group != ""){
        ID_Group = SearchGroup(Group,  QString::number(ID_Specialization));

        if (ID_Group == 0){
            ID_Group = AddGroup(Group, QString::number(ID_Specialization));
        }
    }

    bool queryResult;

    str_query = QString("SELECT * "
                                "FROM User "
                                "WHERE Login = '%1';").arg(Login);

    queryResult = query.exec(str_query);
    if(!queryResult){
        qDebug() << query.lastError();
        throw std::runtime_error("Не удалось выполнить запрос.");
    }

    if(query.next() && !query.value(0).isNull()){
        throw std::runtime_error("Данный логин уже используется.");
    }
    query.prepare("INSERT INTO User (Flag, Login, Password, Name, Surname, MiddleName, Role) VALUES "
                  "(1, :login, :password, :name, :surname, :middlename, :role);");
    query.bindValue(":login", Login);
    query.bindValue(":password", Password);
    query.bindValue(":name", Name);
    query.bindValue(":surname", Surname);
    query.bindValue(":middlename", MiddleName);
    query.bindValue(":role", Role);
    queryResult = query.exec();

    if(!queryResult){
        qDebug() << query.lastError();
        throw std::runtime_error("Вставка данных не выполнена.");
    }
    switch(Post){
    case (1):
//  Admin
        break;
    case (2):
//  Methodist
        break;
    case (3):
//  Teacher
        query.prepare("SELECT ID as ID "
                      "FROM User "
                      "WHERE Login = :login;");
        query.bindValue(":login",Login);

        ID_User = query.value("ID").toInt();
        query.prepare("SELECT ID "
                      "FROM Teacher "
                      "WHERE PhoneNumber = :phone;");
        query.bindValue(":phone",Phone);
        query.exec();
        if(query.next() && !query.value(0).isNull()){
            throw std::runtime_error("Данный номер телефона уже используется.");
        }

        query.prepare("INSERT INTO Teacher (ID_Specialization, PhoneNumber, WorkExperience, ID_User) VALUES "
                      "(:id_specialization, :phonenumber, :workexperience, :id_user);");

        query.bindValue(":id_specialization", ID_Specialization);
        query.bindValue(":phonenumber", Phone);
        query.bindValue(":workexperience", WorkTime);
        query.bindValue(":id_user", ID_User);
        queryResult = query.exec();

        if(!queryResult){
            qDebug() << query.lastError();
            throw std::runtime_error("Вставка данных не выполнена.");
        }
        break;
    case (4):
//  Listener
        query.prepare("SELECT ID as ID "
                      "FROM User "
                      "WHERE Login = :login;");
        query.bindValue(":login",Login);

        ID_User = query.value("ID").toInt();

        query.prepare("SELECT COUNT(*) as cGroup "
                            "FROM Listener "
                            "WHERE ID_Group = :id_group");
        query.bindValue(":id_group", ID_Group);
        if (query.value("cGroup").toInt() > 4){
            throw std::runtime_error("В данной группе слишком много студентов.");
        }

        query.prepare("INSERT INTO Listener (Department, ID_Group, ID_User) VALUES "
                      "(:department, :id_group, :id_user);");
        query.bindValue(":department", Department);
        query.bindValue(":id_group", ID_Group);
        query.bindValue(":id_user", ID_User);
        queryResult = query.exec();

        if(!queryResult){
            qDebug() << query.lastError();
            throw std::runtime_error("Вставка данных не выполнена.");
        }
        break;
    default:
        break;
    };
}


void Database::AddLesson(Lesson lesson){
    QSqlQuery query;
    query.prepare("SELECT COUNT(*) as LectTime "
                  "FROM Lessons"
                  "WHERE ID_LectureHall = :id_lecturehall AND "
                  "Time = :time");
    query.bindValue(":id_lecturehall", lesson.GetIdLectureHall());
    query.bindValue(":time", lesson.GetTime());
    if (query.value("LectTime").toInt() > 0){
        throw std::runtime_error("В данной аудитории уже записано занятие.");
    }
    query.prepare("SELECT COUNT(*) as TeachTime "
                  "FROM Lessons"
                  "WHERE ID_Teacher = :id_teacher AND "
                  "Time = :time");
    query.bindValue(":id_teacher", lesson.GetIdTeacher());
    query.bindValue(":time", lesson.GetTime());
    if (query.value("LectTime").toInt() > 0){
        throw std::runtime_error("Данный преподаватель занят в это время.");
    }
    query.prepare("INSERT INTO Lessons (ID_Teacher, TypeOfActivity, Title, ID_Group, ID_Specialization, ID_LectureHall, Time, Payment) VALUES "
                  "(id_teacher, :typeofactivity, :title, :id_group, :id_specialization, :id_lecturehall, :time, :payment);");
    query.bindValue(":id_teacher", lesson.GetIdTeacher());
    query.bindValue(":typeofactivity", lesson.GetTypeOfActivity());
    query.bindValue(":title", lesson.GetTitle());
    query.bindValue(":id_group", lesson.GetIdGroup());
    query.bindValue(":id_specialization", lesson.GetIdSpecialization());
    query.bindValue(":id_lecturehall", lesson.GetIdLectureHall());
    query.bindValue(":time", lesson.GetTime());
    query.bindValue(":payment", lesson.GetPayment());

    bool queryResult = query.exec();
    if(!queryResult){
        qDebug() << query.lastError();
        throw std::runtime_error("Не удалось вставить данные в БД.");
    }
}

void Database::RefreshLessonById(Lesson lesson){
    QSqlQuery query;
    query.prepare("UPDATE  Lessons "
                  "SET    ID_Teacher = :teacher"
                  "       TypeOfActivity = :typeofactivity"
                  "       Title = :title"
                  "       ID_Group = :id_group"
                  "       ID_Specialization = id_specialization"
                  "       ID_LectureHall = id_lecturehall"
                  "       Time = :time"
                  "       Payment = :payment"
                  "WHERE ID = :id;");
    query.bindValue(":id_teacher", lesson.GetIdTeacher());
    query.bindValue(":typeofactivity", lesson.GetTypeOfActivity());
    query.bindValue(":title", lesson.GetTitle());
    query.bindValue(":id_group", lesson.GetIdGroup());
    query.bindValue(":id_specialization", lesson.GetIdSpecialization());
    query.bindValue(":id_lecturehall", lesson.GetIdLectureHall());
    query.bindValue(":id_time", lesson.GetTime());
    query.bindValue(":payment", lesson.GetPayment());
    query.bindValue(":id", lesson.GetId());
    bool queryResult = query.exec();
    if(!queryResult){
        qDebug() << query.lastError();
        throw std::runtime_error("Не удалось обновить данные.");
    }
}

void Database::RefreshUserById(User user){
    QSqlQuery query;
    bool queryResult;
    query.prepare("UPDATE User "
                  "SET  Flag = :flag,"
                  "     Login = :login,"
                  "     Password = :password,"
                  "     Name = :name,"
                  "     Surname = :surname,"
                  "     MidleName = :middlename,"
                  "     Role = :role"
                  "Where ID =:id;");
    query.bindValue(":login", user.GetLogin());
    query.bindValue(":password", user.GetPassword());
    query.bindValue(":name", user.GetName());
    query.bindValue(":surname", user.GetSurname());
    query.bindValue(":middlename", user.GetMiddleName());
    query.bindValue(":role", user.GetRole());
    query.bindValue(":id", user.GetId());
    queryResult = query.exec();
    if(!queryResult){
        qDebug() << query.lastError();
        throw std::runtime_error("Обновление данных не выполнено.");
    }

    switch(user.GetRole()){
    case (1):
//  Admin
        break;
    case (2):
//  Methodist
        break;
    case (3):
//  Teacher
        query.prepare("UPDATE Teacher "
                      "SET  ID_Specialization = :id_specialization,"
                      "     PhoneNumber = :phonenumber,"
                      "     WorkExperience = :workexperience"
                      "Where ID_User = :id;");
        query.bindValue(":id_specialization", user.GetIdSpecialization());
        query.bindValue(":phonenumber", user.GetPhone());
        query.bindValue(":workexperience", user.GetWorkTime());
        query.bindValue(":id", user.GetId());
        queryResult = query.exec();

        if(!queryResult){
            qDebug() << query.lastError();
            throw std::runtime_error("Обновление данных не выполнено.");
        }
        break;
    case (4):
//  Listener
        query.prepare("UPDATE Listener "
                      "SET  ID_Specialization = :id_specialization,"
                      "     Department = :department,"
                      "     ID_Group = :id_grout"
                      "Where ID_User = :id;");
        query.bindValue(":id_specialization", user.GetIdSpecialization());
        query.bindValue(":department", user.GetDepartment());
        query.bindValue(":id_group", user.GetIdGroup());
        query.bindValue(":id", user.GetId());
        queryResult = query.exec();

        if(!queryResult){
            qDebug() << query.lastError();
            throw std::runtime_error("Обновление данных не выполнено.");
        }
        break;
    default:
        break;
    };
}

void Database::InsertAdmin(){
    QSqlQuery query;
    query.prepare("SELECT ID "
                  "FROM User "
                  "WHERE Login = 'admin' AND Password = 'admin';");
    if(!query.exec()){
        qDebug()<<"Не удалось вставить админа";
    }

    if(query.next() && !query.value(0).isNull()){
        return;
    }
    else{
        query.prepare("INSERT INTO User (Flag, Login, Password, Name, Surname, MiddleName, Role) VALUES "
                      "(1, 'admin', 'admin', 'Супер', 'Юзер', 'Викторович', 'Администратор')");
        query.exec();
    }
}
int Database::Time(QString ID_Teacher, QString ID_Group){
    QSqlQuery query;
    query.prepare("SELECT COUNT(*) as sTime "
                  "FROM Lessons "
                  "WHERE(ID_Teacher = :id_teacher AND"
                  "ID_Group = :id_group);");
    query.bindValue(":id_teacher", ID_Teacher);
    query.bindValue("id_group", ID_Group);
    return query.value("sTime").toInt()* 95;
}
