#include "changeuser.h"
#include "ui_changeuser.h"
#include "Global.h"

ChangeUser::ChangeUser(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ChangeUser)
{
    ui->setupUi(this);
    createModelSpecialization();
    createModelGroup();
    connect(ui->RefreshBtn,SIGNAL(clicked()),SLOT(slotBackButtonCliked()));
    connect(ui->RefreshBtn,SIGNAL(clicked()),SIGNAL(signalBackButtonCliked()));
    connect(ui->ConfirmBtn,SIGNAL(clicked()),SLOT(slotConfirmButtonClicked()));
    connect(ui->Role, SIGNAL(currentIndexChanged(int)), SLOT(slotBlocedPole(int)));
}

ChangeUser::~ChangeUser()
{
    delete ui;
}

void ChangeUser::createModelSpecialization(){
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
    ui->SpecializationBox->setModel(comboModel);
    ui->SpecializationBox->setCurrentIndex(0);
}

void ChangeUser::createModelGroup(){
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

void ChangeUser::setUserToChangeWidget(User user){
    this->user = user;
    ui->Surname->setText(user.GetSurname());
    ui->Name->setText(user.GetName());
    ui->MiddleName->setText(user.GetMiddleName());
    int role = user.GetRole();
    QString postStr = User::convertRole(role);
    ui->Role->setCurrentText(postStr);
    QString statusStr = User::convertStatusToString(user.GetIsWork());
    ui->Status->setCurrentText(statusStr);
    ui->Login->setText(user.GetLogin());
    ui->Password->setText(user.GetPassword());
    if (role == 1 || role == 2){
         ui->PhoneNumber->setText("");
         ui->SpecializationBox->setCurrentIndex(0);
         ui->WorkExperience->setText("");
         ui->GroupBox->setCurrentIndex(0);
         ui->Otdelenie->setCurrentIndex(0);
    }
    else if(role == 3){
        ui->PhoneNumber->setText(user.GetPhone());
        int Id_Specialization = user.GetIdSpecialization();
        QString Specializacia = user.convertIdSpecializationToString(Id_Specialization);
        ui->SpecializationBox->setCurrentText(Specializacia);
        ui->WorkExperience->setText(QString::number(user.GetWorkTime()));
        ui->GroupBox->setCurrentIndex(0);
        QString DepartmentStr = User::convertDepartmentToString(user.GetDepartment());
        ui->Otdelenie->setCurrentText(DepartmentStr);
    }
    else if(role == 4){
        ui->PhoneNumber->setText("");
        ui->WorkExperience->setText("");
        int Id_Specialization = user.GetIdSpecialization();
        QString Specializacia = user.convertIdSpecializationToString(Id_Specialization);
        ui->SpecializationBox->setCurrentText(Specializacia);
        ui->GroupBox->setCurrentText(user.convertIdGroupToString(user.GetIdGroup()));
        QString DepartmentStr = User::convertDepartmentToString(user.GetDepartment());
        ui->Otdelenie->setCurrentText(DepartmentStr);
    }
}

void ChangeUser::slotConfirmButtonClicked(){
    try {
        CheckingFieldsEmpty();
    } catch (std::runtime_error& err) {
        QMessageBox::information(this,"Предупреждение",err.what());
        return;
    }
    User changeUser = user;
    changeUser.SetName(ui->Name->text());
    changeUser.SetSurname(ui->Surname->text());
    changeUser.SetMiddleName(ui->MiddleName->text());
    changeUser.SetPhone(ui->PhoneNumber->text());
    QString Specialization = ui->SpecializationBox->currentText();
    int ID_Specialization = User::convertSpecializationToInt(Specialization);
    changeUser.SetSpecialization(ID_Specialization);
    changeUser.SetWorkTime((ui->WorkExperience->text()).toInt());
    int ID_Group = User::convertGroupToInt(ui->GroupBox->currentText(), ID_Specialization);
    changeUser.SetGroup(ID_Group);
    int Post = User::convertRoleToInt(ui->Role->currentText());
    changeUser.SetRole(Post);
    int status = User::convertStatusToInt(ui->Status->currentText());
    changeUser.SetIsWork(status);
    changeUser.SetLogin(ui->Login->text());
    changeUser.SetPassword(ui->Password->text());
    int Department = User::convertDepartmentToInt(ui->Otdelenie->currentText());
    changeUser.SetDepartment(Department);
    emit signalRefreshUser(changeUser);
}

void ChangeUser::slotBlocedPole(int index){
    if (index == 0  || index == 1 ||index == -1 || index == 2){
        ui->SpecializationBox->setEnabled(false);
        ui->GroupBox->setEnabled(false);
        ui->WorkExperience->setReadOnly(true);
        ui->Otdelenie->setEnabled(false);
        ui->PhoneNumber->setReadOnly(true);
    }
    else if(index == 3){
        ui->SpecializationBox->setEnabled(true);
        ui->WorkExperience->setReadOnly(false);
        ui->PhoneNumber->setReadOnly(false);
        ui->Otdelenie->setEnabled(false);
        ui->GroupBox->setEnabled(false);
    }
    else if(index == 4){
        ui->SpecializationBox->setEnabled(false);
        ui->WorkExperience->setReadOnly(true);
        ui->PhoneNumber->setReadOnly(true);
        ui->Otdelenie->setEnabled(true);
        ui->GroupBox->setEnabled(true);
    }
}
void ChangeUser::change(){
    createModelGroup();
    createModelSpecialization();
}

void ChangeUser::CheckingFieldsEmpty(){
    if(ui->Surname->text().trimmed().isEmpty()){
        throw std::runtime_error("Поле фамилии не может быть пустым.");
    }
    if(ui->Name->text().trimmed().isEmpty()){
        throw std::runtime_error("Поле имени не может быть пустым.");
    }
    if(ui->Login->text().trimmed().isEmpty()){
        throw std::runtime_error("Поле логина не может быть пустым.");
    }
    if(ui->Password->text().trimmed().isEmpty()){
        throw std::runtime_error("Поле пароля не может быть пустым.");
    }
    if(ui->Role->currentIndex() == -1 || ui->Role->currentIndex() == 0){
        throw std::runtime_error("Не указана роль пользователя.");
    }
}
