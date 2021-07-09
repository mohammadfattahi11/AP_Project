#include "register_info.h"
#include "ui_register_info.h"
#include"information.h"
#include"login.h"
#include<QMessageBox>
register_info::register_info(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::register_info)
{
    ui->setupUi(this);
    ui->lineEdit_3->setEchoMode(QLineEdit::Password);
    ui->lineEdit_4->setEchoMode(QLineEdit::Password);
}

register_info::register_info(const register_info & _register_info)
{
    Fullname = _register_info.Fullname;
    Username = _register_info.Username;
    Email = _register_info.Email;
    Password = _register_info.Password;
    Gender = _register_info.Gender;
}

void register_info::operator=(const register_info & _register_info)
{
    Fullname = _register_info.Fullname;
    Username = _register_info.Username;
    Email = _register_info.Email;
    Password = _register_info.Password;
    Gender = _register_info.Gender;
}

//////
QString register_info::get_Fullname(){return  Fullname;}
QString register_info::get_Username(){return  Username;}
QString register_info::get_Password(){return  Password;}
QString register_info::get_Email(){return  Email;}
QString register_info::get_Gender(){return  Gender;}
//////
void register_info::set_Fullname(QString Fullname){Fullname = Fullname;}
void register_info::set_Username(QString Username){Username = Username;}
void register_info::set_Password(QString Password){Password = Password;}
void register_info::set_Email(QString Email){Email = Email;}
void register_info::set_Gender(QString Gender){Gender = Gender;}

register_info::~register_info()
{
    delete ui;
}

void register_info::on_pushButton_clicked()
{
    QJsonObject _info=read_info();
    QJsonArray info = _info["User"].toArray();
    if(ui->lineEdit->text().isEmpty()||ui->lineEdit_2->text().isEmpty()||ui->lineEdit_3->text().isEmpty()||ui->lineEdit_4->text().isEmpty()||ui->lineEdit_5->text().isEmpty())
     QMessageBox::warning(this ," " , "one or more line is empty");

    else{
        bool usernumber=0;
        if(ui->lineEdit_3->text()!=ui->lineEdit_4->text()){
             QMessageBox::warning(this ," " , "confirm password is not equal to password");
        }
        else{

            for(int counter=0;counter<info.size();counter++){
                if( (info[counter].toObject())["username"]==ui->lineEdit_2->text()){
                    usernumber = 1;
                    break;
                }
            }
            if(usernumber){
                QMessageBox::warning(this ," " , "this username have already used");
            }
            else{
                QJsonObject obj;
                obj["name"]=ui->lineEdit->text();
                obj["username"]=ui->lineEdit_2->text();
                obj["password"]=ui->lineEdit_3->text();
                obj["email"]=ui->lineEdit_5->text();
                obj["level"]=1;
                obj["coin"]=20;
                obj["cow_count"]=0;
                obj["sheep_count"]=0;
                obj["chicken_count"]=0;
                obj["exp"]=0;
                obj["alfalfa_field"]=0;
                obj["wheat_field"]=5;
                obj["sheep_pasture"]=0;
                obj["cow_pasture"]=0;
                obj["chicken_coop"]=0;
                obj["silo"]=1;
                obj["alfalfa"]=1;
                obj["nail"]=1;
                obj["shovel"]=0;
                obj["fleece"]=0;
                obj["milk"]=0;  ///////////////////////
                obj["barn"]=1;
                obj["wheat"]=1;
                info.push_back(QJsonValue(obj));
                _info["User"]=info;
                write_info(_info);
                this->close();
                login *_login = new login;
                _login->show();
            }
        }
    }
}
