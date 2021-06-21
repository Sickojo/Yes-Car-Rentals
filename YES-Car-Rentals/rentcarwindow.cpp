#include "rentcarwindow.h"
#include "ui_rentcarwindow.h"
#include "CalData.h"
#include "CarsData.h"
#include "ClientData.h"
RentCarWindow::RentCarWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RentCarWindow)
{
    setWindowFlag(Qt::WindowContextHelpButtonHint,false);
    setWindowFlag(Qt::MSWindowsFixedSizeDialogHint);
    ui->setupUi(this);
    ui->lineEdit->setMaxLength(16);
    ui->lineEdit_2->setMaxLength(3);
    ui->card->hide();
    ui->pin->hide();
    ui->lineEdit->hide();
    ui->lineEdit_2->hide();
    QDate cdate=ui->calendarWidget->selectedDate();
    ui->calendarWidget->setMinimumDate(cdate);

}

RentCarWindow::~RentCarWindow()
{
    delete ui;
}

void GetCalData1(string date, int &DayStart, int &Month)
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

void RentCarWindow::on_RentRequ_clicked()
{

   if(ui->lineEdit->text().length()==16&&ui->lineEdit_2->text().length()==3){
        string Cale = ui->calendarWidget->selectedDate().toString().toStdString();
        int DayStart, Month, NumOfDays;
        NumOfDays = ui->spinBox->text().toInt();
        GetCalData1(Cale, DayStart, Month);
        Cal cal(Month, DayStart, NumOfDays, SelectedCar.id, currentClient.id);


        if(!CheckDuplicates(cal))
        {
            ofstream f("Cal.YES", ios::binary | ios::app);
            f.write((char* )&cal, sizeof(cal));
            f.close();
            close();
        }
        else
            ui->CalWarning->setText("This Date Is not Available, please try a different time");
    }
    else
       ui->label_3->setText("<font color='red'>Incorrect payment info</font>");
}


void RentCarWindow::on_visa_clicked()
{
    ui->lineEdit->show();
    ui->lineEdit_2->show();
    ui->lineEdit->setText("");
    ui->lineEdit_2->setText("");
    ui->card->show();
    ui->pin->show();

}

void RentCarWindow::on_cash_clicked()
{
    ui->lineEdit->hide();
    ui->lineEdit->setText("1234567891234567");
    ui->lineEdit_2->hide();
    ui->lineEdit_2->setText("123");
    ui->card->hide();
    ui->pin->hide();
}
