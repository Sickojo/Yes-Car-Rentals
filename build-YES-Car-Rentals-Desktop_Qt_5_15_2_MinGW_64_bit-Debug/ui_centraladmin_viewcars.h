/********************************************************************************
** Form generated from reading UI file 'centraladmin_viewcars.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CENTRALADMIN_VIEWCARS_H
#define UI_CENTRALADMIN_VIEWCARS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_CentralAdmin_ViewCars
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
    QPushButton *signout;
    QFrame *frame_2;
    QLabel *label_2;
    QPushButton *Close;
    QLabel *label_4;
    QTableWidget *tableWidgetClients;
    QPushButton *LoadClientsButton;
    QPushButton *EditCarButton;
    QPushButton *DeleteCarButton;

    void setupUi(QDialog *CentralAdmin_ViewCars)
    {
        if (CentralAdmin_ViewCars->objectName().isEmpty())
            CentralAdmin_ViewCars->setObjectName(QString::fromUtf8("CentralAdmin_ViewCars"));
        CentralAdmin_ViewCars->resize(1071, 620);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/data/images/Loko.png"), QSize(), QIcon::Normal, QIcon::Off);
        CentralAdmin_ViewCars->setWindowIcon(icon);
        CentralAdmin_ViewCars->setStyleSheet(QString::fromUtf8(""));
        frame = new QFrame(CentralAdmin_ViewCars);
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
"QPushButton#HomeButton:hover, QPushButton#AddCars:hover,  QPushButton#EditCars:hover, QPushButton#MyAccount:hover, QPushButton#ViewClients:hover,QPushButton#Rental:hover,QPushButton#signout:hover\n"
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
        label->setGeometry(QRect(0, 250, 19, 35));
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
        label_7->setGeometry(QRect(20, 330, 35, 35));
        label_8 = new QLabel(frame);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 410, 35, 35));
        label_9 = new QLabel(frame);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 490, 35, 35));
        signout = new QPushButton(frame);
        signout->setObjectName(QString::fromUtf8("signout"));
        signout->setGeometry(QRect(10, 590, 80, 21));
        Rental->raise();
        AddCars->raise();
        EditCars->raise();
        HomeButton->raise();
        label_3->raise();
        MyAccount->raise();
        ViewClients->raise();
        label->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        label_8->raise();
        label_9->raise();
        signout->raise();
        frame_2 = new QFrame(CentralAdmin_ViewCars);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(250, 0, 821, 621));
        frame_2->setStyleSheet(QString::fromUtf8("QPushButton#LoadClientsButton\n"
"{\n"
"        color:black;\n"
"}\n"
"\n"
"QPushButton#LoadClientsButton:hover\n"
"{\n"
"        color:black;\n"
"}\n"
"\n"
""));
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
        tableWidgetClients = new QTableWidget(frame_2);
        if (tableWidgetClients->columnCount() < 4)
            tableWidgetClients->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetClients->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetClients->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QFont font;
        font.setPointSize(10);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font);
        tableWidgetClients->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetClients->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidgetClients->setObjectName(QString::fromUtf8("tableWidgetClients"));
        tableWidgetClients->setGeometry(QRect(0, 130, 821, 491));
        tableWidgetClients->setStyleSheet(QString::fromUtf8("\n"
"        color:black;\n"
"        background-color:#cccccc;\n"
"        font-size:12px;\n"
""));
        tableWidgetClients->setRowCount(0);
        LoadClientsButton = new QPushButton(frame_2);
        LoadClientsButton->setObjectName(QString::fromUtf8("LoadClientsButton"));
        LoadClientsButton->setGeometry(QRect(60, 90, 131, 31));
        EditCarButton = new QPushButton(frame_2);
        EditCarButton->setObjectName(QString::fromUtf8("EditCarButton"));
        EditCarButton->setGeometry(QRect(680, 100, 80, 21));
        EditCarButton->setStyleSheet(QString::fromUtf8("	font-size:11px;\n"
""));
        DeleteCarButton = new QPushButton(frame_2);
        DeleteCarButton->setObjectName(QString::fromUtf8("DeleteCarButton"));
        DeleteCarButton->setGeometry(QRect(680, 70, 80, 21));
        DeleteCarButton->setStyleSheet(QString::fromUtf8("	font-size:11px;\n"
""));

        retranslateUi(CentralAdmin_ViewCars);

        QMetaObject::connectSlotsByName(CentralAdmin_ViewCars);
    } // setupUi

    void retranslateUi(QDialog *CentralAdmin_ViewCars)
    {
        CentralAdmin_ViewCars->setWindowTitle(QCoreApplication::translate("CentralAdmin_ViewCars", "Edit Cars", nullptr));
        label->setText(QString());
        AddCars->setText(QCoreApplication::translate("CentralAdmin_ViewCars", "Add Cars", nullptr));
        EditCars->setText(QCoreApplication::translate("CentralAdmin_ViewCars", "Edit Cars", nullptr));
        label_3->setText(QString());
        HomeButton->setText(QCoreApplication::translate("CentralAdmin_ViewCars", "Home", nullptr));
        MyAccount->setText(QCoreApplication::translate("CentralAdmin_ViewCars", "My Account", nullptr));
        ViewClients->setText(QCoreApplication::translate("CentralAdmin_ViewCars", "View Clients", nullptr));
        Rental->setText(QCoreApplication::translate("CentralAdmin_ViewCars", "Rental Requests", nullptr));
        label_5->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
        label_8->setText(QString());
        label_9->setText(QString());
        signout->setText(QCoreApplication::translate("CentralAdmin_ViewCars", "sign out", nullptr));
        label_2->setText(QString());
        Close->setText(QString());
        label_4->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidgetClients->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("CentralAdmin_ViewCars", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetClients->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("CentralAdmin_ViewCars", "Model", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetClients->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("CentralAdmin_ViewCars", "Brand", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetClients->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("CentralAdmin_ViewCars", "Price", nullptr));
        LoadClientsButton->setText(QCoreApplication::translate("CentralAdmin_ViewCars", "Load Data", nullptr));
        EditCarButton->setText(QCoreApplication::translate("CentralAdmin_ViewCars", "Edit a car", nullptr));
        DeleteCarButton->setText(QCoreApplication::translate("CentralAdmin_ViewCars", "Delete a car", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CentralAdmin_ViewCars: public Ui_CentralAdmin_ViewCars {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CENTRALADMIN_VIEWCARS_H
