#include "methodistwindow.h"
#include "ui_MethodistWindow.h"

MethodistWindow::MethodistWindow(const User& us,Database* database, QWidget *parent) :
    AbstractUserWindow(us,parent),
    ui(new Ui::MethodistWindow)
{
    ui->setupUi(this);
    db = database;
    fillProfile(user);
    configuringInterface();
    AddShadowToChildren(ui->tab);
    AddShadowToChildren(ui->tab_2);
    AddShadowToChildren(Settings);
    connect(ui->ExitBtn, SIGNAL(clicked()),SIGNAL(signalLogoutButtonClicked()));
    connect(ui->AddBtn, SIGNAL(clicked()), SLOT(slotClicedOnButtonAdd()));
    connect(ui->ViewLessons, SIGNAL(doubleClicked(QModelIndex)), SLOT(slotDoubleClikedOnLesson(QModelIndex)));
    connect(Settings, SIGNAL(signalClearBackBtn()),SLOT(slotBackButtonSettingsWidgetCliked()));


}

MethodistWindow::~MethodistWindow()
{
    qDebug() << "call destructor";
    delete ui;
}

void MethodistWindow::fillProfile(const User& user){
    if(!user.isEmpty()){
        ui->MidleNameEdit->setText(user.GetMiddleName());
        ui->NameEdit->setText(user.GetName());
        ui->SurnameEdit->setText(user.GetSurname());
        ui->MidleNameEdit->setReadOnly(1);
        ui->NameEdit->setReadOnly(1);
        ui->SurnameEdit->setReadOnly(1);
    }
}

void MethodistWindow::configuringInterface(){

    stackedWidgetLessonManagement = ui->stackedWidgetLessonManagement;
    viewLesson = ui->ViewLessons;
    Settings = new SettingsWindow(stackedWidgetLessonManagement);
    stackedWidgetLessonManagement->addWidget(Settings);
    ShowViewLesson();


    LessonModel = new QSqlQueryModel(this);
    LessonModel->setQuery("SELECT Lessons.ID, "
                         "      User.Surname ||' '|| User.Name ||' '||COALESCE(User.MiddleName,'') as [ФИО], "
                         "      Specialization.Name as [Предметная область], "
                         "      Lessons.Title as [Название предмета], "
                         "      Lessons.TypeOfActivity as [Вид занятия], "
                         "      Groups.Name as [Группа], "
                         "      LectoreHall.Name ||' '|| LectoreHall.AcademicBuilding as [Место проведения], "
                         "      Lessons.Time as [Время проведения], "
                         "      Lessons.Payment as [Оплата] "
                         " FROM Lessons "
                         " join Specialization on Specialization.ID = Lessons.ID_Specialization "
                          "join Groups on Groups.ID = Lessons.ID_Group "
                          "join LectoreHall on LectoreHall.ID = Lessons.ID_LectoreHall "
                          "join Teacher on Teacher.ID = Lessons.ID_Teacher "
                          "join User on User.ID = Teacher.ID_User ");
    viewLesson->setModel(LessonModel);
    viewLesson->setSelectionBehavior(QAbstractItemView::SelectRows);
    viewLesson->horizontalHeader()->setStretchLastSection(true);
    viewLesson->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    viewLesson->setSelectionMode(QAbstractItemView::SingleSelection);
    viewLesson->horizontalHeader()->setHighlightSections(false);
    viewLesson->setColumnHidden(0,true);
}

void MethodistWindow::ShowViewLesson(){
    stackedWidgetLessonManagement->setCurrentWidget(ui->page);
}

void MethodistWindow::ShowSettings(){
    stackedWidgetLessonManagement->setCurrentWidget(Settings);
}

void MethodistWindow::slotBackButtonSettingsWidgetCliked(){
    ShowViewLesson();
}

void MethodistWindow::RefreshDataView(){
    LessonModel->setQuery(LessonModel->query().lastQuery());
}

void MethodistWindow::slotDoubleClikedOnLesson(const QModelIndex index){
    //qDebug()<<index.row();
    ShowSettings();
    QModelIndex indexID = LessonModel->index(index.row(),0);
    int IdLesson = LessonModel->data(indexID).toInt();
    Lesson lesson = db->GetLessonById(IdLesson);
    Settings->setLessonToChangeWidget(lesson);
}

void MethodistWindow::slotClicedOnButtonAdd(){
    ShowSettings();
}

