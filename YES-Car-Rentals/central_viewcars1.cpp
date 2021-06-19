#include "central_viewcars1.h"
#include "ui_central_viewcars1.h"
#include "central.h"
#include "CarsData.h"
#include <QMouseEvent>
#include <QLabel>
#include <QDialog>
#include <Qdebug>
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
    vector<string> cars;
    vector<string> prices;
    vector<QString> images;
    vector<string> carandprices;
    QString z;
    selectcars("Cars.yes", cars,prices,images);
    AddPriceCar(cars, prices, carandprices);

    for(unsigned int i = 0; i<cars.size(); i++){
        ui -> listWidget ->addItem(new QListWidgetItem(QIcon(images[i]),QString::fromStdString(carandprices[i])));
        ui ->listWidget -> item(i) -> setForeground(Qt::lightGray);
    }
           ui->listWidget->setIconSize(QSize(150,150));

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
Centralwindow->show();
hide();
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
    Central *Centralwindow = new Central(this);
    Centralwindow->show();
    hide();
}
