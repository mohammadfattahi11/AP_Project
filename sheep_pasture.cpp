#include "sheep_pasture.h"
#include "ui_sheep_pasture.h"

sheep_pasture::sheep_pasture(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sheep_pasture)
{
    ui->setupUi(this);
}

sheep_pasture::~sheep_pasture()
{
    delete ui;
}
