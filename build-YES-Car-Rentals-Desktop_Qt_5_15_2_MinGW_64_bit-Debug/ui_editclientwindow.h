/********************************************************************************
** Form generated from reading UI file 'editclientwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITCLIENTWINDOW_H
#define UI_EDITCLIENTWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_EditClientWindow
{
public:
    QLabel *enterIDlbl;
    QLineEdit *IDLineEdit;
    QLabel *enterINewName;
    QLineEdit *CarNewNameLineEdit;
    QFrame *frameEditCar;
    QLabel *changeCarlbl;
    QRadioButton *rb1;
    QPushButton *changeCarButt;
    QLabel *enterINewName_2;
    QRadioButton *rb2;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *EditClientWindow)
    {
        if (EditClientWindow->objectName().isEmpty())
            EditClientWindow->setObjectName(QString::fromUtf8("EditClientWindow"));
        EditClientWindow->resize(421, 455);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/data/icons/clients.png"), QSize(), QIcon::Normal, QIcon::Off);
        EditClientWindow->setWindowIcon(icon);
        EditClientWindow->setStyleSheet(QString::fromUtf8("QDialog#EditCarWindow\n"
"{\n"
"        color:333;\n"
"}\n"
"\n"
"QLabel#enterIDlbl, QLabel#enterINewName, QLabel#enterINewBrand, QLabel#enterNewPrice, QLabel#enterCarDescription, QLabel#enterINewName_2\n"
"{\n"
"        color:white;\n"
"        font-size:12px;\n"
"        background-color:#222;\n"
"        border-radius:4px;\n"
"}\n"
"\n"
"QLabel#changeCarlbl\n"
"{\n"
"        font-size:20px;\n"
"        color:white;\n"
"        background-color:#222;\n"
"        border-radius:4px;\n"
"}\n"
"\n"
"QFrame#frameEditCar\n"
"{\n"
"        background-color:#333;\n"
"}\n"
"\n"
"QPushButton#changeCarButt\n"
"{\n"
"        color:white;\n"
"	font-size:11px;\n"
"        background-color:#111;\n"
"}\n"
"\n"
"QPushButton#changeCarButt::hover\n"
"{\n"
"        color:white;\n"
"font-size:11px;\n"
"        background-color:#444;\n"
"}\n"
"\n"
"QTextEdit#TextEditNewDescrpt\n"
"{\n"
"        background-color:#222;\n"
"}\n"
"\n"
"QLineEdit#IDLineEdit, QLineEdit#CarNewNameLineEdit, QLineEdit#CarNewBrandLineEdit, QLineEdit#NewPri"
                        "celbl\n"
"{\n"
"        background-color:#222;\n"
"}\n"
"\n"
"QRadioButton\n"
"{\n"
"	font-size:12px;\n"
"}"));
        enterIDlbl = new QLabel(EditClientWindow);
        enterIDlbl->setObjectName(QString::fromUtf8("enterIDlbl"));
        enterIDlbl->setGeometry(QRect(50, 80, 261, 21));
        IDLineEdit = new QLineEdit(EditClientWindow);
        IDLineEdit->setObjectName(QString::fromUtf8("IDLineEdit"));
        IDLineEdit->setGeometry(QRect(50, 110, 81, 21));
        enterINewName = new QLabel(EditClientWindow);
        enterINewName->setObjectName(QString::fromUtf8("enterINewName"));
        enterINewName->setGeometry(QRect(50, 160, 211, 21));
        CarNewNameLineEdit = new QLineEdit(EditClientWindow);
        CarNewNameLineEdit->setObjectName(QString::fromUtf8("CarNewNameLineEdit"));
        CarNewNameLineEdit->setGeometry(QRect(50, 190, 301, 21));
        frameEditCar = new QFrame(EditClientWindow);
        frameEditCar->setObjectName(QString::fromUtf8("frameEditCar"));
        frameEditCar->setGeometry(QRect(0, 0, 441, 621));
        frameEditCar->setFrameShape(QFrame::StyledPanel);
        frameEditCar->setFrameShadow(QFrame::Raised);
        changeCarlbl = new QLabel(frameEditCar);
        changeCarlbl->setObjectName(QString::fromUtf8("changeCarlbl"));
        changeCarlbl->setGeometry(QRect(130, 10, 151, 31));
        rb1 = new QRadioButton(frameEditCar);
        rb1->setObjectName(QString::fromUtf8("rb1"));
        rb1->setGeometry(QRect(50, 260, 191, 19));
        changeCarButt = new QPushButton(frameEditCar);
        changeCarButt->setObjectName(QString::fromUtf8("changeCarButt"));
        changeCarButt->setGeometry(QRect(70, 320, 271, 21));
        enterINewName_2 = new QLabel(frameEditCar);
        enterINewName_2->setObjectName(QString::fromUtf8("enterINewName_2"));
        enterINewName_2->setGeometry(QRect(50, 230, 291, 21));
        rb2 = new QRadioButton(frameEditCar);
        rb2->setObjectName(QString::fromUtf8("rb2"));
        rb2->setGeometry(QRect(240, 260, 191, 19));
        label = new QLabel(frameEditCar);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(270, 160, 91, 21));
        label->setStyleSheet(QString::fromUtf8("font-size:11px;\n"
"color :red;"));
        label_2 = new QLabel(frameEditCar);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(140, 40, 121, 41));
        label_2->setStyleSheet(QString::fromUtf8("	font-size:10px;\n"
""));
        label_2->setScaledContents(true);
        frameEditCar->raise();
        enterIDlbl->raise();
        IDLineEdit->raise();
        enterINewName->raise();
        CarNewNameLineEdit->raise();

        retranslateUi(EditClientWindow);

        QMetaObject::connectSlotsByName(EditClientWindow);
    } // setupUi

    void retranslateUi(QDialog *EditClientWindow)
    {
        EditClientWindow->setWindowTitle(QCoreApplication::translate("EditClientWindow", "Edit Client", nullptr));
        enterIDlbl->setText(QCoreApplication::translate("EditClientWindow", "  Enter the ID of the Client you wish to change :", nullptr));
        enterINewName->setText(QCoreApplication::translate("EditClientWindow", "  Enter the new name of the Client :", nullptr));
        changeCarlbl->setText(QCoreApplication::translate("EditClientWindow", "  Change Client", nullptr));
        rb1->setText(QCoreApplication::translate("EditClientWindow", "Make Admin", nullptr));
        changeCarButt->setText(QCoreApplication::translate("EditClientWindow", "Change Client", nullptr));
        enterINewName_2->setText(QCoreApplication::translate("EditClientWindow", "Choose wether or not to make this Client an Admin", nullptr));
        rb2->setText(QCoreApplication::translate("EditClientWindow", "Make Client", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("EditClientWindow", "Leave blank if unchanged", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditClientWindow: public Ui_EditClientWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITCLIENTWINDOW_H
