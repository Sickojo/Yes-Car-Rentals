/********************************************************************************
** Form generated from reading UI file 'centraladmin.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CENTRALADMIN_H
#define UI_CENTRALADMIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CentralAdmin
{
public:
    QFrame *frame;
    QLabel *label;
    QPushButton *AddCars;
    QPushButton *EditCars;
    QLabel *label_3;
    QPushButton *HomeButton;
    QPushButton *MyAccount;
    QPushButton *ViewClients;
    QPushButton *Rental;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *signout;
    QFrame *frame_2;
    QLabel *label_2;
    QPushButton *Close;
    QLabel *label_4;
    QLabel *WelcomeLbl;

    void setupUi(QDialog *CentralAdmin)
    {
        if (CentralAdmin->objectName().isEmpty())
            CentralAdmin->setObjectName(QString::fromUtf8("CentralAdmin"));
        CentralAdmin->resize(1071, 620);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/data/images/Loko.png"), QSize(), QIcon::Normal, QIcon::Off);
        CentralAdmin->setWindowIcon(icon);
        CentralAdmin->setStyleSheet(QString::fromUtf8(""));
        frame = new QFrame(CentralAdmin);
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
"QPushButton#HomeButton:hover, QPushButton#AddCars:hover,  QPushButton#EditCars:hover, QPushButton#MyAccount:hover, QPushButton#ViewClients:hover,QPushButton#Rental:hover,QPushButton#signout:hover\n"
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
        label->setGeometry(QRect(0, 90, 19, 35));
        label->setStyleSheet(QString::fromUtf8("background:#5F0000;"));
        AddCars = new QPushButton(frame);
        AddCars->setObjectName(QString::fromUtf8("AddCars"));
        AddCars->setGeometry(QRect(0, 170, 251, 41));
        EditCars = new QPushButton(frame);
        EditCars->setObjectName(QString::fromUtf8("EditCars"));
        EditCars->setGeometry(QRect(0, 250, 251, 41));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 90, 35, 35));
        HomeButton = new QPushButton(frame);
        HomeButton->setObjectName(QString::fromUtf8("HomeButton"));
        HomeButton->setGeometry(QRect(0, 90, 251, 41));
        MyAccount = new QPushButton(frame);
        MyAccount->setObjectName(QString::fromUtf8("MyAccount"));
        MyAccount->setGeometry(QRect(0, 490, 251, 41));
        ViewClients = new QPushButton(frame);
        ViewClients->setObjectName(QString::fromUtf8("ViewClients"));
        ViewClients->setGeometry(QRect(0, 330, 251, 41));
        Rental = new QPushButton(frame);
        Rental->setObjectName(QString::fromUtf8("Rental"));
        Rental->setGeometry(QRect(0, 410, 251, 41));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 170, 35, 35));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 250, 35, 35));
        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 330, 35, 35));
        label_8 = new QLabel(frame);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 410, 35, 35));
        label_9 = new QLabel(frame);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 490, 35, 35));
        signout = new QPushButton(frame);
        signout->setObjectName(QString::fromUtf8("signout"));
        signout->setGeometry(QRect(10, 590, 80, 21));
        signout->setStyleSheet(QString::fromUtf8(""));
        AddCars->raise();
        EditCars->raise();
        HomeButton->raise();
        label_3->raise();
        MyAccount->raise();
        ViewClients->raise();
        Rental->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        label_8->raise();
        label_9->raise();
        label->raise();
        signout->raise();
        frame_2 = new QFrame(CentralAdmin);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(250, 0, 821, 621));
        frame_2->setStyleSheet(QString::fromUtf8(""));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(-20, 0, 841, 7));
        label_2->setStyleSheet(QString::fromUtf8("background:#5F0000;"));
        Close = new QPushButton(frame_2);
        Close->setObjectName(QString::fromUtf8("Close"));
        Close->setGeometry(QRect(770, 20, 31, 31));
        Close->setStyleSheet(QString::fromUtf8("\n"
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

        retranslateUi(CentralAdmin);

        QMetaObject::connectSlotsByName(CentralAdmin);
    } // setupUi

    void retranslateUi(QDialog *CentralAdmin)
    {
        CentralAdmin->setWindowTitle(QCoreApplication::translate("CentralAdmin", "Admin Home", nullptr));
        label->setText(QString());
        AddCars->setText(QCoreApplication::translate("CentralAdmin", "Add Cars", nullptr));
        EditCars->setText(QCoreApplication::translate("CentralAdmin", "Edit Cars", nullptr));
        label_3->setText(QString());
        HomeButton->setText(QCoreApplication::translate("CentralAdmin", "Home", nullptr));
        MyAccount->setText(QCoreApplication::translate("CentralAdmin", "My Account", nullptr));
        ViewClients->setText(QCoreApplication::translate("CentralAdmin", "View Clients", nullptr));
        Rental->setText(QCoreApplication::translate("CentralAdmin", "Rentals Requests", nullptr));
        label_5->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
        label_8->setText(QString());
        label_9->setText(QString());
        signout->setText(QCoreApplication::translate("CentralAdmin", "sign out", nullptr));
        label_2->setText(QString());
        Close->setText(QString());
        label_4->setText(QString());
        WelcomeLbl->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CentralAdmin: public Ui_CentralAdmin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CENTRALADMIN_H
