#ifndef CENTRAL_VIEWCARS1_H
#define CENTRAL_VIEWCARS1_H

#include <QDialog>

namespace Ui {
class central_viewcars1;
}

class central_viewcars1 : public QDialog
{
    Q_OBJECT

public:
    explicit central_viewcars1(QWidget *parent = nullptr);
    ~central_viewcars1();

private slots:
    void on_HomeButton_clicked();

    void on_plainTextEdit_textChanged();

    void on_pushButton_4_clicked();

    void on_MyRentals_clicked();

private:
    Ui::central_viewcars1 *ui;
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    int m_nMouseClick_X_Coordinate;
    int m_nMouseClick_Y_Coordinate;
};

#endif // CENTRAL_VIEWCARS1_H
