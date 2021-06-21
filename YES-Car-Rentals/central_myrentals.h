#ifndef CENTRAL_MYRENTALS_H
#define CENTRAL_MYRENTALS_H

#include <QDialog>

namespace Ui {
class Central_MyRentals;
}

class Central_MyRentals : public QDialog
{
    Q_OBJECT

public:
    explicit Central_MyRentals(QWidget *parent = nullptr);
    ~Central_MyRentals();

private slots:
    void on_HomeButton_clicked();

    void on_plainTextEdit_textChanged();

    void on_DeleteRental_clicked();

    void on_EditRental_clicked();

    void on_RentCar_clicked();

    void on_pushButton_4_clicked();

    void on_signout_clicked();

private:
    Ui::Central_MyRentals *ui;
};

#endif // CENTRAL_MYRENTALS_H
