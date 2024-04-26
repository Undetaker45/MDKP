#include "settingswindow.h"
#include "ui_settingswindow.h"

SettingsWindow::SettingsWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SettingsWindow)
{
    ui->setupUi(this);
    createModelGroup();
    createModelLectureHall();
    createModelSpecialization();
    connect(ui->ExitBtn, SIGNAL(clicked()), SLOT(slotBackButtonCliked()));
    connect(ui->SpecializaciaBox, SIGNAL(currentTextChanged(const QString &)), SLOT(slotChangeSpecialization(const QString &)));
    connect(ui->SpecializaciaBox, SIGNAL(currentIndexChanged(int)), SLOT(slotBlockedPole(int)));
    connect(ui->Data, SIGNAL(activated(QDate)), SLOT(slotDateSelection(QDate)));
}

SettingsWindow::~SettingsWindow()
{
    delete ui;
}

void SettingsWindow::createModelTeacher(int ID_Specialization) {
    QSqlQuery query;
    query.prepare("SELECT User.Surname ||' '|| User.Name ||' '|| User.MiddleName "
                  "FROM Teacher "
                  "JOIN User ON User.ID = Teacher.ID_User "
                  "WHERE Teacher.ID_Specialization = :id_specialization;");
    query.bindValue(":id_specialization", ID_Specialization);
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
void SettingsWindow::createModelGroup(){
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
    ui->groupBox->setModel(comboModel);
    ui->groupBox->setCurrentIndex(0);
}
void SettingsWindow::createModelSpecialization(){
    specializationModel = new QSqlQueryModel(this);
    specializationModel->setQuery("SELECT Specialization.Name "
                                  "FROM Specialization");
    QStringList items;
    items << "Выберите предметную область";
    for (int row = 0; row < specializationModel->rowCount(); ++row) {
        items << specializationModel->record(row).value("Name").toString();
    }

    QStringListModel* comboModel = new QStringListModel(this);
    comboModel->setStringList(items);
    ui->SpecializaciaBox->setModel(comboModel);
    ui->SpecializaciaBox->setCurrentIndex(0);
}
void SettingsWindow::createModelLectureHall(){
    QSqlQuery query;
    query.prepare("SELECT LectoreHall.Name ||' '|| LectoreHall.AcademicBuilding "
                  "FROM LectoreHall");
    query.exec();

    QStringList items;
    items << "Выберите аудиторию";

    while (query.next()) {
        QString full_name = query.value(0).toString();
        items << full_name;
    }

    QStringListModel* comboModel = new QStringListModel(this);
    comboModel->setStringList(items);
    ui->LectorHall->setModel(comboModel);
    ui->LectorHall->setCurrentIndex(0);
}


void SettingsWindow::setLessonToChangeWidget(Lesson lesson){
    this->lesson = lesson;
    int ID_Specialization = lesson.GetIdSpecialization();
    QString Specialization = Lesson::convertIdSpecializationToString(ID_Specialization);
    ui->SpecializaciaBox->setCurrentText(Specialization);
    int ID_Teacher = lesson.GetIdTeacher();
    QString TeacherS = Lesson::convertIdTeacherToString(ID_Teacher);
    ui->TeacherBox->setCurrentText(TeacherS);
    ui->TitleEdit->setText(lesson.GetTitle());
    int ID_Group = lesson.GetIdGroup();
    QString Group = Lesson::convertIdGroupToString(ID_Group);
    ui->groupBox->setCurrentText(Group);
    int ID_LectureHall = lesson.GetIdLectureHall();
    QString LectureHall = Lesson::convertIdLectureHallToString(ID_LectureHall);
    ui->LectorHall->setCurrentText(LectureHall);
    int TypeOfActivity = lesson.GetTypeOfActivity();
    QString STypeOfActivity = Lesson::convertTypeOfActivityToString(TypeOfActivity);
    ui->VidBox->setCurrentText(STypeOfActivity);
    QDateTime DateTime = lesson.GetTime();
    QString SDateTime = DateTime.toString("yyyy-mm-dd hh:mm");
    QString Data = DateTime.toString("dd.MM.yyyy");
    QString Time = SDateTime.section(' ', 1, 2);
    ui->Time->setCurrentText(Time);
    ui->DataEdit->setText(Data);
    double Payment = lesson.GetPayment();
    ui->PaymentEdit->setText(QString::number(Payment));
}

void SettingsWindow::slotBlockedPole(int index){
    if(index == 0){
        ui->TeacherBox->setEnabled(false);
    }
}

void SettingsWindow::slotChangeSpecialization(const QString &Specialization){
    if (Specialization != "Выберите предметную область"){
        int ID_Specialization = Lesson::convertSpecializationToInt(Specialization);
        createModelTeacher(ID_Specialization);
        ui->TeacherBox->setEnabled(true);
    }
}

void SettingsWindow::slotDateSelection(QDate Data){
    QDate selectedDate = ui->Data->selectedDate();
    QString formattedDate = selectedDate.toString("dd.MM.yyyy");
    ui->DataEdit->setText(formattedDate);
}

void SettingsWindow::slotBackButtonCliked(){
    ui->DataEdit->clear();
    ui->SpecializaciaBox->setCurrentIndex(0);
    ui->TeacherBox->setCurrentIndex(0);
    ui->TitleEdit->clear();
    ui->groupBox->setCurrentIndex(0);
    ui->LectorHall->setCurrentIndex(0);
    ui->VidBox->setCurrentIndex(0);
    ui->Time->setCurrentIndex(0);
    ui->PaymentEdit->clear();
    emit signalClearBackBtn();

}
