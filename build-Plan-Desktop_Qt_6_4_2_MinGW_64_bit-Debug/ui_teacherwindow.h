/********************************************************************************
** Form generated from reading UI file 'teacherwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHERWINDOW_H
#define UI_TEACHERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TeacherWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *ProfileTab;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_3;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QLabel *label_5;
    QSpacerItem *verticalSpacer;
    QLineEdit *lineEdit_5;
    QLabel *label;
    QLineEdit *lineEdit_6;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QLabel *label_6;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pushButton;
    QWidget *MyLessonsTab;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_2;
    QTableView *tableView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TeacherWindow)
    {
        if (TeacherWindow->objectName().isEmpty())
            TeacherWindow->setObjectName("TeacherWindow");
        TeacherWindow->resize(910, 674);
        centralwidget = new QWidget(TeacherWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName("gridLayout_3");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        QFont font;
        font.setPointSize(12);
        tabWidget->setFont(font);
        ProfileTab = new QWidget();
        ProfileTab->setObjectName("ProfileTab");
        gridLayout_4 = new QGridLayout(ProfileTab);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        lineEdit_4 = new QLineEdit(ProfileTab);
        lineEdit_4->setObjectName("lineEdit_4");

        gridLayout->addWidget(lineEdit_4, 8, 1, 1, 1);

        lineEdit_3 = new QLineEdit(ProfileTab);
        lineEdit_3->setObjectName("lineEdit_3");

        gridLayout->addWidget(lineEdit_3, 6, 1, 1, 1);

        label_2 = new QLabel(ProfileTab);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 3, 1, 1, 1);

        lineEdit = new QLineEdit(ProfileTab);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 2, 1, 1, 1);

        label_3 = new QLabel(ProfileTab);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 5, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 6, 2, 1, 1);

        label_5 = new QLabel(ProfileTab);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 9, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        lineEdit_5 = new QLineEdit(ProfileTab);
        lineEdit_5->setObjectName("lineEdit_5");

        gridLayout->addWidget(lineEdit_5, 10, 1, 1, 1);

        label = new QLabel(ProfileTab);
        label->setObjectName("label");

        gridLayout->addWidget(label, 1, 1, 1, 1);

        lineEdit_6 = new QLineEdit(ProfileTab);
        lineEdit_6->setObjectName("lineEdit_6");

        gridLayout->addWidget(lineEdit_6, 12, 1, 1, 1);

        label_4 = new QLabel(ProfileTab);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 7, 1, 1, 1);

        lineEdit_2 = new QLineEdit(ProfileTab);
        lineEdit_2->setObjectName("lineEdit_2");

        gridLayout->addWidget(lineEdit_2, 4, 1, 1, 1);

        label_6 = new QLabel(ProfileTab);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 11, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout->addItem(verticalSpacer_2, 13, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 6, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 14, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        pushButton = new QPushButton(ProfileTab);
        pushButton->setObjectName("pushButton");

        verticalLayout_2->addWidget(pushButton);


        gridLayout->addLayout(verticalLayout_2, 14, 3, 1, 1);


        gridLayout_4->addLayout(gridLayout, 0, 0, 1, 1);

        tabWidget->addTab(ProfileTab, QString());
        MyLessonsTab = new QWidget();
        MyLessonsTab->setObjectName("MyLessonsTab");
        gridLayout_2 = new QGridLayout(MyLessonsTab);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName("gridLayout_5");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        pushButton_2 = new QPushButton(MyLessonsTab);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout->addWidget(pushButton_2);


        gridLayout_5->addLayout(horizontalLayout, 1, 0, 1, 1);

        tableView = new QTableView(MyLessonsTab);
        tableView->setObjectName("tableView");

        gridLayout_5->addWidget(tableView, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout_5, 0, 0, 1, 1);

        tabWidget->addTab(MyLessonsTab, QString());

        verticalLayout->addWidget(tabWidget);


        gridLayout_3->addLayout(verticalLayout, 0, 0, 1, 1);

        TeacherWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TeacherWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 910, 26));
        TeacherWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(TeacherWindow);
        statusbar->setObjectName("statusbar");
        TeacherWindow->setStatusBar(statusbar);

        retranslateUi(TeacherWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(TeacherWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TeacherWindow)
    {
        TeacherWindow->setWindowTitle(QCoreApplication::translate("TeacherWindow", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("TeacherWindow", "\320\230\320\274\321\217", nullptr));
        label_3->setText(QCoreApplication::translate("TeacherWindow", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        label_5->setText(QCoreApplication::translate("TeacherWindow", "\320\235\320\276\320\274\320\265\321\200 \321\202\320\265\320\273\320\265\321\204\320\276\320\275\320\260", nullptr));
        label->setText(QCoreApplication::translate("TeacherWindow", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        label_4->setText(QCoreApplication::translate("TeacherWindow", "\320\241\320\277\320\265\321\206\320\270\320\260\320\273\321\214\320\275\320\276\321\201\321\202\321\214", nullptr));
        label_6->setText(QCoreApplication::translate("TeacherWindow", "\320\241\321\202\320\260\320\266 \321\200\320\260\320\261\320\276\321\202\321\213", nullptr));
        pushButton->setText(QCoreApplication::translate("TeacherWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(ProfileTab), QCoreApplication::translate("TeacherWindow", "\320\237\321\200\320\276\321\204\320\270\320\273\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("TeacherWindow", "\320\222\321\200\320\265\320\274\321\217", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(MyLessonsTab), QCoreApplication::translate("TeacherWindow", "\320\234\320\276\320\270 \320\267\320\260\320\275\321\217\321\202\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TeacherWindow: public Ui_TeacherWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERWINDOW_H
