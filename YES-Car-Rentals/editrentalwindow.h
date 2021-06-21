#ifndef EDITRENTALWINDOW_H
#define EDITRENTALWINDOW_H

#include <QDialog>

namespace Ui {
class EditRentalWindow;
}

class EditRentalWindow : public QDialog
{
    Q_OBJECT

public:
    explicit EditRentalWindow(QWidget *parent = nullptr);
    ~EditRentalWindow();

private slots:
    void on_RentRequ_clicked();

private:
    Ui::EditRentalWindow *ui;
};

#endif // EDITRENTALWINDOW_H
