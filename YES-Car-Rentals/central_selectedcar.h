#ifndef CENTRAL_SELECTEDCAR_H
#define CENTRAL_SELECTEDCAR_H

#include <QDialog>

namespace Ui {
class Central_SelectedCar;
}

class Central_SelectedCar : public QDialog
{
    Q_OBJECT

public:
    explicit Central_SelectedCar(QWidget *parent = nullptr);
    ~Central_SelectedCar();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_HomeButton_clicked();

    void on_signout_clicked();

private:
    Ui::Central_SelectedCar *ui;
};

#endif // CENTRAL_SELECTEDCAR_H
