#include "central2.h"
#include "ui_central2.h"

central2::central2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::central2)
{
    ui->setupUi(this);
    ui->splitter->setSizes(QList<int>() << 50 << 200);
}

central2::~central2()
{
    delete ui;
}
