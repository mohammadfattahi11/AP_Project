#include "game.h"
#include"login.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //QMediaPlaylist *back_ground_sound=new
    //farm w;
    login w;
    //wheat_field w;
    w.show();
    return a.exec();
}
