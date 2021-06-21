/********************************************************************************
** Form generated from reading UI file 'centraladmin_rentrequest.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CENTRALADMIN_RENTREQUEST_H
#define UI_CENTRALADMIN_RENTREQUEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_CentralAdmin_RentRequest
{
public:
    QFrame *frame;
    QLabel *label;
    QPushButton *AddCars;
    QPushButton *EditCars;
    QLabel *label_3;
    QPushButton *HomeButton;
    QPushButton *MyAccount;
    QPushButton *ViewClients;
    QPushButton *Rental;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QPushButton *signout;
    QFrame *frame_2;
    QLabel *label_2;
    QPushButton *Close;
    QLabel *label_4;
    QTableWidget *tableWidget;
    QPushButton *accept;
    QPushButton *reject;

    void setupUi(QDialog *CentralAdmin_RentRequest)
    {
        if (CentralAdmin_RentRequest->objectName().isEmpty())
            CentralAdmin_RentRequest->setObjectName(QString::fromUtf8("CentralAdmin_RentRequest"));
        CentralAdmin_RentRequest->resize(1071, 620);
        CentralAdmin_RentRequest->setStyleSheet(QString::fromUtf8(""));
        frame = new QFrame(CentralAdmin_RentRequest);
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
"QPushButton#HomeButton:hover, QPushButton#AddCars:hover,  QPushButton#EditCars:hover, QPushButton#MyAccount:hover, QPushButton#ViewClients:hover,QPushButton#signout:hover\n"
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
        label->setGeometry(QRect(0, 410, 19, 35));
        label->setStyleSheet(QString::fromUtf8("background:#5F0000;"));
        AddCars = new QPushButton(frame);
        AddCars->setObjectName(QString::fromUtf8("AddCars"));
        AddCars->setGeometry(QRect(0, 170, 251, 41));
        EditCars = new QPushButton(frame);
        EditCars->setObjectName(QString::fromUtf8("EditCars"));
        EditCars->setGeometry(QRect(0, 250, 251, 41));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 90, 35, 35));
        HomeButton = new QPushButton(frame);
        HomeButton->setObjectName(QString::fromUtf8("HomeButton"));
        HomeButton->setGeometry(QRect(0, 90, 251, 41));
        MyAccount = new QPushButton(frame);
        MyAccount->setObjectName(QString::fromUtf8("MyAccount"));
        MyAccount->setGeometry(QRect(0, 490, 251, 41));
        ViewClients = new QPushButton(frame);
        ViewClients->setObjectName(QString::fromUtf8("ViewClients"));
        ViewClients->setGeometry(QRect(0, 330, 251, 41));
        Rental = new QPushButton(frame);
        Rental->setObjectName(QString::fromUtf8("Rental"));
        Rental->setGeometry(QRect(0, 410, 251, 41));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 170, 35, 35));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 250, 35, 35));
        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(80, 270, 35, 35));
        label_8 = new QLabel(frame);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 330, 35, 35));
        label_9 = new QLabel(frame);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 410, 35, 35));
        label_10 = new QLabel(frame);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(20, 490, 35, 35));
        signout = new QPushButton(frame);
        signout->setObjectName(QString::fromUtf8("signout"));
        signout->setGeometry(QRect(10, 590, 80, 21));
        MyAccount->raise();
        Rental->raise();
        ViewClients->raise();
        AddCars->raise();
        EditCars->raise();
        HomeButton->raise();
        label->raise();
        label_3->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        label_8->raise();
        label_9->raise();
        label_10->raise();
        signout->raise();
        frame_2 = new QFrame(CentralAdmin_RentRequest);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(250, 0, 821, 621));
        frame_2->setStyleSheet(QString::fromUtf8("QTableWidget\n"
"{\n"
"        background-color:#222;\n"
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
        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(-20, -47, 261, 241));
        tableWidget = new QTableWidget(frame_2);
        if (tableWidget->columnCount() < 6)
            tableWidget->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(0, 150, 821, 471));
        tableWidget->setStyleSheet(QString::fromUtf8("QHeaderView:section \n"
"{\n"
" Font-size:14px; \n"
"Background: #222;\n"
"}\n"
"QTableWidget \n"
"{\n"
" Font-size: 12px; \n"
" Color:#666666; \n"
"}\n"
""));
        accept = new QPushButton(frame_2);
        accept->setObjectName(QString::fromUtf8("accept"));
        accept->setGeometry(QRect(90, 90, 80, 21));
        reject = new QPushButton(frame_2);
        reject->setObjectName(QString::fromUtf8("reject"));
        reject->setGeometry(QRect(190, 90, 80, 21));

        retranslateUi(CentralAdmin_RentRequest);

        QMetaObject::connectSlotsByName(CentralAdmin_RentRequest);
    } // setupUi

    void retranslateUi(QDialog *CentralAdmin_RentRequest)
    {
        CentralAdmin_RentRequest->setWindowTitle(QCoreApplication::translate("CentralAdmin_RentRequest", "Dialog", nullptr));
        label->setText(QString());
        AddCars->setText(QCoreApplication::translate("CentralAdmin_RentRequest", "Add Cars", nullptr));
        EditCars->setText(QCoreApplication::translate("CentralAdmin_RentRequest", "View Cars", nullptr));
        label_3->setText(QString());
        HomeButton->setText(QCoreApplication::translate("CentralAdmin_RentRequest", "Home", nullptr));
        MyAccount->setText(QCoreApplication::translate("CentralAdmin_RentRequest", "My Account", nullptr));
        ViewClients->setText(QCoreApplication::translate("CentralAdmin_RentRequest", "View Clients", nullptr));
        Rental->setText(QCoreApplication::translate("CentralAdmin_RentRequest", "Rental Requests", nullptr));
        label_5->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
        label_8->setText(QString());
        label_9->setText(QString());
        label_10->setText(QString());
        signout->setText(QCoreApplication::translate("CentralAdmin_RentRequest", "sign out", nullptr));
        label_2->setText(QString());
        Close->setText(QString());
        label_4->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("CentralAdmin_RentRequest", "Client ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("CentralAdmin_RentRequest", "Client Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("CentralAdmin_RentRequest", "Car ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("CentralAdmin_RentRequest", "Car Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("CentralAdmin_RentRequest", "Date request", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("CentralAdmin_RentRequest", "Request Status", nullptr));
        accept->setText(QCoreApplication::translate("CentralAdmin_RentRequest", "Accept", nullptr));
        reject->setText(QCoreApplication::translate("CentralAdmin_RentRequest", "Reject", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CentralAdmin_RentRequest: public Ui_CentralAdmin_RentRequest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CENTRALADMIN_RENTREQUEST_H
