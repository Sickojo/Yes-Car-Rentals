/********************************************************************************
** Form generated from reading UI file 'editrentalwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITRENTALWINDOW_H
#define UI_EDITRENTALWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_EditRentalWindow
{
public:
    QCalendarWidget *calendarWidget;
    QLabel *PickStartDay;
    QPushButton *RentRequ;
    QFrame *frameRent;
    QLabel *RentCarlbl;
    QLabel *NumOfDays;
    QSpinBox *spinBox;
    QLabel *CalWarning;

    void setupUi(QDialog *EditRentalWindow)
    {
        if (EditRentalWindow->objectName().isEmpty())
            EditRentalWindow->setObjectName(QString::fromUtf8("EditRentalWindow"));
        EditRentalWindow->resize(431, 591);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/data/icons/edit.webp"), QSize(), QIcon::Normal, QIcon::Off);
        EditRentalWindow->setWindowIcon(icon);
        EditRentalWindow->setStyleSheet(QString::fromUtf8("QFrame#frameRent\n"
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
"         color: rgb(180, 180, 180);\n"
"      background-color: black;\n"
"      selection-background-color: rgb(233, 60, 44 );\n"
"      selection-color: rgb(255, 255, 255 );\n"
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
"        background-color:#222;\n"
"        font-size:11px;\n"
"}\n"
"\n"
"QPushButton#"
                        "RentRequ:hover\n"
"{\n"
"        background-color:#444;\n"
"        font-size:11px\n"
"}\n"
"\n"
"QLabel#CalWarning\n"
"{\n"
"        font-size:11px;\n"
"                color:red;\n"
"}"));
        calendarWidget = new QCalendarWidget(EditRentalWindow);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setGeometry(QRect(80, 150, 280, 156));
        calendarWidget->setStyleSheet(QString::fromUtf8("	  color: rgb(180, 180, 180);\n"
"      background-color: #111;\n"
"      selection-background-color: rgb(233, 60, 44 );\n"
"      selection-color: rgb(255, 255, 255 );\n"
"          font-size:10px;\n"
"alternate-background-color: rgb(128, 128, 128);"));
        PickStartDay = new QLabel(EditRentalWindow);
        PickStartDay->setObjectName(QString::fromUtf8("PickStartDay"));
        PickStartDay->setGeometry(QRect(80, 100, 111, 21));
        RentRequ = new QPushButton(EditRentalWindow);
        RentRequ->setObjectName(QString::fromUtf8("RentRequ"));
        RentRequ->setGeometry(QRect(160, 520, 101, 21));
        frameRent = new QFrame(EditRentalWindow);
        frameRent->setObjectName(QString::fromUtf8("frameRent"));
        frameRent->setGeometry(QRect(0, 0, 431, 591));
        frameRent->setFrameShape(QFrame::StyledPanel);
        frameRent->setFrameShadow(QFrame::Raised);
        RentCarlbl = new QLabel(frameRent);
        RentCarlbl->setObjectName(QString::fromUtf8("RentCarlbl"));
        RentCarlbl->setGeometry(QRect(140, 30, 131, 41));
        RentCarlbl->setScaledContents(false);
        RentCarlbl->setAlignment(Qt::AlignCenter);
        NumOfDays = new QLabel(frameRent);
        NumOfDays->setObjectName(QString::fromUtf8("NumOfDays"));
        NumOfDays->setGeometry(QRect(80, 340, 251, 21));
        spinBox = new QSpinBox(frameRent);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(80, 380, 41, 21));
        CalWarning = new QLabel(frameRent);
        CalWarning->setObjectName(QString::fromUtf8("CalWarning"));
        CalWarning->setGeometry(QRect(130, 470, 181, 31));
        frameRent->raise();
        calendarWidget->raise();
        PickStartDay->raise();
        RentRequ->raise();

        retranslateUi(EditRentalWindow);

        QMetaObject::connectSlotsByName(EditRentalWindow);
    } // setupUi

    void retranslateUi(QDialog *EditRentalWindow)
    {
        EditRentalWindow->setWindowTitle(QCoreApplication::translate("EditRentalWindow", "Edit Rental", nullptr));
        PickStartDay->setText(QCoreApplication::translate("EditRentalWindow", " Pick a starting day :", nullptr));
        RentRequ->setText(QCoreApplication::translate("EditRentalWindow", "Change Rental", nullptr));
        RentCarlbl->setText(QCoreApplication::translate("EditRentalWindow", "   Edit Rental :", nullptr));
        NumOfDays->setText(QCoreApplication::translate("EditRentalWindow", " Pick the number of Days you wish to rent the car:", nullptr));
        CalWarning->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class EditRentalWindow: public Ui_EditRentalWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITRENTALWINDOW_H
