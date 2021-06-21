#include "deleterentalwindow.h"
#include "ui_deleterentalwindow.h"
#include "CalData.h"
#include "CarsData.h"
#include "ClientData.h"

DeleteRentalWindow::DeleteRentalWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DeleteRentalWindow)
{
    ui->setupUi(this);
}

DeleteRentalWindow::~DeleteRentalWindow()
{
    delete ui;
}


void DeleteRentalWindow::on_DltCarButton_clicked()
{
    ifstream f("Cal.YES", ios::binary);
    ofstream temp("temp.bin", ios::binary);
    Cal tmp;
    string tst = "Cal.YES";
    string CarTmpName = currentItem.substr(7, currentItem.find("\n") - 7);
    //ui->textEdit->setText(QString::fromStdString(CarTmpName));
    Car tmp2 = FindCar(CarTmpName);
    //ui->textEdit_2->setText(QString::fromStdString(tmp2.name));
    while(f.read((char *)&tmp, sizeof (tmp)))
    {
        if(tmp.ClientId == currentClient.id && tmp2.id == tmp.CarId)
        {
            if(tmp.Month == currentMonth && tmp.DayStart == currentDayStart && tmp.NumOfDays == currentNumOfDays)
                continue;
        }
        else
            temp.write((char* ) &tmp, sizeof(tmp));

    }
    //ui->textEdit->setText(QString::number(count));
    f.close();
    temp.close();

    const char* converted = tst.c_str();

    remove("Cal.YES");
    rename("temp.bin", converted);
}
