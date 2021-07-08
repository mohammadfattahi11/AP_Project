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
}
void wheat_field::operator=(const wheat_field& _wheat_field){
    Area = _wheat_field.Area;
    Level = _wheat_field.Level;
}
//////
int wheat_field::get_area(){return Area;}
int wheat_field::get_level(){return Level;}
//////
void wheat_field::set_area(int _area){Area = _area;}
void wheat_field::set_level(int _level){Level = _level;}

wheat_field::~wheat_field()
{
    delete ui;
}
