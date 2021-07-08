#include "place.h"
#include "ui_place.h"

place::place(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::place)
{
    ui->setupUi(this);
}

place::~place()
{
    delete ui;
}
