#ifndef CENTRALADMIN_VIEWCLIENTS_H
#define CENTRALADMIN_VIEWCLIENTS_H

#include <QDialog>

namespace Ui {
class CentralAdmin_ViewClients;
}

class CentralAdmin_ViewClients : public QDialog
{
    Q_OBJECT

public:
    explicit CentralAdmin_ViewClients(QWidget *parent = nullptr);
    ~CentralAdmin_ViewClients();

private slots:
    void on_pushButton_clicked();

    void on_Close_clicked();

    void on_LoadClientsButton_clicked();

    void on_HomeButton_clicked();

private:
    Ui::CentralAdmin_ViewClients *ui;
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    int m_nMouseClick_X_Coordinate;
    int m_nMouseClick_Y_Coordinate;
};

#endif // CENTRALADMIN_VIEWCLIENTS_H
