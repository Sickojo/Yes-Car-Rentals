#include "editcarwindow.h"
#include "ui_editcarwindow.h"
#include "CarsData.h"

EditCarWindow::EditCarWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditCarWindow)
{
    ui->setupUi(this);
    setWindowFlag(Qt::WindowContextHelpButtonHint,false);
}

EditCarWindow::~EditCarWindow()
{
    delete ui;
}

void EditCarWindow::on_changeCarButt_clicked()
{
    bool IsOk = true;
    if(ui->IDLineEdit->text().toInt() < 0)
    {
        IsOk = false;
    }
    if(ui->CarNewNameLineEdit->text().toStdString().length() < 2 && ui->CarNewNameLineEdit->text().toStdString().length() != 0)
    {
        IsOk = false;
        //ui->BrandWarning->setText("Too Short");
    }

    if(ui->CarNewBrandLineEdit->text().toStdString().length() < 2&&ui->CarNewBrandLineEdit->text().toStdString().length() !=0)
    {
        IsOk = false;
        //ui->ModelWarning->setText("Too short");
    }

    if(ui->TextEditNewDescrpt->toPlainText().toStdString().length() < 20&&ui->TextEditNewDescrpt->toPlainText().toStdString().length() != 0)
    {
        IsOk = false;
        //ui->DescriptWarning->setText("Too Short");
    }

    if(ui->NewPricelbl->text().toInt() < 15&&ui->NewPricelbl->text().toInt() != 0)
    {
        IsOk = false;
        //ui->PriceWarning->setText("Too Low");
    }

    if(IsOk)
    {
        fstream f(Cars, ios::in | ios::out | ios::binary);
        Car tmp;

        while(f.read((char *)&tmp, sizeof (tmp)))
        {
            if(tmp.id == ui->IDLineEdit->text().toInt())
            {
                if(ui->CarNewNameLineEdit->text().toStdString().length() != 0)
                {
                    qstrcpy(tmp.name, ui->CarNewNameLineEdit->text().toStdString().c_str());
                }
                if(ui->CarNewBrandLineEdit->text().toStdString().length() != 0)
                {
                    qstrcpy(tmp.brand, ui->CarNewBrandLineEdit->text().toStdString().c_str());
                }

                if(ui->TextEditNewDescrpt->toPlainText().toStdString().length() != 0)
                {
                    qstrcpy(tmp.Discript, ui->TextEditNewDescrpt->toPlainText().toStdString().c_str());
                }

                if(ui->NewPricelbl->text().toInt() != 0)
                {
                    tmp.price = ui->NewPricelbl->text().toInt();
                }


                f.seekp((int)f.tellg() - sizeof(tmp), ios::beg);

                f.write((char * ) &tmp, sizeof(tmp));

                break;
            }
        }
        f.close();
        close();
    }

}
