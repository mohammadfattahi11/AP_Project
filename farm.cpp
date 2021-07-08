#include "farm.h"
#include "ui_farm.h"

farm::farm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::farm)
{
    ui->setupUi(this);
}

farm::~farm()
{
    delete ui;
}
