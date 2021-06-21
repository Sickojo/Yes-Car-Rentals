#ifndef CENTRAL_ADDCARS_H
#define CENTRAL_ADDCARS_H

#include <QDialog>

namespace Ui {
class Central_AddCars;
}

class Central_AddCars : public QDialog
{
    Q_OBJECT

public:
    explicit Central_AddCars(QWidget *parent = nullptr);
    ~Central_AddCars();

private slots:
    void on_HomeButton_clicked();

    void on_BrowseImages_clicked();

    void on_Close_clicked();

    void on_AddCarButton_clicked();

    void on_EditCars_clicked();

    void on_ViewClients_clicked();

    void on_signout_clicked();

    void on_Rental_clicked();

private:
    Ui::Central_AddCars *ui;
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    int m_nMouseClick_X_Coordinate;
    int m_nMouseClick_Y_Coordinate;
};

#endif // CENTRAL_ADDCARS_H
