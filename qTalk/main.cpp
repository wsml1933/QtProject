#include "widget.h"
#include "denglu.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // Widget w;
    // w.show();
    denglu b;
    b.show();
    return a.exec();
}
