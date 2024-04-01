/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *commend;
    QPushButton *search;
    QPushButton *pushButton_3;
    QPushButton *food;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 435);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        commend = new QPushButton(centralwidget);
        commend->setObjectName(QString::fromUtf8("commend"));
        commend->setGeometry(QRect(0, 0, 171, 91));
        search = new QPushButton(centralwidget);
        search->setObjectName(QString::fromUtf8("search"));
        search->setGeometry(QRect(0, 90, 171, 101));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(0, 190, 171, 101));
        food = new QPushButton(centralwidget);
        food->setObjectName(QString::fromUtf8("food"));
        food->setGeometry(QRect(0, 290, 171, 101));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        commend->setText(QCoreApplication::translate("MainWindow", "\346\216\250\350\215\220", nullptr));
        search->setText(QCoreApplication::translate("MainWindow", "\346\220\234\347\264\242", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\346\270\270\345\255\246\346\227\245\350\256\260", nullptr));
        food->setText(QCoreApplication::translate("MainWindow", "\347\276\216\351\243\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
