#include "centraladmin_viewclients.h"
#include "ui_centraladmin_viewclients.h"
#include "ClientData.h"
#include <QMouseEvent>
#include "centraladmin.h"
#include "deleteclientwindow.h"
#include "editclientwindow.h"
#include<central_addcars.h>
#include<centraladmin_viewcars.h>
#include<QDesktopWidget>
#include<login2.h>
#include<centraladmin_rentrequest.h>


CentralAdmin_ViewClients::CentralAdmin_ViewClients(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CentralAdmin_ViewClients)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    QPixmap pix2(":/res/data/images/Loko.png");

    setWindowIcon(pix2);
    int w = ui->label_3->width();
    int h = ui->label_3->height();
    int w4 = ui->Close->width();
    int h4 = ui->Close->height();

    QPixmap pixb1(":/res/data/icons/home.png");
    ui->label_3->setPixmap(pixb1.scaled(w, h, Qt::KeepAspectRatio));
    QPixmap pixb2(":/res/data/icons/whiteRent.png");
    ui->label_5->setPixmap(pixb2.scaled(w, h, Qt::KeepAspectRatio));
    QPixmap pixb3(":/res/data/icons/cars.jpg");
    ui->label_6->setPixmap(pixb3.scaled(w, h, Qt::KeepAspectRatio));
    QPixmap pixb4(":/res/data/icons/clients.png");
    ui->label_7->setPixmap(pixb4.scaled(w, h, Qt::KeepAspectRatio));
    QPixmap pixb5(":/res/data/icons/whiteRentals.png");
    ui->label_8->setPixmap(pixb5.scaled(w, h, Qt::KeepAspectRatio));
    QPixmap pixb6(":/res/data/icons/Acc.png");
    ui->label_9->setPixmap(pixb6.scaled(w, h, Qt::KeepAspectRatio));



    QPixmap pix4(":/res/data/icons/cancel.png");
    ui->Close->setAutoFillBackground(true);
    ui->Close->setFlat(true);
    ui->Close->setIcon(pix4);
    ui->Close->setIconSize(QSize(w4,h4));
    ui->tableWidgetClients->setColumnWidth(0, 280);
    ui->tableWidgetClients->setColumnWidth(2, 280);
    ui->tableWidgetClients->setColumnWidth(1, 280);

    // QTimer *timer = new QTimer(this);
}

CentralAdmin_ViewClients::~CentralAdmin_ViewClients()
{
    delete ui;
}

void CentralAdmin_ViewClients::mousePressEvent(QMouseEvent *event) {
    m_nMouseClick_X_Coordinate = event->x();
    m_nMouseClick_Y_Coordinate = event->y();
}

void CentralAdmin_ViewClients::mouseMoveEvent(QMouseEvent *event) {
    move(event->globalX()-m_nMouseClick_X_Coordinate,event->globalY()-m_nMouseClick_Y_Coordinate);
}



void CentralAdmin_ViewClients::on_pushButton_clicked()
{

}

void CentralAdmin_ViewClients::on_Close_clicked()
{
    close();
}

void CentralAdmin_ViewClients::on_LoadClientsButton_clicked()
{
    ui->tableWidgetClients->setRowCount(0);
    ifstream f(Clients, ios::binary);
    Client tmp;
    while(f.read((char *) &tmp, sizeof(tmp)))
    {
        QString adminStatus;
        if(tmp.Is_Admin)
            adminStatus = "Yes";
        else
            adminStatus = "No";
        int rowPosition = ui->tableWidgetClients->rowCount();
        ui->tableWidgetClients->insertRow(rowPosition);
        ui->tableWidgetClients->setItem(rowPosition, 0, new QTableWidgetItem(QString::number(tmp.id)));
        ui->tableWidgetClients->setItem(rowPosition, 1, new QTableWidgetItem(tmp.name));
        ui->tableWidgetClients->setItem(rowPosition, 2, new QTableWidgetItem(adminStatus));
    }
    f.close();
}

void CentralAdmin_ViewClients::on_HomeButton_clicked()
{
    CentralAdmin *nw = new CentralAdmin(this);
    close();
    nw->move(QApplication::desktop()->rect().center()-nw->rect().center());
    nw->show();
}

void CentralAdmin_ViewClients::on_DeleteClientButton_clicked()
{
    DeleteClientWindow *nw = new DeleteClientWindow(this);
    nw->move(QApplication::desktop()->rect().center()-nw->rect().center());
    nw->show();
}

void CentralAdmin_ViewClients::on_EditClientButton_clicked()
{
    EditClientWindow *nw = new EditClientWindow(this);
    nw->move(QApplication::desktop()->rect().center()-nw->rect().center());
    nw->show();
}

void CentralAdmin_ViewClients::on_AddCars_clicked()
{
    Central_AddCars *nw = new Central_AddCars(this);
    close();
    nw->move(QApplication::desktop()->rect().center()-nw->rect().center());
    nw->show();
}

void CentralAdmin_ViewClients::on_EditCars_clicked()
{
    CentralAdmin_ViewCars *nw = new CentralAdmin_ViewCars(this);
    close();
    nw->move(QApplication::desktop()->rect().center()-nw->rect().center());
    nw->show();
}

void CentralAdmin_ViewClients::on_signout_clicked()
{
    Login2 *nw = new Login2(this);
    close();
    nw->move(QApplication::desktop()->rect().center()-nw->rect().center());
    nw->show();
}

void CentralAdmin_ViewClients::on_Rental_clicked()
{
    CentralAdmin_RentRequest *nw = new CentralAdmin_RentRequest(this);
    close();
    nw->move(QApplication::desktop()->rect().center()-nw->rect().center());
    nw->show();
}
