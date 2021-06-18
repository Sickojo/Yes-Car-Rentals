#ifndef EDITCARWINDOW_H
#define EDITCARWINDOW_H

#include <QDialog>

namespace Ui {
class EditCarWindow;
}

class EditCarWindow : public QDialog
{
    Q_OBJECT

public:
    explicit EditCarWindow(QWidget *parent = nullptr);
    ~EditCarWindow();

private slots:
    void on_changeCarButt_clicked();

private:
    Ui::EditCarWindow *ui;
};

#endif // EDITCARWINDOW_H
