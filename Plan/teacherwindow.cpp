#include "teacherwindow.h"
#include "ui_teacherwindow.h"

TeacherWindow::TeacherWindow(const User& us, QWidget *parent) :
    AbstractUserWindow(us,parent),
    ui(new Ui::TeacherWindow)
{
    ui->setupUi(this);
    fillProfile(user);
    configuringInterface(user);
    AddShadowToChildren(ui->ProfileTab);
    AddShadowToChildren(ui->MyLessonsTab);
    connect(ui->ExitBtn, SIGNAL(clicked()),SIGNAL(signalLogoutButtonClicked()));
    connect(ui->TimeBtn, SIGNAL(clicked(bool)), SLOT(slotClicedOnButtonTime()));

}

TeacherWindow::~TeacherWindow()
{
    delete ui;
}


void TeacherWindow::fillProfile(const User& user){
    if(!user.isEmpty()){
        ui->MiddleNameEdit->setText(user.GetMiddleName());
        ui->NameEdit->setText(user.GetName());
        ui->SurnameEdit->setText(user.GetSurname());
        ui->PhoneNumberEdit->setText(user.GetPhone());
        int ID_Specialization = user.GetIdSpecialization();
        ui->SpecialnostEdit->setText(User::convertIdSpecializationToString(ID_Specialization));
        ui->WorkExpEdit->setText(QString::number(user.GetWorkTime()));
        ui->MiddleNameEdit->setReadOnly(1);
        ui->NameEdit->setReadOnly(1);
        ui->SurnameEdit->setReadOnly(1);
        ui->PhoneNumberEdit->setReadOnly(1);
        ui->SpecialnostEdit->setReadOnly(1);
        ui->WorkExpEdit->setReadOnly(1);
    }
}

void TeacherWindow::configuringInterface(const User& user){

    viewLesson = ui->ViewLesson;
    QSqlQuery query;
    query.prepare("SELECT Lessons.ID, "
                  "      Lessons.Title as [Название предмета], "
                  "      Lessons.TypeOfActivity as [Вид занятия], "
                  "      Groups.Name as [Группа], "
                  "      LectoreHall.Name ||' '|| LectoreHall.AcademicBuilding as [Место проведения], "
                  "      Lessons.Time as [Время проведения], "
                  "      Lessons.Payment as [Оплата] "
                  " FROM Lessons "
                   "join Groups on Groups.ID = Lessons.ID_Group "
                   "join LectoreHall on LectoreHall.ID = Lessons.ID_LectoreHall "
                   "join Teacher on Teacher.ID = Lessons.ID_Teacher "
                   "join User on User.ID = Teacher.ID_User "
                   "WHERE ID_User = :id_user;");
    query.bindValue(":id_user",user.GetId());
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

void TeacherWindow::slotClicedOnButtonTime(){
    time->show();
}
