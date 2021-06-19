#include "login2.h"
#include "ui_login2.h"
#include "signup.h"
#include "ClientData.h"
#include "central.h"
#include "centraladmin.h"
#include "mainwindow.h"


Login2::Login2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login2)
{
    ui->setupUi(this);
//    ui->frame->setStyleSheet(" background:#333; border-radius:20px;");
//    ui->pushButton->setStyleSheet("background:red; border-radius:10px; font-family:century gothic; font-size:24px; color:white;");
//    ui->lineEdit->setStyleSheet("background:transparent; border:none; color:#717072; border-bottom: 1px solid #717072;font-family:century gothic; font-size:24px;");
//    ui->lineEdit_2->setStyleSheet("background:transparent; border:none; color:#717072; border-bottom: 1px solid #717072;font-family:century gothic; font-size:24px;");
//    ui->label->setStyleSheet("font-family:century gothic; font-size:24px;color:white;");

}


Login2::~Login2()
{
    delete ui;
}

void Login2::on_pushButton_2_clicked()
{
    signup *nw = new signup;
    nw->show();
    hide();

}



void Login2::on_pushButton_clicked()
{
    string username = ui->lineEdit->text().toStdString();
    string password = ui->lineEdit_2->text().toStdString();

    if(Login1(username, password))
    {
        Central *nw = new Central(this);
        nw->show();
        hide();

    }
}
