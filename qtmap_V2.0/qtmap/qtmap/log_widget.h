#ifndef LOG_WIDGET_H
#define LOG_WIDGET_H

#include <QWidget>

#include "mainwindow.h"
namespace Ui {
class log_widget;
}

class log_widget : public QWidget
{
    Q_OBJECT

public:
    explicit log_widget(QWidget *parent = nullptr);
    ~log_widget();

    MainWindow *pmainwin = NULL;

private slots:
    void on_Exit_clicked();

    void on_To_register_clicked();

    void on_Log_in_clicked();

private:
    Ui::log_widget *ui;
};

#endif // LOG_WIDGET_H
