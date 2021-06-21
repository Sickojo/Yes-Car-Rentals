#ifndef CENTRALADMIN_RENTREQUEST_H
#define CENTRALADMIN_RENTREQUEST_H

#include <QDialog>

namespace Ui {
class CentralAdmin_RentRequest;
}

class CentralAdmin_RentRequest : public QDialog
{
    Q_OBJECT

public:
    explicit CentralAdmin_RentRequest(QWidget *parent = nullptr);
    ~CentralAdmin_RentRequest();

private slots:
    void on_pushButtonnw_clicked();

    void on_reject_clicked();

    void on_accept_clicked();

    void on_signout_clicked();

    void on_HomeButton_clicked();

    void on_AddCars_clicked();

    void on_ViewClients_clicked();

    void on_Close_clicked();

    void on_EditCars_clicked();

private:
    Ui::CentralAdmin_RentRequest *ui;
};

#endif // CENTRALADMIN_RENTREQUEST_H
