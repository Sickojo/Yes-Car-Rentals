#include "centraladmin.h"
#include "ui_centraladmin.h"
#include "centraladmin_viewclients.h"
#include <QMouseEvent>
#include "central_addcars.h"
#include "centraladmin_viewcars.h"

CentralAdmin::CentralAdmin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CentralAdmin)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
}

CentralAdmin::~CentralAdmin()
{
    delete ui;
}


void CentralAdmin::mousePressEvent(QMouseEvent *event) {
    m_nMouseClick_X_Coordinate = event->x();
    m_nMouseClick_Y_Coordinate = event->y();
}

void CentralAdmin::mouseMoveEvent(QMouseEvent *event) {
    move(event->globalX()-m_nMouseClick_X_Coordinate,event->globalY()-m_nMouseClick_Y_Coordinate);
}

void CentralAdmin::on_Close_clicked()
{
    close();
}

void CentralAdmin::on_ViewClients_clicked()
{
    CentralAdmin_ViewClients *nw = new CentralAdmin_ViewClients(this);
    nw->show();
    hide();
}

void CentralAdmin::on_AddCars_clicked()
{
    Central_AddCars *nw = new Central_AddCars(this);
    nw->show();
    hide();
}

void CentralAdmin::on_EditCars_clicked()
{
    CentralAdmin_ViewCars *nw = new CentralAdmin_ViewCars(this);
    nw->show();
    hide();
}
