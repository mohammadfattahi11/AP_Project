#include "milk.h"
#include "ui_milk.h"

milk::milk(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::milk)
{
    ui->setupUi(this);
}
//milk::milk(const milk& _milk){Collect_milk_time = _milk.Collect_milk_time;}
//void milk::operator=(const milk& _milk){Collect_milk_time = _milk.Collect_milk_time;}
////////
//double milk::get_collect_milk_time(){return Collect_milk_time;}
////////
//void milk::set_collect_milk_time(double _collect_milk_time){Collect_milk_time = _collect_milk_time;}

milk::~milk()
{
    delete ui;
}
