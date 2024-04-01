#include "log_widget.h"
#include "ui_log_widget.h"
#include "main.cpp"
#include <bits/stdc++.h>
#include "mainwindow.h"
#include <QPushButton>
#include <QFile>
#include <QTextStream>
using namespace std;

//bool state = false;
map<QString, QString> user;
log_widget::log_widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::log_widget)
{
    ui->setupUi(this);

    this->pmainwin = new MainWindow;

    connect (ui->Log_in, &QPushButton::clicked, [=]()
    {
        QString account = ui->account->text();
        QString password = ui->password->text();
        QString filename = "D:/qtmap/password/" + account + ".txt";
        QFile file(filename);
        if (file.exists())
        {
            file.open(QIODevice::ReadOnly);
            QTextStream in(&file);
            QString line = in.readLine();
            if (line == password)
            {
                this->hide();
                this->pmainwin->show();
            }
        }
        ui->account->clear();
        ui->password->clear();
    });
}

log_widget::~log_widget()
{
    delete ui;
}

void log_widget::on_Exit_clicked()
{
//    this->close();
    exit(114514);
}

void log_widget::on_To_register_clicked()
{
    QString account = ui->account->text();
    QString password = ui->password->text();
    QString filename = "D:/qtmap/password/" + account + ".txt";
    QFile file(filename);
    file.open(QIODevice::WriteOnly);
    file.write(password.toUtf8());
//    user[account] = password;
    ui->account->clear();
    ui->password->clear();
}

/*void log_widget::on_Log_in_clicked()
{
    QString account = ui->account->text();
    QString password = ui->password->text();
    if (user[account] == password)
    {
        state = true;
    }
    if (state)
    {
        l.hide();
        w.show();
    }
}*/
