#include "game.h"
#include"login.h"
#include "wheat_field.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //game w;
    //login w;
    wheat_field w;
    w.show();
    return a.exec();
}
