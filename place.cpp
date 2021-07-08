#include "place.h"
#include "ui_place.h"

place::place(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::place)
{
    ui->setupUi(this);
}
place::place(const place& _place){
    Unlock_level = _place.Unlock_level;
    Capacity = _place.Capacity;
    Animals_count = _place.Animals_count;
    Feeding_time = _place.Feeding_time;
    Feeded = _place.Feeded;
    Product_collected = _place.Product_collected;
}
void place::operator=(const place& _place){
    Unlock_level = _place.Unlock_level;
    Capacity = _place.Capacity;
    Animals_count = _place.Animals_count;
    Feeding_time = _place.Feeding_time;
    Feeded = _place.Feeded;
    Product_collected = _place.Product_collected;
}
//////
int place::get_unlock_level(){return Unlock_level;}
int place::get_capacity(){return Capacity;}
int place::get_animals_count(){return Animals_count;}
double place::get_feeding_time(){return Feeding_time;}
bool place::get_feeded(){return Feeded;}
bool place::get_product_collected(){return Product_collected;}
//////
void place::set_capacity(int _capacity){Capacity = _capacity;}
void place::set_animals_count(int _animals_count){Animals_count = _animals_count;}
void place::set_feeding_time(double _feeding_time){Feeding_time = _feeding_time;}
void place::set_feeded(bool _feeded){Feeded = _feeded;}
void place::set_product_collected(bool _product_collected){Product_collected = _product_collected;}

place::~place()
{
    delete ui;
}
