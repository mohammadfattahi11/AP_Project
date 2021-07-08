#include "chicken_coop.h"
#include "ui_chicken_coop.h"

chicken_coop::chicken_coop(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::checken_coop)
{
    ui->setupUi(this);
}
chicken_coop::chicken_coop(const chicken_coop& _chicken_coop){

}
void chicken_coop::operator=(const chicken_coop& _chicken_coop){}
chicken_coop::~chicken_coop()
{
    delete ui;
}
