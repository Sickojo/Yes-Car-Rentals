#include "deletecarwindow.h"
#include "ui_deletecarwindow.h"
#include "CarsData.h"

DeleteCarWindow::DeleteCarWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DeleteCarWindow)
{
    ui->setupUi(this);
}

DeleteCarWindow::~DeleteCarWindow()
{
    delete ui;
}

void DeleteCarWindow::on_DltCarButton_clicked()
{
    ifstream f(Cars, ios::binary);
    ofstream temp("temp.yes", ios::binary);
    Car tmp;
    while(f.read((char *)&tmp, sizeof (tmp)))
    {
          if(tmp.id != ui->DltCarLineEdit->text().toInt())
          temp.write((char* ) &tmp, sizeof(tmp));
    }
    f.close();
    temp.close();

    const char* converted = Cars.c_str();

    remove(converted);
    rename("temp.yes", converted);
}
