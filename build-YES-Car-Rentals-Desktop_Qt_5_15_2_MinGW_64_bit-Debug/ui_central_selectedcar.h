/********************************************************************************
** Form generated from reading UI file 'central_selectedcar.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CENTRAL_SELECTEDCAR_H
#define UI_CENTRAL_SELECTEDCAR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_Central_SelectedCar
{
public:
    QFrame *frame;
    QLabel *label;
    QPushButton *RentCar;
    QPushButton *MyRentals;
    QLabel *label_3;
    QPushButton *HomeButton;
    QPushButton *MyAccount;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *signout;
    QFrame *frame_2;
    QLabel *label_2;
    QPushButton *pushButton_4;
    QLabel *label_4;
    QLabel *CarIm;
    QLabel *CarName;
    QLabel *CarNmae2;
    QLabel *CarBrand;
    QLabel *CarBrand_2;
    QLabel *CarPrice;
    QLabel *CarPrice_2;
    QTextBrowser *textBrowserDes;
    QLabel *CarDesript;
    QPushButton *pushButton;

    void setupUi(QDialog *Central_SelectedCar)
    {
        if (Central_SelectedCar->objectName().isEmpty())
            Central_SelectedCar->setObjectName(QString::fromUtf8("Central_SelectedCar"));
        Central_SelectedCar->resize(1071, 620);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/data/images/Loko.png"), QSize(), QIcon::Normal, QIcon::Off);
        Central_SelectedCar->setWindowIcon(icon);
        Central_SelectedCar->setStyleSheet(QString::fromUtf8(""));
        frame = new QFrame(Central_SelectedCar);
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
        label->setGeometry(QRect(0, 170, 15, 39));
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
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 170, 35, 35));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 250, 35, 35));
        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 330, 35, 35));
        signout = new QPushButton(frame);
        signout->setObjectName(QString::fromUtf8("signout"));
        signout->setGeometry(QRect(10, 590, 80, 21));
        RentCar->raise();
        MyRentals->raise();
        HomeButton->raise();
        label_3->raise();
        MyAccount->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        label->raise();
        signout->raise();
        frame_2 = new QFrame(Central_SelectedCar);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(250, 0, 821, 621));
        frame_2->setStyleSheet(QString::fromUtf8("QLabel#CarName, QLabel#CarNmae2, QLabel#CarBrand,  QLabel#CarBrand_2, QLabel#CarPrice, QLabel#CarPrice_2, QLabel#CarDesript\n"
"{\n"
"        color:white;\n"
"        font-size:11px;\n"
"        background-color:#333;\n"
"        border-radius:11px;\n"
"}\n"
"\n"
"QTextBrowser#textBrowserDes\n"
"{\n"
"        background-color:#333;\n"
"        font-size:12px;\n"
"}\n"
""));
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
        CarIm = new QLabel(frame_2);
        CarIm->setObjectName(QString::fromUtf8("CarIm"));
        CarIm->setGeometry(QRect(40, 40, 231, 201));
        CarIm->setStyleSheet(QString::fromUtf8("background-color:#333;"));
        CarName = new QLabel(frame_2);
        CarName->setObjectName(QString::fromUtf8("CarName"));
        CarName->setGeometry(QRect(300, 70, 121, 21));
        CarNmae2 = new QLabel(frame_2);
        CarNmae2->setObjectName(QString::fromUtf8("CarNmae2"));
        CarNmae2->setGeometry(QRect(300, 110, 171, 21));
        CarBrand = new QLabel(frame_2);
        CarBrand->setObjectName(QString::fromUtf8("CarBrand"));
        CarBrand->setGeometry(QRect(300, 150, 121, 21));
        CarBrand_2 = new QLabel(frame_2);
        CarBrand_2->setObjectName(QString::fromUtf8("CarBrand_2"));
        CarBrand_2->setGeometry(QRect(300, 190, 181, 21));
        CarPrice = new QLabel(frame_2);
        CarPrice->setObjectName(QString::fromUtf8("CarPrice"));
        CarPrice->setGeometry(QRect(40, 270, 121, 21));
        CarPrice_2 = new QLabel(frame_2);
        CarPrice_2->setObjectName(QString::fromUtf8("CarPrice_2"));
        CarPrice_2->setGeometry(QRect(40, 310, 121, 21));
        textBrowserDes = new QTextBrowser(frame_2);
        textBrowserDes->setObjectName(QString::fromUtf8("textBrowserDes"));
        textBrowserDes->setGeometry(QRect(40, 390, 581, 192));
        CarDesript = new QLabel(frame_2);
        CarDesript->setObjectName(QString::fromUtf8("CarDesript"));
        CarDesript->setGeometry(QRect(40, 350, 121, 21));
        pushButton = new QPushButton(frame_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(650, 550, 141, 31));

        retranslateUi(Central_SelectedCar);

        QMetaObject::connectSlotsByName(Central_SelectedCar);
    } // setupUi

    void retranslateUi(QDialog *Central_SelectedCar)
    {
        Central_SelectedCar->setWindowTitle(QCoreApplication::translate("Central_SelectedCar", "View car", nullptr));
        label->setText(QString());
        RentCar->setText(QCoreApplication::translate("Central_SelectedCar", "Rent a Car", nullptr));
        MyRentals->setText(QCoreApplication::translate("Central_SelectedCar", "My Rentals", nullptr));
        label_3->setText(QString());
        HomeButton->setText(QCoreApplication::translate("Central_SelectedCar", "Home", nullptr));
        MyAccount->setText(QCoreApplication::translate("Central_SelectedCar", "My Account", nullptr));
        label_5->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
        signout->setText(QCoreApplication::translate("Central_SelectedCar", "sign out", nullptr));
        label_2->setText(QString());
        pushButton_4->setText(QString());
        label_4->setText(QString());
        CarIm->setText(QString());
        CarName->setText(QCoreApplication::translate("Central_SelectedCar", " Model :", nullptr));
        CarNmae2->setText(QCoreApplication::translate("Central_SelectedCar", "...", nullptr));
        CarBrand->setText(QCoreApplication::translate("Central_SelectedCar", " Brand :", nullptr));
        CarBrand_2->setText(QCoreApplication::translate("Central_SelectedCar", "...", nullptr));
        CarPrice->setText(QCoreApplication::translate("Central_SelectedCar", " Price (/hr):", nullptr));
        CarPrice_2->setText(QCoreApplication::translate("Central_SelectedCar", "...", nullptr));
        CarDesript->setText(QCoreApplication::translate("Central_SelectedCar", " Description :", nullptr));
        pushButton->setText(QCoreApplication::translate("Central_SelectedCar", "RENT CAR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Central_SelectedCar: public Ui_Central_SelectedCar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CENTRAL_SELECTEDCAR_H
