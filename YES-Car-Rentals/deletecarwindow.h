#ifndef DELETECARWINDOW_H
#define DELETECARWINDOW_H

#include <QDialog>

namespace Ui {
class DeleteCarWindow;
}

class DeleteCarWindow : public QDialog
{
    Q_OBJECT

public:
    explicit DeleteCarWindow(QWidget *parent = nullptr);
    ~DeleteCarWindow();

private slots:
    void on_DltCarButton_clicked();

private:
    Ui::DeleteCarWindow *ui;
};

#endif // DELETECARWINDOW_H
