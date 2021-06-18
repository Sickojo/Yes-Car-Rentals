#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "ClientData.h"

LoginWindow::LoginWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_pushButton_clicked()
{
    string username = ui->lineEdit->text().toStdString();
    string pass = ui->lineEdit_2->text().toStdString();
    string sentence = "your searched for " + username + " and " + pass;
    QString sent = QString::fromStdString(sentence);
    ui->label_2->setText(sent);
    if(Login1(username, pass))
    {
        ui->label_3->setText("you exist");
    }
}
