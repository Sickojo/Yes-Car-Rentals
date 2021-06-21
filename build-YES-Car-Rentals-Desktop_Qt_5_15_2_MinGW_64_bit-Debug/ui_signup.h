/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_signup
{
public:
    QFrame *frame;
    QLabel *label;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_2;
    QLabel *label_2;

    void setupUi(QDialog *signup)
    {
        if (signup->objectName().isEmpty())
            signup->setObjectName(QString::fromUtf8("signup"));
        signup->resize(496, 601);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/data/images/Loko.png"), QSize(), QIcon::Normal, QIcon::Off);
        signup->setWindowIcon(icon);
        signup->setStyleSheet(QString::fromUtf8("*{\n"
"        font-family:century gothic;\n"
"        font-size:24px;\n"
"        color:white;\n"
"	background-image: url(:/res/data/images/Car_Background_Login_00.png);\n"
"}\n"
"\n"
"QFrame\n"
"{\n"
"        background:#333;\n"
"        border-radius:20px;\n"
"\n"
"}\n"
"\n"
"\n"
"QPushButton\n"
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
"\n"
"\n"
"\n"
""));
        frame = new QFrame(signup);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(40, 40, 411, 521));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 20, 141, 51));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(50, 430, 311, 41));
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(80, 160, 261, 31));
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(80, 260, 261, 31));
        lineEdit_2->setEchoMode(QLineEdit::Password);
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(60, 360, 301, 21));
        pushButton_2->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"font-size:12px;\n"
""));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 90, 251, 51));
        label_2->setAlignment(Qt::AlignCenter);

        retranslateUi(signup);

        QMetaObject::connectSlotsByName(signup);
    } // setupUi

    void retranslateUi(QDialog *signup)
    {
        signup->setWindowTitle(QCoreApplication::translate("signup", "Sign-up", nullptr));
        label->setText(QCoreApplication::translate("signup", "Sign Up", nullptr));
        pushButton->setText(QCoreApplication::translate("signup", "Sign Up", nullptr));
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("signup", "Username", nullptr));
        lineEdit_2->setInputMask(QString());
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("signup", "Password", nullptr));
        pushButton_2->setText(QCoreApplication::translate("signup", "If you already have nad account, click here to sign in.", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class signup: public Ui_signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
