#include "milk.h"
#include "ui_milk.h"

milk::milk(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::milk)
{
    ui->setupUi(this);
}

milk::~milk()
{
    delete ui;
}
