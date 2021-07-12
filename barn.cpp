#include "barn.h"
#include "ui_barn.h"

barn::barn(QWidget *parent, int _id) :
    QDialog(parent),
    ui(new Ui::barn)
{
    id = _id;
    ui->setupUi(this);
}

barn::~barn()
{
    delete ui;
}
