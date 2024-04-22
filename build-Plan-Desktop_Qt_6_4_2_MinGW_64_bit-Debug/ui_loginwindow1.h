/********************************************************************************
** Form generated from reading UI file 'loginwindow1.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW1_H
#define UI_LOGINWINDOW1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *lalogin;
    QLineEdit *lilogin;
    QLabel *lapassword;
    QLineEdit *lipassword;
    QPushButton *pbvhod;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName("LoginWindow");
        LoginWindow->resize(344, 520);
        horizontalLayout = new QHBoxLayout(LoginWindow);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout->addItem(verticalSpacer);

        lalogin = new QLabel(LoginWindow);
        lalogin->setObjectName("lalogin");
        QFont font;
        font.setPointSize(12);
        lalogin->setFont(font);
        lalogin->setLineWidth(3);

        verticalLayout->addWidget(lalogin);

        lilogin = new QLineEdit(LoginWindow);
        lilogin->setObjectName("lilogin");
        lilogin->setFont(font);

        verticalLayout->addWidget(lilogin);

        lapassword = new QLabel(LoginWindow);
        lapassword->setObjectName("lapassword");
        lapassword->setFont(font);

        verticalLayout->addWidget(lapassword);

        lipassword = new QLineEdit(LoginWindow);
        lipassword->setObjectName("lipassword");
        lipassword->setFont(font);

        verticalLayout->addWidget(lipassword);

        pbvhod = new QPushButton(LoginWindow);
        pbvhod->setObjectName("pbvhod");
        pbvhod->setFont(font);

        verticalLayout->addWidget(pbvhod);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QWidget *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "Form", nullptr));
        lalogin->setText(QCoreApplication::translate("LoginWindow", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        lapassword->setText(QCoreApplication::translate("LoginWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        pbvhod->setText(QCoreApplication::translate("LoginWindow", "\320\222\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW1_H
