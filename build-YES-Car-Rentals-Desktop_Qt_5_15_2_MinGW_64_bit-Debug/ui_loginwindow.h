/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QFrame *frame;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;

    void setupUi(QDialog *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName(QString::fromUtf8("LoginWindow"));
        LoginWindow->resize(497, 594);
        LoginWindow->setStyleSheet(QString::fromUtf8("*{\n"
"	font-family:century gothic;\n"
"	font-size:24px;\n"
"	background:url(L:/UNI/Projects/Project one/Grind/Project\\QT/data\\images/Car_Background_Login_00.png);\n"
"}\n"
"\n"
"QFrame\n"
"{\n"
"	background:#333;\n"
"	border-radius:20px;\n"
"}\n"
"\n"
"#Form\n"
"{\n"
"background:url(L:/UNI/Projects/Project one/Grind/Project\\QT/data\\images/Car_Background_Login_00.png);\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"	background:red;\n"
"	border-radius:10px;\n"
"}\n"
"\n"
"QLable\n"
"{\n"
"	color:white;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"	color:white;\n"
"	border-radius:15px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	color:#333;\n"
"	border-radius:15px;\n"
"	background:#49ebff;\n"
"}\n"
"\n"
"QLneEdit\n"
"{\n"
"	background:transparent;\n"
"	border:none;\n"
"	color:#717072;\n"
"	border-bottom:px solid #717072;\n"
"}"));
        frame = new QFrame(LoginWindow);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(40, 30, 411, 531));
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(80, 430, 241, 51));
        pushButton->setStyleSheet(QString::fromUtf8(""));
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(60, 140, 291, 51));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	background:none;\n"
"}"));
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(60, 260, 291, 51));
        lineEdit_2->setStyleSheet(QString::fromUtf8(""));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 360, 211, 51));
        label_2->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color:#ffffff;\n"
"}"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(80, 60, 271, 71));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 10, 141, 51));

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QDialog *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("LoginWindow", "PushButton", nullptr));
        label_2->setText(QString());
        label_3->setText(QString());
        label->setText(QCoreApplication::translate("LoginWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
