#include "wheat_field.h"
#include "ui_wheat_field.h"

wheat_field::wheat_field(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::wheat_field)
{
    ui->setupUi(this);
}
wheat_field::wheat_field(const wheat_field& _wheat_field){
    Area = _wheat_field.Area;
    Level = _wheat_field.Level;
    cultivated_area = _wheat_field.cultivated_area;
    in_use = _wheat_field.in_use;
    seed_time = _wheat_field.seed_time;
}
void wheat_field::operator=(const wheat_field& _wheat_field){
    Area = _wheat_field.Area;
    Level = _wheat_field.Level;
    cultivated_area = _wheat_field.cultivated_area;
    in_use = _wheat_field.in_use;
    seed_time = _wheat_field.seed_time;
}
//////
int wheat_field::get_area(){return Area;}
int wheat_field::get_level(){return Level;}
int wheat_field::get_cultivated_area(){return cultivated_area;}
bool wheat_field::get_status(){return in_use;}
double wheat_field::get_seed_time(){return seed_time;}
//////
void wheat_field::set_area(int _area){Area = _area;}
void wheat_field::set_level(int _level){Level = _level;}
void wheat_field::set_cultivated_area(int _cultivated_area){cultivated_area = _cultivated_area;}
void wheat_field::set_status(bool _in_use){in_use = _in_use;}
void wheat_field::set_seed_time(double _seed_time){seed_time = _seed_time;}

wheat_field::~wheat_field()
{
    delete ui;
}
