/********************************************************************************
** Form generated from reading UI file 'listenerwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTENERWINDOW_H
#define UI_LISTENERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
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

class Ui_ListenerWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout_4;
    QTabWidget *tabWidget;
    QWidget *ProfileTab;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QLineEdit *SurnameEdit;
    QSpacerItem *horizontalSpacer;
    QLineEdit *OtdelEdit;
    QLabel *label_4;
    QSpacerItem *verticalSpacer;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label;
    QLineEdit *NameEdit;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *GroupEdit;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_2;
    QLineEdit *SpecialnostEdit;
    QLineEdit *MidleNameEdit;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_4;
    QPushButton *ExitBtn;
    QSpacerItem *horizontalSpacer_3;
    QWidget *MyLessonsTab;
    QGridLayout *gridLayout_2;
    QTableView *LessonView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ListenerWindow)
    {
        if (ListenerWindow->objectName().isEmpty())
            ListenerWindow->setObjectName("ListenerWindow");
        ListenerWindow->resize(925, 697);
        centralwidget = new QWidget(ListenerWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName("gridLayout_4");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        QFont font;
        font.setPointSize(12);
        tabWidget->setFont(font);
        ProfileTab = new QWidget();
        ProfileTab->setObjectName("ProfileTab");
        gridLayout_3 = new QGridLayout(ProfileTab);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        SurnameEdit = new QLineEdit(ProfileTab);
        SurnameEdit->setObjectName("SurnameEdit");

        gridLayout->addWidget(SurnameEdit, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 2, 1, 1);

        OtdelEdit = new QLineEdit(ProfileTab);
        OtdelEdit->setObjectName("OtdelEdit");

        gridLayout->addWidget(OtdelEdit, 10, 1, 1, 1);

        label_4 = new QLabel(ProfileTab);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 7, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        label_5 = new QLabel(ProfileTab);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 9, 1, 1, 1);

        label_6 = new QLabel(ProfileTab);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 11, 1, 1, 1);

        label = new QLabel(ProfileTab);
        label->setObjectName("label");

        gridLayout->addWidget(label, 1, 1, 1, 1);

        NameEdit = new QLineEdit(ProfileTab);
        NameEdit->setObjectName("NameEdit");

        gridLayout->addWidget(NameEdit, 4, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 14, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 4, 0, 1, 1);

        GroupEdit = new QLineEdit(ProfileTab);
        GroupEdit->setObjectName("GroupEdit");

        gridLayout->addWidget(GroupEdit, 12, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout->addItem(verticalSpacer_2, 13, 1, 1, 1);

        label_2 = new QLabel(ProfileTab);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 3, 1, 1, 1);

        SpecialnostEdit = new QLineEdit(ProfileTab);
        SpecialnostEdit->setObjectName("SpecialnostEdit");

        gridLayout->addWidget(SpecialnostEdit, 8, 1, 1, 1);

        MidleNameEdit = new QLineEdit(ProfileTab);
        MidleNameEdit->setObjectName("MidleNameEdit");

        gridLayout->addWidget(MidleNameEdit, 6, 1, 1, 1);

        label_3 = new QLabel(ProfileTab);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 5, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        ExitBtn = new QPushButton(ProfileTab);
        ExitBtn->setObjectName("ExitBtn");
        ExitBtn->setMinimumSize(QSize(200, 20));
        ExitBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"font: 500 20pt \"Montserrat Medium\";\n"
"    background-color: #AC0808; \n"
"    color: white; \n"
"    border: none;\n"
"    font-size: 20px;\n"
"    border-radius: 5px; \n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #C61010;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #9C0707; \n"
"}"));

        verticalLayout_2->addWidget(ExitBtn);


        gridLayout->addLayout(verticalLayout_2, 14, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(150, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 2, 3, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);

        tabWidget->addTab(ProfileTab, QString());
        MyLessonsTab = new QWidget();
        MyLessonsTab->setObjectName("MyLessonsTab");
        gridLayout_2 = new QGridLayout(MyLessonsTab);
        gridLayout_2->setObjectName("gridLayout_2");
        LessonView = new QTableView(MyLessonsTab);
        LessonView->setObjectName("LessonView");

        gridLayout_2->addWidget(LessonView, 0, 0, 1, 1);

        tabWidget->addTab(MyLessonsTab, QString());

        gridLayout_4->addWidget(tabWidget, 0, 0, 1, 1);


        verticalLayout_3->addLayout(gridLayout_4);

        ListenerWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ListenerWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 925, 26));
        ListenerWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ListenerWindow);
        statusbar->setObjectName("statusbar");
        ListenerWindow->setStatusBar(statusbar);

        retranslateUi(ListenerWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ListenerWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ListenerWindow)
    {
        ListenerWindow->setWindowTitle(QCoreApplication::translate("ListenerWindow", "MainWindow", nullptr));
        label_4->setText(QCoreApplication::translate("ListenerWindow", "\320\241\320\277\320\265\321\206\320\270\320\260\320\273\321\214\320\275\320\276\321\201\321\202\321\214", nullptr));
        label_5->setText(QCoreApplication::translate("ListenerWindow", "\320\236\321\202\320\264\320\265\320\273\320\265\320\275\320\270\320\265", nullptr));
        label_6->setText(QCoreApplication::translate("ListenerWindow", "\320\223\321\200\321\203\320\277\320\277\320\260", nullptr));
        label->setText(QCoreApplication::translate("ListenerWindow", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("ListenerWindow", "\320\230\320\274\321\217", nullptr));
        label_3->setText(QCoreApplication::translate("ListenerWindow", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        ExitBtn->setText(QCoreApplication::translate("ListenerWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(ProfileTab), QCoreApplication::translate("ListenerWindow", "\320\237\321\200\320\276\321\204\320\270\320\273\321\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(MyLessonsTab), QCoreApplication::translate("ListenerWindow", "\320\234\320\276\320\270 \320\267\320\260\320\275\321\217\321\202\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ListenerWindow: public Ui_ListenerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTENERWINDOW_H
