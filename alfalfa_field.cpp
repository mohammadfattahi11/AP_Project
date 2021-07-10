#include "alfalfa_field.h"
#include "ui_alfalfa_field.h"
//hello
alfalfa_field::alfalfa_field(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::alfalfa_field)
{
    ui->setupUi(this);
}
//alfalfa_field::alfalfa_field(const alfalfa_field& _alfalfa_field){
//    Unlock_level =  _alfalfa_field.Unlock_level;
//    Area =  _alfalfa_field.Area;
//    Level =  _alfalfa_field.Level;
//    cultivated_area = _alfalfa_field.cultivated_area;
//    in_use = _alfalfa_field.in_use;
//    seed_time = _alfalfa_field.seed_time;
//}
//void alfalfa_field::operator=(const alfalfa_field& _alfalfa_field){
//    Unlock_level =  _alfalfa_field.Unlock_level;
//    Area =  _alfalfa_field.Area;
//    Level =  _alfalfa_field.Level;
//    cultivated_area = _alfalfa_field.cultivated_area;
//    in_use = _alfalfa_field.in_use;
//    seed_time = _alfalfa_field.seed_time;
//}
////////
//int alfalfa_field::get_unlock_level(){return Unlock_level;}
//int alfalfa_field::get_area(){return Area;}
//int alfalfa_field::get_level(){return Level;}
//int alfalfa_field::get_cultivated_area(){return cultivated_area;}
//bool alfalfa_field::get_status(){return in_use;}
//double alfalfa_field::get_seed_time(){return seed_time;}
////////
//void alfalfa_field::set_unlock_level(int _unlock_level){Unlock_level = _unlock_level;}
//void alfalfa_field::set_level(int _level){Level = _level;}
//void alfalfa_field::set_area(int _area){Area = _area;}
//void alfalfa_field::set_cultivated_area(int _cultivated_area){cultivated_area = _cultivated_area;}
//void alfalfa_field::set_status(bool _in_use){in_use = _in_use;}
//void alfalfa_field::set_seed_time(double _seed_time){seed_time = _seed_time;}

alfalfa_field::~alfalfa_field()
{
    delete ui; 
}
