#include "windownavigator.h"
#include <QApplication>
#include <QtSql>
#include <QString>

#include <QApplication>

void setInterface();

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    setInterface();
    QSqlDatabase sdb = QSqlDatabase::addDatabase("QSQLITE");
    sdb.setDatabaseName("Plan.sqlite");
    if (!sdb.open()) {
        qDebug()<<"Не удалось открыть базу данных";
    }

    Database* db = new Database();
    db->SetSqlDatabase(sdb);
    db->CreateTables();
    db->InsertAdminAndSmallTestData();
    //db->InsertTestData();

    WindowNavigator navigator(db);
    return a.exec();
}

void setInterface(){
    QString interface = "QLineEdit {                           "
                         "font: 500 9pt \"Montserrat Medium\";  "
                         "background: #e9e9e9;                  "
                         "border-radius: 5px;                   "
                         "padding: 8px;                         "
                         "border: 1px solid gray;               "
                         "}                                     "
                         "                                      "
                         "QLineEdit:focus {                     "
                         "border-color: #ABCAF8;                "
                         "}                                     "
                         "                                      "
                         "QLabel {                              "
                         "font: 500 11pt \"Montserrat Medium\"; "
                         "}                                     "
                         "QComboBox {                           "
                         "font: 500 9pt \"Montserrat Medium\";  "
                         "background: #e9e9e9;                  "
                         "border-radius: 5px;                   "
                         "padding: 8px;                         "
                         "border: 1px solid gray;               "
                         "}                                     "
                         "QComboBox:editable {                  "
                         "background: #ABCAF8;                  "
                         "}                                     "
                         "QComboBox:!editable:on, QComboBox::drop-down:editable:on { "
                         "background: #cdcdcd;                  "
                         "}                                     "
                         "QComboBox::drop-down {                "
                         "subcontrol-origin: padding;           "
                         "subcontrol-position: top right;       "
                         "width: 25px;                          "
                         "border-left-width: 1px;               "
                         "}                                     "
                         "QComboBox::down-arrow {               "
                         "image: url(:/images/ComboBox.png); "
                         "width: 12px;                          "
                         "height: 12px;                         "
                         "}                                     "
                         "QComboBox QAbstractItemView::item {   "
                         "height: 40px;                         "
                         "}                                     "
                         "QTableView {                          "
                         "color: black;                         "
                         "gridline-color: black;                "
                         "}                                     "
                         "QHeaderView::section {                "
                         "background-color: #e9e9e9;            "
                         "color: black;                         "
                         "}                                     "
                         "QScrollBar:horizontal                 "
                         "{                                     "
                         "background-color: #e9e9e9;            "
                         "border: 1px solid  #7a7a7a;           "
                         "}                                     "
                         "QScrollBar::handle:horizontal         "
                         "{                                     "
                         "background-color: #aeaeae;            "
                         "}                                     "
                         "QScrollBar::add-line:horizontal,      "
                         "QScrollBar::sub-line:horizontal,      "
                         "QScrollBar::add-page:horizontal,      "
                         "QScrollBar::sub-page:horizontal       "
                         "{                                     "
                         "width: 0px;                           "
                         "background-color: transparent;        "
                         "}                                     "
                         "QScrollBar:vertical                   "
                         "{                                     "
                         "background-color: #e9e9e9;            "
                         "border: 1px solid  #7a7a7a;           "
                         "}                                     "
                         "QScrollBar::handle:vertical           "
                         "{                                     "
                         "background-color: #aeaeae;            "
                         "}                                     "
                         "QScrollBar::add-line:vertical,        "
                         "QScrollBar::sub-line:vertical,        "
                         "QScrollBar::add-page:vertical,        "
                         "QScrollBar::sub-page:vertical         "
                         "{                                     "
                         "height: 0px;                          "
                         "background-color: transparent;        "
                         "}                                     ";
    qApp->setStyleSheet(interface);
}
