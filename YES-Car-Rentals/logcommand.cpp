#include "logcommand.h"
#include "ui_logcommand.h"

LogCommand::LogCommand(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LogCommand)
{
    ui->setupUi(this);
}

LogCommand::~LogCommand()
{
    delete ui;
}
