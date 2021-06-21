#include "editrentalwindow.h"
#include "ui_editrentalwindow.h"
#include "CalData.h"
#include "CarsData.h"
#include "ClientData.h"

EditRentalWindow::EditRentalWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditRentalWindow)
{
    ui->setupUi(this);
    setWindowFlag(Qt::WindowContextHelpButtonHint,false);

}

EditRentalWindow::~EditRentalWindow()
{
    delete ui;
}

void GetCalData(string date, int &DayStart, int &Month)
{
    string month, day, temp;
    map<string, int> monthMap = {{"Jan", 1}, {"Feb", 2}, {"Mar", 3}, {"Apr", 4}, {"May", 5}, {"Jun", 6}, {"Jul", 7}, {"Aug", 8}, {"Sep", 9}, {"Oct", 10}, {"Nov", 11}, {"Dec", 12}};
    month = date.substr(date.find(" "), date.find(" ") + 1);
    month.erase(0, 1);
    Month = monthMap[month];

    int first = 0, last = date.find_first_of(" ");
    for(int i = 0 ; i < 3; i ++)
    {
        day = date.substr(first, last - first);
        first = ++last;
        last = date.find_first_of(" ", last);
    }
    DayStart = stoi(day);

}

void EditRentalWindow::on_RentRequ_clicked()
{
    string Cale = ui->calendarWidget->selectedDate().toString().toStdString();
    int DayStart, Month, NumOfDays;
    NumOfDays = ui->spinBox->text().toInt();
    GetCalData(Cale, DayStart, Month);
    Cal cal(Month, DayStart, NumOfDays, SelectedCar.id, currentClient.id);



    if(true)
    {
        bool Is_found = false;
        fstream f("Cal.YES", ios::in | ios::out | ios::binary);
        Cal tmp;
        string CarTmpName = currentItem.substr(7, currentItem.find("\n") - 7);
        Car tmp2 = FindCar(CarTmpName);
        while(f.read((char *)&tmp, sizeof (tmp)))
        {

              if(tmp.ClientId == currentClient.id && tmp.CarId == tmp2.id && tmp.DayStart == currentDayStart && tmp.Month == currentMonth && tmp.NumOfDays == currentNumOfDays)
             {
              Is_found = true;
              ui->CalWarning->setText(QString::fromStdString(tmp2.name));
              tmp.DayStart = DayStart;
              tmp.NumOfDays = NumOfDays;
              tmp.Month = Month;

              f.seekp((int)f.tellg() - sizeof(tmp), ios::beg);

              f.write((char * ) &tmp, sizeof(tmp));

              ui->CalWarning->setText("Succsefully Changed Rental");



              break;
             }
        }

    }
    else
        ui->CalWarning->setText("This Date Is not Available, please try a different time");
}
