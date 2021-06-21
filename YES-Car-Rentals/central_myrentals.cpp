#include "central_myrentals.h"
#include "ui_central_myrentals.h"
#include "CalData.h"
#include "ClientData.h"
#include "CarsData.h"
#include "editrentalwindow.h"
#include "deleterentalwindow.h"
#include<central.h>
#include<QDesktopWidget>
#include<central_viewcars1.h>
#include<login2.h>

int itemcount = 0;

Central_MyRentals::Central_MyRentals(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Central_MyRentals)
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
    ui->label_4->setPixmap(pixb2.scaled(w, h, Qt::KeepAspectRatio));
    QPixmap pixb3(":/res/data/icons/whiteRentals.png");
    ui->label_5->setPixmap(pixb3.scaled(w, h, Qt::KeepAspectRatio));
    QPixmap pixb4(":/res/data/icons/Acc.png");
    ui->label_6->setPixmap(pixb4.scaled(w, h, Qt::KeepAspectRatio));


    QPixmap pix4(":/res/data/icons/cancel.png");
    ui->pushButton_4->setAutoFillBackground(true);
    ui->pushButton_4->setFlat(true);
    ui->pushButton_4->setIcon(pix4);
    ui->pushButton_4->setIconSize(QSize(w4,h4));
    ifstream f("Cal.YES", ios::binary);
    Cal tmp;
    Car current;
    while(f.read((char *) &tmp, sizeof(tmp)))
    {
        if(tmp.ClientId == currentClient.id || tmp.IsAccepted == false || tmp.IsAccepted == true)
        {
            int DayEnd, Month2;
            vector<pair<int, int>> temp = GetDays(tmp.DayStart, tmp.NumOfDays, tmp.Month);
            for (const auto& p : temp)
            {
                DayEnd = p.second;
                Month2 = p.first;
            }
            string ListString = "Name : ";
            current = FindCar(tmp.CarId);
            ListString += current.name;
            ListString += "\n";
            ListString += "Rented From : ";
            ListString += to_string(tmp.DayStart);
            ListString += "/";
            ListString += to_string(tmp.Month);
            ListString += "/2021";
            ListString += " For : ";
            ListString += to_string(tmp.NumOfDays);
            ListString += " Days ,to : ";
            ListString += to_string(DayEnd);
            ListString += "/";
            ListString += to_string(Month2);
            ListString += "/2021.";
            ListString += "\n";
            if(!tmp.IsAccepted)
                ListString+= "Pending Request";
            else
                ListString += "Accepted";

            ui -> listWidgetRentals ->addItem(new QListWidgetItem(QIcon(current.ImPath),QString::fromStdString(ListString)));
            ui->listWidgetRentals->setIconSize(QSize(90,90));
            itemcount++;
        }
    }
    f.close();
}

Central_MyRentals::~Central_MyRentals()
{
    delete ui;
}



void Central_MyRentals::on_plainTextEdit_textChanged()
{
    for(int i = 0; i<(ui->listWidgetRentals->count()); i++)
        ui->listWidgetRentals->item(i)->setHidden(false);

QList<QListWidgetItem *> items = ui -> listWidgetRentals ->  QListWidget::findItems(ui->plainTextEdit->toPlainText(), Qt::MatchContains);

for(int i = 0; i<(ui->listWidgetRentals->count()); i++){
   bool hideitem = true;
    for(int j = 0; j<items.count(); j++){
        if(ui->listWidgetRentals->item(i) == items[j]){
            hideitem = false;
            ui->listWidgetRentals->setCurrentRow(i);
        }
    }
if(hideitem)
    ui->listWidgetRentals->item(i)->setHidden(true);
}
}

void Central_MyRentals::on_DeleteRental_clicked()
{
    string s = ui->listWidgetRentals->currentItem()->text().toStdString();
    string Month = s.substr(s.find("/") + 1, 2);
    string DayStart = s.substr(s.find("From : ") + 7, 2);
    string NumofDays = s.substr(s.find("For : ") + 6, 3);
    for(int i = 0; i < (int)DayStart.length(); i++)
    {
        if(DayStart[i] == '/')
            DayStart.erase(1, 1);
    }
    for(int i = 0; i < (int)Month.length(); i++)
    {
        if(Month[i] == '/')
            Month.erase(i, 1);
    }
    for(int i = 0; i < (int)NumofDays.length(); i++)
    {
        if(NumofDays[i] == ' ')
            NumofDays.erase(i, (int)NumofDays.length());
    }
    currentDayStart = stoi(DayStart);
    currentMonth = stoi(Month);
    currentNumOfDays = stoi(NumofDays);
    EditRentalWindow *nw = new EditRentalWindow(this);
    currentItem = ui->listWidgetRentals->currentItem()->text().toStdString();
    nw->show();
}

void Central_MyRentals::on_EditRental_clicked()
{
    string s = ui->listWidgetRentals->currentItem()->text().toStdString();
    string Month = s.substr(s.find("/") + 1, 2);
    string DayStart = s.substr(s.find("From : ") + 7, 2);
    string NumofDays = s.substr(s.find("For : ") + 6, 3);
    for(int i = 0; i < (int)DayStart.length(); i++)
    {
        if(DayStart[i] == '/')
            DayStart.erase(1, 1);
    }
    for(int i = 0; i < (int)Month.length(); i++)
    {
        if(Month[i] == '/')
            Month.erase(i, 1);
    }
    for(int i = 0; i < (int)NumofDays.length(); i++)
    {
        if(NumofDays[i] == ' ')
            NumofDays.erase(i, (int)NumofDays.length());
    }
    currentDayStart = stoi(DayStart);
    currentMonth = stoi(Month);
    currentNumOfDays = stoi(NumofDays);
    DeleteRentalWindow *nw = new DeleteRentalWindow(this);
    currentItem = ui->listWidgetRentals->currentItem()->text().toStdString();
    nw->show();
}

void Central_MyRentals::on_HomeButton_clicked()
{
    Central *nw = new Central(this);
    close();
    nw->move(QApplication::desktop()->rect().center()-nw->rect().center());
    nw->show();
}




void Central_MyRentals::on_RentCar_clicked()
{
    central_viewcars1 *nw = new central_viewcars1(this);
    close();
    nw->move(QApplication::desktop()->rect().center()-nw->rect().center());
    nw->show();
}

void Central_MyRentals::on_pushButton_4_clicked()
{
    close();
}

void Central_MyRentals::on_signout_clicked()
{
    Login2 *nw = new Login2(this);
    close();
    nw->move(QApplication::desktop()->rect().center()-nw->rect().center());
    nw->show();
}
