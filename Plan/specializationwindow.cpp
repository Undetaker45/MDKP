#include "specializationwindow.h"
#include "ui_specializationwindow.h"

SpecializationWindow::SpecializationWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SpecializationWindow)
{
    ui->setupUi(this);
    SetValidationOnCreateSpecialization();
    createModelSpecialization();
    connect(ui->DButton, SIGNAL(clicked()),SLOT(slotDButtonCliked()));
    connect(ui->DeleteButton, SIGNAL(clicked()),SLOT(slotDeleteButtonCliked()));
}

SpecializationWindow::~SpecializationWindow()
{
    delete ui;
}

void SpecializationWindow::createModelSpecialization(){
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

void SpecializationWindow::slotDButtonCliked(){
    QString Specialization = ui->SpecializationEdit->text();
    if (Database::SearchSpecialization(Specialization) != 0){
        throw std::runtime_error("Данная специализация уже существует");
    }
    Database::AddSpecialization(Specialization);
    ChangeSpecialization();
    ClearSpecialization();
    emit signalChangeSpecialization();
}

void SpecializationWindow::slotDeleteButtonCliked(){
    QString Specialization = ui->SpecializaciaBox->currentText();
    Database::DeleteSpecialization(Specialization);
    ChangeSpecialization();
    ClearSpecialization();
    emit signalChangeSpecialization();
}

void SpecializationWindow::ChangeSpecialization(){
    createModelSpecialization();
}

void SpecializationWindow::SetValidationOnCreateSpecialization(){
    QRegularExpression regExpOnGroupAndSpec("[A-Za-zA-яа-я0-9\\s\\-,.]*");
    ui->SpecializationEdit->setValidator(new QRegularExpressionValidator(regExpOnGroupAndSpec,this));
}

void SpecializationWindow::ClearSpecialization(){
    ui->SpecializaciaBox->setCurrentIndex(0);
    ui->SpecializationEdit->clear();

}
