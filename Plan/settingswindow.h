#ifndef SETTINGSWINDOW_H
#define SETTINGSWINDOW_H

#include <QWidget>
#include <lesson.h>

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
    void createModelTeacher(int ID_Specialization);
    void createModelGroup();
    void createModelSpecialization();
    void createModelLectureHall();
signals:
    void signalBackButtonCliked();
    void signalRefreshLesson(Lesson& lesson);
    void signalAddLesson(Lesson& lesson);
    void signalClearBackBtn();
private slots:
    void slotBlockedPole(int index);
    void slotChangeSpecialization(const QString &Specialization);
    void slotDateSelection(QDate Data);
    void slotBackButtonCliked();
};

#endif // SETTINGSWINDOW_H
