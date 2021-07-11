#include "farm.h"
#include "ui_farm.h"

farm::farm(QWidget *parent, int _id) :
    QDialog(parent),
    ui(new Ui::farm)
{
    ui->setupUi(this);
    id = _id;
}

//farm::farm(const farm & _farm)
//{
//    Barn = _farm.Barn;
//    Silo = _farm.Silo;
//    Chicken_Coop = _farm.Chicken_Coop;
//    Cow_Pasture = _farm.Cow_Pasture;
//    Sheep_Pasture = _farm.Sheep_Pasture;
//    Alfalfa_Field = _farm.Alfalfa_Field;
//    Wheat_Field = _farm.Wheat_Field;
//}

//void farm::operator=(const farm & _farm)
//{
//    Barn = _farm.Barn;
//    Silo = _farm.Silo;
//    Chicken_Coop = _farm.Chicken_Coop;
//    Cow_Pasture = _farm.Cow_Pasture;
//    Sheep_Pasture = _farm.Sheep_Pasture;
//    Alfalfa_Field = _farm.Alfalfa_Field;
//    Wheat_Field = _farm.Wheat_Field;
//}

farm::~farm()
{
    delete ui;
}

void farm::on_pushButton_8_clicked()
{
    wheat_field* wheatField = new wheat_field(this, id);
    wheatField->show();
}
void farm::on_pushButton_3_clicked()
{
    chicken_coop * _chicken_coop = new chicken_coop(this , id);
    _chicken_coop->show();
}




void farm::on_pushButton_5_clicked()
{

}

