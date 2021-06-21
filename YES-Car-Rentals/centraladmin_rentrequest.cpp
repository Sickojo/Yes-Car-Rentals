#include "centraladmin_rentrequest.h"
#include "ui_centraladmin_rentrequest.h"
#include "CarsData.h"
#include "ClientData.h"
#include "CalData.h"
#include<login2.h>
#include<QDesktopWidget>
#include<centraladmin.h>
#include "central_addcars.h"
#include "centraladmin_viewclients.h"
#include<centraladmin_viewcars.h>
int ClientId,CarId,DayStart,month,NumofDays;

CentralAdmin_RentRequest::CentralAdmin_RentRequest(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CentralAdmin_RentRequest)
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
    ui->label_8->setPixmap(pixb4.scaled(w, h, Qt::KeepAspectRatio));
    QPixmap pixb5(":/res/data/icons/whiteRentals.png");
    ui->label_9->setPixmap(pixb5.scaled(w, h, Qt::KeepAspectRatio));
    QPixmap pixb6(":/res/data/icons/Acc.png");
    ui->label_10->setPixmap(pixb6.scaled(w, h, Qt::KeepAspectRatio));


    QPixmap pix4(":/res/data/icons/cancel.png");
    ui->Close->setAutoFillBackground(true);
    ui->Close->setFlat(true);
    ui->Close->setIcon(pix4);
    ui->Close->setIconSize(QSize(w4,h4));
    //ui->tableWidget->setStyleSheet("color:black;background-color:#333;font-size:12px;");
    ui->tableWidget->setColumnWidth(0, 100);
    ui->tableWidget->setColumnWidth(1, 100);
    ui->tableWidget->setColumnWidth(2, 100);
    ui->tableWidget->setColumnWidth(3, 100);
    ui->tableWidget->setColumnWidth(4, 200);
    ui->tableWidget->setColumnWidth(5, 200);
    ifstream f("Cal.YES", ios::binary);

    Cal tmp;


    while(f.read((char *) &tmp, sizeof(tmp)))
    {
        int rowPosition = ui->tableWidget->rowCount();
        Car car1 = FindCar(tmp.CarId);
        string date;
        date += "From : ";
        date += to_string(tmp.DayStart);
        date += "/";
        date += to_string(tmp.Month);
        date += "/2021, for : ";
        date += to_string(tmp.NumOfDays);
        date += " days";
        ui->tableWidget->insertRow(rowPosition);
        ui->tableWidget->setItem(rowPosition, 0, new QTableWidgetItem(QString::number(tmp.ClientId)));
        ui->tableWidget->setItem(rowPosition, 1, new QTableWidgetItem(QString::fromStdString(GetClientName(tmp.ClientId))));
        ui->tableWidget->setItem(rowPosition, 2, new QTableWidgetItem(QString::number(tmp.CarId)));
        ui->tableWidget->setItem(rowPosition, 3, new QTableWidgetItem(QString::fromStdString(car1.name)));
        ui->tableWidget->setItem(rowPosition, 4, new QTableWidgetItem(QString::fromStdString(date)));
        if(tmp.IsAccepted == true)
            ui->tableWidget->setItem(rowPosition, 5, new QTableWidgetItem("Accepted"));
        else
            ui->tableWidget->setItem(rowPosition, 5, new QTableWidgetItem("Pending Request"));
    }
    f.close();


}

CentralAdmin_RentRequest::~CentralAdmin_RentRequest()
{
    delete ui;
}

void CentralAdmin_RentRequest::on_pushButtonnw_clicked()
{

}


void CentralAdmin_RentRequest::on_reject_clicked()
{
    if(ui->tableWidget->selectionModel()->currentIndex().row() > -1)
    {
        ifstream f("Cal.YES", ios::binary);
        ofstream temp("temp.bin", ios::binary);
        Cal tmp;
        string tst = "Cal.YES";
        string s = ui->tableWidget->item(ui->tableWidget->selectionModel()->currentIndex().row(), 4)->text().toStdString();
        string Daystart, Month, NumOfDays;
        Daystart = s.substr(7, s.find("/") - 7);
        Month = s.substr(s.find("/") + 1, s.find("/2021") - s.find("/") - 1);
        NumOfDays = s.substr(s.find("for") + 6, s.find("days") - 2 - s.find("for") - 5);
        ClientId = ui->tableWidget->item(ui->tableWidget->selectionModel()->currentIndex().row(), 0)->text().toInt();
        CarId = ui->tableWidget->item(ui->tableWidget->selectionModel()->currentIndex().row(), 2)->text().toInt();
        DayStart = stoi(Daystart);
        month = stoi(Month);
        NumofDays = stoi(NumOfDays);
        //ui->textEdit->setText(QString::fromStdString(CarTmpName));
        //ui->textEdit_2->setText(QString::fromStdString(tmp2.name));
        while(f.read((char *)&tmp, sizeof (tmp)))
        {
            if(tmp.ClientId == ClientId && CarId == tmp.CarId)
            {
                if(tmp.Month == month && tmp.DayStart == DayStart && tmp.NumOfDays == NumofDays)
                    continue;
            }
            else
                temp.write((char* ) &tmp, sizeof(tmp));

        }
        //ui->textEdit->setText(QString::number(DayStart));
        f.close();
        temp.close();

        const char* converted = tst.c_str();

        remove("Cal.YES");
        rename("temp.bin", converted);
        //
        ifstream f2("Cal.YES", ios::binary);

        Cal tmp2;
        ui->tableWidget->setRowCount(0);


        while(f.read((char *) &tmp2, sizeof(tmp2)))
        {
            int rowPosition = ui->tableWidget->rowCount();
            Car car2 = FindCar(tmp2.CarId);
            string date;
            date += "From : ";
            date += to_string(tmp2.DayStart);
            date += "/";
            date += to_string(tmp2.Month);
            date += "/2021, for : ";
            date += to_string(tmp2.NumOfDays);
            date += " days";
            ui->tableWidget->insertRow(rowPosition);
            ui->tableWidget->setItem(rowPosition, 0, new QTableWidgetItem(QString::number(tmp2.ClientId)));
            ui->tableWidget->setItem(rowPosition, 1, new QTableWidgetItem(QString::fromStdString(GetClientName(tmp2.ClientId))));
            ui->tableWidget->setItem(rowPosition, 2, new QTableWidgetItem(QString::number(tmp2.CarId)));
            ui->tableWidget->setItem(rowPosition, 3, new QTableWidgetItem(QString::fromStdString(car2.name)));
            ui->tableWidget->setItem(rowPosition, 4, new QTableWidgetItem(QString::fromStdString(date)));
            if(tmp2.IsAccepted == true)
                ui->tableWidget->setItem(rowPosition, 5, new QTableWidgetItem("Accepted"));
            else
                ui->tableWidget->setItem(rowPosition, 5, new QTableWidgetItem("Pending Request"));
        }
        f2.close();
    }
}

void CentralAdmin_RentRequest::on_accept_clicked()
{
    if(ui->tableWidget->selectionModel()->currentIndex().row() > -1)
    {
        string s = ui->tableWidget->item(ui->tableWidget->selectionModel()->currentIndex().row(), 4)->text().toStdString();
        string Daystart, Month, NumOfDays;
        Daystart = s.substr(7, s.find("/") - 7);
        Month = s.substr(s.find("/") + 1, s.find("/2021") - s.find("/") - 1);
        NumOfDays = s.substr(s.find("for") + 6, s.find("days") - 2 - s.find("for") - 5);
        ClientId = ui->tableWidget->item(ui->tableWidget->selectionModel()->currentIndex().row(), 0)->text().toInt();
        CarId = ui->tableWidget->item(ui->tableWidget->selectionModel()->currentIndex().row(), 2)->text().toInt();
        DayStart = stoi(Daystart);
        month = stoi(Month);
        NumofDays = stoi(NumOfDays);
        //ui->textEdit->setText(QString::fromStdString(s));
        //ui->tableWidget->item(ui->tableWidget->selectionModel()->currentIndex().row(), 0)->text();

        fstream f("Cal.YES", ios::in | ios::out | ios::binary);
        Cal tmp;

        while(f.read((char *)&tmp, sizeof (tmp)))
        {

            if(tmp.ClientId == ClientId && tmp.CarId == CarId && tmp.DayStart == DayStart && tmp.Month == month && tmp.NumOfDays == NumofDays)
            {

                tmp.IsAccepted = true;


                f.seekp((int)f.tellg() - sizeof(tmp), ios::beg);

                f.write((char * ) &tmp, sizeof(tmp));



                break;
            }
        }
    }

    ifstream f("Cal.YES", ios::binary);

    Cal tmp;
    ui->tableWidget->setRowCount(0);


    while(f.read((char *) &tmp, sizeof(tmp)))
    {
        int rowPosition = ui->tableWidget->rowCount();
        Car car1 = FindCar(tmp.CarId);
        string date;
        date += "From : ";
        date += to_string(tmp.DayStart);
        date += "/";
        date += to_string(tmp.Month);
        date += "/2021, for : ";
        date += to_string(tmp.NumOfDays);
        date += " days";
        ui->tableWidget->insertRow(rowPosition);
        ui->tableWidget->setItem(rowPosition, 0, new QTableWidgetItem(QString::number(tmp.ClientId)));
        ui->tableWidget->setItem(rowPosition, 1, new QTableWidgetItem(QString::fromStdString(GetClientName(tmp.ClientId))));
        ui->tableWidget->setItem(rowPosition, 2, new QTableWidgetItem(QString::number(tmp.CarId)));
        ui->tableWidget->setItem(rowPosition, 3, new QTableWidgetItem(QString::fromStdString(car1.name)));
        ui->tableWidget->setItem(rowPosition, 4, new QTableWidgetItem(QString::fromStdString(date)));
        if(tmp.IsAccepted == true)
            ui->tableWidget->setItem(rowPosition, 5, new QTableWidgetItem("Accepted"));
        else
            ui->tableWidget->setItem(rowPosition, 5, new QTableWidgetItem("Pending Request"));
    }
    f.close();
}

void CentralAdmin_RentRequest::on_signout_clicked()
{
    Login2 *nw = new Login2(this);
    close();
    nw->move(QApplication::desktop()->rect().center()-nw->rect().center());
    nw->show();
}

void CentralAdmin_RentRequest::on_HomeButton_clicked()
{
    CentralAdmin *nw = new CentralAdmin(this);
    close();
    nw->move(QApplication::desktop()->rect().center()-nw->rect().center());
    nw->show();
}

void CentralAdmin_RentRequest::on_AddCars_clicked()
{
    Central_AddCars *nw = new Central_AddCars(this);
    close();
    nw->move(QApplication::desktop()->rect().center()-nw->rect().center());
    nw->show();
}

void CentralAdmin_RentRequest::on_ViewClients_clicked()
{
    CentralAdmin_ViewClients *nw = new CentralAdmin_ViewClients(this);
    close();
    nw->move(QApplication::desktop()->rect().center()-nw->rect().center());
    nw->show();
}

void CentralAdmin_RentRequest::on_Close_clicked()
{
    close();
}

void CentralAdmin_RentRequest::on_EditCars_clicked()
{
    CentralAdmin_ViewCars *nw = new CentralAdmin_ViewCars(this);
    close();
    nw->move(QApplication::desktop()->rect().center()-nw->rect().center());
    nw->show();
}
