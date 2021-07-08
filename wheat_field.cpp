#include "wheat_field.h"
#include "ui_wheat_field.h"

wheat_field::wheat_field(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::wheat_field)
{
    ui->setupUi(this);
}

wheat_field::~wheat_field()
{
    delete ui;
}
