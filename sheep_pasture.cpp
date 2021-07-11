#include "sheep_pasture.h"
#include "ui_sheep_pasture.h"
#include"information.h"
#include<QMessageBox>
#include<cmath>
sheep_pasture::sheep_pasture(QWidget *parent , int _id) :
    QDialog(parent),
    ui(new Ui::sheep_pasture)
{
    id=_id;
    QJsonObject _info = read_info();
    QJsonObject info = (_info["User"].toArray())[id].toObject();
    ui->setupUi(this);
    ui->count->setText(info["sheep_count"].toString());
    ui->capacity->setText(QString::number( pow(2,info["sheep_level"].toInt())));
}
//sheep_pasture::sheep_pasture(const sheep_pasture& _sheep_pasture){}
//void sheep_pasture::operator=(const sheep_pasture& _sheep_pasture){}
sheep_pasture::~sheep_pasture()
{
    delete ui;
}

void sheep_pasture::on_pushButton_clicked()
{
    QJsonObject _info = read_info();
    QJsonObject info = (_info["User"].toArray())[id].toObject();
   if(info["nail_count"].toInt()  < 3 || info["shovel_count"].toInt()  < 1 || info["coin"].toInt() < 50 || info["level_palyer"].toInt() < 7 || info["level_palyer"].toInt() < info["sheep_level"].toInt() + 6 )
        QMessageBox::warning(this , " " ," ");
    else{
         info["sheep_level"] = QJsonValue(info["sheep_level"] .toInt() + 1);
         info["exp"] = QJsonValue(info["exp"].toInt() + 15);
         info["nail_count"] = QJsonValue (info["nail_count"].toInt() - 3 );
          info["shovel_count"] = QJsonValue (info["shovel_count"].toInt() - 1 );
         info["coin"] = QJsonValue (info["coin"].toInt() - 50 );
         time_t _time = time(NULL);
         info["sheep_upgrade_time"] = _time;
         QJsonArray info_2 = _info["User"].toArray();
            info_2[id] = QJsonValue(info);
            _info["User"] = info_2;
             write_info(_info);
}
}


void sheep_pasture::on_pushButton_2_clicked()
{
QJsonObject _info = read_info();
QJsonObject info = (_info["User"].toArray())[id].toObject();
if(info["sheep_feed_time"].toInt() != -1)
QMessageBox::warning(this , " " ,"w");
else{

if(info["alfalfa_count"].toInt() < info["sheep_count"].toInt()){
   QMessageBox::warning(this , " " ,"e ");

}

else{

     info["alfalfa_count"] = QJsonValue(info["alfalfa_count"].toInt() - info["sheep_count"].toInt());
         time_t _time = time(NULL);
          info["sheep_feed_time"] = _time;

         QJsonArray info_2 = _info["User"].toArray();
            info_2[id] = QJsonValue(info);
            _info["User"] = info_2;
              write_info(_info);

  }
}
}

void sheep_pasture::on_pushButton_3_clicked()
{
    QJsonObject _info = read_info();
    QJsonObject info = (_info["User"].toArray())[id].toObject();
     time_t _time = time(NULL);
     if( (_time -  info["sheep_feed_time"].toInt()) >=864000)
     {
         if(info["coin"].toInt() < info["sheep_count"].toInt()){
             QMessageBox::warning(this , " " ," ");
         }
         else{
             if(ceil(5*pow(1.5,info["barn_level"].toInt()-1))<info["nail_count"].toInt()+info["shovel_count"].toInt()+info["alfalfa_count"].toInt()+info["eggs_count"].toInt()+info["milk_count"].toInt()+info["fleece_count"].toInt() + info["sheep_count"].toInt()){//sheep count for added fleece number
                 QMessageBox::warning(this , " " ," ");
             }
             else{
         info["fleece_count"] = QJsonValue(info["fleece_count"] .toInt() + info["sheep_count"].toInt());
          info["sheep_feed_time"] = -1;


         QJsonArray info_2 = _info["User"].toArray();
            info_2[id] = QJsonValue(info);
            _info["User"] = info_2;
             write_info(_info);
     }
     }
     }
     else
           QMessageBox::warning(this , " " ," ");
}

