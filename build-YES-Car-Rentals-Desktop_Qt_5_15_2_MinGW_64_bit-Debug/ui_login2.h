/********************************************************************************
** Form generated from reading UI file 'login2.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN2_H
#define UI_LOGIN2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Login2
{
public:
    QFrame *frame23;
    QLabel *label;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_2;
    QLabel *label_2;

    void setupUi(QDialog *Login2)
    {
        if (Login2->objectName().isEmpty())
            Login2->setObjectName(QString::fromUtf8("Login2"));
        Login2->resize(496, 618);
        Login2->setStyleSheet(QString::fromUtf8("*{\n"
"        font-family:century gothic;\n"
"        font-size:24px;\n"
"        color:white;\n"
"\n"
"}\n"
"\n"
"QDialog#Login2\n"
"{\n"
"	 background:url(L:/UNI/Projects/Project one/Grind/Project/QT/data/images/Car_Background_Login_00.png);\n"
"}\n"
"\n"
"QFrame#frame23\n"
"{\n"
"        background:#333;\n"
"        border-radius:20px;\n"
"}\n"
"\n"
"\n"
"QPushButton#pushButton\n"
"{\n"
"        background:red;\n"
"        border-radius:10px;\n"
"}\n"
"\n"
"QLable\n"
"{\n"
"        color:white;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"        color:black;\n"
"        background:white;\n"
"        border-radius:10px;\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"        background:transparent;\n"
"        border:none;\n"
"        color:#717072;\n"
"        border-bottom: 1px solid #717072;\n"
"}\n"
""));
        frame23 = new QFrame(Login2);
        frame23->setObjectName(QString::fromUtf8("frame23"));
        frame23->setGeometry(QRect(40, 40, 411, 521));
        frame23->setStyleSheet(QString::fromUtf8("	background:#333;\n"
"	border-radius:20px;"));
        frame23->setFrameShape(QFrame::StyledPanel);
        frame23->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame23);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 20, 141, 51));
        label->setStyleSheet(QString::fromUtf8(""));
        pushButton = new QPushButton(frame23);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(50, 430, 311, 41));
        pushButton->setStyleSheet(QString::fromUtf8("        background:red;\n"
"        border-radius:10px;"));
        lineEdit = new QLineEdit(frame23);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(80, 160, 261, 31));
        lineEdit->setStyleSheet(QString::fromUtf8(""));
        lineEdit_2 = new QLineEdit(frame23);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(80, 260, 261, 31));
        lineEdit_2->setStyleSheet(QString::fromUtf8(""));
        pushButton_2 = new QPushButton(frame23);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 370, 371, 21));
        pushButton_2->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"font-size:12px;\n"
""));
        label_2 = new QLabel(frame23);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 80, 231, 51));

        retranslateUi(Login2);

        QMetaObject::connectSlotsByName(Login2);
    } // setupUi

    void retranslateUi(QDialog *Login2)
    {
        Login2->setWindowTitle(QCoreApplication::translate("Login2", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Login2", "LOGIN", nullptr));
        pushButton->setText(QCoreApplication::translate("Login2", "Sign In", nullptr));
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("Login2", "Username", nullptr));
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("Login2", "Password", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Login2", "If you don't have and account, press here to sign up.", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Login2: public Ui_Login2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN2_H
