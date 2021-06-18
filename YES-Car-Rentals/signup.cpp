#include "signup.h"
#include "ui_signup.h"
#include "login2.h"
#include "ClientData.h"


signup::signup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::signup)
{
    ui->setupUi(this);
}

signup::~signup()
{
    delete ui;
}

void signup::on_pushButton_2_clicked()
{
    Login2 *nw = new Login2;
    nw->show();
    hide();
}

void signup::on_pushButton_clicked()
{
    string username = ui->lineEdit->text().toStdString();
    string password = ui->lineEdit_2->text().toStdString();
    Client client(username, password);
    if(Login1(username, password))
        ui->label_2->setText("there is already this shit in file ");
    else
    {
        SignUp(Clients, client);
        ui->label_2->setText("Succsesful ");
    }
}
