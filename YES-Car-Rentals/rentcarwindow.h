#ifndef RENTCARWINDOW_H
#define RENTCARWINDOW_H

#include <QDialog>

namespace Ui {
class RentCarWindow;
}

class RentCarWindow : public QDialog
{
    Q_OBJECT

public:
    explicit RentCarWindow(QWidget *parent = nullptr);
    ~RentCarWindow();

private slots:
    void on_RentRequ_clicked();

    void on_visa_clicked();

    void on_cash_clicked();

private:
    Ui::RentCarWindow *ui;
};

#endif // RENTCARWINDOW_H
