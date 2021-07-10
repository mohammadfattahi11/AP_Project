#pragma once

#ifndef GAME_H
#define GAME_H

#include <QWidget>
#include "register_info.h"
#include "farm.h"

QT_BEGIN_NAMESPACE
namespace Ui { class game; }
QT_END_NAMESPACE

class game : public QWidget
{
    Q_OBJECT

public:
    game(QWidget *parent = nullptr);
    ~game();

//    register_info get_information();
//    farm get_farm();
//    int get_level();
//    int get_xp();
//    int get_coin();
//    //////
//    void set_information(register_info );
//    void set_level(int );
//    void set_farm(farm );
//    void set_xp(int );
//    void set_coin(int );



private:

    Ui::game *ui;
//    register_info information;
//    farm Farm;
//    int level;
//    int xp;
//    int coin;

};
#endif // GAME_H
