#ifndef DELETERENTALWINDOW_H
#define DELETERENTALWINDOW_H

#include <QDialog>

namespace Ui {
class DeleteRentalWindow;
}

class DeleteRentalWindow : public QDialog
{
    Q_OBJECT

public:
    explicit DeleteRentalWindow(QWidget *parent = nullptr);
    ~DeleteRentalWindow();

private slots:
    void on_DltCarButton_clicked();

private:
    Ui::DeleteRentalWindow *ui;
};

#endif // DELETERENTALWINDOW_H
