#include "centraladmin_viewclients.h"
#include "ui_centraladmin_viewclients.h"
#include "ClientData.h"
#include <QMouseEvent>
#include "centraladmin.h"
#include "deleteclientwindow.h"
#include "editclientwindow.h"




CentralAdmin_ViewClients::CentralAdmin_ViewClients(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CentralAdmin_ViewClients)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    ui->tableWidgetClients->setColumnWidth(0, 100);
    ui->tableWidgetClients->setColumnWidth(2, 100);
    ui->tableWidgetClients->setColumnWidth(1, 100);

   // QTimer *timer = new QTimer(this);
}

CentralAdmin_ViewClients::~CentralAdmin_ViewClients()
{
    delete ui;
}

void CentralAdmin_ViewClients::mousePressEvent(QMouseEvent *event) {
    m_nMouseClick_X_Coordinate = event->x();
    m_nMouseClick_Y_Coordinate = event->y();
}

void CentralAdmin_ViewClients::mouseMoveEvent(QMouseEvent *event) {
    move(event->globalX()-m_nMouseClick_X_Coordinate,event->globalY()-m_nMouseClick_Y_Coordinate);
}



void CentralAdmin_ViewClients::on_pushButton_clicked()
{

}

void CentralAdmin_ViewClients::on_Close_clicked()
{
    close();
}

void CentralAdmin_ViewClients::on_LoadClientsButton_clicked()
{
    ui->tableWidgetClients->setRowCount(0);
    ifstream f(Clients, ios::binary);
    Client tmp;
    while(f.read((char *) &tmp, sizeof(tmp)))
    {
        QString adminStatus;
        if(tmp.Is_Admin)
            adminStatus = "Yes";
        else
            adminStatus = "No";
        ui->Testlbl->setText("searching");
        int rowPosition = ui->tableWidgetClients->rowCount();
        ui->tableWidgetClients->insertRow(rowPosition);
        ui->tableWidgetClients->setItem(rowPosition, 0, new QTableWidgetItem(QString::number(tmp.id)));
        ui->tableWidgetClients->setItem(rowPosition, 1, new QTableWidgetItem(tmp.name));
        ui->tableWidgetClients->setItem(rowPosition, 2, new QTableWidgetItem(adminStatus));
    }
    f.close();
}

void CentralAdmin_ViewClients::on_HomeButton_clicked()
{
    CentralAdmin *nw = new CentralAdmin(this);
    nw->show();
    hide();
}

void CentralAdmin_ViewClients::on_DeleteClientButton_clicked()
{
    DeleteClientWindow *nw = new DeleteClientWindow(this);
    nw->show();
}

void CentralAdmin_ViewClients::on_EditClientButton_clicked()
{
    EditClientWindow *nw = new EditClientWindow(this);
    nw->show();
}
