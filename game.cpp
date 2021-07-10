#include "game.h"
#include "ui_game.h"

game::game(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::game)
{
   //  ui->setupUi(this);
}
//////
//register_info game::get_information(){return information;}
//farm game::get_farm(){return Farm;}
//int game::get_level(){return level;}
//int game::get_xp(){return xp;}
//int game::get_coin(){return coin;}
////////
//void game::set_information(register_info _information){information = _information;}
//void game::set_level(int _level){level = _level;}
//void game::set_farm(farm _farm){Farm = _farm;}
//void game::set_xp(int _xp){xp = _xp;}
//void game::set_coin(int _coin){coin = _coin;}
//////

game::~game()
{
    delete ui;
}




