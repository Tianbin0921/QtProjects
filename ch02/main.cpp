#include "ch02.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ch02 w;
    w.show();
    return a.exec();
}
