#include "adminwindow.h"
#include "ui_adminwindow.h"

AdminWindow::AdminWindow(const User& us, Database* database, QWidget *parent) :
    AbstractUserWindow(us,parent),
    ui(new Ui::AdminWindow)
{
    qDebug() << "call constructor";
    ui->setupUi(this);
    db = database;

    configuringInterface();
    ClearDataRegistrationUserWidget();
    SetValidationOnCreateUsers();
    fillProfile(user);
    AddShadowToChildren(ui->ProfileTab);
    AddShadowToChildren(changeUser);
    AddShadowToChildren(ui->AddUserTab);
    connect(ui->ExitBtn, SIGNAL(clicked()),SIGNAL(signalLogoutButtonClicked()));
    connect(viewUsers,SIGNAL(doubleClicked(QModelIndex)),SLOT(slotDoubleClikedOnUser(QModelIndex)));
    connect(changeUser, SIGNAL(signalBackButtonCliked()),SLOT(slotBackButtonChangeUserWidgetCliked()));
    connect(ui->DobavitBtn, SIGNAL(clicked()),SLOT(slotRegistrationButtonClicked()));
    connect(changeUser, SIGNAL(signalRefreshUser(User&)),SLOT(slotRefreshUserInDatabase(User&)));
    connect(ui->RoleBox, SIGNAL(currentIndexChanged(int)), SLOT(slotBlocedPole(int)));
}

AdminWindow::~AdminWindow()
{
    qDebug() << "call destructor";
    delete ui;
}

void AdminWindow::configuringInterface(){

    stackedWidgetUserManagement = ui->stackedWidgetUserManagement;
    viewUsers = new QTableView(stackedWidgetUserManagement);
    changeUser = new ChangeUser(stackedWidgetUserManagement);
    stackedWidgetUserManagement->addWidget(viewUsers);
    stackedWidgetUserManagement->addWidget(changeUser);
    ShowViewUsers();

    usersModel = new QSqlQueryModel(this);
    usersModel->setQuery("SELECT User.ID, "
                         "      Surname ||' '|| Name ||' '||COALESCE(MiddleName,'') as [ФИО],"
                         "      Role as [Должность]"
                         " FROM User");
    viewUsers->setModel(usersModel);
    viewUsers->setSelectionBehavior(QAbstractItemView::SelectRows);
    viewUsers->horizontalHeader()->setStretchLastSection(true);
    viewUsers->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    viewUsers->setSelectionMode(QAbstractItemView::SingleSelection);
    viewUsers->horizontalHeader()->setHighlightSections(false);
    viewUsers->setColumnHidden(0,true);
}

void AdminWindow::ShowViewUsers(){
    stackedWidgetUserManagement->setCurrentWidget(viewUsers);
}

void AdminWindow::ShowChangeUser(){
    stackedWidgetUserManagement->setCurrentWidget(changeUser);
}

void AdminWindow::slotDoubleClikedOnUser(const QModelIndex index){
    //qDebug()<<index.row();
    ShowChangeUser();
    QModelIndex indexID = usersModel->index(index.row(),0);
    int IdUser = usersModel->data(indexID).toInt();
    User user = db->GetUserById(IdUser);
    changeUser->setUserToChangeWidget(user);
}

void AdminWindow::slotBackButtonChangeUserWidgetCliked(){
    ShowViewUsers();
}

void AdminWindow::slotRegistrationButtonClicked(){

    try {
        CheckingFieldsEmpty();
    } catch (std::runtime_error& err) {
        QMessageBox::information(this,"Предупреждение",err.what());
        return;
    }

    QString Surname = ui->SurnameEdit->text();
    QString Name = ui->NameEdit->text();
    QString MiddleName = ui->MiddleNameEdit->text();
    QString Phone = ui->NomberPhoneEdit->text();
    QString Role = ui->RoleBox->currentText();
    QString Specialnost = ui->SpecialnostEdit->text();
    QString Group = ui->GroupEdit->text();
    QString WorkTime = ui->WorkEdit->text();
    QString Login = ui->LoginEdit->text();
    QString Password = ui->PasswordEdit->text();
    QString Department = ui->DepartmentBox->currentText();

    try {
        db->RegisterUser(Surname,Name,MiddleName,Specialnost,Phone,WorkTime,Department,Group,Login,Password, Role);
    } catch (const std::runtime_error& err) {
        QMessageBox::critical(this,"Ошибка",err.what());
        return;
    }

    ClearDataRegistrationUserWidget();
    RefreshDataView();
}

void AdminWindow::RefreshDataView(){
    usersModel->setQuery(usersModel->query().lastQuery());
}

void AdminWindow::slotRefreshUserInDatabase(User& user){
    db->RefreshUserById(user);
    RefreshDataView();
    ShowViewUsers();
}

void AdminWindow::ClearDataRegistrationUserWidget(){
    ui->SurnameEdit->clear();
    ui->NameEdit->clear();
    ui->MiddleNameEdit->clear();
    ui->NomberPhoneEdit->clear();
    ui->GroupEdit->clear();
    ui->SpecialnostEdit->clear();
    ui->WorkEdit->clear();
    ui->DepartmentBox->setCurrentIndex(-1);
    ui->LoginEdit->clear();
    ui->PasswordEdit->clear();
    ui->RoleBox->setCurrentIndex(-1);
}

void AdminWindow::CheckingFieldsEmpty(){
    if(ui->SurnameEdit->text().trimmed().isEmpty()){
        throw std::runtime_error("Поле фамилии не может быть пустым.");
    }
    if(ui->NameEdit->text().trimmed().isEmpty()){
        throw std::runtime_error("Поле имени не может быть пустым.");
    }
    if(ui->LoginEdit->text().trimmed().isEmpty()){
        throw std::runtime_error("Поле логина не может быть пустым.");
    }
    if(ui->PasswordEdit->text().trimmed().isEmpty()){
        throw std::runtime_error("Поле пароля не может быть пустым.");
    }
    if(ui->RoleBox->currentIndex() == -1){
        throw std::runtime_error("Не указана роль пользователя.");
    }
}

void AdminWindow::SetValidationOnCreateUsers(){
    QRegularExpression regExpOnFIO("[A-Za-zA-яа-я\\s-]*");
    ui->SurnameEdit->setValidator(new QRegularExpressionValidator(regExpOnFIO,this));
    ui->NameEdit->setValidator(new QRegularExpressionValidator(regExpOnFIO,this));
    ui->MiddleNameEdit->setValidator(new QRegularExpressionValidator(regExpOnFIO,this));
    ui->SpecialnostEdit->setValidator(new QRegularExpressionValidator(regExpOnFIO,this));

    QRegularExpression regExpOnGroupAndSpec("[A-Za-zA-яа-я0-9\\s\\-,.]*");
    ui->GroupEdit->setValidator(new QRegularExpressionValidator(regExpOnGroupAndSpec,this));
    ui->SpecialnostEdit->setValidator(new QRegularExpressionValidator(regExpOnGroupAndSpec,this));


    QRegularExpression regExpOnLogin("[A-Za-zA-яа-я0-9\\s\\-_.]*");
    ui->LoginEdit->setValidator(new QRegularExpressionValidator(regExpOnLogin,this));

    QRegularExpression regExpOnWorkTime("[0-9]*");
    ui->WorkEdit->setValidator(new QRegularExpressionValidator(regExpOnWorkTime,this));
}

void AdminWindow::fillProfile(const User& user){
    if(!user.isEmpty()){
        ui->PMidleNameEdit->setText(user.GetMiddleName());
        ui->PNameEdit->setText(user.GetName());
        ui->PSurnameEdit->setText(user.GetSurname());
        ui->PMidleNameEdit->setReadOnly(1);
        ui->PNameEdit->setReadOnly(1);
        ui->PSurnameEdit->setReadOnly(1);
    }
}

void AdminWindow::slotBlocedPole(int index){
    if (index == 0 || index == 1 || index == -1){
        ui->SpecialnostEdit->setReadOnly(true);
        ui->GroupEdit->setReadOnly(true);
        ui->WorkEdit->setReadOnly(true);
        ui->DepartmentBox->setEnabled(false);
        ui->NomberPhoneEdit->setReadOnly(true);
    }
    else if(index == 2){
        ui->SpecialnostEdit->setReadOnly(false);
        ui->WorkEdit->setReadOnly(false);
        ui->NomberPhoneEdit->setReadOnly(false);
        ui->DepartmentBox->setEnabled(false);
        ui->GroupEdit->setReadOnly(true);
    }
    else if(index == 3){
        ui->SpecialnostEdit->setReadOnly(false);
        ui->WorkEdit->setReadOnly(true);
        ui->NomberPhoneEdit->setReadOnly(true);
        ui->DepartmentBox->setEnabled(true);
        ui->GroupEdit->setReadOnly(false);
    }
}
