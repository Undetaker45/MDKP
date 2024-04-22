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
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_3;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QLineEdit *NameEdit;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QLineEdit *MidleNameEdit;
    QLineEdit *SurnameEdit;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_4;
    QPushButton *VihodBtn;
    QWidget *tab_2;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *TimeBtn;
    QPushButton *AddBtn;
    QTableView *tableView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MethodistWindow)
    {
        if (MethodistWindow->objectName().isEmpty())
            MethodistWindow->setObjectName("MethodistWindow");
        MethodistWindow->resize(800, 600);
        centralwidget = new QWidget(MethodistWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(40, 30, 721, 501));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(verticalLayoutWidget);
        tabWidget->setObjectName("tabWidget");
        QFont font;
        font.setPointSize(12);
        tabWidget->setFont(font);
        tab = new QWidget();
        tab->setObjectName("tab");
        gridLayoutWidget = new QWidget(tab);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(-1, 10, 711, 441));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 8, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 5, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 4, 2, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 3, 1, 1, 1);

        NameEdit = new QLineEdit(gridLayoutWidget);
        NameEdit->setObjectName("NameEdit");

        gridLayout->addWidget(NameEdit, 4, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 4, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout->addItem(verticalSpacer_2, 7, 1, 1, 1);

        MidleNameEdit = new QLineEdit(gridLayoutWidget);
        MidleNameEdit->setObjectName("MidleNameEdit");

        gridLayout->addWidget(MidleNameEdit, 6, 1, 1, 1);

        SurnameEdit = new QLineEdit(gridLayoutWidget);
        SurnameEdit->setObjectName("SurnameEdit");

        gridLayout->addWidget(SurnameEdit, 2, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        VihodBtn = new QPushButton(gridLayoutWidget);
        VihodBtn->setObjectName("VihodBtn");

        verticalLayout_2->addWidget(VihodBtn);


        gridLayout->addLayout(verticalLayout_2, 8, 3, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        gridLayoutWidget_2 = new QWidget(tab_2);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(10, 40, 691, 411));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        TimeBtn = new QPushButton(gridLayoutWidget_2);
        TimeBtn->setObjectName("TimeBtn");

        horizontalLayout_2->addWidget(TimeBtn);

        AddBtn = new QPushButton(gridLayoutWidget_2);
        AddBtn->setObjectName("AddBtn");

        horizontalLayout_2->addWidget(AddBtn);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        tableView = new QTableView(gridLayoutWidget_2);
        tableView->setObjectName("tableView");

        gridLayout_2->addWidget(tableView, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);

        MethodistWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MethodistWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MethodistWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MethodistWindow);
        statusbar->setObjectName("statusbar");
        MethodistWindow->setStatusBar(statusbar);

        retranslateUi(MethodistWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MethodistWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MethodistWindow)
    {
        MethodistWindow->setWindowTitle(QCoreApplication::translate("MethodistWindow", "MainWindow", nullptr));
        label_3->setText(QCoreApplication::translate("MethodistWindow", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        label->setText(QCoreApplication::translate("MethodistWindow", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("MethodistWindow", "\320\230\320\274\321\217", nullptr));
        VihodBtn->setText(QCoreApplication::translate("MethodistWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
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
