#include "central_addcars.h"
#include "ui_central_addcars.h"
#include "QMouseEvent"
#include "centraladmin.h"
#include "CarsData.h"
#include "QFileDialog"
#include "QIntValidator"
#include<centraladmin_viewcars.h>
#include<centraladmin_viewclients.h>
#include<login2.h>
#include<QDesktopWidget>
#include<centraladmin_rentrequest.h>

Car car;

Central_AddCars::Central_AddCars(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Central_AddCars)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    int w = ui->label_3->width();
    int h = ui->label_3->height();
    int w4 = ui->Close->width();
    int h4 = ui->Close->height();

    QPixmap pixb1(":/res/data/icons/home.png");
    ui->label_3->setPixmap(pixb1.scaled(w, h, Qt::KeepAspectRatio));
    QPixmap pixb2(":/res/data/icons/whiteRent.png");
    ui->label_4->setPixmap(pixb2.scaled(w, h, Qt::KeepAspectRatio));
    QPixmap pixb3(":/res/data/icons/cars.jpg");
    ui->label_5->setPixmap(pixb3.scaled(w, h, Qt::KeepAspectRatio));
    QPixmap pixb4(":/res/data/icons/clients.png");
    ui->label_6->setPixmap(pixb4.scaled(w, h, Qt::KeepAspectRatio));
    QPixmap pixb5(":/res/data/icons/whiteRentals.png");
    ui->label_7->setPixmap(pixb5.scaled(w, h, Qt::KeepAspectRatio));
    QPixmap pixb6(":/res/data/icons/Acc.png");
    ui->label_8->setPixmap(pixb6.scaled(w, h, Qt::KeepAspectRatio));

    QPixmap pix4(":/res/data/icons/cancel.png");
    ui->Close->setAutoFillBackground(true);
    ui->Close->setFlat(true);
    ui->Close->setIcon(pix4);
    ui->Close->setIconSize(QSize(w4,h4));


    ui->CarModelLineEdite->setMaxLength(30);
    ui->CarBrandLineEdit->setMaxLength(30);

    QValidator *validate = new QIntValidator(1, 10000000, this);
    ui->CarPriceLineEdit->setValidator(validate);
}

Central_AddCars::~Central_AddCars()
{
    delete ui;
}

void Central_AddCars::mousePressEvent(QMouseEvent *event) {
    m_nMouseClick_X_Coordinate = event->x();
    m_nMouseClick_Y_Coordinate = event->y();
}

void Central_AddCars::mouseMoveEvent(QMouseEvent *event) {
    move(event->globalX()-m_nMouseClick_X_Coordinate,event->globalY()-m_nMouseClick_Y_Coordinate);
}

void Central_AddCars::on_HomeButton_clicked()
{
    CentralAdmin *nw = new CentralAdmin(this);
    close();
    nw->move(QApplication::desktop()->rect().center()-nw->rect().center());
    nw->show();

}

void Central_AddCars::on_BrowseImages_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this, tr("choose"), "", tr("Images(* .png * .jpg * .jpeg"));

    if(QString::compare(filename, QString()) !=0)
    {
        QImage image;
        bool valid = image.load(filename);

        if(valid)
        {
            image = image.scaledToWidth(ui->CarDisplay->width(), Qt::SmoothTransformation);
            ui->CarDisplay->setPixmap(QPixmap::fromImage(image));
            qstrcpy(car.ImPath, filename.toStdString().c_str());
        }
    }
}

void Central_AddCars::on_Close_clicked()
{
    close();
}


void Central_AddCars::on_AddCarButton_clicked()
{
    bool IsOk = true;
    if(ui->CarBrandLineEdit->text().toStdString().length() < 2)
    {
        IsOk = false;
        ui->BrandWarning->setText("Too Short");
    }

    if(ui->CarModelLineEdite->text().toStdString().length() < 2)
    {
        IsOk = false;
        ui->ModelWarning->setText("Too short");
    }

    if(ui->TextEditDescript->toPlainText().toStdString().length() < 20)
    {
        IsOk = false;
        ui->DescriptWarning->setText("Too Short");
    }

    if(ui->CarPriceLineEdit->text().toInt() < 15)
    {
        IsOk = false;
        ui->PriceWarning->setText("Too Low");
    }

    if(IsOk)
    {
        ui->BrandWarning->setText("");
        ui->ModelWarning->setText("");
        ui->DescriptWarning->setText("");
        ui->PriceWarning->setText("");

        qstrcpy(car.name, ui->CarModelLineEdite->text().toStdString().c_str());
        qstrcpy(car.brand, ui->CarBrandLineEdit->text().toStdString().c_str());
        qstrcpy(car.Discript, ui->TextEditDescript->toPlainText().toStdString().c_str());
        car.price = ui->CarPriceLineEdit->text().toInt();

        fstream f(Cars, ios::in | ios::out | ios::binary);
        ofstream file(Cars, ios::binary | ios::app);
        Car tmp;
        int idcounter = 1, idcounter2;
        bool Can_Add = true;
        string input;
        while(f.read((char *)&tmp, sizeof (tmp)))
        {
            string temp = tmp.name;
            string temp2 = car.name;

            if(temp == temp2)
            {
                ui->WarningLbl->setText("There is already a car with this name !!");
                Can_Add = false;
                break;
            }

            idcounter ++;
            idcounter2 = tmp.id;
        }


        if(Can_Add)
        {
            car.id = ++idcounter2;
            file.write((char* )&car, sizeof(car));
            ui->WarningLbl->setText("Successfuly added car");
        }
        f.close();
        file.close();
    }
    strcpy(car.ImPath,"");
}

void Central_AddCars::on_EditCars_clicked()
{
    CentralAdmin_ViewCars *nw =new CentralAdmin_ViewCars(this);
    close();
    nw->move(QApplication::desktop()->rect().center()-nw->rect().center());
    nw->show();
}

void Central_AddCars::on_ViewClients_clicked()
{
    CentralAdmin_ViewClients *nw =new CentralAdmin_ViewClients(this);
    close();
    nw->move(QApplication::desktop()->rect().center()-nw->rect().center());
    nw->show();
}


void Central_AddCars::on_signout_clicked()
{
    Login2 *nw = new Login2(this);
    close();
    nw->move(QApplication::desktop()->rect().center()-nw->rect().center());
    nw->show();
}

void Central_AddCars::on_Rental_clicked()
{
    CentralAdmin_RentRequest *nw = new CentralAdmin_RentRequest(this);
    close();
    nw->move(QApplication::desktop()->rect().center()-nw->rect().center());
    nw->show();
}
