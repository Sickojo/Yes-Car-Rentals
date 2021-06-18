#ifndef EDITCLIENTWINDOW_H
#define EDITCLIENTWINDOW_H

#include <QDialog>

namespace Ui {
class EditClientWindow;
}

class EditClientWindow : public QDialog
{
    Q_OBJECT

public:
    explicit EditClientWindow(QWidget *parent = nullptr);
    ~EditClientWindow();

private slots:
    void on_changeCarButt_clicked();

    void on_rb1_clicked();

    void on_rb2_clicked();

private:
    Ui::EditClientWindow *ui;
};

#endif // EDITCLIENTWINDOW_H
