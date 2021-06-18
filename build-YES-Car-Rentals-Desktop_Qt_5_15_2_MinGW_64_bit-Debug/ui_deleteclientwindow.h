/********************************************************************************
** Form generated from reading UI file 'deleteclientwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETECLIENTWINDOW_H
#define UI_DELETECLIENTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DeleteClientWindow
{
public:
    QLabel *DltCarId;
    QLineEdit *DltCarLineEdit;
    QPushButton *DltCarButton;
    QFrame *framedldcar;
    QLabel *DltCarlbl;

    void setupUi(QDialog *DeleteClientWindow)
    {
        if (DeleteClientWindow->objectName().isEmpty())
            DeleteClientWindow->setObjectName(QString::fromUtf8("DeleteClientWindow"));
        DeleteClientWindow->resize(421, 242);
        DeleteClientWindow->setStyleSheet(QString::fromUtf8("QDialog#DeleteCarWindow\n"
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
        DltCarId = new QLabel(DeleteClientWindow);
        DltCarId->setObjectName(QString::fromUtf8("DltCarId"));
        DltCarId->setGeometry(QRect(50, 90, 261, 21));
        DltCarLineEdit = new QLineEdit(DeleteClientWindow);
        DltCarLineEdit->setObjectName(QString::fromUtf8("DltCarLineEdit"));
        DltCarLineEdit->setGeometry(QRect(50, 120, 113, 21));
        DltCarButton = new QPushButton(DeleteClientWindow);
        DltCarButton->setObjectName(QString::fromUtf8("DltCarButton"));
        DltCarButton->setGeometry(QRect(120, 180, 181, 21));
        framedldcar = new QFrame(DeleteClientWindow);
        framedldcar->setObjectName(QString::fromUtf8("framedldcar"));
        framedldcar->setGeometry(QRect(0, 0, 431, 251));
        framedldcar->setFrameShape(QFrame::StyledPanel);
        framedldcar->setFrameShadow(QFrame::Raised);
        DltCarlbl = new QLabel(framedldcar);
        DltCarlbl->setObjectName(QString::fromUtf8("DltCarlbl"));
        DltCarlbl->setGeometry(QRect(140, 20, 171, 41));
        framedldcar->raise();
        DltCarId->raise();
        DltCarLineEdit->raise();
        DltCarButton->raise();

        retranslateUi(DeleteClientWindow);

        QMetaObject::connectSlotsByName(DeleteClientWindow);
    } // setupUi

    void retranslateUi(QDialog *DeleteClientWindow)
    {
        DeleteClientWindow->setWindowTitle(QCoreApplication::translate("DeleteClientWindow", "Dialog", nullptr));
        DltCarId->setText(QCoreApplication::translate("DeleteClientWindow", "Enter the ID of the client you wish to delete:", nullptr));
        DltCarButton->setText(QCoreApplication::translate("DeleteClientWindow", "Delete Client", nullptr));
        DltCarlbl->setText(QCoreApplication::translate("DeleteClientWindow", "   Delete a Client", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeleteClientWindow: public Ui_DeleteClientWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETECLIENTWINDOW_H
