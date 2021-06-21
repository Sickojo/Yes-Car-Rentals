#include "centraladmin_viewcars.h"
#include "ui_centraladmin_viewcars.h"
#include "centraladmin.h"
#include "CarsData.h"
#include "editcarwindow.h"
#include "deletecarwindow.h"
#include "QMouseEvent"
#include<central_addcars.h>
#include<centraladmin_viewclients.h>
#include<QDesktopWidget>
#include<login2.h>
#include<centraladmin_rentrequest.h>

CentralAdmin_ViewCars::CentralAdmin_ViewCars(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CentralAdmin_ViewCars)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
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
    ui->tableWidgetClients->setColumnWidth(0, 200);
    ui->tableWidgetClients->setColumnWidth(1, 200);
    ui->tableWidgetClients->setColumnWidth(2, 200);
    ui->tableWidgetClients->setColumnWidth(3, 210);
}

CentralAdmin_ViewCars::~CentralAdmin_ViewCars()
{
    delete ui;
}
void CentralAdmin_ViewCars::mousePressEvent(QMouseEvent *event) {
    m_nMouseClick_X_Coordinate = event->x();
    m_nMouseClick_Y_Coordinate = event->y();
}

void CentralAdmin_ViewCars::mouseMoveEvent(QMouseEvent *event) {
    move(event->globalX()-m_nMouseClick_X_Coordinate,event->globalY()-m_nMouseClick_Y_Coordinate);
}

void CentralAdmin_ViewCars::on_AddCars_clicked()
{
    Central_AddCars *nw =new Central_AddCars(this);
    close();
    nw->move(QApplication::desktop()->rect().center()-nw->rect().center());
    nw->show();
}

void CentralAdmin_ViewCars::on_Close_clicked()
{
    close();
}

void CentralAdmin_ViewCars::on_LoadClientsButton_clicked()
{
    ui->tableWidgetClients->setRowCount(0);
    ifstream f(Cars, ios::binary);

    Car tmp;

    while(f.read((char *) &tmp, sizeof(tmp)))
    {
        int rowPosition = ui->tableWidgetClients->rowCount();
        ui->tableWidgetClients->insertRow(rowPosition);
        ui->tableWidgetClients->setItem(rowPosition, 0, new QTableWidgetItem(QString::number(tmp.id)));
        ui->tableWidgetClients->setItem(rowPosition, 1, new QTableWidgetItem(tmp.name));
        ui->tableWidgetClients->setItem(rowPosition, 2, new QTableWidgetItem(tmp.brand));
        ui->tableWidgetClients->setItem(rowPosition, 3, new QTableWidgetItem(QString::number(tmp.price)));
    }
    f.close();
}

void CentralAdmin_ViewCars::on_EditCarButton_clicked()
{
    EditCarWindow *nw = new EditCarWindow(this);
    nw->move(QApplication::desktop()->rect().center()-nw->rect().center());
    nw->show();
}

void CentralAdmin_ViewCars::on_DeleteCarButton_clicked()
{
    DeleteCarWindow *nw = new DeleteCarWindow(this);
    nw->move(QApplication::desktop()->rect().center()-nw->rect().center());
    nw->show();
}

void CentralAdmin_ViewCars::on_HomeButton_clicked()
{
    CentralAdmin *nw = new CentralAdmin(this);
    close();
    nw->move(QApplication::desktop()->rect().center()-nw->rect().center());
    nw->show();
}

void CentralAdmin_ViewCars::on_ViewClients_clicked()
{
    CentralAdmin_ViewClients *nw = new CentralAdmin_ViewClients(this);
    close();
    nw->move(QApplication::desktop()->rect().center()-nw->rect().center());
    nw->show();
}

void CentralAdmin_ViewCars::on_signout_clicked()
{
    Login2 *nw = new Login2(this);
    close();
    nw->move(QApplication::desktop()->rect().center()-nw->rect().center());
    nw->show();
}

void CentralAdmin_ViewCars::on_Rental_clicked()
{
    CentralAdmin_RentRequest *nw = new CentralAdmin_RentRequest(this);
    close();
    nw->move(QApplication::desktop()->rect().center()-nw->rect().center());
    nw->show();
}
