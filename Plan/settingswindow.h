#ifndef SETTINGSWINDOW_H
#define SETTINGSWINDOW_H

#include <QWidget>
#include <lesson.h>
#include <QMessageBox>

namespace Ui {
class SettingsWindow;
}

class SettingsWindow : public QWidget
{
    Q_OBJECT

public:
    explicit SettingsWindow(QWidget *parent = nullptr);
    ~SettingsWindow();

    void setLessonToChangeWidget(Lesson lesson);

private:
    Ui::SettingsWindow *ui;
    Lesson lesson;
    QSqlQueryModel* groupModel;
    QSqlQueryModel* specializationModel;
    bool Change = false;
    void createModelTeacher(int ID_Specialization);
    void createModelGroup();
    void createModelSpecialization();
    void createModelLectureHall();
    void SetValidationOnCreateLessons();
    void CheckingFieldsEmpty();
    void cleari();
signals:
    void signalBackButtonCliked();
    void signalRefreshLesson(Lesson& lesson);
    void signalAddLesson(Lesson& lesson);
    void signalClearBackBtn();
private slots:
    void slotConfirmButtonClicked();
    void slotBlockedPole(int index);
    void slotChangeSpecialization(QString Specialization);
    void slotDateSelection(QDate Data);
    void slotBackButtonCliked();
};

#endif // SETTINGSWINDOW_H
