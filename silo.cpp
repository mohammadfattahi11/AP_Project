#include "silo.h"
#include "ui_silo.h"

silo::silo(QWidget *parent, int _id) :
    QDialog(parent),
    ui(new Ui::silo)
{
    id = _id;
    ui->setupUi(this);
}

silo::~silo()
{
    delete ui;
}
