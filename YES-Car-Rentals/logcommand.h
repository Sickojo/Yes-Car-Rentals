#ifndef LOGCOMMAND_H
#define LOGCOMMAND_H

#include <QDialog>

namespace Ui {
class LogCommand;
}

class LogCommand : public QDialog
{
    Q_OBJECT

public:
    explicit LogCommand(QWidget *parent = nullptr);
    ~LogCommand();

private:
    Ui::LogCommand *ui;
};

#endif // LOGCOMMAND_H
