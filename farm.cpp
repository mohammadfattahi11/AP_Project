#include "farm.h"
#include "ui_farm.h"

farm::farm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::farm)
{
    ui->setupUi(this);
}

farm::farm(const farm & _farm)
{
    Barn = _farm.Barn;
    Silo = _farm.Silo;
    Chicken_Coop = _farm.Chicken_Coop;
    Cow_Pasture = _farm.Cow_Pasture;
    Sheep_Pasture = _farm.Sheep_Pasture;
    Alfalfa_Field = _farm.Alfalfa_Field;
    Wheat_Field = _farm.Wheat_Field;
}

void farm::operator=(const farm & _farm)
{
    Barn = _farm.Barn;
    Silo = _farm.Silo;
    Chicken_Coop = _farm.Chicken_Coop;
    Cow_Pasture = _farm.Cow_Pasture;
    Sheep_Pasture = _farm.Sheep_Pasture;
    Alfalfa_Field = _farm.Alfalfa_Field;
    Wheat_Field = _farm.Wheat_Field;
}

farm::~farm()
{
    delete ui;
}

void farm::on_pushButton_8_clicked()
{
    Wheat_Field.show();
}

