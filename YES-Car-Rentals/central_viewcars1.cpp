#include "central_viewcars1.h"
#include "ui_central_viewcars1.h"
#include "central.h"
#include "CarsData.h"
#include <QMouseEvent>
#include <QLabel>
#include <QDialog>
#include<central_selectedcar.h>
#include<QDesktopWidget>
#include<QMessageBox>
#include<central_myrentals.h>
#include<login2.h>
QListWidgetItem *item;

void selectcars(string Filename, vector<string> &names, vector<string> &prices, vector<QString> &Images)
{
    ifstream f(Filename, ios::binary);
    Car tmp;
    while(f.read((char *) &tmp, sizeof(tmp))){
        names.push_back(tmp.name);
        prices.push_back(to_string(tmp.price));
        Images.push_back(tmp.ImPath);
    }
    f.close();

}

void AddPriceCar(vector<string> &names, vector<string> &prices, vector<string> &carandprice){
    for(unsigned int i = 0; i<names.size();i++)
        carandprice.push_back(names[i] + "\n" + prices[i]+"$/hr");
}

central_viewcars1::central_viewcars1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::central_viewcars1)
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

    vector<string> cars;
    vector<string> prices;
    vector<QString> images;
    vector<string> carandprices;
    selectcars("Cars.yes", cars,prices,images);
    AddPriceCar(cars, prices, carandprices);

    for(unsigned int i = 0; i<cars.size(); i++){
        ui -> listWidget ->addItem(new QListWidgetItem(QIcon(images[i]),QString::fromStdString(carandprices[i])));
        ui ->listWidget -> item(i) -> setForeground(Qt::lightGray);
    }
    ui->listWidget->setIconSize(QSize(90,90));

    cars.clear();prices.clear();images.clear();carandprices.clear();
    cars.shrink_to_fit();prices.shrink_to_fit();images.shrink_to_fit();carandprices.shrink_to_fit();
}

central_viewcars1::~central_viewcars1()
{
    delete ui;
}

void central_viewcars1::on_HomeButton_clicked()
{
    Central *Centralwindow = new Central(this);
    close();
    Centralwindow->move(QApplication::desktop()->rect().center()-Centralwindow->rect().center());
    Centralwindow->show();

}

void central_viewcars1::on_plainTextEdit_textChanged()
{
    for(int i = 0; i<(ui->listWidget->count()); i++)
        ui->listWidget->item(i)->setHidden(false);

    QList<QListWidgetItem *> items = ui -> listWidget ->  QListWidget::findItems(ui->plainTextEdit->toPlainText(), Qt::MatchContains);

    for(int i = 0; i<(ui->listWidget->count()); i++){
        bool hideitem = true;
        for(int j = 0; j<items.count(); j++){
            if(ui->listWidget->item(i) == items[j]){
                hideitem = false;
                ui->listWidget->setCurrentRow(i);
            }
        }
        if(hideitem)
            ui->listWidget->item(i)->setHidden(true);
    }
}
void central_viewcars1::mousePressEvent(QMouseEvent *event) {
    m_nMouseClick_X_Coordinate = event->x();
    m_nMouseClick_Y_Coordinate = event->y();
}

void central_viewcars1::mouseMoveEvent(QMouseEvent *event) {
    move(event->globalX()-m_nMouseClick_X_Coordinate,event->globalY()-m_nMouseClick_Y_Coordinate);
}
void central_viewcars1::on_pushButton_4_clicked()
{
    close();
}

void central_viewcars1::on_MyRentals_clicked()
{
    Central_MyRentals *nw = new Central_MyRentals(this);
    close();
    nw->move(QApplication::desktop()->rect().center()-nw->rect().center());
    nw->show();
}

void central_viewcars1::on_pushButton_clicked()
{
    bool Here;
    string s = ui->listWidget->currentItem()->text().toStdString();
    string s2 = "";
    for(int i = 0; i < int(s.length()); i++)
    {
        if(s[i]=='\n')
        {
            s2 = s.substr(0, i);
            break;
        }

    }


    ifstream f(Cars, ios::binary);
    Car tmp;

    while(f.read((char *) &tmp, sizeof(tmp)))
    {
        if(tmp.name == s2)
        {
            SelectedCar = tmp;
            Here = true;
        }
    }
    f.close();

    if(Here)
    {
        Central_SelectedCar *nw = new Central_SelectedCar(this);
        close();
        nw->move(QApplication::desktop()->rect().center()-nw->rect().center());
        nw->show();
    }
}

void central_viewcars1::on_RentCar_clicked()
{

}

void central_viewcars1::on_signout_clicked()
{
    Login2 *nw = new Login2(this);
    close();
    nw->move(QApplication::desktop()->rect().center()-nw->rect().center());
    nw->show();
}
