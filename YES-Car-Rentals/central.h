#ifndef CENTRAL_H
#define CENTRAL_H

#include <QDialog>

namespace Ui {
class Central;
}

class Central : public QDialog
{
    Q_OBJECT

public:
    explicit Central(QWidget *parent = nullptr);
    ~Central();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_RentCar_clicked();

private:
    Ui::Central *ui;
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    int m_nMouseClick_X_Coordinate;
    int m_nMouseClick_Y_Coordinate;
};

#endif // CENTRAL_H
