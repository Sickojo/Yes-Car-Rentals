#ifndef CENTRALADMIN_VIEWCARS_H
#define CENTRALADMIN_VIEWCARS_H

#include <QDialog>

namespace Ui {
class CentralAdmin_ViewCars;
}

class CentralAdmin_ViewCars : public QDialog
{
    Q_OBJECT

public:
    explicit CentralAdmin_ViewCars(QWidget *parent = nullptr);
    ~CentralAdmin_ViewCars();

private slots:
    void on_AddCars_clicked();

    void on_Close_clicked();

    void on_LoadClientsButton_clicked();

    void on_EditCarButton_clicked();

    void on_DeleteCarButton_clicked();

    void on_HomeButton_clicked();

private:
    Ui::CentralAdmin_ViewCars *ui;
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    int m_nMouseClick_X_Coordinate;
    int m_nMouseClick_Y_Coordinate;
};

#endif // CENTRALADMIN_VIEWCARS_H
