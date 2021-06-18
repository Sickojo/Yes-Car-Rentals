/********************************************************************************
** Form generated from reading UI file 'editcarwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITCARWINDOW_H
#define UI_EDITCARWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_EditCarWindow
{
public:
    QLabel *enterIDlbl;
    QLineEdit *IDLineEdit;
    QLabel *enterINewName;
    QLineEdit *CarNewNameLineEdit;
    QLabel *enterINewBrand;
    QLineEdit *CarNewBrandLineEdit;
    QLabel *enterNewPrice;
    QLineEdit *NewPricelbl;
    QLabel *enterCarDescription;
    QTextEdit *TextEditNewDescrpt;
    QPushButton *changeCarButt;
    QFrame *frameEditCar;
    QLabel *changeCarlbl;

    void setupUi(QDialog *EditCarWindow)
    {
        if (EditCarWindow->objectName().isEmpty())
            EditCarWindow->setObjectName(QString::fromUtf8("EditCarWindow"));
        EditCarWindow->resize(434, 616);
        EditCarWindow->setStyleSheet(QString::fromUtf8("QDialog#EditCarWindow\n"
"{\n"
"	color:333;\n"
"}\n"
"\n"
"QLabel#enterIDlbl, QLabel#enterINewName, QLabel#enterINewBrand, QLabel#enterNewPrice, QLabel#enterCarDescription\n"
"{\n"
"	color:white;\n"
"	font-size:12px;\n"
"	background-color:#222;\n"
"	border-radius:4px;\n"
"}\n"
"\n"
"QLabel#changeCarlbl\n"
"{\n"
"	font-size:20px;\n"
"	color:white;\n"
"	background-color:#222;\n"
"	border-radius:4px;\n"
"}\n"
"\n"
"QFrame#frameEditCar\n"
"{\n"
"	background-color:#333;\n"
"}\n"
"\n"
"QPushButton#changeCarButt\n"
"{\n"
"	color:white;\n"
"	background-color:#111;\n"
"}\n"
"\n"
"QPushButton#changeCarButt::hover\n"
"{\n"
"	color:white;\n"
"	background-color:#444;\n"
"}\n"
"\n"
"QTextEdit#TextEditNewDescrpt\n"
"{\n"
"	background-color:#222;\n"
"}\n"
"\n"
"QLineEdit#IDLineEdit, QLineEdit#CarNewNameLineEdit, QLineEdit#CarNewBrandLineEdit, QLineEdit#NewPricelbl\n"
"{\n"
"	background-color:#222;\n"
"}"));
        enterIDlbl = new QLabel(EditCarWindow);
        enterIDlbl->setObjectName(QString::fromUtf8("enterIDlbl"));
        enterIDlbl->setGeometry(QRect(50, 80, 261, 21));
        IDLineEdit = new QLineEdit(EditCarWindow);
        IDLineEdit->setObjectName(QString::fromUtf8("IDLineEdit"));
        IDLineEdit->setGeometry(QRect(50, 110, 81, 21));
        enterINewName = new QLabel(EditCarWindow);
        enterINewName->setObjectName(QString::fromUtf8("enterINewName"));
        enterINewName->setGeometry(QRect(50, 160, 211, 21));
        CarNewNameLineEdit = new QLineEdit(EditCarWindow);
        CarNewNameLineEdit->setObjectName(QString::fromUtf8("CarNewNameLineEdit"));
        CarNewNameLineEdit->setGeometry(QRect(50, 190, 301, 21));
        enterINewBrand = new QLabel(EditCarWindow);
        enterINewBrand->setObjectName(QString::fromUtf8("enterINewBrand"));
        enterINewBrand->setGeometry(QRect(50, 240, 211, 21));
        CarNewBrandLineEdit = new QLineEdit(EditCarWindow);
        CarNewBrandLineEdit->setObjectName(QString::fromUtf8("CarNewBrandLineEdit"));
        CarNewBrandLineEdit->setGeometry(QRect(50, 270, 301, 21));
        enterNewPrice = new QLabel(EditCarWindow);
        enterNewPrice->setObjectName(QString::fromUtf8("enterNewPrice"));
        enterNewPrice->setGeometry(QRect(50, 320, 211, 21));
        NewPricelbl = new QLineEdit(EditCarWindow);
        NewPricelbl->setObjectName(QString::fromUtf8("NewPricelbl"));
        NewPricelbl->setGeometry(QRect(50, 350, 131, 21));
        enterCarDescription = new QLabel(EditCarWindow);
        enterCarDescription->setObjectName(QString::fromUtf8("enterCarDescription"));
        enterCarDescription->setGeometry(QRect(50, 400, 211, 21));
        TextEditNewDescrpt = new QTextEdit(EditCarWindow);
        TextEditNewDescrpt->setObjectName(QString::fromUtf8("TextEditNewDescrpt"));
        TextEditNewDescrpt->setGeometry(QRect(50, 430, 331, 101));
        changeCarButt = new QPushButton(EditCarWindow);
        changeCarButt->setObjectName(QString::fromUtf8("changeCarButt"));
        changeCarButt->setGeometry(QRect(80, 570, 271, 21));
        frameEditCar = new QFrame(EditCarWindow);
        frameEditCar->setObjectName(QString::fromUtf8("frameEditCar"));
        frameEditCar->setGeometry(QRect(0, 0, 441, 621));
        frameEditCar->setFrameShape(QFrame::StyledPanel);
        frameEditCar->setFrameShadow(QFrame::Raised);
        changeCarlbl = new QLabel(frameEditCar);
        changeCarlbl->setObjectName(QString::fromUtf8("changeCarlbl"));
        changeCarlbl->setGeometry(QRect(150, 20, 131, 31));
        frameEditCar->raise();
        enterIDlbl->raise();
        IDLineEdit->raise();
        enterINewName->raise();
        CarNewNameLineEdit->raise();
        enterINewBrand->raise();
        CarNewBrandLineEdit->raise();
        enterNewPrice->raise();
        NewPricelbl->raise();
        enterCarDescription->raise();
        TextEditNewDescrpt->raise();
        changeCarButt->raise();

        retranslateUi(EditCarWindow);

        QMetaObject::connectSlotsByName(EditCarWindow);
    } // setupUi

    void retranslateUi(QDialog *EditCarWindow)
    {
        EditCarWindow->setWindowTitle(QCoreApplication::translate("EditCarWindow", "Dialog", nullptr));
        enterIDlbl->setText(QCoreApplication::translate("EditCarWindow", "  Enter the ID of the car you wish to change :", nullptr));
        enterINewName->setText(QCoreApplication::translate("EditCarWindow", "  Enter the Cars new Model Name :", nullptr));
        enterINewBrand->setText(QCoreApplication::translate("EditCarWindow", "  Enter the Cars new Brand Name :", nullptr));
        enterNewPrice->setText(QCoreApplication::translate("EditCarWindow", "  Enter the Car's new Price :", nullptr));
        enterCarDescription->setText(QCoreApplication::translate("EditCarWindow", "  Enter the Car's new description :", nullptr));
        changeCarButt->setText(QCoreApplication::translate("EditCarWindow", "Change Car", nullptr));
        changeCarlbl->setText(QCoreApplication::translate("EditCarWindow", "  Change Car", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditCarWindow: public Ui_EditCarWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITCARWINDOW_H
