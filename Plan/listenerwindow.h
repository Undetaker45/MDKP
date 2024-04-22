#ifndef LISTENERWINDOW_H
#define LISTENERWINDOW_H

#include "abstractuserwindow.h"
#include "database.h"

namespace Ui {
class ListenerWindow;
}

class ListenerWindow : public AbstractUserWindow
{
    Q_OBJECT

public:
    explicit ListenerWindow(const User& us,Database* database,QWidget *parent = nullptr);
    ~ListenerWindow();

private:
    Ui::ListenerWindow *ui;
};

#endif // LISTENERWINDOW_H
