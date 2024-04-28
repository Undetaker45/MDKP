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
    SetValidationOnCreateLessons();
    ui->DataEdit->setReadOnly(true);
    connect(ui->ExitBtn, SIGNAL(clicked()), SLOT(slotBackButtonCliked()));
    connect(this, SIGNAL(signalBackButtonCliked()), SLOT(slotBackButtonCliked()));
    connect(ui->SpecializaciaBox, SIGNAL(currentTextChanged(QString)), SLOT(slotChangeSpecialization(QString)));
    connect(ui->ConfirmBtn,SIGNAL(clicked()),SLOT(slotConfirmButtonClicked()));
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
    QString DateTime = lesson.GetTime();
    QString Data = DateTime.section(' ', 0, 0);
    QString Time = DateTime.section(' ', 1, 1);
    ui->Time->setCurrentText(Time);
    ui->DataEdit->setText(Data);
    double Payment = lesson.GetPayment();
    ui->PaymentEdit->setText(QString::number(Payment));
    Change = true;
}

void SettingsWindow::slotConfirmButtonClicked(){
    try {
        CheckingFieldsEmpty();
    } catch (std::runtime_error& err) {
        QMessageBox::information(this,"Предупреждение",err.what());
        return;
    }
    Lesson newLesson;
    if (Change){
        newLesson = lesson;
    }
    QString Teacher = ui->TeacherBox->currentText();
    QString Specialization = ui->SpecializaciaBox->currentText();
    int ID_Specialization = Lesson::convertSpecializationToInt(Specialization);
    int ID_Teacher = Lesson::convertTeacherToInt(Teacher, ID_Specialization);
    newLesson.SetIdTeacher(ID_Teacher);
    newLesson.SetIdSpecialization(ID_Specialization);
    QString Group = ui->groupBox->currentText();
    int ID_Group = Lesson::convertGroupToInt(Group, ID_Specialization);
    newLesson.SetIdGroup(ID_Group);
    QString LectoreHall = ui->LectorHall->currentText();
    int ID_LectoreHall = Lesson::convertLectureHallToInt(LectoreHall);
    newLesson.SetIdLectureHall(ID_LectoreHall);
    QString STypeOfActivity = ui->VidBox->currentText();
    int TypeOfActivity = Lesson::convertTypeOfActivityToInt(STypeOfActivity);
    newLesson.SetTypeOfActivity(TypeOfActivity);
    QString Data = ui->DataEdit->text();
    QString Time = ui->Time->currentText();
    QString SDataTime = Data + " " + Time;
    newLesson.SetTime(SDataTime);
    QString SPayment = ui->PaymentEdit->text();
    double Payment = SPayment.toDouble();
    newLesson.SetTitle(ui->TitleEdit->text());
    newLesson.SetPayment(Payment);
    if (Change){
        Change = false;
        cleari();
        emit signalRefreshLesson(newLesson);
    }
    else {
        cleari();
        emit signalAddLesson(newLesson);
    }
}

void SettingsWindow::slotBlockedPole(int index){
    if(index == 0){
        ui->TeacherBox->setEnabled(false);
    }
}

void SettingsWindow::slotChangeSpecialization(QString Specialization){
    if (Specialization != "Выберите предметную область"){
        int ID_Specialization = Lesson::convertSpecializationToInt(Specialization);
        createModelTeacher(ID_Specialization);
        ui->TeacherBox->setEnabled(true);
    }
}

void SettingsWindow::slotDateSelection(QDate Data){
    QDate selectedDate = ui->Data->selectedDate();
    QString formattedDate = selectedDate.toString("yyyy.MM.dd");
    ui->DataEdit->setText(formattedDate);
}
void SettingsWindow::cleari(){
    ui->DataEdit->clear();
    ui->SpecializaciaBox->setCurrentIndex(0);
    ui->TeacherBox->setCurrentIndex(0);
    ui->TitleEdit->clear();
    ui->groupBox->setCurrentIndex(0);
    ui->LectorHall->setCurrentIndex(0);
    ui->VidBox->setCurrentIndex(0);
    ui->Time->setCurrentIndex(0);
    ui->PaymentEdit->clear();
}
void SettingsWindow::slotBackButtonCliked(){
    cleari();
    emit signalClearBackBtn();

}

void SettingsWindow::CheckingFieldsEmpty(){
    if(ui->TeacherBox->currentIndex() == 0){
       throw std::runtime_error("Не указан преподаватель.");
    }
    if(ui->SpecializaciaBox->currentIndex() == 0){
        throw std::runtime_error("Не указана предметная область.");
    }
    if(ui->LectorHall->currentIndex() == 0){
        throw std::runtime_error("Не указана аудитория.");
    }
    if(ui->groupBox->currentIndex() == 0){
        throw std::runtime_error("Не указана группа.");
    }
    if(ui->Time->currentIndex() == 0){
        throw std::runtime_error("Не указано время проведения.");
    }
    if(ui->DataEdit->text().trimmed().isEmpty()){
        throw std::runtime_error("Поле даты не может быть пустым.");
    }
    if(ui->PaymentEdit->text().trimmed().isEmpty()){
        throw std::runtime_error("Поле оплаты не может быть пустым.");
    }
    if(ui->TitleEdit->text().trimmed().isEmpty()){
        throw std::runtime_error("Поле названия предмета не может быть пустым.");
    }
}

void SettingsWindow::SetValidationOnCreateLessons(){

    QRegularExpression regExpOnTitle("[A-Za-zA-яа-я0-9\\s\\-_.]*");
    ui->TitleEdit->setValidator(new QRegularExpressionValidator(regExpOnTitle,this));

    QRegularExpression regExpOnPayment("[0-9.\\s-]*");
    ui->PaymentEdit->setValidator(new QRegularExpressionValidator(regExpOnPayment,this));
}
