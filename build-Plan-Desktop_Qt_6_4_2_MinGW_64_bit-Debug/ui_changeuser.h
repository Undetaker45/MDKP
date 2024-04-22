/********************************************************************************
** Form generated from reading UI file 'changeuser.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEUSER_H
#define UI_CHANGEUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChangeUser
{
public:
    QHBoxLayout *horizontalLayout_3;
    QGridLayout *gridLayout;
    QLineEdit *Group;
    QLineEdit *Surname;
    QSpacerItem *verticalSpacer;
    QLabel *label_6;
    QComboBox *Otdelenie;
    QLabel *label_12;
    QLabel *label_2;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *MiddleName;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_9;
    QComboBox *Role;
    QLineEdit *Password;
    QLabel *label;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *RefreshBtn;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_3;
    QComboBox *Status;
    QLineEdit *Login;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *PhoneNumber;
    QLabel *label_5;
    QLineEdit *WorkExperience;
    QLabel *label_10;
    QLabel *label_4;
    QLineEdit *Name;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *ConfirmBtn;
    QLabel *label_3;
    QLineEdit *Specializacia;

    void setupUi(QWidget *ChangeUser)
    {
        if (ChangeUser->objectName().isEmpty())
            ChangeUser->setObjectName("ChangeUser");
        ChangeUser->resize(1570, 678);
        horizontalLayout_3 = new QHBoxLayout(ChangeUser);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        Group = new QLineEdit(ChangeUser);
        Group->setObjectName("Group");
        QFont font;
        font.setPointSize(12);
        Group->setFont(font);

        gridLayout->addWidget(Group, 9, 3, 1, 1);

        Surname = new QLineEdit(ChangeUser);
        Surname->setObjectName("Surname");
        Surname->setFont(font);

        gridLayout->addWidget(Surname, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout->addItem(verticalSpacer, 14, 2, 1, 1);

        label_6 = new QLabel(ChangeUser);
        label_6->setObjectName("label_6");
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 12, 1, 1, 1);

        Otdelenie = new QComboBox(ChangeUser);
        Otdelenie->addItem(QString());
        Otdelenie->setObjectName("Otdelenie");
        Otdelenie->setFont(font);

        gridLayout->addWidget(Otdelenie, 11, 3, 1, 1);

        label_12 = new QLabel(ChangeUser);
        label_12->setObjectName("label_12");
        label_12->setFont(font);

        gridLayout->addWidget(label_12, 8, 3, 1, 1);

        label_2 = new QLabel(ChangeUser);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 4, 1, 1, 1);

        label_7 = new QLabel(ChangeUser);
        label_7->setObjectName("label_7");
        label_7->setFont(font);

        gridLayout->addWidget(label_7, 1, 3, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 7, 5, 1, 1);

        MiddleName = new QLineEdit(ChangeUser);
        MiddleName->setObjectName("MiddleName");
        MiddleName->setFont(font);

        gridLayout->addWidget(MiddleName, 7, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout->addItem(verticalSpacer_3, 0, 2, 1, 1);

        label_9 = new QLabel(ChangeUser);
        label_9->setObjectName("label_9");
        label_9->setFont(font);

        gridLayout->addWidget(label_9, 6, 3, 1, 1);

        Role = new QComboBox(ChangeUser);
        Role->addItem(QString());
        Role->addItem(QString());
        Role->addItem(QString());
        Role->addItem(QString());
        Role->addItem(QString());
        Role->setObjectName("Role");
        Role->setFont(font);

        gridLayout->addWidget(Role, 13, 3, 1, 1);

        Password = new QLineEdit(ChangeUser);
        Password->setObjectName("Password");
        Password->setFont(font);

        gridLayout->addWidget(Password, 11, 1, 1, 1);

        label = new QLabel(ChangeUser);
        label->setObjectName("label");
        label->setFont(font);

        gridLayout->addWidget(label, 1, 1, 1, 1);

        label_11 = new QLabel(ChangeUser);
        label_11->setObjectName("label_11");
        label_11->setFont(font);

        gridLayout->addWidget(label_11, 12, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 7, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        RefreshBtn = new QPushButton(ChangeUser);
        RefreshBtn->setObjectName("RefreshBtn");

        horizontalLayout->addWidget(RefreshBtn);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);


        gridLayout->addLayout(horizontalLayout, 15, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 7, 4, 1, 1);

        Status = new QComboBox(ChangeUser);
        Status->addItem(QString());
        Status->addItem(QString());
        Status->addItem(QString());
        Status->setObjectName("Status");
        Status->setFont(font);

        gridLayout->addWidget(Status, 13, 1, 1, 1);

        Login = new QLineEdit(ChangeUser);
        Login->setObjectName("Login");
        Login->setFont(font);

        gridLayout->addWidget(Login, 9, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 7, 2, 1, 1);

        PhoneNumber = new QLineEdit(ChangeUser);
        PhoneNumber->setObjectName("PhoneNumber");
        PhoneNumber->setFont(font);

        gridLayout->addWidget(PhoneNumber, 5, 3, 1, 1);

        label_5 = new QLabel(ChangeUser);
        label_5->setObjectName("label_5");
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 10, 1, 1, 1);

        WorkExperience = new QLineEdit(ChangeUser);
        WorkExperience->setObjectName("WorkExperience");
        WorkExperience->setFont(font);

        gridLayout->addWidget(WorkExperience, 7, 3, 1, 1);

        label_10 = new QLabel(ChangeUser);
        label_10->setObjectName("label_10");
        label_10->setFont(font);

        gridLayout->addWidget(label_10, 10, 3, 1, 1);

        label_4 = new QLabel(ChangeUser);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 8, 1, 1, 1);

        Name = new QLineEdit(ChangeUser);
        Name->setObjectName("Name");
        Name->setFont(font);

        gridLayout->addWidget(Name, 5, 1, 1, 1);

        label_8 = new QLabel(ChangeUser);
        label_8->setObjectName("label_8");
        label_8->setFont(font);

        gridLayout->addWidget(label_8, 4, 3, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        ConfirmBtn = new QPushButton(ChangeUser);
        ConfirmBtn->setObjectName("ConfirmBtn");

        horizontalLayout_2->addWidget(ConfirmBtn);


        gridLayout->addLayout(horizontalLayout_2, 15, 5, 1, 1);

        label_3 = new QLabel(ChangeUser);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 6, 1, 1, 1);

        Specializacia = new QLineEdit(ChangeUser);
        Specializacia->setObjectName("Specializacia");
        Specializacia->setFont(font);

        gridLayout->addWidget(Specializacia, 2, 3, 1, 1);


        horizontalLayout_3->addLayout(gridLayout);


        retranslateUi(ChangeUser);

        QMetaObject::connectSlotsByName(ChangeUser);
    } // setupUi

    void retranslateUi(QWidget *ChangeUser)
    {
        ChangeUser->setWindowTitle(QCoreApplication::translate("ChangeUser", "Form", nullptr));
        label_6->setText(QCoreApplication::translate("ChangeUser", "\320\241\321\202\320\260\321\202\321\203\321\201", nullptr));
        Otdelenie->setItemText(0, QCoreApplication::translate("ChangeUser", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\276\321\202\320\264\320\265\320\273\320\265\320\275\320\270\320\265", nullptr));

        label_12->setText(QCoreApplication::translate("ChangeUser", "\320\223\321\200\321\203\320\277\320\277\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("ChangeUser", "\320\230\320\274\321\217", nullptr));
        label_7->setText(QCoreApplication::translate("ChangeUser", "\320\241\320\277\320\265\321\206\320\270\320\260\320\273\321\214\320\275\320\276\321\201\321\202\321\214", nullptr));
        label_9->setText(QCoreApplication::translate("ChangeUser", "\320\241\321\202\320\260\320\266 \321\200\320\260\320\261\320\276\321\202\321\213", nullptr));
        Role->setItemText(0, QCoreApplication::translate("ChangeUser", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \321\200\320\276\320\273\321\214", nullptr));
        Role->setItemText(1, QCoreApplication::translate("ChangeUser", "\320\220\320\264\320\274\320\270\320\275\320\270\321\201\321\202\321\200\320\260\321\202\320\276\321\200", nullptr));
        Role->setItemText(2, QCoreApplication::translate("ChangeUser", "\320\234\320\265\321\202\320\276\320\264\320\270\321\201\321\202", nullptr));
        Role->setItemText(3, QCoreApplication::translate("ChangeUser", "\320\243\321\207\320\270\321\202\320\265\320\273\321\214", nullptr));
        Role->setItemText(4, QCoreApplication::translate("ChangeUser", "\320\241\320\273\321\203\321\210\320\260\321\202\320\265\320\273\321\214", nullptr));

        label->setText(QCoreApplication::translate("ChangeUser", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        label_11->setText(QCoreApplication::translate("ChangeUser", "\320\240\320\276\320\273\321\214", nullptr));
        RefreshBtn->setText(QCoreApplication::translate("ChangeUser", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        Status->setItemText(0, QCoreApplication::translate("ChangeUser", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \321\201\321\202\320\260\321\202\321\203\321\201", nullptr));
        Status->setItemText(1, QCoreApplication::translate("ChangeUser", "\320\240\320\260\320\261\320\276\321\202\320\260\320\265\321\202", nullptr));
        Status->setItemText(2, QCoreApplication::translate("ChangeUser", "\320\235\320\265 \321\200\320\260\320\261\320\276\321\202\320\260\320\265\321\202", nullptr));

        label_5->setText(QCoreApplication::translate("ChangeUser", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        label_10->setText(QCoreApplication::translate("ChangeUser", "\320\236\321\202\320\264\320\265\320\273\320\265\320\275\320\270\320\265", nullptr));
        label_4->setText(QCoreApplication::translate("ChangeUser", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        label_8->setText(QCoreApplication::translate("ChangeUser", "\320\235\320\276\320\274\320\265\321\200 \321\202\320\265\320\273\320\265\321\204\320\276\320\275\320\260", nullptr));
        ConfirmBtn->setText(QCoreApplication::translate("ChangeUser", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214", nullptr));
        label_3->setText(QCoreApplication::translate("ChangeUser", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChangeUser: public Ui_ChangeUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEUSER_H
