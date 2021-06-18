#include "central.h"
#include "ui_central.h"
#include <QMouseEvent>
#include "ClientData.h"

Central::Central(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Central)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    int w = ui->label_3->width();
    int h = ui->label_3->height();
    int w2 = ui->label_4->width();
    int h2 = ui->label_4->height();
    QPixmap pix("L:/UNI/Projects/Project one/Grind/Project/QT/data/icons/home.png");
    ui->label_3->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
    QPixmap pix2("L:/UNI/Projects/Project one/Grind/Project/QT/data/images/loko.png");
    ui->label_4->setPixmap(pix2.scaled(w2, h2, Qt::KeepAspectRatio));
    string welcomeText = string("Welcome ") + currentClient.name;
    ui->WelcomeLbl->setText(QString::fromStdString(welcomeText));

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



