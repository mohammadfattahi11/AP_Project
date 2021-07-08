#include "checken_coop.h"
#include "ui_checken_coop.h"

checken_coop::checken_coop(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::checken_coop)
{
    ui->setupUi(this);
}

checken_coop::~checken_coop()
{
    delete ui;
}
