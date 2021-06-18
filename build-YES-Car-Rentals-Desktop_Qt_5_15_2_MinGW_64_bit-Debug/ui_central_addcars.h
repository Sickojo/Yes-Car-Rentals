/********************************************************************************
** Form generated from reading UI file 'central_addcars.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CENTRAL_ADDCARS_H
#define UI_CENTRAL_ADDCARS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_Central_AddCars
{
public:
    QFrame *frame;
    QLabel *label;
    QPushButton *AddCars;
    QPushButton *EditCars;
    QToolButton *toolButton;
    QToolButton *toolButton_2;
    QLabel *label_3;
    QPushButton *HomeButton;
    QPushButton *MyAccount;
    QPushButton *ViewClients;
    QFrame *frame_2;
    QLabel *label_2;
    QPushButton *Close;
    QLabel *AddCarlbl;
    QLabel *CarDisplay;
    QPushButton *BrowseImages;
    QLabel *addcarlbl;
    QLineEdit *CarModelLineEdite;
    QLabel *CarModel;
    QLabel *CarBrand;
    QLineEdit *CarBrandLineEdit;
    QLabel *CarPrice;
    QLineEdit *CarPriceLineEdit;
    QLabel *CarDescription;
    QPushButton *AddCarButton;
    QTextEdit *TextEditDescript;
    QLabel *WarningLbl;
    QLabel *ModelWarning;
    QLabel *BrandWarning;
    QLabel *PriceWarning;
    QLabel *DescriptWarning;

    void setupUi(QDialog *Central_AddCars)
    {
        if (Central_AddCars->objectName().isEmpty())
            Central_AddCars->setObjectName(QString::fromUtf8("Central_AddCars"));
        Central_AddCars->resize(1071, 620);
        Central_AddCars->setStyleSheet(QString::fromUtf8(""));
        frame = new QFrame(Central_AddCars);
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
"QPushButton#HomeButton:hover, QPushButton#AddCars:hover,  QPushButton#EditCars:hover, QPushButton#MyAccount:hover, QPushButton#ViewClients:hover\n"
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
        AddCars = new QPushButton(frame);
        AddCars->setObjectName(QString::fromUtf8("AddCars"));
        AddCars->setGeometry(QRect(0, 170, 251, 41));
        EditCars = new QPushButton(frame);
        EditCars->setObjectName(QString::fromUtf8("EditCars"));
        EditCars->setGeometry(QRect(0, 250, 251, 41));
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
        MyAccount->setGeometry(QRect(0, 410, 251, 41));
        ViewClients = new QPushButton(frame);
        ViewClients->setObjectName(QString::fromUtf8("ViewClients"));
        ViewClients->setGeometry(QRect(0, 330, 251, 41));
        AddCars->raise();
        EditCars->raise();
        toolButton->raise();
        toolButton_2->raise();
        HomeButton->raise();
        label->raise();
        label_3->raise();
        MyAccount->raise();
        ViewClients->raise();
        frame_2 = new QFrame(Central_AddCars);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(250, 0, 821, 621));
        frame_2->setStyleSheet(QString::fromUtf8("QLabel#addcarlbl\n"
"{\n"
"	font-size:24px;\n"
"	color:white;\n"
"	background-color:#5F0000;\n"
"	border-radius:15px;\n"
"}\n"
"\n"
"QLabel#WarningLbl\n"
"{\n"
"	color:red;\n"
"	font-size:10px;\n"
"}\n"
"\n"
"QLabel#ModelWarning, QLabel#BrandWarning, QLabel#PriceWarning, QLabel#DescriptWarning\n"
"{\n"
"	color:red;\n"
"	font-size:10px;\n"
"}\n"
"\n"
"QLabel#CarModel, QLabel#CarBrand,  QLabel#CarPrice, QLabel#CarDescription\n"
"{\n"
"	color:black;\n"
"	font-size:15px;\n"
"}\n"
"\n"
"QLineEdit#CarModelLineEdite, QLineEdit#CarBrandLineEdit, QLineEdit#CarPriceLineEdit, QLineEdit#CarDescriptionLineEdit\n"
"{\n"
"	background-color:#333;\n"
"	color:white;\n"
"	font-size:14px;\n"
"	border-radius:15px;\n"
"}\n"
"\n"
"QTextEdit#TextEditDescript\n"
"{\n"
"	background-color:#333;\n"
"	color:white;\n"
"	font-size:14px;\n"
"}\n"
"\n"
"QPushButton#AddCarButton\n"
"{\n"
"	font-size:14px;\n"
"	background-color:#5F0000;\n"
"}\n"
"QPushButton#BrowseImages\n"
"{\n"
"	font-size:10px;\n"
"	background-color:#5F0000;\n"
"}"));
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
        AddCarlbl = new QLabel(frame_2);
        AddCarlbl->setObjectName(QString::fromUtf8("AddCarlbl"));
        AddCarlbl->setGeometry(QRect(-20, -47, 261, 241));
        CarDisplay = new QLabel(frame_2);
        CarDisplay->setObjectName(QString::fromUtf8("CarDisplay"));
        CarDisplay->setGeometry(QRect(550, 60, 201, 161));
        CarDisplay->setStyleSheet(QString::fromUtf8("background:#333;"));
        BrowseImages = new QPushButton(frame_2);
        BrowseImages->setObjectName(QString::fromUtf8("BrowseImages"));
        BrowseImages->setGeometry(QRect(610, 230, 80, 21));
        addcarlbl = new QLabel(frame_2);
        addcarlbl->setObjectName(QString::fromUtf8("addcarlbl"));
        addcarlbl->setGeometry(QRect(100, 80, 201, 51));
        CarModelLineEdite = new QLineEdit(frame_2);
        CarModelLineEdite->setObjectName(QString::fromUtf8("CarModelLineEdite"));
        CarModelLineEdite->setGeometry(QRect(140, 220, 361, 21));
        CarModel = new QLabel(frame_2);
        CarModel->setObjectName(QString::fromUtf8("CarModel"));
        CarModel->setGeometry(QRect(30, 220, 111, 21));
        CarBrand = new QLabel(frame_2);
        CarBrand->setObjectName(QString::fromUtf8("CarBrand"));
        CarBrand->setGeometry(QRect(30, 280, 111, 21));
        CarBrandLineEdit = new QLineEdit(frame_2);
        CarBrandLineEdit->setObjectName(QString::fromUtf8("CarBrandLineEdit"));
        CarBrandLineEdit->setGeometry(QRect(140, 280, 361, 21));
        CarPrice = new QLabel(frame_2);
        CarPrice->setObjectName(QString::fromUtf8("CarPrice"));
        CarPrice->setGeometry(QRect(30, 340, 111, 21));
        CarPriceLineEdit = new QLineEdit(frame_2);
        CarPriceLineEdit->setObjectName(QString::fromUtf8("CarPriceLineEdit"));
        CarPriceLineEdit->setGeometry(QRect(140, 340, 361, 21));
        CarDescription = new QLabel(frame_2);
        CarDescription->setObjectName(QString::fromUtf8("CarDescription"));
        CarDescription->setGeometry(QRect(30, 400, 111, 21));
        AddCarButton = new QPushButton(frame_2);
        AddCarButton->setObjectName(QString::fromUtf8("AddCarButton"));
        AddCarButton->setGeometry(QRect(650, 490, 141, 101));
        TextEditDescript = new QTextEdit(frame_2);
        TextEditDescript->setObjectName(QString::fromUtf8("TextEditDescript"));
        TextEditDescript->setGeometry(QRect(140, 400, 441, 201));
        WarningLbl = new QLabel(frame_2);
        WarningLbl->setObjectName(QString::fromUtf8("WarningLbl"));
        WarningLbl->setGeometry(QRect(630, 430, 181, 61));
        WarningLbl->setStyleSheet(QString::fromUtf8(""));
        ModelWarning = new QLabel(frame_2);
        ModelWarning->setObjectName(QString::fromUtf8("ModelWarning"));
        ModelWarning->setGeometry(QRect(140, 190, 361, 16));
        BrandWarning = new QLabel(frame_2);
        BrandWarning->setObjectName(QString::fromUtf8("BrandWarning"));
        BrandWarning->setGeometry(QRect(140, 250, 361, 16));
        PriceWarning = new QLabel(frame_2);
        PriceWarning->setObjectName(QString::fromUtf8("PriceWarning"));
        PriceWarning->setGeometry(QRect(140, 310, 361, 16));
        DescriptWarning = new QLabel(frame_2);
        DescriptWarning->setObjectName(QString::fromUtf8("DescriptWarning"));
        DescriptWarning->setGeometry(QRect(140, 370, 361, 16));

        retranslateUi(Central_AddCars);

        QMetaObject::connectSlotsByName(Central_AddCars);
    } // setupUi

    void retranslateUi(QDialog *Central_AddCars)
    {
        Central_AddCars->setWindowTitle(QCoreApplication::translate("Central_AddCars", "Dialog", nullptr));
        label->setText(QString());
        AddCars->setText(QCoreApplication::translate("Central_AddCars", "    Add Cars", nullptr));
        EditCars->setText(QCoreApplication::translate("Central_AddCars", "    Edit Cars", nullptr));
        toolButton->setText(QCoreApplication::translate("Central_AddCars", "...", nullptr));
        toolButton_2->setText(QString());
        label_3->setText(QString());
        HomeButton->setText(QCoreApplication::translate("Central_AddCars", "Home", nullptr));
        MyAccount->setText(QCoreApplication::translate("Central_AddCars", "       My Account", nullptr));
        ViewClients->setText(QCoreApplication::translate("Central_AddCars", "       View Clients", nullptr));
        label_2->setText(QString());
        Close->setText(QString());
        AddCarlbl->setText(QString());
        CarDisplay->setText(QString());
        BrowseImages->setText(QCoreApplication::translate("Central_AddCars", "Browse imgaes", nullptr));
        addcarlbl->setText(QCoreApplication::translate("Central_AddCars", "      Add a Car", nullptr));
        CarModel->setText(QCoreApplication::translate("Central_AddCars", "Car Model :", nullptr));
        CarBrand->setText(QCoreApplication::translate("Central_AddCars", "Car Brand :", nullptr));
        CarPrice->setText(QCoreApplication::translate("Central_AddCars", "Car price :", nullptr));
        CarDescription->setText(QCoreApplication::translate("Central_AddCars", "Desciption :", nullptr));
        AddCarButton->setText(QCoreApplication::translate("Central_AddCars", "Add Car", nullptr));
        WarningLbl->setText(QString());
        ModelWarning->setText(QString());
        BrandWarning->setText(QString());
        PriceWarning->setText(QString());
        DescriptWarning->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Central_AddCars: public Ui_Central_AddCars {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CENTRAL_ADDCARS_H
