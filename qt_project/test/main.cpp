#include "ecosystem.h"
#include <QApplication>
#include<stdlib.h>
#include<time.h>
#include"mainwindow.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
