#include "central_selectedcar.h"
#include "ui_central_selectedcar.h"
#include "CarsData.h"
#include<rentcarwindow.h>
#include<QDesktopWidget>
#include<central.h>
#include<login2.h>
Central_SelectedCar::Central_SelectedCar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Central_SelectedCar)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    int w = ui->label_3->width();
    int h = ui->label_3->height();

    int w4 = ui->pushButton_4->width();
    int h4 = ui->pushButton_4->height();

    QPixmap pixb1(":/res/data/icons/home.png");
    ui->label_3->setPixmap(pixb1.scaled(w, h, Qt::KeepAspectRatio));
    QPixmap pixb2(":/res/data/icons/whiteRent.png");
    ui->label_5->setPixmap(pixb2.scaled(w, h, Qt::KeepAspectRatio));
    QPixmap pixb3(":/res/data/icons/whiteRentals.png");
    ui->label_6->setPixmap(pixb3.scaled(w, h, Qt::KeepAspectRatio));
    QPixmap pixb4(":/res/data/icons/Acc.png");
    ui->label_7->setPixmap(pixb4.scaled(w, h, Qt::KeepAspectRatio));


    QPixmap pix4(":/res/data/icons/cancel.png");
    ui->pushButton_4->setAutoFillBackground(true);
    ui->pushButton_4->setFlat(true);
    ui->pushButton_4->setIcon(pix4);
    ui->pushButton_4->setIconSize(QSize(w4,h4));
    QImage image;
    if(image.load(SelectedCar.ImPath))
    {
        image = image.scaledToWidth(ui->CarIm->width(), Qt::SmoothTransformation);
        ui->CarIm->setPixmap(QPixmap::fromImage(image));
    }
    ui->CarNmae2->setText(SelectedCar.name);
    ui->CarBrand_2->setText(SelectedCar.brand);
    ui->CarPrice_2->setText(QString::number(SelectedCar.price));
    ui->textBrowserDes->setText(SelectedCar.Discript);
}

Central_SelectedCar::~Central_SelectedCar()
{
    delete ui;
}

void Central_SelectedCar::on_pushButton_clicked()
{
    RentCarWindow *nw = new RentCarWindow(this);
    close();
    nw->move(QApplication::desktop()->rect().center()-nw->rect().center());
    nw->show();
}

void Central_SelectedCar::on_pushButton_4_clicked()
{
    close();
}

void Central_SelectedCar::on_HomeButton_clicked()
{
    Central *nw = new Central(this);
    close();
    nw->move(QApplication::desktop()->rect().center()-nw->rect().center());
    nw->show();
}

void Central_SelectedCar::on_signout_clicked()
{
    Login2 *nw = new Login2(this);
    close();
    nw->move(QApplication::desktop()->rect().center()-nw->rect().center());
    nw->show();
}
