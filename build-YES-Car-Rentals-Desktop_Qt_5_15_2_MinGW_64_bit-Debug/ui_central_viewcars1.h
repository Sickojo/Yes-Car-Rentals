/********************************************************************************
** Form generated from reading UI file 'central_viewcars1.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CENTRAL_VIEWCARS1_H
#define UI_CENTRAL_VIEWCARS1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_central_viewcars1
{
public:
    QFrame *frame;
    QLabel *label;
    QPushButton *RentCar;
    QPushButton *MyRentals;
    QToolButton *toolButton;
    QToolButton *toolButton_2;
    QLabel *label_3;
    QPushButton *HomeButton;
    QPushButton *MyAccount;
    QFrame *frame_2;
    QLabel *label_2;
    QPushButton *pushButton_4;
    QLabel *label_4;
    QLabel *WelcomeLbl;
    QListWidget *listWidget;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QDialog *central_viewcars1)
    {
        if (central_viewcars1->objectName().isEmpty())
            central_viewcars1->setObjectName(QString::fromUtf8("central_viewcars1"));
        central_viewcars1->resize(1071, 620);
        central_viewcars1->setStyleSheet(QString::fromUtf8(""));
        frame = new QFrame(central_viewcars1);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 251, 621));
        frame->setStyleSheet(QString::fromUtf8("QFrame#frame\n"
"{\n"
"background:#111;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"        font-size:15px;\n"
"        background:transparent;\n"
"        color:#ffffff;\n"
"}\n"
"\n"
"QPushButton#HomeButton:hover, QPushButton#RentCar:hover,  QPushButton#MyRentals:hover, QPushButton#MyAccount:hover\n"
"{\n"
"        font-size:15px;\n"
"        background:#222;\n"
"        color:#ffffff;\n"
"        border-radius:50px;\n"
"}\n"
"\n"
"QToolButton\n"
"{\n"
"\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 90, 20, 37));
        label->setStyleSheet(QString::fromUtf8("background:#5F0000;"));
        RentCar = new QPushButton(frame);
        RentCar->setObjectName(QString::fromUtf8("RentCar"));
        RentCar->setGeometry(QRect(0, 170, 251, 41));
        MyRentals = new QPushButton(frame);
        MyRentals->setObjectName(QString::fromUtf8("MyRentals"));
        MyRentals->setGeometry(QRect(0, 250, 251, 41));
        MyRentals->setIconSize(QSize(150, 150));
        toolButton = new QToolButton(frame);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(10, 580, 26, 20));
        toolButton_2 = new QToolButton(frame);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        toolButton_2->setGeometry(QRect(10, 20, 31, 21));
        toolButton_2->setStyleSheet(QString::fromUtf8("border-image:url(L:/UNI/Projects/Project one/Grind/Project/QT/data/icons/home.png)0 0 0 0 stretch stretch;"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 90, 41, 31));
        HomeButton = new QPushButton(frame);
        HomeButton->setObjectName(QString::fromUtf8("HomeButton"));
        HomeButton->setGeometry(QRect(0, 90, 251, 41));
        MyAccount = new QPushButton(frame);
        MyAccount->setObjectName(QString::fromUtf8("MyAccount"));
        MyAccount->setGeometry(QRect(0, 330, 251, 41));
        RentCar->raise();
        MyRentals->raise();
        toolButton->raise();
        toolButton_2->raise();
        HomeButton->raise();
        label->raise();
        label_3->raise();
        MyAccount->raise();
        frame_2 = new QFrame(central_viewcars1);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(250, 0, 821, 621));
        frame_2->setStyleSheet(QString::fromUtf8(""));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(-20, 0, 841, 7));
        label_2->setStyleSheet(QString::fromUtf8("background:#5F0000;"));
        pushButton_4 = new QPushButton(frame_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(770, 20, 31, 31));
        pushButton_4->setStyleSheet(QString::fromUtf8("\n"
"QPushButton\n"
"{\n"
"        border-image:url(L:/UNI/Projects/Project one/Grind/Project/QT/data/icons/cancel.png);\n"
"\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"        background:#5F0000;\n"
"        border-radius:15px;\n"
"}\n"
""));
        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(-20, -47, 261, 241));
        WelcomeLbl = new QLabel(frame_2);
        WelcomeLbl->setObjectName(QString::fromUtf8("WelcomeLbl"));
        WelcomeLbl->setGeometry(QRect(310, 30, 411, 71));
        WelcomeLbl->setStyleSheet(QString::fromUtf8("font-size:29px;\n"
"color:black;"));
        listWidget = new QListWidget(frame_2);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(30, 60, 741, 451));
        plainTextEdit = new QPlainTextEdit(frame_2);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(30, 20, 731, 31));

        retranslateUi(central_viewcars1);

        QMetaObject::connectSlotsByName(central_viewcars1);
    } // setupUi

    void retranslateUi(QDialog *central_viewcars1)
    {
        central_viewcars1->setWindowTitle(QCoreApplication::translate("central_viewcars1", "Dialog", nullptr));
        label->setText(QString());
        RentCar->setText(QCoreApplication::translate("central_viewcars1", "Rent a Car", nullptr));
        MyRentals->setText(QCoreApplication::translate("central_viewcars1", "My Rentals", nullptr));
        toolButton->setText(QCoreApplication::translate("central_viewcars1", "...", nullptr));
        toolButton_2->setText(QString());
        label_3->setText(QString());
        HomeButton->setText(QCoreApplication::translate("central_viewcars1", "Home", nullptr));
        MyAccount->setText(QCoreApplication::translate("central_viewcars1", "My Account", nullptr));
        label_2->setText(QString());
        pushButton_4->setText(QString());
        label_4->setText(QString());
        WelcomeLbl->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class central_viewcars1: public Ui_central_viewcars1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CENTRAL_VIEWCARS1_H
