/********************************************************************************
** Form generated from reading UI file 'deleterentalwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETERENTALWINDOW_H
#define UI_DELETERENTALWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DeleteRentalWindow
{
public:
    QPushButton *DltCarButton;
    QFrame *framedldcar;
    QLabel *DltCarlbl;
    QLabel *DltCarId;

    void setupUi(QDialog *DeleteRentalWindow)
    {
        if (DeleteRentalWindow->objectName().isEmpty())
            DeleteRentalWindow->setObjectName(QString::fromUtf8("DeleteRentalWindow"));
        DeleteRentalWindow->resize(421, 250);
        DeleteRentalWindow->setStyleSheet(QString::fromUtf8("QDialog#DeleteCarWindow\n"
"{\n"
"        color:#333;\n"
"}\n"
"\n"
"QLabel#DltCarId\n"
"{\n"
"        color:white;\n"
"        font-size:12px;\n"
"        background-color:#222;\n"
"        border-radius:4px;\n"
"}\n"
"\n"
"QLabel#DltCarlbl\n"
"{\n"
"        font-size:20px;\n"
"        color:white;\n"
"        background-color:#222;\n"
"        border-radius:4px;\n"
"}\n"
"\n"
"QFrame#framedldcar\n"
"{\n"
"        background-color:#333;\n"
"}\n"
"\n"
"QPushButton#DltCarButton\n"
"{\n"
"        color:white;\n"
"        font-size:11px;\n"
"        background-color:#111;\n"
"}\n"
"\n"
"QPushButton#DltCarButton::hover\n"
"{\n"
"        color:white;\n"
"font-size:11px;\n"
"        background-color:#444;\n"
"}\n"
"\n"
"\n"
"\n"
"QLineEdit#DltCarLineEdit\n"
"{\n"
"        background-color:#222;\n"
"}"));
        DltCarButton = new QPushButton(DeleteRentalWindow);
        DltCarButton->setObjectName(QString::fromUtf8("DltCarButton"));
        DltCarButton->setGeometry(QRect(120, 180, 181, 21));
        framedldcar = new QFrame(DeleteRentalWindow);
        framedldcar->setObjectName(QString::fromUtf8("framedldcar"));
        framedldcar->setGeometry(QRect(0, 0, 431, 251));
        framedldcar->setFrameShape(QFrame::StyledPanel);
        framedldcar->setFrameShadow(QFrame::Raised);
        DltCarlbl = new QLabel(framedldcar);
        DltCarlbl->setObjectName(QString::fromUtf8("DltCarlbl"));
        DltCarlbl->setGeometry(QRect(140, 20, 171, 41));
        DltCarId = new QLabel(framedldcar);
        DltCarId->setObjectName(QString::fromUtf8("DltCarId"));
        DltCarId->setGeometry(QRect(70, 110, 281, 21));
        framedldcar->raise();
        DltCarButton->raise();

        retranslateUi(DeleteRentalWindow);

        QMetaObject::connectSlotsByName(DeleteRentalWindow);
    } // setupUi

    void retranslateUi(QDialog *DeleteRentalWindow)
    {
        DeleteRentalWindow->setWindowTitle(QCoreApplication::translate("DeleteRentalWindow", "Dialog", nullptr));
        DltCarButton->setText(QCoreApplication::translate("DeleteRentalWindow", "Delete Rental Submission", nullptr));
        DltCarlbl->setText(QCoreApplication::translate("DeleteRentalWindow", "   Cancle a Rental", nullptr));
        DltCarId->setText(QCoreApplication::translate("DeleteRentalWindow", "   Are you sure you wish to Cancle this Rent :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeleteRentalWindow: public Ui_DeleteRentalWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETERENTALWINDOW_H
