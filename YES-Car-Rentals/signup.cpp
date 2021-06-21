#include "signup.h"
#include "ui_signup.h"
#include "login2.h"
#include "ClientData.h"
#include<QDesktopWidget>


signup::signup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::signup)
{
    ui->setupUi(this);
    setWindowFlag(Qt::WindowContextHelpButtonHint,false);

}

signup::~signup()
{
    delete ui;
}

void signup::on_pushButton_2_clicked()
{
    Login2 *nw = new Login2;
    close();
    nw->move(QApplication::desktop()->rect().center()-nw->rect().center());
    nw->show();
}


void signup::on_pushButton_clicked()
{
    string username = ui->lineEdit->text().toStdString();
    string password = ui->lineEdit_2->text().toStdString();
    Client client(username, password);
    if(Login1(username, password))
        ui->label_2->setText("<font color='red'>User already exists</font>");
    else if(username.length()>=5&&password.length()>=5)
    {
        if(IsSPace(ui->lineEdit->text(),ui->lineEdit_2->text()))
            ui->label_2->setText("<font color='red'>Invalid whitespace!</font>");
        else{
            SignUp(Clients, client);
            ui->label_2->setText("<font color='green'>Success !</font>");
            ui->lineEdit->setText("");
            ui->lineEdit_2->setText("");
        }
    }
    else{
        ui->label_2->setText("<font color='red'>Too short!</font>");
    }
}
