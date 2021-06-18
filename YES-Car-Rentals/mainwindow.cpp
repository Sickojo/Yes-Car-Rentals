#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "logcommand.h"
#include "loginwindow.h"
#include "login2.h"
#include "ClientData.h"
#include "signup.h"
#include "central.h"
#include "central2.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    logcommand = new LogCommand(this);
    logcommand->show();
}

void MainWindow::on_pushButton_2_clicked()
{    
    Login2 *nw2 = new Login2(this);
    nw2->show();
//    Signup = new signup(this);
//    Signup->show();
//    Signup->setFixedSize(Signup->size());


}

void MainWindow::on_pushButton_3_clicked()
{

}

void MainWindow::on_pushButton_4_clicked()
{
    Central *nw = new Central(this);
    nw->show();

    //hide();
}

void MainWindow::on_pushButton_5_clicked()
{
    central2 *nw = new central2(this);
    nw->show();
}
