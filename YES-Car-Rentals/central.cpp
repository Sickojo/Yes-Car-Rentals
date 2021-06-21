#include "central.h"
#include "ui_central.h"
#include <QMouseEvent>
#include "ClientData.h"
#include "central_viewcars1.h"
#include<central_myrentals.h>
#include<CarsData.h>
#include<login2.h>
#include<QDesktopWidget>
#include<QMovie>
Central::Central(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Central)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    QPixmap pix2(":/res/data/images/Loko.png");

    setWindowIcon(pix2);
    int w = ui->label_3->width();
    int h = ui->label_3->height();
    int w2 = ui->label_4->width();
    int h2 = ui->label_4->height();
    int w4 = ui->pushButton_4->width();
    int h4 = ui->pushButton_4->height();

    QPixmap pixb1(":/res/data/icons/home.png");
    ui->label_3->setPixmap(pixb1.scaled(w, h, Qt::KeepAspectRatio));
    QPixmap pixb2(":/res/data/icons/whiteRent.png");
    ui->label_8->setPixmap(pixb2.scaled(w, h, Qt::KeepAspectRatio));
    QPixmap pixb3(":/res/data/icons/whiteRentals.png");
    ui->label_9->setPixmap(pixb3.scaled(w, h, Qt::KeepAspectRatio));
    QPixmap pixb4(":/res/data/icons/Acc.png");
    ui->label_10->setPixmap(pixb4.scaled(w, h, Qt::KeepAspectRatio));

    ui->label_4->setPixmap(pix2.scaled(w2, h2, Qt::KeepAspectRatio));
    string welcomeText = string("Welcome ") + currentClient.name;
    ui->WelcomeLbl->setText(QString::fromStdString(welcomeText));


    QPixmap pix4(":/res/data/icons/cancel.png");
    ui->pushButton_4->setAutoFillBackground(true);
    ui->pushButton_4->setFlat(true);
    ui->pushButton_4->setIcon(pix4);
    ui->pushButton_4->setIconSize(QSize(w4,h4));
    fstream f(Cars, ios::in | ios::out | ios::binary);
    Car tmp;
    while(f.read((char *)&tmp, sizeof (tmp))){
        ui->label_6->setText(tmp.name);
        QPixmap pixbcar(tmp.ImPath);
        ui->label_7->setPixmap(pixbcar);


}
    f.close();

    // Load animated GIF
    QMovie* movie = new QMovie(":/res/data/images/Comp_1.gif");

    // Make sure the GIF was loaded correctly
    if (!movie->isValid())
    {
        // Something went wrong :(
    }

    // Play GIF
    movie->setScaledSize(QSize().scaled(ui->loading->width(),ui->loading->height(),Qt::KeepAspectRatio));
    ui->loading->setMovie(movie);
    movie->start();
}

Central::~Central()
{
    delete ui;
}

void Central::mousePressEvent(QMouseEvent *event) {
    m_nMouseClick_X_Coordinate = event->x();
    m_nMouseClick_Y_Coordinate = event->y();
}

void Central::mouseMoveEvent(QMouseEvent *event) {
    move(event->globalX()-m_nMouseClick_X_Coordinate,event->globalY()-m_nMouseClick_Y_Coordinate);
}

void Central::on_pushButton_4_clicked()
{
    close();
}




void Central::on_RentCar_clicked()
{
    central_viewcars1 *nw = new central_viewcars1(this);
    close();
    nw->move(QApplication::desktop()->rect().center()-nw->rect().center());
    nw->show();
}

void Central::on_MyRentals_clicked()
{
    Central_MyRentals *nw = new Central_MyRentals(this);
    close();
    nw->move(QApplication::desktop()->rect().center()-nw->rect().center());
    nw->show();
}

void Central::on_signout_clicked()
{
    Login2 *nw = new Login2(this);
    close();
    nw->move(QApplication::desktop()->rect().center()-nw->rect().center());
    nw->show();
}
