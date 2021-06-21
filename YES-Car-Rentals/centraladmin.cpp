#include "centraladmin.h"
#include "ui_centraladmin.h"
#include "centraladmin_viewclients.h"
#include <QMouseEvent>
#include "central_addcars.h"
#include "centraladmin_viewcars.h"
#include<QDesktopWidget>
#include<login2.h>
#include<centraladmin_rentrequest.h>
CentralAdmin::CentralAdmin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CentralAdmin)
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
}

CentralAdmin::~CentralAdmin()
{
    delete ui;
}


void CentralAdmin::mousePressEvent(QMouseEvent *event) {
    m_nMouseClick_X_Coordinate = event->x();
    m_nMouseClick_Y_Coordinate = event->y();
}

void CentralAdmin::mouseMoveEvent(QMouseEvent *event) {
    move(event->globalX()-m_nMouseClick_X_Coordinate,event->globalY()-m_nMouseClick_Y_Coordinate);
}

void CentralAdmin::on_Close_clicked()
{
    close();
}

void CentralAdmin::on_ViewClients_clicked()
{
    CentralAdmin_ViewClients *nw = new CentralAdmin_ViewClients(this);
    close();
    nw->move(QApplication::desktop()->rect().center()-nw->rect().center());
    nw->show();

}

void CentralAdmin::on_AddCars_clicked()
{
    Central_AddCars *nw = new Central_AddCars(this);
    close();
    nw->move(QApplication::desktop()->rect().center()-nw->rect().center());
    nw->show();
}

void CentralAdmin::on_EditCars_clicked()
{
    CentralAdmin_ViewCars *nw = new CentralAdmin_ViewCars(this);
    close();
    nw->move(QApplication::desktop()->rect().center()-nw->rect().center());
    nw->show();
}

void CentralAdmin::on_signout_clicked()
{
    Login2 *nw = new Login2(this);
    close();
    nw->move(QApplication::desktop()->rect().center()-nw->rect().center());
    nw->show();
}

void CentralAdmin::on_Rental_clicked()
{
    CentralAdmin_RentRequest *nw = new CentralAdmin_RentRequest(this);
    close();
    nw->move(QApplication::desktop()->rect().center()-nw->rect().center());
    nw->show();
}
