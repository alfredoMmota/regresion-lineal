#include "rlineal.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    rlineal w;
    w.show();

    return a.exec();
}
