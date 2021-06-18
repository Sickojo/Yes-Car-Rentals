#ifndef CENTRAL2_H
#define CENTRAL2_H

#include <QDialog>

namespace Ui {
class central2;
}

class central2 : public QDialog
{
    Q_OBJECT

public:
    explicit central2(QWidget *parent = nullptr);
    ~central2();

private:
    Ui::central2 *ui;
};

#endif // CENTRAL2_H
