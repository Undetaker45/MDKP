#include "timewindow.h"
#include "ui_timewindow.h"

TimeWindow::TimeWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TimeWindow)
{
    ui->setupUi(this);
}

TimeWindow::~TimeWindow()
{
    delete ui;
}
