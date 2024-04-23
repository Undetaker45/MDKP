#include "changeuser.h"
#include "ui_changeuser.h"
#include "Global.h"

ChangeUser::ChangeUser(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ChangeUser)
{
    ui->setupUi(this);

    //ui->Post->
    connect(ui->RefreshBtn,SIGNAL(clicked()),SIGNAL(signalBackButtonCliked()));
    connect(ui->ConfirmBtn,SIGNAL(clicked()),SLOT(slotConfirmButtonClicked()));
}

ChangeUser::~ChangeUser()
{
    delete ui;
}

void ChangeUser::setUserToChangeWidget(User user){
    this->user = user;
    ui->Surname->setText(user.GetSurname());
    ui->Name->setText(user.GetName());
    ui->MiddleName->setText(user.GetMiddleName());
    ui->PhoneNumber->setText(user.GetPhone());
    int Id_Specialization = user.GetIdSpecialization();
    QString Specializacia = user.convertIdSpecializationToString(Id_Specialization);
    ui->Specializacia->setText(Specializacia);
    ui->WorkExperience->setText(QString::number(user.GetWorkTime()));
    ui->Group->setText(user.convertIdGroupToString(user.GetIdGroup()));
    ui->Login->setText(user.GetLogin());
    ui->Password->setText(user.GetPassword());
    QString postStr = User::convertRole(user.GetRole());
    ui->Role->setCurrentText(postStr);
    QString statusStr = User::convertStatusToString(user.GetIsWork());
    ui->Status->setCurrentText(statusStr);
    QString DepartmentStr = User::convertDepartmentToString(user.GetDepartment());
    ui->Otdelenie->setCurrentText(DepartmentStr);
}

void ChangeUser::slotConfirmButtonClicked(){
    User changeUser = user;
    changeUser.SetName(ui->Name->text());
    changeUser.SetSurname(ui->Surname->text());
    changeUser.SetMiddleName(ui->MiddleName->text());
    changeUser.SetPhone(ui->PhoneNumber->text());
    QString Specialization = ui->Specializacia->text();
    int ID_Specialization = User::convertSpecializationToInt(Specialization);
    changeUser.SetSpecialization(ID_Specialization);
    changeUser.SetWorkTime((ui->WorkExperience->text()).toInt());
    int ID_Group = User::convertGroupToInt(ui->Group->text(), ID_Specialization);
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
