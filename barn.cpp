#include "barn.h"
#include "ui_barn.h"

barn::barn(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::barn)
{
    ui->setupUi(this);
}

barn::~barn()
{
    delete ui;
}
