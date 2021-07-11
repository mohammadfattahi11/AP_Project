#include "barn.h"
#include "ui_barn.h"

barn::barn(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::barn)
{
    ui->setupUi(this);
}
//barn::barn(const barn& _barn){
//    Level = _barn.Level;
//    Capacity = _barn.Capacity;
//    Alfalfas_count = _barn.Alfalfas_count;
//    Nails_count = _barn.Nails_count;
//    Shovels_count = _barn.Shovels_count;
//    Eggs_count = _barn.Eggs_count;
//    Fleeces_count = _barn.Fleeces_count;
//    Milk = _barn.Milk;
//}
//void barn::operator=(const barn& _barn){
//    Level = _barn.Level;
//    Capacity = _barn.Capacity;
//    Alfalfas_count = _barn.Alfalfas_count;
//    Nails_count = _barn.Nails_count;
//    Shovels_count = _barn.Shovels_count;
//    Eggs_count = _barn.Eggs_count;
//    Fleeces_count = _barn.Fleeces_count;
//    Milk = _barn.Milk;
//}
////////
//int barn::get_Level(){return Level;}
//int barn::get_Capacity(){return Capacity;}
//int barn::get_Alfalfas_count(){return Alfalfas_count;}
//int barn::get_Nails_count(){return Nails_count;}
//int barn::get_Shovels_count(){return Shovels_count;}
//int barn::get_Eggs_count(){return Eggs_count;}
//int barn::get_Fleeces_count(){return Fleeces_count;}
//deque<milk> barn::get_Milks(){return Milk;}
////////
//void barn::set_Level(int _Level){Level = _Level;}
//void barn::set_Capacity(int _Capacity){Capacity = _Capacity;}
//void barn::set_Alfalfas_count(int _Alfalfas_count){Alfalfas_count = _Alfalfas_count;}
//void barn::set_Nails_count(int _Nails_count){Nails_count = _Nails_count;}
//void barn::set_Shovels_count(int _Shovels_count){Shovels_count= _Shovels_count;}
//void barn::set_Eggs_count(int _Eggs_count){Eggs_count = _Eggs_count;}
//void barn::set_Fleeces_count(int _Fleeces_count){Fleeces_count = _Fleeces_count;}
//void barn::set_Milks(deque<milk> _Milk){Milk = _Milk;}

barn::~barn()
{
    delete ui;
}
