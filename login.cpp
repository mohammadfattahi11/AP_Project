#include "login.h"
#include "ui_login.h"
#include<QLabel>
login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    ui->label_7->setHidden(1);
}

login::~login()
{
    delete ui;
}

void login::on_pushButton_clicked()
{
if(ui->lineEdit->text().isEmpty()||ui->lineEdit_2->text().isEmpty()){
    ui->label_7->setText("username or password is empty please fill both of them");
    if(ui->label_7->isHidden()){
        ui->label_7->setHidden(0);
    }

}
}

