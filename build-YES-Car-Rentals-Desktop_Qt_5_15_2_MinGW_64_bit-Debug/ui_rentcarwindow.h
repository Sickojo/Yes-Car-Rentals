/********************************************************************************
** Form generated from reading UI file 'rentcarwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RENTCARWINDOW_H
#define UI_RENTCARWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_RentCarWindow
{
public:
    QLabel *PickStartDay;
    QPushButton *RentRequ;
    QFrame *frameRent;
    QLabel *RentCarlbl;
    QLabel *NumOfDays;
    QSpinBox *spinBox;
    QLabel *CalWarning;
    QRadioButton *cash;
    QRadioButton *visa;
    QLabel *card;
    QLabel *pin;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *payment;
    QLabel *label_3;
    QCalendarWidget *calendarWidget;

    void setupUi(QDialog *RentCarWindow)
    {
        if (RentCarWindow->objectName().isEmpty())
            RentCarWindow->setObjectName(QString::fromUtf8("RentCarWindow"));
        RentCarWindow->resize(433, 593);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/data/icons/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        RentCarWindow->setWindowIcon(icon);
        RentCarWindow->setStyleSheet(QString::fromUtf8("QFrame#frameRent\n"
"{\n"
"        background-color:#333;\n"
"}\n"
"\n"
"QLabel#RentCarlbl\n"
"{\n"
"        font-size:20px;\n"
"        background-color:#222;\n"
"        border-radius:12px;\n"
"}\n"
"\n"
"QLabel#NumOfDays, QLabel#PickStartDay\n"
"{\n"
"        font-size:11px;\n"
"        background-color:#222;\n"
"        border-radius:12px;\n"
"}\n"
"\n"
"QCalendarWidget#calendarWidget\n"
"{\n"
"	  color: rgb(180, 180, 180);\n"
"      background-color: #111;\n"
"      selection-background-color: rgb(233, 60, 44 );\n"
"      selection-color: rgb(255, 255, 255 );\n"
"          font-size:10px;\n"
"alternate-background-color: rgb(128, 128, 128);\n"
"}\n"
"QSpinBox#spinBox\n"
"{\n"
"        background-color:#222;\n"
"font-size:11px;\n"
"}\n"
"\n"
"QCalendarWidget#calendarWidget\n"
"{\n"
"         color: rgb(180, 180, 180);\n"
"      background-color: black;\n"
"      selection-background-color: rgb(233, 60, 44 );\n"
"      selection-color: rgb(255, 255, 255 );\n"
"}\n"
"QPushButton#RentRequ\n"
"{\n"
"        bac"
                        "kground-color:#222;\n"
"        font-size:11px;\n"
"}\n"
"\n"
"QPushButton#RentRequ:hover\n"
"{\n"
"        background-color:#444;\n"
"        font-size:11px\n"
"}\n"
"\n"
"QLabel#CalWarning,QLabel#label_3\n"
"{\n"
"        font-size:11px;\n"
"color:red;\n"
"}\n"
"QLabel#payment\n"
"{\n"
"        font-size:11px;\n"
"        background-color:#222;\n"
"        border-radius:12px;\n"
"}\n"
"QLineEdit,QRadioButton{\n"
"font-size:11px;\n"
"}"));
        PickStartDay = new QLabel(RentCarWindow);
        PickStartDay->setObjectName(QString::fromUtf8("PickStartDay"));
        PickStartDay->setGeometry(QRect(80, 100, 111, 21));
        RentRequ = new QPushButton(RentCarWindow);
        RentRequ->setObjectName(QString::fromUtf8("RentRequ"));
        RentRequ->setGeometry(QRect(160, 520, 101, 21));
        frameRent = new QFrame(RentCarWindow);
        frameRent->setObjectName(QString::fromUtf8("frameRent"));
        frameRent->setGeometry(QRect(0, 0, 431, 591));
        frameRent->setFrameShape(QFrame::StyledPanel);
        frameRent->setFrameShadow(QFrame::Raised);
        RentCarlbl = new QLabel(frameRent);
        RentCarlbl->setObjectName(QString::fromUtf8("RentCarlbl"));
        RentCarlbl->setGeometry(QRect(150, 30, 121, 41));
        NumOfDays = new QLabel(frameRent);
        NumOfDays->setObjectName(QString::fromUtf8("NumOfDays"));
        NumOfDays->setGeometry(QRect(80, 340, 251, 21));
        spinBox = new QSpinBox(frameRent);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(180, 380, 41, 21));
        CalWarning = new QLabel(frameRent);
        CalWarning->setObjectName(QString::fromUtf8("CalWarning"));
        CalWarning->setGeometry(QRect(130, 470, 181, 31));
        cash = new QRadioButton(frameRent);
        cash->setObjectName(QString::fromUtf8("cash"));
        cash->setGeometry(QRect(40, 420, 84, 19));
        visa = new QRadioButton(frameRent);
        visa->setObjectName(QString::fromUtf8("visa"));
        visa->setGeometry(QRect(40, 450, 84, 19));
        card = new QLabel(frameRent);
        card->setObjectName(QString::fromUtf8("card"));
        card->setGeometry(QRect(156, 420, 61, 20));
        card->setStyleSheet(QString::fromUtf8("QLabel#card\n"
"{\n"
"        font-size:11px;\n"
"        background-color:#222;\n"
"        border-radius:12px;\n"
"}"));
        card->setScaledContents(true);
        pin = new QLabel(frameRent);
        pin->setObjectName(QString::fromUtf8("pin"));
        pin->setGeometry(QRect(190, 450, 21, 16));
        QFont font;
        pin->setFont(font);
        pin->setStyleSheet(QString::fromUtf8("QLabel#pin\n"
"{\n"
"        font-size:11px;\n"
"        background-color:#222;\n"
"        border-radius:12px;\n"
"}"));
        pin->setScaledContents(true);
        lineEdit = new QLineEdit(frameRent);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(230, 420, 161, 21));
        lineEdit_2 = new QLineEdit(frameRent);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(230, 450, 161, 21));
        lineEdit_2->setMaxLength(32767);
        lineEdit_2->setEchoMode(QLineEdit::Password);
        payment = new QLabel(frameRent);
        payment->setObjectName(QString::fromUtf8("payment"));
        payment->setGeometry(QRect(10, 390, 91, 21));
        payment->setScaledContents(true);
        label_3 = new QLabel(frameRent);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(230, 480, 111, 21));
        label_3->setScaledContents(true);
        calendarWidget = new QCalendarWidget(frameRent);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setGeometry(QRect(60, 150, 280, 156));
        calendarWidget->setStyleSheet(QString::fromUtf8("	  color: rgb(180, 180, 180);\n"
"      background-color: #111;\n"
"      selection-background-color: rgb(233, 60, 44 );\n"
"      selection-color: rgb(255, 255, 255 );\n"
"          font-size:10px;\n"
"alternate-background-color: rgb(128, 128, 128);"));
        frameRent->raise();
        PickStartDay->raise();
        RentRequ->raise();

        retranslateUi(RentCarWindow);

        QMetaObject::connectSlotsByName(RentCarWindow);
    } // setupUi

    void retranslateUi(QDialog *RentCarWindow)
    {
        RentCarWindow->setWindowTitle(QCoreApplication::translate("RentCarWindow", "Rent Car", nullptr));
        PickStartDay->setText(QCoreApplication::translate("RentCarWindow", " Pick a starting day :", nullptr));
        RentRequ->setText(QCoreApplication::translate("RentCarWindow", "Request Rental", nullptr));
        RentCarlbl->setText(QCoreApplication::translate("RentCarWindow", "   Rent Car :", nullptr));
        NumOfDays->setText(QCoreApplication::translate("RentCarWindow", " Pick the number of Days you wish to rent the car:", nullptr));
        CalWarning->setText(QString());
        cash->setText(QCoreApplication::translate("RentCarWindow", "Cash", nullptr));
        visa->setText(QCoreApplication::translate("RentCarWindow", "Visa", nullptr));
        card->setText(QCoreApplication::translate("RentCarWindow", "Card number", nullptr));
        pin->setText(QCoreApplication::translate("RentCarWindow", "PIN", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("RentCarWindow", "1234 5678 1234 5678", nullptr));
        lineEdit_2->setInputMask(QString());
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("RentCarWindow", "123", nullptr));
        payment->setText(QCoreApplication::translate("RentCarWindow", "Payment method:", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class RentCarWindow: public Ui_RentCarWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RENTCARWINDOW_H
