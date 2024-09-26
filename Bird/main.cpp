#include "mainscience.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainScience w;
    w.show();
    return a.exec();
}
