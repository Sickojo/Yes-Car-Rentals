#ifndef CENTRALADMIN_H
#define CENTRALADMIN_H

#include <QDialog>

namespace Ui {
class CentralAdmin;
}

class CentralAdmin : public QDialog
{
    Q_OBJECT

public:
    explicit CentralAdmin(QWidget *parent = nullptr);
    ~CentralAdmin();

private slots:
    void on_Close_clicked();

    void on_ViewClients_clicked();

    void on_AddCars_clicked();

    void on_EditCars_clicked();

    void on_signout_clicked();

    void on_Rental_clicked();

private:
    Ui::CentralAdmin *ui;
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    int m_nMouseClick_X_Coordinate;
    int m_nMouseClick_Y_Coordinate;
};

#endif // CENTRALADMIN_H
