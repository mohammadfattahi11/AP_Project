#include "alfalfa_field.h"
#include "ui_alfalfa_field.h"

alfalfa_field::alfalfa_field(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::alfalfa_field)
{
    ui->setupUi(this);
}
alfalfa_field::alfalfa_field(const alfalfa_field& _alfalfa_field){
    Unlock_level =  _alfalfa_field.Unlock_level;
    Area =  _alfalfa_field.Area;
    Level =  _alfalfa_field.Level;
}
void alfalfa_field::operator=(const alfalfa_field& _alfalfa_field){
    Unlock_level =  _alfalfa_field.Unlock_level;
    Area =  _alfalfa_field.Area;
    Level =  _alfalfa_field.Level;
}
//////
int alfalfa_field::get_unlock_level(){return Unlock_level;}
int alfalfa_field::get_area(){return Area;}
int alfalfa_field::get_level(){return Level;}
//////
void alfalfa_field::set_unlock_level(int _unlock_level){Unlock_level = _unlock_level;}
void alfalfa_field::set_level(int _level){Level = _level;}
void alfalfa_field::set_area(int _area){Area = _area;}

alfalfa_field::~alfalfa_field()
{
    delete ui; 
}
