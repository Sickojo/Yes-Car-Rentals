#include "deleteclientwindow.h"
#include "ui_deleteclientwindow.h"
#include "ClientData.h"

DeleteClientWindow::DeleteClientWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DeleteClientWindow)
{
    ui->setupUi(this);
}

DeleteClientWindow::~DeleteClientWindow()
{
    delete ui;
}

void DeleteClientWindow::on_DltCarButton_clicked()
{
    ifstream f(Clients, ios::binary);
    ofstream temp("temp.yes", ios::binary);
    Client tmp;
    while(f.read((char *)&tmp, sizeof (tmp)))
    {
          if(tmp.id != ui->DltCarLineEdit->text().toInt())
          temp.write((char* ) &tmp, sizeof(tmp));
    }
    f.close();
    temp.close();

    const char* converted = Clients.c_str();

    remove(converted);
    rename("temp.yes", converted);
}
