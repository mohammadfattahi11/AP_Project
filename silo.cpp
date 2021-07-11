#include "silo.h"
#include "ui_silo.h"

silo::silo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::silo)
{
    ui->setupUi(this);
}

silo::~silo()
{
    delete ui;
}
