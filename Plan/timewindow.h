#ifndef TIMEWINDOW_H
#define TIMEWINDOW_H

#include <QWidget>

namespace Ui {
class TimeWindow;
}

class TimeWindow : public QWidget
{
    Q_OBJECT

public:
    explicit TimeWindow(QWidget *parent = nullptr);
    ~TimeWindow();

private:
    Ui::TimeWindow *ui;
};

#endif // TIMEWINDOW_H
