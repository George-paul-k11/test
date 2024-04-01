/********************************************************************************
** Form generated from reading UI file 'log_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOG_WIDGET_H
#define UI_LOG_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_log_widget
{
public:
    QLineEdit *account;
    QLabel *logtitle;
    QLabel *acc_name;
    QLabel *pass_name;
    QLineEdit *password;
    QPushButton *Log_in;
    QPushButton *To_register;
    QPushButton *Exit;

    void setupUi(QWidget *log_widget)
    {
        if (log_widget->objectName().isEmpty())
            log_widget->setObjectName(QString::fromUtf8("log_widget"));
        log_widget->resize(400, 300);
        account = new QLineEdit(log_widget);
        account->setObjectName(QString::fromUtf8("account"));
        account->setGeometry(QRect(130, 100, 211, 41));
        logtitle = new QLabel(log_widget);
        logtitle->setObjectName(QString::fromUtf8("logtitle"));
        logtitle->setGeometry(QRect(80, 40, 221, 51));
        acc_name = new QLabel(log_widget);
        acc_name->setObjectName(QString::fromUtf8("acc_name"));
        acc_name->setGeometry(QRect(50, 100, 81, 41));
        pass_name = new QLabel(log_widget);
        pass_name->setObjectName(QString::fromUtf8("pass_name"));
        pass_name->setGeometry(QRect(50, 160, 81, 41));
        password = new QLineEdit(log_widget);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(130, 160, 211, 41));
        Log_in = new QPushButton(log_widget);
        Log_in->setObjectName(QString::fromUtf8("Log_in"));
        Log_in->setGeometry(QRect(70, 230, 51, 31));
        To_register = new QPushButton(log_widget);
        To_register->setObjectName(QString::fromUtf8("To_register"));
        To_register->setGeometry(QRect(180, 230, 51, 31));
        Exit = new QPushButton(log_widget);
        Exit->setObjectName(QString::fromUtf8("Exit"));
        Exit->setGeometry(QRect(290, 230, 51, 31));

        retranslateUi(log_widget);

        QMetaObject::connectSlotsByName(log_widget);
    } // setupUi

    void retranslateUi(QWidget *log_widget)
    {
        log_widget->setWindowTitle(QCoreApplication::translate("log_widget", "Form", nullptr));
        logtitle->setText(QCoreApplication::translate("log_widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\346\202\250\345\245\275\357\274\201\350\257\267\347\231\273\345\275\225</span></p></body></html>", nullptr));
        acc_name->setText(QCoreApplication::translate("log_widget", "<html><head/><body><p><span style=\" font-size:14pt;\">\350\264\246\345\217\267\357\274\232</span></p></body></html>", nullptr));
        pass_name->setText(QCoreApplication::translate("log_widget", "<html><head/><body><p><span style=\" font-size:14pt;\">\345\257\206\347\240\201\357\274\232</span></p></body></html>", nullptr));
        Log_in->setText(QCoreApplication::translate("log_widget", "\347\231\273\345\275\225", nullptr));
        To_register->setText(QCoreApplication::translate("log_widget", "\346\263\250\345\206\214", nullptr));
        Exit->setText(QCoreApplication::translate("log_widget", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class log_widget: public Ui_log_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOG_WIDGET_H
