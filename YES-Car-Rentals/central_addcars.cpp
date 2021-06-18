#include "central_addcars.h"
#include "ui_central_addcars.h"
#include "QMouseEvent"
#include "centraladmin.h"
#include "CarsData.h"
#include "QFileDialog"
#include "QIntValidator"

Car car;

Central_AddCars::Central_AddCars(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Central_AddCars)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
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
    nw->show();
    hide();
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
            strcpy(car.ImPath, filename.toStdString().c_str());
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

        strcpy(car.name, ui->CarModelLineEdite->text().toStdString().c_str());
        strcpy(car.brand, ui->CarBrandLineEdit->text().toStdString().c_str());
        strcpy(car.Discript, ui->TextEditDescript->toPlainText().toStdString().c_str());
        car.price = ui->CarPriceLineEdit->text().toInt();

        fstream f(Cars, ios::in | ios::out | ios::binary);
        ofstream file(Cars, ios::binary | ios::app);
        Car tmp;
        int idcounter = 1;
        bool Can_Add = true;
        string input;
        while(f.read((char *)&tmp, sizeof (tmp)))
        {

              if(tmp.id == car.id)
             {
                Can_Add = false;
                ui->WarningLbl->setText("There is a car with this ID");
                break;
             }
              string temp = tmp.name;
              string temp2 = car.name;

              if(temp == temp2)
              {
                  ui->WarningLbl->setText("There is already a car with this name !!");
                  Can_Add = false;
                  break;
              }

        idcounter ++;
        }


        if(Can_Add)
        {
            car.id = idcounter;
            file.write((char* )&car, sizeof(car));
            ui->WarningLbl->setText("Successfuly added car");
        }
        f.close();
        file.close();
    }
}
