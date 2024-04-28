#include "listenerwindow.h"
#include "ui_listenerwindow.h"

ListenerWindow::ListenerWindow(const User& us, QWidget *parent) :
    AbstractUserWindow(us,parent),
    ui(new Ui::ListenerWindow)
{
    ui->setupUi(this);
    fillProfile(user);
    configuringInterface(user);
    AddShadowToChildren(ui->ProfileTab);
    AddShadowToChildren(ui->MyLessonsTab);
    connect(ui->ExitBtn, SIGNAL(clicked()),SIGNAL(signalLogoutButtonClicked()));
}

ListenerWindow::~ListenerWindow()
{
    delete ui;
}

void ListenerWindow::fillProfile(const User& user){
    if(!user.isEmpty()){
        ui->MidleNameEdit->setText(user.GetMiddleName());
        ui->NameEdit->setText(user.GetName());
        ui->SurnameEdit->setText(user.GetSurname());
        int ID_Group = user.GetIdGroup();
        ui->GroupEdit->setText(User::convertIdGroupToString(ID_Group));
        int ID_Specialization = user.GetIdSpecialization();
        ui->SpecialnostEdit->setText(User::convertIdSpecializationToString(ID_Specialization));
        int Otdel = user.GetDepartment();
        ui->OtdelEdit->setText(User::convertDepartmentToString(Otdel));
        ui->MidleNameEdit->setReadOnly(1);
        ui->NameEdit->setReadOnly(1);
        ui->SurnameEdit->setReadOnly(1);
        ui->GroupEdit->setReadOnly(1);
        ui->SpecialnostEdit->setReadOnly(1);
        ui->OtdelEdit->setReadOnly(1);
    }
}

void ListenerWindow::configuringInterface(const User& user){

    viewLesson = ui->LessonView;
    QSqlQuery query;
    query.prepare("SELECT Lessons.ID, "
                  "      User.Surname ||' '|| User.Name ||' '||COALESCE(User.MiddleName,'') as [Преподаватель], "
                  "      Lessons.Title as [Название предмета], "
                  "      Lessons.TypeOfActivity as [Вид занятия], "
                  "      LectoreHall.Name ||' '|| LectoreHall.AcademicBuilding as [Место проведения], "
                  "      Lessons.Time as [Время проведения] "
                  " FROM Lessons "
                   "join LectoreHall on LectoreHall.ID = Lessons.ID_LectoreHall "
                   "join Teacher on Teacher.ID = Lessons.ID_Teacher "
                   "join User on User.ID = Teacher.ID_User "
                   "WHERE ID_Group = :id_group;");
    query.bindValue(":id_group",user.GetIdGroup());
    query.exec();
    LessonModel = new QSqlQueryModel(this);
    LessonModel->setQuery(query);
    viewLesson->setModel(LessonModel);
    viewLesson->setSelectionBehavior(QAbstractItemView::SelectRows);
    viewLesson->horizontalHeader()->setStretchLastSection(true);
    viewLesson->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    viewLesson->setSelectionMode(QAbstractItemView::SingleSelection);
    viewLesson->horizontalHeader()->setHighlightSections(false);
    viewLesson->setColumnHidden(0,true);
}
