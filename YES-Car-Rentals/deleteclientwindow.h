#ifndef DELETECLIENTWINDOW_H
#define DELETECLIENTWINDOW_H

#include <QDialog>

namespace Ui {
class DeleteClientWindow;
}

class DeleteClientWindow : public QDialog
{
    Q_OBJECT

public:
    explicit DeleteClientWindow(QWidget *parent = nullptr);
    ~DeleteClientWindow();

private slots:
    void on_DltCarButton_clicked();

private:
    Ui::DeleteClientWindow *ui;
};

#endif // DELETECLIENTWINDOW_H
