#include "timewindow.h"
#include "ui_timewindow.h"


TimeWindow::TimeWindow(const User& us,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TimeWindow)
{
    ui->setupUi(this);
    user = us;
    int Role = user.GetRole();
    if (Role == 2){
        ui->TeacherBox->setEnabled(true);
        createModelGroup();
        createModelTeacherMetadist();
    }
    else{
        ui->TeacherBox->setEnabled(false);
        QString Teacher = user.GetSurname() + " " + user.GetName() + " " + user.GetMiddleName();
        createModelTeacherTeacher(Teacher);
        createModelGroup();
    }
    ui->TimeEdit->setReadOnly(true);
    connect(ui->TeacherBox, SIGNAL(currentIndexChanged(int)), SLOT(changeTeacher()));
    connect(ui->GroupBox, SIGNAL(currentIndexChanged(int)), SLOT(changeGroup()));
}

TimeWindow::~TimeWindow()
{
    delete ui;
}

void TimeWindow::createModelTeacherMetadist() {
    QSqlQuery query;
    query.prepare("SELECT User.Surname ||' '|| User.Name ||' '|| User.MiddleName "
                  "FROM Teacher "
                  "JOIN User ON User.ID = Teacher.ID_User;");

    query.exec();

    QStringList items;
    items << "Выберите преподавателя";

    while (query.next()) {
        QString full_name = query.value(0).toString();
        items << full_name;
    }

    QStringListModel* comboModel = new QStringListModel(this);
    comboModel->setStringList(items);
    ui->TeacherBox->setModel(comboModel);
    ui->TeacherBox->setCurrentIndex(0);
}
void TimeWindow::createModelGroup(){
    groupModel = new QSqlQueryModel(this);
    groupModel->setQuery("SELECT Groups.Name "
                         "FROM Groups; ");
    QStringList items;
    items << "Выберите группу";
    for (int row = 0; row < groupModel->rowCount(); ++row) {
        items << groupModel->record(row).value("Name").toString();
    }

    QStringListModel* comboModel = new QStringListModel(this);
    comboModel->setStringList(items);
    ui->GroupBox->setModel(comboModel);
    ui->GroupBox->setCurrentIndex(0);
}

void TimeWindow::createModelTeacherTeacher(QString Teacher) {
    QStringList items;
    items << "Выберите преподавателя" << Teacher;
    QStringListModel* comboModel = new QStringListModel(this);
    comboModel->setStringList(items);
    ui->TeacherBox->setModel(comboModel);
    ui->TeacherBox->setCurrentIndex(1);
}

void TimeWindow::changeTeacher(){
    if(ui->TeacherBox->currentIndex() != 0 && ui->GroupBox->currentIndex() != 0){
        int ID_Teacher = ui->TeacherBox->currentIndex();
        int ID_Group = ui->GroupBox->currentIndex();
        int Time = Database::Time(ID_Teacher, ID_Group);
        ui->TimeEdit->setText(QString::number(Time));
    }
}
void TimeWindow::changeGroup(){
    if(ui->TeacherBox->currentIndex() != 0 && ui->GroupBox->currentIndex() != 0){
        int ID_Group = ui->GroupBox->currentIndex();
        int ID_Teacher;
        int Time;
        if(user.GetRole() == 2){
            ID_Teacher = ui->TeacherBox->currentIndex();
            Time = Database::Time(ID_Teacher, ID_Group);
            ui->TimeEdit->setText(QString::number(Time));
        }
        else if(user.GetRole() == 3){
            QString Teacher = ui->TeacherBox->currentText();
            ID_Teacher = Lesson::convertTeacherToInt(Teacher, user.GetIdSpecialization());
            Time = Database::Time(ID_Teacher, ID_Group);
            ui->TimeEdit->setText(QString::number(Time));
        }
    }
}
