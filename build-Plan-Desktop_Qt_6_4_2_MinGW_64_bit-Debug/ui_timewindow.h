/********************************************************************************
** Form generated from reading UI file 'timewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMEWINDOW_H
#define UI_TIMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TimeWindow
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *laTeacher;
    QComboBox *TeacherBox;
    QLabel *laGroup;
    QComboBox *GroupBox;
    QLabel *laTime;
    QLineEdit *TimeEdit;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *TimeWindow)
    {
        if (TimeWindow->objectName().isEmpty())
            TimeWindow->setObjectName("TimeWindow");
        TimeWindow->resize(371, 436);
        verticalLayout_2 = new QVBoxLayout(TimeWindow);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_3 = new QLabel(TimeWindow);
        label_3->setObjectName("label_3");
        QFont font;
        font.setPointSize(14);
        label_3->setFont(font);

        horizontalLayout->addWidget(label_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        laTeacher = new QLabel(TimeWindow);
        laTeacher->setObjectName("laTeacher");
        QFont font1;
        font1.setPointSize(12);
        laTeacher->setFont(font1);

        verticalLayout->addWidget(laTeacher);

        TeacherBox = new QComboBox(TimeWindow);
        TeacherBox->setObjectName("TeacherBox");
        TeacherBox->setFont(font1);

        verticalLayout->addWidget(TeacherBox);

        laGroup = new QLabel(TimeWindow);
        laGroup->setObjectName("laGroup");
        laGroup->setFont(font1);

        verticalLayout->addWidget(laGroup);

        GroupBox = new QComboBox(TimeWindow);
        GroupBox->setObjectName("GroupBox");
        GroupBox->setFont(font1);

        verticalLayout->addWidget(GroupBox);

        laTime = new QLabel(TimeWindow);
        laTime->setObjectName("laTime");
        laTime->setFont(font1);

        verticalLayout->addWidget(laTime);

        TimeEdit = new QLineEdit(TimeWindow);
        TimeEdit->setObjectName("TimeEdit");
        TimeEdit->setFont(font1);

        verticalLayout->addWidget(TimeEdit);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(TimeWindow);

        QMetaObject::connectSlotsByName(TimeWindow);
    } // setupUi

    void retranslateUi(QWidget *TimeWindow)
    {
        TimeWindow->setWindowTitle(QCoreApplication::translate("TimeWindow", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("TimeWindow", "\320\222\321\200\320\265\320\274\321\217", nullptr));
        laTeacher->setText(QCoreApplication::translate("TimeWindow", "\320\237\321\200\320\265\320\277\320\276\320\264\320\260\320\262\320\260\321\202\320\265\320\273\321\214", nullptr));
        laGroup->setText(QCoreApplication::translate("TimeWindow", "\320\223\321\200\321\203\320\277\320\277\320\260", nullptr));
        laTime->setText(QCoreApplication::translate("TimeWindow", "\320\222\321\200\320\265\320\274\321\217:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TimeWindow: public Ui_TimeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMEWINDOW_H
