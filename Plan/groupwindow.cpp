#include "groupwindow.h"
#include "ui_groupwindow.h"

GroupWindow::GroupWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GroupWindow)
{
    ui->setupUi(this);
    SetValidationOnCreateGroups();
    createModelSpecialization();
    createModelGroup();
    connect(ui->DButton, SIGNAL(clicked()),SLOT(slotDButtonCliked()));
    connect(ui->DeleteButton, SIGNAL(clicked()),SLOT(slotDeleteButtonCliked()));
}

GroupWindow::~GroupWindow()
{
    delete ui;
}

void GroupWindow::createModelSpecialization(){
    specializationModel = new QSqlQueryModel(this);
    specializationModel->setQuery("SELECT Specialization.Name "
                                  "FROM Specialization ");
    QStringList items;
    items << "Выберите специализацию";
    for (int row = 0; row < specializationModel->rowCount(); ++row) {
        items << specializationModel->record(row).value("Name").toString();
    }

    QStringListModel* comboModel = new QStringListModel(this);
    comboModel->setStringList(items);
    ui->SpecializaciaBox->setModel(comboModel);
    ui->SpecializaciaBox->setCurrentIndex(0);
}

void GroupWindow::createModelGroup(){
    groupModel = new QSqlQueryModel(this);
    groupModel->setQuery("SELECT Groups.Name "
                         "FROM Groups ;");
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

void GroupWindow::slotDButtonCliked(){
    try {
        CheckingFieldsEmptyAdd();
    } catch (std::runtime_error& err) {
        QMessageBox::information(this,"Предупреждение",err.what());
        return;
    }
    QString Group = ui->GroupEdit->text();
    if(Database::SearchGroup(Group) != 0){
        throw std::runtime_error("Данная группа уже существует");
    }
    int Specialization = ui->SpecializaciaBox->currentIndex();
    QString Department = ui->DepartmentBox->currentText();
    Database::AddGroup(Group, Specialization, Department);
    ChangeGroup();
    ClearGroup();
    emit signalChangeGroup();
}

void GroupWindow::slotDeleteButtonCliked(){
    try {
        CheckingFieldsEmptyDel();
    } catch (std::runtime_error& err) {
        QMessageBox::information(this,"Предупреждение",err.what());
        return;
    }
    QString Group = ui->GroupBox->currentText();
    Database::DeleteGroup(Group);
    ChangeGroup();
    ClearGroup();
    emit signalChangeGroup();
}

void GroupWindow::ChangeGroup(){
    createModelGroup();
}

void GroupWindow::CheckingFieldsEmptyAdd(){
    if(ui->GroupEdit->text().trimmed().isEmpty()){
        throw std::runtime_error("Поле группы не может быть пустым.");
    }
    if(ui->SpecializaciaBox->currentIndex() == -1 || ui->SpecializaciaBox->currentIndex() == 0){
        throw std::runtime_error("Не указана специализация.");
    }
}

void GroupWindow::CheckingFieldsEmptyDel(){
    if(ui->GroupBox->currentIndex() == -1 || ui->GroupBox->currentIndex() == 0){
        throw std::runtime_error("Не указана группа.");
    }
}

void GroupWindow::SetValidationOnCreateGroups(){
    QRegularExpression regExpOnGroupAndSpec("[A-Za-zA-яа-я0-9\\s\\-,.]*");
    ui->GroupEdit->setValidator(new QRegularExpressionValidator(regExpOnGroupAndSpec,this));
}

void GroupWindow::ClearGroup(){
    ui->GroupBox->setCurrentIndex(0);
    ui->SpecializaciaBox->setCurrentIndex(0);
    ui->DepartmentBox->setCurrentIndex(0);
    ui->GroupEdit->clear();
}

void GroupWindow::Change(){
    createModelSpecialization();
}
