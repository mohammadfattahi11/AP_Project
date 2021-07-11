#include "silo.h"
#include "ui_silo.h"

silo::silo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::silo)
{
    ui->setupUi(this);
}
//silo::silo(const silo& _silo){
//    Level = _silo.Level;
//    Capacity = _silo.Capacity;
//    Wheats_count = _silo.Wheats_count;
//}
//void silo::operator=(const silo& _silo){
//    Level = _silo.Level;
//    Capacity = _silo.Capacity;
//    Wheats_count = _silo.Wheats_count;
//}
////////
//int silo::get_Level(){return Level;}
//int silo::get_Capacity(){ return Capacity;}
//int silo::get_Wheats_count(){return Wheats_count;}
////////
//void silo::set_Level(int _Level){Level = _Level;}
//void silo::set_Capacity(int _Capacity){Capacity = _Capacity;}
//void silo::set_Wheats_count(int _Wheats_count){Wheats_count = _Wheats_count;}

silo::~silo()
{
    delete ui;
}
