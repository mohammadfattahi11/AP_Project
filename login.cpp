#include "login.h"
#include "ui_login.h"
#include<QLabel>
#include"information.h"
#include"farm.h"
#include "game.h"
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
else{
QJsonObject _info=read_info();
  QJsonArray info = _info["User"].toArray();
  for(int counter=0;counter<info.size();counter++){
     if( (info[counter].toObject())["username"]==ui->lineEdit->text()&&(info[counter].toObject())["password"]==ui->lineEdit_2->text()){
    this->close();
     farm *w=new farm;
     w->show();
   }
ui->label_7->setText("there is no any account with these username and password");
if(ui->label_7->isHidden()){
    ui->label_7->setHidden(0);
}
}
}
}

void login::on_pushButton_2_clicked()
{
    register_info* w = new register_info;
    w->show();
    this->close();
}

