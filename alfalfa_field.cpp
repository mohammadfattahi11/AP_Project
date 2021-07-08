#include "alfalfa_field.h"
#include "ui_alfalfa_field.h"

alfalfa_field::alfalfa_field(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::alfalfa_field)
{
    ui->setupUi(this);
}

alfalfa_field::~alfalfa_field()
{
    delete ui; 
}
