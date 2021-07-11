#pragma once
#include "chicken_coop.h"
#include "ui_chicken_coop.h"
#include<QJsonObject>
#include"information.h"
#include<QMessageBox>
#include<ctime>
#include<time.h>

chicken_coop::chicken_coop(QWidget *parent , int _id) :
    QDialog(parent),
    ui(new Ui::checken_coop)
{
    ui->setupUi(this);
    id = _id;
}
chicken_coop::chicken_coop(const chicken_coop& _chicken_coop){

}
void chicken_coop::operator=(const chicken_coop& _chicken_coop){}
chicken_coop::~chicken_coop()
{
    delete ui;
}



void chicken_coop::on_feed_clicked()
{
    QJsonObject _info = read_info();
    QJsonObject info = (_info["User"].toArray())[id].toObject();
    if(info["chicken_feed_time"].toInt() != -1)
    QMessageBox::warning(this , " " ,"w");
    else{

    if(info["wheat_count"].toInt() < info["chicken_count"].toInt()){
        QMessageBox::warning(this , " " ,"e ");

    }

    else{

         info["wheat_count"] = QJsonValue(info["wheat_count"].toInt() - info["chicken_count"].toInt());
              time_t _time = time(NULL);
              info["chicken_feed_time"] = _time;

              QJsonArray info_2 = _info["User"].toArray();
                 info_2[id] = QJsonValue(info);
                 _info["User"] = info_2;
                  write_info(_info);

       }
    }
}


void chicken_coop::on_collect_eggs_clicked()
{
    QJsonObject _info = read_info();
    QJsonObject info = (_info["User"].toArray())[id].toObject();
     time_t _time = time(NULL);
     if( (_time -  info["chicken_feed_time"].toInt()) >=20) //172800 )
     {
       if(ceil(5*pow(1.5,info["barn_level"].toInt()-1))<info["nail_count"].toInt()+info["shovel_count"].toInt()+info["alfalfa_count"].toInt()+info["eggs_count"].toInt()+info["milk_count"].toInt()+info["fleece_count"].toInt() + info["chicen_count"].toInt())//chicken count for added fleece number)
           QMessageBox::warning(this , " " ,"");
           else{
         info["eggs_count"] = QJsonValue(info["eggs_count"] .toInt() + info["chicken_count"].toInt());
          info["chicken_feed_time"] = -1;
         QJsonArray info_2 = _info["User"].toArray();
            info_2[id] = QJsonValue(info);
            _info["User"] = info_2;
             write_info(_info);
     }
     }
     else
           QMessageBox::warning(this , " " ," ");

}


void chicken_coop::on_upgrade_clicked()
{
    QJsonObject _info = read_info();
    QJsonObject info = (_info["User"].toArray())[id].toObject();
    if(info["nail_count"].toInt()  < 1 || info["coin"].toInt() < 10 || info["level_palyer"].toInt() < 3 || info["level_palyer"].toInt() < info["chicken_level"].toInt() + 1 )
        QMessageBox::warning(this , " " ," ");
    else{
         info["nail_count"] = QJsonValue (info["nail_count"].toInt() - 1 );
         info["coin"] = QJsonValue (info["coin"].toInt() - 10 );
         time_t _time = time(NULL);
         info["chicken_upgrade_time"] = _time;
         QJsonArray info_2 = _info["User"].toArray();
            info_2[id] = QJsonValue(info);
            _info["User"] = info_2;
             write_info(_info);
    }
}
