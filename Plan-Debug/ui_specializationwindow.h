/********************************************************************************
** Form generated from reading UI file 'specializationwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPECIALIZATIONWINDOW_H
#define UI_SPECIALIZATIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SpecializationWindow
{
public:
    QVBoxLayout *verticalLayout_5;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_3;
    QLabel *label;
    QLineEdit *SpecializationEdit;
    QSpacerItem *verticalSpacer_2;
    QPushButton *DButton;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QLabel *label_2;
    QComboBox *SpecializaciaBox;
    QSpacerItem *verticalSpacer_4;
    QPushButton *DeleteButton;

    void setupUi(QWidget *SpecializationWindow)
    {
        if (SpecializationWindow->objectName().isEmpty())
            SpecializationWindow->setObjectName("SpecializationWindow");
        SpecializationWindow->resize(333, 327);
        SpecializationWindow->setMinimumSize(QSize(333, 327));
        verticalLayout_5 = new QVBoxLayout(SpecializationWindow);
        verticalLayout_5->setObjectName("verticalLayout_5");
        tabWidget = new QTabWidget(SpecializationWindow);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setMaximumSize(QSize(311, 305));
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        tab = new QWidget();
        tab->setObjectName("tab");
        tab->setMinimumSize(QSize(0, 0));
        verticalLayout_3 = new QVBoxLayout(tab);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout->addItem(verticalSpacer_3);

        label = new QLabel(tab);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(12);
        label->setFont(font);

        verticalLayout->addWidget(label);

        SpecializationEdit = new QLineEdit(tab);
        SpecializationEdit->setObjectName("SpecializationEdit");
        SpecializationEdit->setFont(font);

        verticalLayout->addWidget(SpecializationEdit);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        DButton = new QPushButton(tab);
        DButton->setObjectName("DButton");
        DButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        verticalLayout->addWidget(DButton);


        verticalLayout_3->addLayout(verticalLayout);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        verticalLayout_4 = new QVBoxLayout(tab_2);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        label_2 = new QLabel(tab_2);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        verticalLayout_2->addWidget(label_2);

        SpecializaciaBox = new QComboBox(tab_2);
        SpecializaciaBox->setObjectName("SpecializaciaBox");
        SpecializaciaBox->setFont(font);

        verticalLayout_2->addWidget(SpecializaciaBox);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        DeleteButton = new QPushButton(tab_2);
        DeleteButton->setObjectName("DeleteButton");
        DeleteButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        verticalLayout_2->addWidget(DeleteButton);


        verticalLayout_4->addLayout(verticalLayout_2);

        tabWidget->addTab(tab_2, QString());

        verticalLayout_5->addWidget(tabWidget);


        retranslateUi(SpecializationWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SpecializationWindow);
    } // setupUi

    void retranslateUi(QWidget *SpecializationWindow)
    {
        SpecializationWindow->setWindowTitle(QCoreApplication::translate("SpecializationWindow", "Form", nullptr));
        label->setText(QCoreApplication::translate("SpecializationWindow", "\320\241\320\277\320\265\321\206\320\270\320\260\320\273\320\270\320\267\320\260\321\206\320\270\321\217", nullptr));
        DButton->setText(QCoreApplication::translate("SpecializationWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("SpecializationWindow", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265", nullptr));
        label_2->setText(QCoreApplication::translate("SpecializationWindow", "\320\241\320\277\320\265\321\206\320\270\320\260\320\273\320\270\320\267\320\260\321\206\320\270\321\217", nullptr));
        DeleteButton->setText(QCoreApplication::translate("SpecializationWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("SpecializationWindow", "\320\243\320\264\320\260\320\273\320\265\320\275\320\270\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SpecializationWindow: public Ui_SpecializationWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPECIALIZATIONWINDOW_H
