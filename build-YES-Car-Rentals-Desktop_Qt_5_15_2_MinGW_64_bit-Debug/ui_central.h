/********************************************************************************
** Form generated from reading UI file 'central.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CENTRAL_H
#define UI_CENTRAL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Central
{
public:
    QFrame *frame;
    QLabel *label;
    QPushButton *RentCar;
    QPushButton *MyRentals;
    QLabel *label_3;
    QPushButton *HomeButton;
    QPushButton *MyAccount;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QPushButton *signout;
    QFrame *frame_2;
    QLabel *label_2;
    QPushButton *pushButton_4;
    QLabel *label_4;
    QLabel *WelcomeLbl;
    QLabel *label_5;
    QFrame *frame_3;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *loading;

    void setupUi(QDialog *Central)
    {
        if (Central->objectName().isEmpty())
            Central->setObjectName(QString::fromUtf8("Central"));
        Central->setWindowModality(Qt::NonModal);
        Central->resize(1071, 620);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/data/images/Loko.png"), QSize(), QIcon::Normal, QIcon::Off);
        Central->setWindowIcon(icon);
        Central->setStyleSheet(QString::fromUtf8(""));
        Central->setSizeGripEnabled(false);
        frame = new QFrame(Central);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 251, 621));
        frame->setStyleSheet(QString::fromUtf8("QFrame#frame\n"
"{\n"
"background:#111;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"	font-size:15px;\n"
"	background:transparent;\n"
"	color:#ffffff;\n"
"}\n"
"\n"
"QPushButton#HomeButton:hover, QPushButton#RentCar:hover,  QPushButton#MyRentals:hover, QPushButton#MyAccount:hover,QPushButton#signout:hover\n"
"{\n"
"	font-size:15px;\n"
"	background:#222;\n"
"	color:#ffffff;\n"
"	border-radius:50px;\n"
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
        label->setGeometry(QRect(0, 90, 15, 39));
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
        label_8 = new QLabel(frame);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 170, 35, 35));
        label_9 = new QLabel(frame);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 250, 35, 35));
        label_10 = new QLabel(frame);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(20, 330, 35, 35));
        signout = new QPushButton(frame);
        signout->setObjectName(QString::fromUtf8("signout"));
        signout->setGeometry(QRect(10, 590, 80, 21));
        RentCar->raise();
        MyRentals->raise();
        HomeButton->raise();
        label->raise();
        label_3->raise();
        MyAccount->raise();
        label_8->raise();
        label_9->raise();
        label_10->raise();
        signout->raise();
        frame_2 = new QFrame(Central);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(250, 0, 821, 621));
        frame_2->setStyleSheet(QString::fromUtf8("	background:#22222;\n"
""));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(-20, 0, 841, 7));
        label_2->setStyleSheet(QString::fromUtf8("background:#5F0000;"));
        pushButton_4 = new QPushButton(frame_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(720, 30, 31, 31));
        pushButton_4->setStyleSheet(QString::fromUtf8("\n"
"QPushButton:hover\n"
"{\n"
"	background:#5F0000;\n"
"	border-radius:15px;\n"
"}\n"
""));
        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(450, 140, 261, 241));
        WelcomeLbl = new QLabel(frame_2);
        WelcomeLbl->setObjectName(QString::fromUtf8("WelcomeLbl"));
        WelcomeLbl->setGeometry(QRect(290, 30, 411, 71));
        WelcomeLbl->setStyleSheet(QString::fromUtf8("font-size:29px;\n"
"color:white;"));
        label_5 = new QLabel(frame_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 270, 261, 61));
        label_5->setStyleSheet(QString::fromUtf8("font: 75 italic 23pt \"Verdana\";\n"
"color:Red;"));
        frame_3 = new QFrame(frame_2);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(40, 350, 251, 191));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_6 = new QLabel(frame_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 10, 91, 16));
        label_6->setStyleSheet(QString::fromUtf8("	font-size:15px;\n"
"	color:rgb(0, 0, 127);"));
        label_7 = new QLabel(frame_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(50, 40, 191, 141));
        label_11 = new QLabel(frame_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(560, 390, 71, 16));
        label_11->setStyleSheet(QString::fromUtf8("	font-size:15px;\n"
"color:black;\n"
""));
        label_12 = new QLabel(frame_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(490, 410, 251, 81));
        label_12->setStyleSheet(QString::fromUtf8("color:black;\n"
"font-size:11px;"));
        label_12->setTextFormat(Qt::AutoText);
        label_12->setScaledContents(false);
        label_12->setWordWrap(true);
        label_13 = new QLabel(frame_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(490, 500, 251, 91));
        label_13->setStyleSheet(QString::fromUtf8("color:black;\n"
"font-size:11px;"));
        label_13->setWordWrap(true);
        loading = new QLabel(frame_2);
        loading->setObjectName(QString::fromUtf8("loading"));
        loading->setGeometry(QRect(60, 30, 211, 141));
        loading->setScaledContents(true);

        retranslateUi(Central);

        QMetaObject::connectSlotsByName(Central);
    } // setupUi

    void retranslateUi(QDialog *Central)
    {
        Central->setWindowTitle(QCoreApplication::translate("Central", "YES-Car", nullptr));
#if QT_CONFIG(tooltip)
        Central->setToolTip(QCoreApplication::translate("Central", "YES-Car rentals", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QString());
        RentCar->setText(QCoreApplication::translate("Central", "Rent a Car", nullptr));
        MyRentals->setText(QCoreApplication::translate("Central", "My Rentals", nullptr));
        label_3->setText(QString());
        HomeButton->setText(QCoreApplication::translate("Central", "Home", nullptr));
        MyAccount->setText(QCoreApplication::translate("Central", "My Account", nullptr));
        label_8->setText(QString());
        label_9->setText(QString());
        label_10->setText(QString());
        signout->setText(QCoreApplication::translate("Central", "sign out", nullptr));
        label_2->setText(QString());
        pushButton_4->setText(QString());
        label_4->setText(QString());
        WelcomeLbl->setText(QString());
        label_5->setText(QCoreApplication::translate("Central", "Recently added", nullptr));
        label_6->setText(QCoreApplication::translate("Central", "name", nullptr));
        label_7->setText(QCoreApplication::translate("Central", "TextLabel", nullptr));
        label_11->setText(QCoreApplication::translate("Central", "About us:", nullptr));
        label_12->setText(QCoreApplication::translate("Central", "YES-Car Rentals has a new face . After more than 20 years in business, we decided to give a fresher look to our brand and our services. With our fully renewed fleet of vehicles, we are ready to meet all expectations and requirements.", nullptr));
        label_13->setText(QCoreApplication::translate("Central", "We offer a varied fleet of cars, ranging from the compact Toyota Yaris to the 8-seater VW Multivan. All our vehicles have air conditioning,  power steering, electric windows. All our vehicles are bought and maintained at official dealerships only. Automatic transmission cars are available in every booking class.\n"
"\n"
" \n"
"\n"
"We pride ourselves on personalized service, great cars and excellent rates.", nullptr));
        loading->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Central: public Ui_Central {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CENTRAL_H
