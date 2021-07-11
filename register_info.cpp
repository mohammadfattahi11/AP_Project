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

//register_info::register_info(const register_info & _register_info)
//{
//    Fullname = _register_info.Fullname;
//    Username = _register_info.Username;
//    Email = _register_info.Email;
//    Password = _register_info.Password;
//    Gender = _register_info.Gender;
//}

//void register_info::operator=(const register_info & _register_info)
//{
//    Fullname = _register_info.Fullname;
//    Username = _register_info.Username;
//    Email = _register_info.Email;
//    Password = _register_info.Password;
//    Gender = _register_info.Gender;
//}

////////
//QString register_info::get_Fullname(){return  Fullname;}
//QString register_info::get_Username(){return  Username;}
//QString register_info::get_Password(){return  Password;}
//QString register_info::get_Email(){return  Email;}
//QString register_info::get_Gender(){return  Gender;}
////////
//void register_info::set_Fullname(QString Fullname){Fullname = Fullname;}
//void register_info::set_Username(QString Username){Username = Username;}
//void register_info::set_Password(QString Password){Password = Password;}
//void register_info::set_Email(QString Email){Email = Email;}
//void register_info::set_Gender(QString Gender){Gender = Gender;}

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
                obj["gender"]=ui->comboBox->currentText();
                obj["level_palyer"]=1;
                obj["coin"]=20;
                obj["exp"]=0;

                obj["sheep_count"]=0;
                obj["sheep_level"]=0;
                obj["fleece_count"]=0;
                obj["sheep_feed_time"] = -1 ;
                obj["sheep_upgrade_time"] = -1;


                obj["cow_count"]=0;
                obj["cow_level"]=0;
                obj["milk_count"]=0;  ///////////////////////

                obj["chicken_count"] = 0 ;
                obj["chicken_level"] = 0 ;
                obj["chicken_feed_time"] = -1 ;
                obj["eggs_count"] = 0;
                obj["chicken_upgrade_time"] = -1;

                obj["silo_level"]=1;
                obj["nail_count"]=1;
                obj["shovel_count"]=0;

                obj["barn_level"]=1;

                obj["wheat_level"]=1;
                obj["wheat_count"]=1;
                obj["wheat_cultivated_area"] = 0;
                obj["wheat_in_use"] = false;
                obj["wheat_seed_time"] = 0;

                obj["alfalfa_level"]=1;
                obj["alfalfa_count"]=1;
                obj["alfalfa_cultivated_area"] = 0;
                obj["alfalfa_in_use"] = false;
                obj["alfalfa_seed_time"] = 0;
                obj["alfalfa_plow_time"] = 0;
                obj["alfalfa_is_plow"] = false;



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

void register_info::on_pushButton_2_clicked()
{
    login *_login=new login;
    _login->show();
    this->close();
}

