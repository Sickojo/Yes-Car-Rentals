#include "centraladmin_viewcars.h"
#include "ui_centraladmin_viewcars.h"
#include "centraladmin.h"
#include "CarsData.h"
#include "editcarwindow.h"

CentralAdmin_ViewCars::CentralAdmin_ViewCars(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CentralAdmin_ViewCars)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    ui->tableWidgetClients->setColumnWidth(0, 100);
    ui->tableWidgetClients->setColumnWidth(1, 100);
    ui->tableWidgetClients->setColumnWidth(2, 100);
    ui->tableWidgetClients->setColumnWidth(3, 100);
}

CentralAdmin_ViewCars::~CentralAdmin_ViewCars()
{
    delete ui;
}

void CentralAdmin_ViewCars::on_AddCars_clicked()
{
    CentralAdmin *nw = new CentralAdmin(this);
    nw->show();
    hide();
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
        ui->Testlbl->setText("searching");
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
    nw->show();
}