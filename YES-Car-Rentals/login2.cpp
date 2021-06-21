#include "login2.h"
#include "ui_login2.h"
#include "signup.h"
#include "ClientData.h"
#include "central.h"
#include "centraladmin.h"
#include "mainwindow.h"
#include<ClientData.h>
#include<QDesktopWidget>


Login2::Login2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login2)
{
    ui->setupUi(this);
    setWindowFlag(Qt::WindowContextHelpButtonHint,false);

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
    close();
    nw->move(QApplication::desktop()->rect().center()-nw->rect().center());
    nw->show();

}



void Login2::on_pushButton_clicked()
{
    string username = ui->lineEdit->text().toStdString();
    string password = ui->lineEdit_2->text().toStdString();
    if(IsSPace(ui->lineEdit->text(),ui->lineEdit_2->text()))
        ui->label_2->setText("<font color='red'>Invalid whitespace!</font>");

    else if(username.length()>=5&&password.length()>=5){

        if(Login1(username, password))
        {
            if(currentClient.Is_Admin){
                CentralAdmin *nw = new CentralAdmin(this);
                close();
                nw->move(QApplication::desktop()->rect().center()-nw->rect().center());
                nw->show();
            }
            else
            {
                Central *nw = new Central(this);
                close();
                nw->move(QApplication::desktop()->rect().center()-nw->rect().center());
                nw->show();
            }

        }
        else
            ui->label_2->setText("<font color='red'>Invalid info !</font>");

    }
    else
        ui->label_2->setText("<font color='red'>Too short!</font>");

}
