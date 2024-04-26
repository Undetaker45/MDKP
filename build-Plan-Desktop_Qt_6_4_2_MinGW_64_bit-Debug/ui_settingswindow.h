/********************************************************************************
** Form generated from reading UI file 'settingswindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSWINDOW_H
#define UI_SETTINGSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsWindow
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QLabel *label;
    QComboBox *SpecializaciaBox;
    QLabel *label_2;
    QComboBox *TeacherBox;
    QLabel *label_5;
    QLineEdit *TitleEdit;
    QLabel *label_6;
    QComboBox *VidBox;
    QLabel *label_7;
    QComboBox *groupBox;
    QLabel *label_8;
    QComboBox *LectorHall;
    QLabel *label_9;
    QLineEdit *DataEdit;
    QCalendarWidget *Data;
    QLabel *label_3;
    QComboBox *Time;
    QLabel *label_4;
    QSpacerItem *verticalSpacer;
    QLineEdit *PaymentEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *ExitBtn;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *ConfirmBtn;

    void setupUi(QWidget *SettingsWindow)
    {
        if (SettingsWindow->objectName().isEmpty())
            SettingsWindow->setObjectName("SettingsWindow");
        SettingsWindow->resize(416, 1023);
        verticalLayout_2 = new QVBoxLayout(SettingsWindow);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label_10 = new QLabel(SettingsWindow);
        label_10->setObjectName("label_10");
        QFont font;
        font.setPointSize(14);
        label_10->setFont(font);

        horizontalLayout_2->addWidget(label_10);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        label = new QLabel(SettingsWindow);
        label->setObjectName("label");
        QFont font1;
        font1.setPointSize(12);
        label->setFont(font1);

        verticalLayout->addWidget(label);

        SpecializaciaBox = new QComboBox(SettingsWindow);
        SpecializaciaBox->setObjectName("SpecializaciaBox");
        SpecializaciaBox->setFont(font1);

        verticalLayout->addWidget(SpecializaciaBox);

        label_2 = new QLabel(SettingsWindow);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);

        verticalLayout->addWidget(label_2);

        TeacherBox = new QComboBox(SettingsWindow);
        TeacherBox->setObjectName("TeacherBox");
        TeacherBox->setFont(font1);

        verticalLayout->addWidget(TeacherBox);

        label_5 = new QLabel(SettingsWindow);
        label_5->setObjectName("label_5");
        label_5->setFont(font1);

        verticalLayout->addWidget(label_5);

        TitleEdit = new QLineEdit(SettingsWindow);
        TitleEdit->setObjectName("TitleEdit");
        TitleEdit->setFont(font1);

        verticalLayout->addWidget(TitleEdit);

        label_6 = new QLabel(SettingsWindow);
        label_6->setObjectName("label_6");
        label_6->setFont(font1);

        verticalLayout->addWidget(label_6);

        VidBox = new QComboBox(SettingsWindow);
        VidBox->addItem(QString());
        VidBox->addItem(QString());
        VidBox->addItem(QString());
        VidBox->setObjectName("VidBox");
        VidBox->setFont(font1);

        verticalLayout->addWidget(VidBox);

        label_7 = new QLabel(SettingsWindow);
        label_7->setObjectName("label_7");
        label_7->setFont(font1);

        verticalLayout->addWidget(label_7);

        groupBox = new QComboBox(SettingsWindow);
        groupBox->addItem(QString());
        groupBox->setObjectName("groupBox");
        groupBox->setFont(font1);

        verticalLayout->addWidget(groupBox);

        label_8 = new QLabel(SettingsWindow);
        label_8->setObjectName("label_8");
        label_8->setFont(font1);

        verticalLayout->addWidget(label_8);

        LectorHall = new QComboBox(SettingsWindow);
        LectorHall->addItem(QString());
        LectorHall->setObjectName("LectorHall");
        LectorHall->setFont(font1);

        verticalLayout->addWidget(LectorHall);

        label_9 = new QLabel(SettingsWindow);
        label_9->setObjectName("label_9");
        label_9->setFont(font1);

        verticalLayout->addWidget(label_9);

        DataEdit = new QLineEdit(SettingsWindow);
        DataEdit->setObjectName("DataEdit");
        DataEdit->setFont(font1);

        verticalLayout->addWidget(DataEdit);

        Data = new QCalendarWidget(SettingsWindow);
        Data->setObjectName("Data");

        verticalLayout->addWidget(Data);

        label_3 = new QLabel(SettingsWindow);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);

        verticalLayout->addWidget(label_3);

        Time = new QComboBox(SettingsWindow);
        Time->addItem(QString());
        Time->addItem(QString());
        Time->addItem(QString());
        Time->addItem(QString());
        Time->addItem(QString());
        Time->addItem(QString());
        Time->addItem(QString());
        Time->addItem(QString());
        Time->addItem(QString());
        Time->setObjectName("Time");
        Time->setFont(font1);

        verticalLayout->addWidget(Time);

        label_4 = new QLabel(SettingsWindow);
        label_4->setObjectName("label_4");
        label_4->setFont(font1);

        verticalLayout->addWidget(label_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        PaymentEdit = new QLineEdit(SettingsWindow);
        PaymentEdit->setObjectName("PaymentEdit");
        PaymentEdit->setFont(font1);

        verticalLayout->addWidget(PaymentEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        ExitBtn = new QPushButton(SettingsWindow);
        ExitBtn->setObjectName("ExitBtn");
        ExitBtn->setFont(font1);

        horizontalLayout->addWidget(ExitBtn);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        ConfirmBtn = new QPushButton(SettingsWindow);
        ConfirmBtn->setObjectName("ConfirmBtn");
        ConfirmBtn->setFont(font1);

        horizontalLayout->addWidget(ConfirmBtn);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(SettingsWindow);

        QMetaObject::connectSlotsByName(SettingsWindow);
    } // setupUi

    void retranslateUi(QWidget *SettingsWindow)
    {
        SettingsWindow->setWindowTitle(QCoreApplication::translate("SettingsWindow", "Form", nullptr));
        label_10->setText(QCoreApplication::translate("SettingsWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", nullptr));
        label->setText(QCoreApplication::translate("SettingsWindow", "\320\237\321\200\320\265\320\264\320\274\320\265\321\202\320\275\320\260\321\217 \320\276\320\261\320\273\320\260\321\201\321\202\321\214", nullptr));
        label_2->setText(QCoreApplication::translate("SettingsWindow", "\320\237\321\200\320\265\320\277\320\276\320\264\320\260\320\262\320\260\321\202\320\265\320\273\321\214", nullptr));
        label_5->setText(QCoreApplication::translate("SettingsWindow", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\277\321\200\320\265\320\264\320\274\320\265\321\202\320\260", nullptr));
        label_6->setText(QCoreApplication::translate("SettingsWindow", "\320\222\320\270\320\264 \320\267\320\260\320\275\321\217\321\202\320\270\321\217", nullptr));
        VidBox->setItemText(0, QCoreApplication::translate("SettingsWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\262\320\270\320\264 \320\267\320\260\320\275\321\217\321\202\320\270\321\217", nullptr));
        VidBox->setItemText(1, QCoreApplication::translate("SettingsWindow", "\320\233\320\265\320\272\321\206\320\270\321\217", nullptr));
        VidBox->setItemText(2, QCoreApplication::translate("SettingsWindow", "\320\237\321\200\320\260\320\272\321\202\320\270\321\207\320\265\321\201\320\272\320\276\320\265 \320\267\320\260\320\275\321\217\321\202\320\270\320\265", nullptr));

        label_7->setText(QCoreApplication::translate("SettingsWindow", "\320\223\321\200\321\203\320\277\320\277\320\260", nullptr));
        groupBox->setItemText(0, QCoreApplication::translate("SettingsWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\263\321\200\321\203\320\277\320\277\321\203", nullptr));

        label_8->setText(QCoreApplication::translate("SettingsWindow", "\320\220\321\203\320\264\320\270\321\202\320\276\321\200\320\270\321\217", nullptr));
        LectorHall->setItemText(0, QCoreApplication::translate("SettingsWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\260\321\203\320\264\320\270\321\202\320\276\321\200\320\270\321\216", nullptr));

        label_9->setText(QCoreApplication::translate("SettingsWindow", "\320\224\320\260\321\202\320\260 \320\277\321\200\320\276\320\262\320\265\320\264\320\265\320\275\320\270\321\217", nullptr));
        label_3->setText(QCoreApplication::translate("SettingsWindow", "\320\222\321\200\320\265\320\274\321\217 \320\277\321\200\320\276\320\262\320\265\320\264\320\265\320\275\320\270\321\217", nullptr));
        Time->setItemText(0, QCoreApplication::translate("SettingsWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\262\321\200\320\265\320\274\321\217", nullptr));
        Time->setItemText(1, QCoreApplication::translate("SettingsWindow", "8:30", nullptr));
        Time->setItemText(2, QCoreApplication::translate("SettingsWindow", "10:15", nullptr));
        Time->setItemText(3, QCoreApplication::translate("SettingsWindow", "12:00", nullptr));
        Time->setItemText(4, QCoreApplication::translate("SettingsWindow", "14:10", nullptr));
        Time->setItemText(5, QCoreApplication::translate("SettingsWindow", "15:55", nullptr));
        Time->setItemText(6, QCoreApplication::translate("SettingsWindow", "17:40", nullptr));
        Time->setItemText(7, QCoreApplication::translate("SettingsWindow", "18:25", nullptr));
        Time->setItemText(8, QCoreApplication::translate("SettingsWindow", "20:10", nullptr));

        label_4->setText(QCoreApplication::translate("SettingsWindow", "\320\236\320\277\320\273\320\260\321\202\320\260", nullptr));
        ExitBtn->setText(QCoreApplication::translate("SettingsWindow", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        ConfirmBtn->setText(QCoreApplication::translate("SettingsWindow", "\320\223\320\276\321\202\320\276\320\262\320\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsWindow: public Ui_SettingsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSWINDOW_H
