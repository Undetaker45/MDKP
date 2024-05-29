#ifndef SPECIALIZATIONWINDOW_H
#define SPECIALIZATIONWINDOW_H

#include <QWidget>
#include "database.h"

namespace Ui {
class SpecializationWindow;
}

class SpecializationWindow : public QWidget
{
    Q_OBJECT

public:
    explicit SpecializationWindow(QWidget *parent = nullptr);
    ~SpecializationWindow();

private:
    Ui::SpecializationWindow *ui;
    QSqlQueryModel* specializationModel;
    void createModelSpecialization();
    void ChangeSpecialization();
    void SetValidationOnCreateSpecialization();
    void ClearSpecialization();
signals:
    void signalChangeSpecialization();
private slots:
    void slotDButtonCliked();
    void slotDeleteButtonCliked();
};

#endif // SPECIALIZATIONWINDOW_H
