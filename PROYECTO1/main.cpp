#include "juegomemoria.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    JuegoMemoria w;
    w.show();
    return a.exec();
}
