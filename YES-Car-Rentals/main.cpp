#include "mainwindow.h"
#include "ClientData.h"
#include <QApplication>
#include "login2.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();
//    w.setFixedSize(w.size());
    Login2 nw;
    nw.show();
    return a.exec();
}
