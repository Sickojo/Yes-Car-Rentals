/********************************************************************************
** Form generated from reading UI file 'central_myrentals.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CENTRAL_MYRENTALS_H
#define UI_CENTRAL_MYRENTALS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Central_MyRentals
{
public:
    QFrame *frame;
    QLabel *label;
    QPushButton *RentCar;
    QPushButton *MyRentals;
    QLabel *label_3;
    QPushButton *HomeButton;
    QPushButton *MyAccount;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *signout;
    QFrame *frame_2;
    QLabel *label_2;
    QPushButton *pushButton_4;
    QListWidget *listWidgetRentals;
    QPlainTextEdit *plainTextEdit;
    QPushButton *DeleteRental;
    QPushButton *EditRental;

    void setupUi(QDialog *Central_MyRentals)
    {
        if (Central_MyRentals->objectName().isEmpty())
            Central_MyRentals->setObjectName(QString::fromUtf8("Central_MyRentals"));
        Central_MyRentals->resize(1071, 620);
        Central_MyRentals->setStyleSheet(QString::fromUtf8("QPlainTextEdit\n"
"{\n"
"        background-color:#222;\n"
"}"));
        frame = new QFrame(Central_MyRentals);
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
"QPushButton#HomeButton:hover, QPushButton#RentCar:hover,  QPushButton#MyRentals:hover, QPushButton#MyAccount:hover,QPushButton#signout:hover\n"
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
        label->setGeometry(QRect(0, 250, 19, 35));
        label->setStyleSheet(QString::fromUtf8("background:#5F0000;"));
        RentCar = new QPushButton(frame);
        RentCar->setObjectName(QString::fromUtf8("RentCar"));
        RentCar->setGeometry(QRect(0, 170, 251, 41));
        MyRentals = new QPushButton(frame);
        MyRentals->setObjectName(QString::fromUtf8("MyRentals"));
        MyRentals->setGeometry(QRect(0, 250, 251, 41));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 90, 35, 35));
        HomeButton = new QPushButton(frame);
        HomeButton->setObjectName(QString::fromUtf8("HomeButton"));
        HomeButton->setGeometry(QRect(0, 90, 251, 41));
        MyAccount = new QPushButton(frame);
        MyAccount->setObjectName(QString::fromUtf8("MyAccount"));
        MyAccount->setGeometry(QRect(0, 330, 251, 41));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 170, 35, 35));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 250, 35, 35));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 330, 35, 35));
        signout = new QPushButton(frame);
        signout->setObjectName(QString::fromUtf8("signout"));
        signout->setGeometry(QRect(10, 590, 80, 21));
        MyAccount->raise();
        RentCar->raise();
        MyRentals->raise();
        HomeButton->raise();
        label->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        signout->raise();
        frame_2 = new QFrame(Central_MyRentals);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(250, 0, 821, 621));
        frame_2->setStyleSheet(QString::fromUtf8("QListWidget#listWidgetRentals\n"
"{\n"
"        background-color:#222;\n"
"        font-size:13px;\n"
"}\n"
"\n"
"QPlainTextEdit\n"
"{\n"
"        background-color:#222;\n"
"        font-size:12px;\n"
"}\n"
"QFrame#frame_2{\n"
"background:#222;\n"
"}"));
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
        listWidgetRentals = new QListWidget(frame_2);
        listWidgetRentals->setObjectName(QString::fromUtf8("listWidgetRentals"));
        listWidgetRentals->setGeometry(QRect(30, 130, 761, 461));
        plainTextEdit = new QPlainTextEdit(frame_2);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(30, 100, 361, 21));
        DeleteRental = new QPushButton(frame_2);
        DeleteRental->setObjectName(QString::fromUtf8("DeleteRental"));
        DeleteRental->setGeometry(QRect(500, 100, 80, 21));
        DeleteRental->setStyleSheet(QString::fromUtf8("	font-size:11px;\n"
""));
        EditRental = new QPushButton(frame_2);
        EditRental->setObjectName(QString::fromUtf8("EditRental"));
        EditRental->setGeometry(QRect(630, 100, 80, 21));
        EditRental->setStyleSheet(QString::fromUtf8("	font-size:11px;\n"
""));

        retranslateUi(Central_MyRentals);

        QMetaObject::connectSlotsByName(Central_MyRentals);
    } // setupUi

    void retranslateUi(QDialog *Central_MyRentals)
    {
        Central_MyRentals->setWindowTitle(QCoreApplication::translate("Central_MyRentals", "Dialog", nullptr));
        label->setText(QString());
        RentCar->setText(QCoreApplication::translate("Central_MyRentals", "Rent a Car", nullptr));
        MyRentals->setText(QCoreApplication::translate("Central_MyRentals", "My Rentals", nullptr));
        label_3->setText(QString());
        HomeButton->setText(QCoreApplication::translate("Central_MyRentals", "Home", nullptr));
        MyAccount->setText(QCoreApplication::translate("Central_MyRentals", "My Account", nullptr));
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
        signout->setText(QCoreApplication::translate("Central_MyRentals", "sign out", nullptr));
        label_2->setText(QString());
        pushButton_4->setText(QString());
        plainTextEdit->setPlaceholderText(QCoreApplication::translate("Central_MyRentals", "Search", nullptr));
        DeleteRental->setText(QCoreApplication::translate("Central_MyRentals", "Edit Rental", nullptr));
        EditRental->setText(QCoreApplication::translate("Central_MyRentals", "Delete Rental", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Central_MyRentals: public Ui_Central_MyRentals {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CENTRAL_MYRENTALS_H
