/********************************************************************************
** Form generated from reading UI file 'adminwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINWINDOW_H
#define UI_ADMINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout_3;
    QTabWidget *tabWidget;
    QWidget *ProfileTab;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout_3;
    QLineEdit *PSurnameEdit;
    QLabel *label;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_2;
    QLineEdit *PNameEdit;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *PMidleNameEdit;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_8;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_6;
    QPushButton *ExitBtn;
    QWidget *deleteTab;
    QHBoxLayout *horizontalLayout_2;
    QStackedWidget *stackedWidgetUserManagement;
    QWidget *page;
    QWidget *page_2;
    QWidget *AddUserTab;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label_11;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_7;
    QLineEdit *GroupEdit;
    QLineEdit *PasswordEdit;
    QLabel *label_15;
    QSpacerItem *horizontalSpacer;
    QLabel *label_8;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_12;
    QLabel *label_6;
    QLineEdit *LoginEdit;
    QLineEdit *NomberPhoneEdit;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_14;
    QLineEdit *WorkEdit;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *RoleBox;
    QSpacerItem *verticalSpacer_2;
    QLineEdit *NameEdit;
    QLineEdit *SurnameEdit;
    QLabel *label_13;
    QLineEdit *MiddleNameEdit;
    QLabel *label_9;
    QLineEdit *SpecialnostEdit;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_4;
    QPushButton *DobavitBtn;
    QComboBox *DepartmentBox;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AdminWindow)
    {
        if (AdminWindow->objectName().isEmpty())
            AdminWindow->setObjectName("AdminWindow");
        AdminWindow->resize(995, 679);
        centralwidget = new QWidget(AdminWindow);
        centralwidget->setObjectName("centralwidget");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName("formLayout_3");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        QFont font;
        font.setPointSize(12);
        tabWidget->setFont(font);
        tabWidget->setToolTipDuration(-1);
        tabWidget->setTabBarAutoHide(false);
        ProfileTab = new QWidget();
        ProfileTab->setObjectName("ProfileTab");
        gridLayout_2 = new QGridLayout(ProfileTab);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        PSurnameEdit = new QLineEdit(ProfileTab);
        PSurnameEdit->setObjectName("PSurnameEdit");

        gridLayout_3->addWidget(PSurnameEdit, 4, 1, 1, 1);

        label = new QLabel(ProfileTab);
        label->setObjectName("label");

        gridLayout_3->addWidget(label, 1, 1, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_5, 0, 1, 1, 1);

        label_2 = new QLabel(ProfileTab);
        label_2->setObjectName("label_2");

        gridLayout_3->addWidget(label_2, 3, 1, 1, 1);

        PNameEdit = new QLineEdit(ProfileTab);
        PNameEdit->setObjectName("PNameEdit");

        gridLayout_3->addWidget(PNameEdit, 2, 1, 1, 1);

        label_3 = new QLabel(ProfileTab);
        label_3->setObjectName("label_3");

        gridLayout_3->addWidget(label_3, 5, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 2, 0, 1, 1);

        PMidleNameEdit = new QLineEdit(ProfileTab);
        PMidleNameEdit->setObjectName("PMidleNameEdit");

        gridLayout_3->addWidget(PMidleNameEdit, 6, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 4, 2, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout_3->addItem(verticalSpacer_7, 7, 1, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_8, 8, 1, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_6);

        ExitBtn = new QPushButton(ProfileTab);
        ExitBtn->setObjectName("ExitBtn");

        verticalLayout_4->addWidget(ExitBtn);


        gridLayout_3->addLayout(verticalLayout_4, 8, 3, 1, 1);


        gridLayout_2->addLayout(gridLayout_3, 0, 0, 1, 1);

        tabWidget->addTab(ProfileTab, QString());
        deleteTab = new QWidget();
        deleteTab->setObjectName("deleteTab");
        horizontalLayout_2 = new QHBoxLayout(deleteTab);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        stackedWidgetUserManagement = new QStackedWidget(deleteTab);
        stackedWidgetUserManagement->setObjectName("stackedWidgetUserManagement");
        page = new QWidget();
        page->setObjectName("page");
        stackedWidgetUserManagement->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidgetUserManagement->addWidget(page_2);

        horizontalLayout_2->addWidget(stackedWidgetUserManagement);

        tabWidget->addTab(deleteTab, QString());
        AddUserTab = new QWidget();
        AddUserTab->setObjectName("AddUserTab");
        sizePolicy.setHeightForWidth(AddUserTab->sizePolicy().hasHeightForWidth());
        AddUserTab->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(AddUserTab);
        verticalLayout_2->setObjectName("verticalLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout->addItem(verticalSpacer, 15, 3, 1, 1);

        label_11 = new QLabel(AddUserTab);
        label_11->setObjectName("label_11");

        gridLayout->addWidget(label_11, 3, 3, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout->addItem(verticalSpacer_3, 14, 3, 1, 1);

        label_7 = new QLabel(AddUserTab);
        label_7->setObjectName("label_7");

        gridLayout->addWidget(label_7, 7, 1, 1, 1);

        GroupEdit = new QLineEdit(AddUserTab);
        GroupEdit->setObjectName("GroupEdit");

        gridLayout->addWidget(GroupEdit, 8, 3, 1, 1);

        PasswordEdit = new QLineEdit(AddUserTab);
        PasswordEdit->setObjectName("PasswordEdit");

        gridLayout->addWidget(PasswordEdit, 10, 1, 1, 1);

        label_15 = new QLabel(AddUserTab);
        label_15->setObjectName("label_15");

        gridLayout->addWidget(label_15, 9, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 6, 0, 1, 1);

        label_8 = new QLabel(AddUserTab);
        label_8->setObjectName("label_8");

        gridLayout->addWidget(label_8, 9, 1, 1, 1);

        label_5 = new QLabel(AddUserTab);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 3, 1, 1, 1);

        label_4 = new QLabel(AddUserTab);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 1, 1, 1, 1);

        label_12 = new QLabel(AddUserTab);
        label_12->setObjectName("label_12");

        gridLayout->addWidget(label_12, 5, 3, 1, 1);

        label_6 = new QLabel(AddUserTab);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 5, 1, 1, 1);

        LoginEdit = new QLineEdit(AddUserTab);
        LoginEdit->setObjectName("LoginEdit");

        gridLayout->addWidget(LoginEdit, 8, 1, 1, 1);

        NomberPhoneEdit = new QLineEdit(AddUserTab);
        NomberPhoneEdit->setObjectName("NomberPhoneEdit");

        gridLayout->addWidget(NomberPhoneEdit, 4, 3, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(60, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 8, 2, 1, 1);

        label_14 = new QLabel(AddUserTab);
        label_14->setObjectName("label_14");

        gridLayout->addWidget(label_14, 7, 3, 1, 1);

        WorkEdit = new QLineEdit(AddUserTab);
        WorkEdit->setObjectName("WorkEdit");

        gridLayout->addWidget(WorkEdit, 6, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 6, 4, 1, 1);

        RoleBox = new QComboBox(AddUserTab);
        RoleBox->addItem(QString());
        RoleBox->addItem(QString());
        RoleBox->addItem(QString());
        RoleBox->addItem(QString());
        RoleBox->addItem(QString());
        RoleBox->setObjectName("RoleBox");

        gridLayout->addWidget(RoleBox, 13, 3, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 3, 1, 1);

        NameEdit = new QLineEdit(AddUserTab);
        NameEdit->setObjectName("NameEdit");

        gridLayout->addWidget(NameEdit, 4, 1, 1, 1);

        SurnameEdit = new QLineEdit(AddUserTab);
        SurnameEdit->setObjectName("SurnameEdit");

        gridLayout->addWidget(SurnameEdit, 2, 1, 1, 1);

        label_13 = new QLabel(AddUserTab);
        label_13->setObjectName("label_13");

        gridLayout->addWidget(label_13, 1, 3, 1, 1);

        MiddleNameEdit = new QLineEdit(AddUserTab);
        MiddleNameEdit->setObjectName("MiddleNameEdit");

        gridLayout->addWidget(MiddleNameEdit, 6, 1, 1, 1);

        label_9 = new QLabel(AddUserTab);
        label_9->setObjectName("label_9");

        gridLayout->addWidget(label_9, 12, 3, 1, 1);

        SpecialnostEdit = new QLineEdit(AddUserTab);
        SpecialnostEdit->setObjectName("SpecialnostEdit");

        gridLayout->addWidget(SpecialnostEdit, 2, 3, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);

        DobavitBtn = new QPushButton(AddUserTab);
        DobavitBtn->setObjectName("DobavitBtn");

        verticalLayout_3->addWidget(DobavitBtn);


        gridLayout->addLayout(verticalLayout_3, 15, 5, 1, 1);

        DepartmentBox = new QComboBox(AddUserTab);
        DepartmentBox->addItem(QString());
        DepartmentBox->addItem(QString());
        DepartmentBox->addItem(QString());
        DepartmentBox->setObjectName("DepartmentBox");

        gridLayout->addWidget(DepartmentBox, 10, 3, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        tabWidget->addTab(AddUserTab, QString());

        formLayout_3->setWidget(0, QFormLayout::FieldRole, tabWidget);


        horizontalLayout->addLayout(formLayout_3);

        AdminWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(AdminWindow);
        statusbar->setObjectName("statusbar");
        AdminWindow->setStatusBar(statusbar);

        retranslateUi(AdminWindow);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(AdminWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AdminWindow)
    {
        AdminWindow->setWindowTitle(QCoreApplication::translate("AdminWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("AdminWindow", "\320\230\320\274\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("AdminWindow", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        label_3->setText(QCoreApplication::translate("AdminWindow", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        ExitBtn->setText(QCoreApplication::translate("AdminWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(ProfileTab), QCoreApplication::translate("AdminWindow", "\320\237\321\200\320\276\321\204\320\270\320\273\321\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(deleteTab), QCoreApplication::translate("AdminWindow", "\320\230\320\267\320\274\320\265\320\275\320\265\320\275\320\270\320\265 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        label_11->setText(QCoreApplication::translate("AdminWindow", "\320\235\320\276\320\274\320\265\321\200 \321\202\320\265\320\273\320\265\321\204\320\276\320\275\320\260", nullptr));
        label_7->setText(QCoreApplication::translate("AdminWindow", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        label_15->setText(QCoreApplication::translate("AdminWindow", "\320\236\321\202\320\264\320\265\320\273\320\265\320\275\320\270\320\265", nullptr));
        label_8->setText(QCoreApplication::translate("AdminWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        label_5->setText(QCoreApplication::translate("AdminWindow", "\320\230\320\274\321\217", nullptr));
        label_4->setText(QCoreApplication::translate("AdminWindow", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        label_12->setText(QCoreApplication::translate("AdminWindow", "\320\241\321\202\320\260\320\266 \321\200\320\260\320\261\320\276\321\202\321\213", nullptr));
        label_6->setText(QCoreApplication::translate("AdminWindow", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        label_14->setText(QCoreApplication::translate("AdminWindow", "\320\223\321\200\321\203\320\277\320\277\320\260", nullptr));
        RoleBox->setItemText(0, QCoreApplication::translate("AdminWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \321\200\320\276\320\273\321\214", nullptr));
        RoleBox->setItemText(1, QCoreApplication::translate("AdminWindow", "\320\220\320\264\320\274\320\270\320\275\320\270\321\201\321\202\321\200\320\260\321\202\320\276\321\200", nullptr));
        RoleBox->setItemText(2, QCoreApplication::translate("AdminWindow", "\320\234\320\265\321\202\320\276\320\264\320\270\321\201\321\202", nullptr));
        RoleBox->setItemText(3, QCoreApplication::translate("AdminWindow", "\320\241\320\273\321\203\321\210\320\260\321\202\320\265\320\273\321\214", nullptr));
        RoleBox->setItemText(4, QCoreApplication::translate("AdminWindow", "\320\237\321\200\320\265\320\277\320\276\320\264\320\260\320\262\320\260\321\202\320\265\320\273\321\214", nullptr));

        label_13->setText(QCoreApplication::translate("AdminWindow", "\320\241\320\277\320\265\321\206\320\270\320\260\320\273\321\214\320\275\320\276\321\201\321\202\321\214", nullptr));
        label_9->setText(QCoreApplication::translate("AdminWindow", "\320\240\320\276\320\273\321\214", nullptr));
        DobavitBtn->setText(QCoreApplication::translate("AdminWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        DepartmentBox->setItemText(0, QCoreApplication::translate("AdminWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\276\321\202\320\264\320\265\320\273\320\265\320\275\320\270\320\265", nullptr));
        DepartmentBox->setItemText(1, QCoreApplication::translate("AdminWindow", "\320\236\321\207\320\275\320\276\320\265", nullptr));
        DepartmentBox->setItemText(2, QCoreApplication::translate("AdminWindow", "\320\227\320\260\320\276\321\207\320\275\320\276\320\265", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(AddUserTab), QCoreApplication::translate("AdminWindow", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminWindow: public Ui_AdminWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
