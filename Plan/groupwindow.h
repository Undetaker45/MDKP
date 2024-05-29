#ifndef GROUPWINDOW_H
#define GROUPWINDOW_H

#include <QWidget>
#include "database.h"
#include "QMessageBox"

namespace Ui {
class GroupWindow;
}

class GroupWindow : public QWidget
{
    Q_OBJECT

public:
    explicit GroupWindow(QWidget *parent = nullptr);
    ~GroupWindow();
    void Change();

private:
    Ui::GroupWindow *ui;
    QSqlQueryModel* groupModel;
    QSqlQueryModel* specializationModel;
    void createModelGroup();
    void createModelSpecialization();
    void ChangeGroup();
    void SetValidationOnCreateGroups();
    void ClearGroup();
    void CheckingFieldsEmptyAdd();
    void CheckingFieldsEmptyDel();
signals:
    void signalChangeGroup();
private slots:
    void slotDButtonCliked();
    void slotDeleteButtonCliked();
};

#endif // GROUPWINDOW_H
