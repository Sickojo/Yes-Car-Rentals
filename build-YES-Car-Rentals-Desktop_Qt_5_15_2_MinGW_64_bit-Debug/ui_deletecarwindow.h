/********************************************************************************
** Form generated from reading UI file 'deletecarwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETECARWINDOW_H
#define UI_DELETECARWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DeleteCarWindow
{
public:
    QLabel *DltCarId;
    QLineEdit *DltCarLineEdit;
    QPushButton *DltCarButton;
    QFrame *framedldcar;
    QLabel *DltCarlbl;

    void setupUi(QDialog *DeleteCarWindow)
    {
        if (DeleteCarWindow->objectName().isEmpty())
            DeleteCarWindow->setObjectName(QString::fromUtf8("DeleteCarWindow"));
        DeleteCarWindow->resize(421, 242);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/data/icons/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        DeleteCarWindow->setWindowIcon(icon);
        DeleteCarWindow->setStyleSheet(QString::fromUtf8("QDialog#DeleteCarWindow\n"
"{\n"
"	color:#333;\n"
"}\n"
"\n"
"QLabel#DltCarId\n"
"{\n"
"	color:white;\n"
"	font-size:12px;\n"
"	background-color:#222;\n"
"	border-radius:4px;\n"
"}\n"
"\n"
"QLabel#DltCarlbl\n"
"{\n"
"	font-size:20px;\n"
"	color:white;\n"
"	background-color:#222;\n"
"	border-radius:4px;\n"
"}\n"
"\n"
"QFrame#framedldcar\n"
"{\n"
"	background-color:#333;\n"
"}\n"
"\n"
"QPushButton#DltCarButton\n"
"{\n"
"	color:white;\n"
"	font-size:11px;\n"
"	background-color:#111;\n"
"}\n"
"\n"
"QPushButton#DltCarButton::hover\n"
"{\n"
"	color:white;\n"
"font-size:11px;\n"
"	background-color:#444;\n"
"}\n"
"\n"
"\n"
"\n"
"QLineEdit#DltCarLineEdit\n"
"{\n"
"	background-color:#222;\n"
"}"));
        DltCarId = new QLabel(DeleteCarWindow);
        DltCarId->setObjectName(QString::fromUtf8("DltCarId"));
        DltCarId->setGeometry(QRect(50, 90, 251, 21));
        DltCarLineEdit = new QLineEdit(DeleteCarWindow);
        DltCarLineEdit->setObjectName(QString::fromUtf8("DltCarLineEdit"));
        DltCarLineEdit->setGeometry(QRect(50, 120, 113, 21));
        DltCarButton = new QPushButton(DeleteCarWindow);
        DltCarButton->setObjectName(QString::fromUtf8("DltCarButton"));
        DltCarButton->setGeometry(QRect(120, 180, 181, 21));
        framedldcar = new QFrame(DeleteCarWindow);
        framedldcar->setObjectName(QString::fromUtf8("framedldcar"));
        framedldcar->setGeometry(QRect(0, 0, 431, 251));
        framedldcar->setFrameShape(QFrame::StyledPanel);
        framedldcar->setFrameShadow(QFrame::Raised);
        DltCarlbl = new QLabel(framedldcar);
        DltCarlbl->setObjectName(QString::fromUtf8("DltCarlbl"));
        DltCarlbl->setGeometry(QRect(140, 20, 141, 41));
        framedldcar->raise();
        DltCarId->raise();
        DltCarLineEdit->raise();
        DltCarButton->raise();

        retranslateUi(DeleteCarWindow);

        QMetaObject::connectSlotsByName(DeleteCarWindow);
    } // setupUi

    void retranslateUi(QDialog *DeleteCarWindow)
    {
        DeleteCarWindow->setWindowTitle(QCoreApplication::translate("DeleteCarWindow", "Delete Car", nullptr));
        DltCarId->setText(QCoreApplication::translate("DeleteCarWindow", "Enter the ID of the car you wish to delete:", nullptr));
        DltCarButton->setText(QCoreApplication::translate("DeleteCarWindow", "Delete Car", nullptr));
        DltCarlbl->setText(QCoreApplication::translate("DeleteCarWindow", "   Delete a Car", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeleteCarWindow: public Ui_DeleteCarWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETECARWINDOW_H
