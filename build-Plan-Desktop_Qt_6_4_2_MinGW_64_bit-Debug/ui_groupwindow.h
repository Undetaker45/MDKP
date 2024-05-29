/********************************************************************************
** Form generated from reading UI file 'groupwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUPWINDOW_H
#define UI_GROUPWINDOW_H

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

class Ui_GroupWindow
{
public:
    QVBoxLayout *verticalLayout_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_2;
    QLineEdit *GroupEdit;
    QLabel *label;
    QComboBox *SpecializaciaBox;
    QSpacerItem *verticalSpacer;
    QPushButton *DButton;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_3;
    QComboBox *GroupBox;
    QSpacerItem *verticalSpacer_2;
    QPushButton *DeleteButton;

    void setupUi(QWidget *GroupWindow)
    {
        if (GroupWindow->objectName().isEmpty())
            GroupWindow->setObjectName("GroupWindow");
        GroupWindow->resize(359, 303);
        GroupWindow->setMinimumSize(QSize(359, 303));
        GroupWindow->setMaximumSize(QSize(359, 303));
        verticalLayout_3 = new QVBoxLayout(GroupWindow);
        verticalLayout_3->setObjectName("verticalLayout_3");
        tabWidget = new QTabWidget(GroupWindow);
        tabWidget->setObjectName("tabWidget");
        tab = new QWidget();
        tab->setObjectName("tab");
        verticalLayout_4 = new QVBoxLayout(tab);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout->addItem(verticalSpacer_3);

        label_2 = new QLabel(tab);
        label_2->setObjectName("label_2");
        QFont font;
        font.setPointSize(12);
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        GroupEdit = new QLineEdit(tab);
        GroupEdit->setObjectName("GroupEdit");
        GroupEdit->setFont(font);

        verticalLayout->addWidget(GroupEdit);

        label = new QLabel(tab);
        label->setObjectName("label");
        label->setFont(font);

        verticalLayout->addWidget(label);

        SpecializaciaBox = new QComboBox(tab);
        SpecializaciaBox->setObjectName("SpecializaciaBox");
        SpecializaciaBox->setFont(font);

        verticalLayout->addWidget(SpecializaciaBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

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


        verticalLayout_4->addLayout(verticalLayout);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        verticalLayout_5 = new QVBoxLayout(tab_2);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        label_3 = new QLabel(tab_2);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        verticalLayout_2->addWidget(label_3);

        GroupBox = new QComboBox(tab_2);
        GroupBox->setObjectName("GroupBox");
        GroupBox->setFont(font);

        verticalLayout_2->addWidget(GroupBox);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

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


        verticalLayout_5->addLayout(verticalLayout_2);

        tabWidget->addTab(tab_2, QString());

        verticalLayout_3->addWidget(tabWidget);

        QWidget::setTabOrder(tabWidget, SpecializaciaBox);
        QWidget::setTabOrder(SpecializaciaBox, DButton);
        QWidget::setTabOrder(DButton, DeleteButton);
        QWidget::setTabOrder(DeleteButton, GroupBox);
        QWidget::setTabOrder(GroupBox, GroupEdit);

        retranslateUi(GroupWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(GroupWindow);
    } // setupUi

    void retranslateUi(QWidget *GroupWindow)
    {
        GroupWindow->setWindowTitle(QCoreApplication::translate("GroupWindow", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("GroupWindow", "\320\223\321\200\321\203\320\277\320\277\320\260", nullptr));
        label->setText(QCoreApplication::translate("GroupWindow", "\320\241\320\277\320\265\321\206\320\270\320\260\320\273\320\270\320\267\320\260\321\206\320\270\321\217", nullptr));
        DButton->setText(QCoreApplication::translate("GroupWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("GroupWindow", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265", nullptr));
        label_3->setText(QCoreApplication::translate("GroupWindow", "\320\223\321\200\321\203\320\277\320\277\320\260", nullptr));
        DeleteButton->setText(QCoreApplication::translate("GroupWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("GroupWindow", "\320\243\320\264\320\260\320\273\320\265\320\275\320\270\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GroupWindow: public Ui_GroupWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUPWINDOW_H
