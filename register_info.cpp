#include "register_info.h"
#include "ui_register_info.h"

register_info::register_info(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::register_info)
{
    ui->setupUi(this);
}

register_info::~register_info()
{
    delete ui;
}
