#include "register_info.h"
#include "ui_register_info.h"

register_info::register_info(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::register_info)
{
    ui->setupUi(this);
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
void register_info::set_Fullname(QString _Fullname){Fullname = _Fullname;}
void register_info::set_Username(QString _Username){Username = _Username;}
void register_info::set_Password(QString _Password){Password = _Password;}
void register_info::set_Email(QString _Email){Email = _Email;}
void register_info::set_Gender(QString _Gender){Gender = _Gender;}

register_info::~register_info()
{
    delete ui;
}
