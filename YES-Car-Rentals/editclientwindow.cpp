#include "editclientwindow.h"
#include "ui_editclientwindow.h"
#include "ClientData.h"

bool IsAdm;

EditClientWindow::EditClientWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditClientWindow)
{
    ui->setupUi(this);
    setWindowFlag(Qt::WindowContextHelpButtonHint,false);

}

EditClientWindow::~EditClientWindow()
{
    delete ui;
}

void EditClientWindow::on_changeCarButt_clicked()
{
    bool IsOk = true;
        if(ui->IDLineEdit->text().toInt() <= 0)
        {
            IsOk = false;
        }
        if(ui->CarNewNameLineEdit->text().toStdString().length() < 2)
        {
            IsOk = false;
            ui->label->setText("Too Short");
        }

    if(IsOk)
    {
        fstream f(Clients, ios::in | ios::out | ios::binary);
        Client tmp;

        while(f.read((char *)&tmp, sizeof (tmp)))
        {
            if(tmp.id == ui->IDLineEdit->text().toInt())
            {
                if(ui->CarNewNameLineEdit->text().toStdString().length() != 0)
                {
                    qstrcpy(tmp.name, ui->CarNewNameLineEdit->text().toStdString().c_str());
                }
                if(IsAdm == true || IsAdm == false)
                    tmp.Is_Admin = IsAdm;



                f.seekp((int)f.tellg() - sizeof(tmp), ios::beg);

                f.write((char * ) &tmp, sizeof(tmp));

                break;
            }
        }
        f.close();
    }
}

void EditClientWindow::on_rb1_clicked()
{
    IsAdm = true;
}

void EditClientWindow::on_rb2_clicked()
{
    IsAdm = false;
}
