/********************************************************************************
** Form generated from reading UI file 'MethodistWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_METHODISTWINDOW_H
#define UI_METHODISTWINDOW_H

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
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MethodistWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_6;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QLineEdit *NameEdit;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QLineEdit *SurnameEdit;
    QSpacerItem *verticalSpacer_3;
    QLineEdit *MidleNameEdit;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_4;
    QPushButton *ExitBtn;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_4;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_4;
    QStackedWidget *stackedWidgetLessonManagement;
    QWidget *page;
    QVBoxLayout *verticalLayout_5;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *TimeBtn;
    QPushButton *AddBtn;
    QTableView *ViewLessons;
    QWidget *page_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MethodistWindow)
    {
        if (MethodistWindow->objectName().isEmpty())
            MethodistWindow->setObjectName("MethodistWindow");
        MethodistWindow->resize(800, 600);
        centralwidget = new QWidget(MethodistWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        QFont font;
        font.setPointSize(12);
        tabWidget->setFont(font);
        tab = new QWidget();
        tab->setObjectName("tab");
        verticalLayout_6 = new QVBoxLayout(tab);
        verticalLayout_6->setObjectName("verticalLayout_6");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 4, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout->addItem(verticalSpacer_2, 7, 1, 1, 1);

        NameEdit = new QLineEdit(tab);
        NameEdit->setObjectName("NameEdit");

        gridLayout->addWidget(NameEdit, 4, 1, 1, 1);

        label = new QLabel(tab);
        label->setObjectName("label");

        gridLayout->addWidget(label, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        SurnameEdit = new QLineEdit(tab);
        SurnameEdit->setObjectName("SurnameEdit");

        gridLayout->addWidget(SurnameEdit, 2, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 8, 1, 1, 1);

        MidleNameEdit = new QLineEdit(tab);
        MidleNameEdit->setObjectName("MidleNameEdit");

        gridLayout->addWidget(MidleNameEdit, 6, 1, 1, 1);

        label_2 = new QLabel(tab);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 3, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 4, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        ExitBtn = new QPushButton(tab);
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


        gridLayout->addLayout(verticalLayout_2, 8, 3, 1, 1);

        label_3 = new QLabel(tab);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 5, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(150, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 4, 3, 1, 1);


        verticalLayout_6->addLayout(gridLayout);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        verticalLayout_4 = new QVBoxLayout(tab_2);
        verticalLayout_4->setObjectName("verticalLayout_4");
        stackedWidgetLessonManagement = new QStackedWidget(tab_2);
        stackedWidgetLessonManagement->setObjectName("stackedWidgetLessonManagement");
        page = new QWidget();
        page->setObjectName("page");
        verticalLayout_5 = new QVBoxLayout(page);
        verticalLayout_5->setObjectName("verticalLayout_5");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        TimeBtn = new QPushButton(page);
        TimeBtn->setObjectName("TimeBtn");
        TimeBtn->setMinimumSize(QSize(100, 20));
        TimeBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"font: 500 20pt \"Montserrat Medium\";\n"
"    background-color: #AC0808; \n"
"    color: white; \n"
"    border: none;\n"
"    font-size: 20px;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #C61010;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #9C0707; \n"
"}"));

        horizontalLayout_2->addWidget(TimeBtn);

        AddBtn = new QPushButton(page);
        AddBtn->setObjectName("AddBtn");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AddBtn->sizePolicy().hasHeightForWidth());
        AddBtn->setSizePolicy(sizePolicy);
        AddBtn->setMinimumSize(QSize(200, 20));
        AddBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"font: 500 20pt \"Montserrat Medium\";\n"
"    background-color: #AC0808; \n"
"    color: white; \n"
"    border: none;\n"
"    font-size: 20px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #C61010;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #9C0707; \n"
"}"));

        horizontalLayout_2->addWidget(AddBtn);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        ViewLessons = new QTableView(page);
        ViewLessons->setObjectName("ViewLessons");

        gridLayout_2->addWidget(ViewLessons, 0, 0, 1, 1);


        verticalLayout_5->addLayout(gridLayout_2);

        stackedWidgetLessonManagement->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidgetLessonManagement->addWidget(page_2);

        verticalLayout_4->addWidget(stackedWidgetLessonManagement);

        tabWidget->addTab(tab_2, QString());

        verticalLayout_3->addWidget(tabWidget);


        verticalLayout->addLayout(verticalLayout_3);

        MethodistWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MethodistWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MethodistWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MethodistWindow);
        statusbar->setObjectName("statusbar");
        MethodistWindow->setStatusBar(statusbar);

        retranslateUi(MethodistWindow);

        tabWidget->setCurrentIndex(0);
        stackedWidgetLessonManagement->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MethodistWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MethodistWindow)
    {
        MethodistWindow->setWindowTitle(QCoreApplication::translate("MethodistWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MethodistWindow", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("MethodistWindow", "\320\230\320\274\321\217", nullptr));
        ExitBtn->setText(QCoreApplication::translate("MethodistWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        label_3->setText(QCoreApplication::translate("MethodistWindow", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MethodistWindow", "\320\237\321\200\320\276\321\204\320\270\320\273\321\214", nullptr));
        TimeBtn->setText(QCoreApplication::translate("MethodistWindow", "\320\222\321\200\320\265\320\274\321\217", nullptr));
        AddBtn->setText(QCoreApplication::translate("MethodistWindow", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MethodistWindow", "\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200 \320\263\320\276\321\202\320\276\320\262\321\213\321\205 \320\267\320\260\320\275\321\217\321\202\320\270\320\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MethodistWindow: public Ui_MethodistWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_METHODISTWINDOW_H
