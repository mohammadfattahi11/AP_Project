#include "cow_pasture.h"
#include "ui_cow_pasture.h"

cow_pasture::cow_pasture(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cow_pasture)
{
    ui->setupUi(this);
}
cow_pasture::cow_pasture(const cow_pasture& _cow_pasture){}
void cow_pasture::operator=(const cow_pasture& _cow_pasture){}
cow_pasture::~cow_pasture()
{
    delete ui;
}