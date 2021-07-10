#include "store.h"
#include "ui_store.h"
#include "information.h"
#include<QJsonObject>


store::store(QWidget *parent, int _id) :
    QDialog(parent),
    ui(new Ui::store)
{
    id=_id;
    ui->setupUi(this);
    QJsonObject _info = read_info();
    QJsonObject info = (_info["User"].toArray())[id].toObject();
    ui->coin_label->setText(QString::number(info["coin"].toInteger()));
}

store::~store()
{
    delete ui;

}



void store::on_sell_pushButton_clicked()
{
    QJsonObject _info = read_info();
    QJsonObject info = (_info["User"].toArray())[id].toObject();
    int cow_num,hen_num,wool_num,sheep_num,nail_num,milk_num,egg_num,wheat_num,alfalfa_num,shovel_num;


    cow_num=ui->cow_spinBox->text().toInt();
    if(cow_num>info["cow_count"].toInteger())
    {
        QMessageBox::warning(this," ","you don't have enough cow to sell :(");
        return;
    }


    hen_num=ui->hen_spinBox->text().toInt();
    if(hen_num>info["chicken_count"].toInteger())
    {
        QMessageBox::warning(this," ","you don't have enough hen to sell :(");
        return;
    }


    sheep_num=ui->sheep_spinBox->text().toInt();
    if(sheep_num>info["sheep_count"].toInteger())
    {
        QMessageBox::warning(this," ","you don't have enough sheep to sell :(");
        return;
    }


    nail_num=ui->nail_spinBox->text().toInt();
    if(nail_num>info["nail_count"].toInteger())
    {
        QMessageBox::warning(this," ","you don't have enough neil to sell :(");
        return;
    }


    milk_num=ui->milk_spinBox->text().toInt();
    if(milk_num>info["milk_count"].toInteger())
    {
        QMessageBox::warning(this," ","you don't have enough milk to sell :(");
        return;
    }


    egg_num=ui->egg_spinBox->text().toInt();
    if(egg_num>info["eggs_count"].toInteger())
    {
        QMessageBox::warning(this," ","you don't have enough egg to sell :(");
        return;
    }


    wheat_num=ui->wheat_pinBox->text().toInt();
    if(wheat_num>info["wheat_count"].toInteger())
    {
        QMessageBox::warning(this," ","you don't have enough wheat to sell :(");
        return;
    }


    alfalfa_num=ui->alfala_spinBox->text().toInt();
    if(alfalfa_num>info["alfalfa_count"].toInteger())
    {
        QMessageBox::warning(this," ","you don't have enough alfalfa to sell :(");
        return;
    }


    shovel_num=ui->shovel_spinBox->text().toInt();
    if(shovel_num>info["shovel_count"].toInteger())
    {
        QMessageBox::warning(this," ","you don't have enough shovel to sell :(");
        return;
    }


    wool_num=ui->wool_spinBox->text().toInt();
    if(wool_num>info["fleece_count"].toInteger())
    {
        QMessageBox::warning(this," ","you don't have enough wool to sell :(");
        return;
    }

    int reciving_coins=wool_num*23+shovel_num*30+nail_num*20+sheep_num*70+milk_num*12+cow_num*50+egg_num*8+hen_num*15+alfalfa_num*4+wheat_num*2;
    info["coin"]=info["coin"].toInteger()+reciving_coins;

    info["fleece_count"]=info["fleece_count"].toInteger()-wool_num;
    info["shovel_count"]=info["shovel_count"].toInteger()-shovel_num;
    info["alfalfa_count"]=info["alfalfa_count"].toInteger()-alfalfa_num;
    info["wheat_count"]=info["wheat_count"].toInteger()-wheat_num;
    info["eggs_count"]=info["eggs_count"].toInteger()-egg_num;
    info["milk_count"]=info["milk_count"].toInteger()-milk_num;
    info["nail_count"]=info["nail_count"].toInteger()-nail_num;
    info["sheep_count"]=info["sheep_count"].toInteger()-sheep_num;
    info["cow_count"]=info["cow_count"].toInteger()-cow_num;
    info["chicken_count"]=info["chicken_count"].toInteger()-hen_num;


    ui->coin_label->setText(QString::number(info["coin"].toInteger()));



    QJsonArray info_2 = _info["User"].toArray();
       info_2[id] = QJsonValue(info);
       _info["User"] = info_2;
        write_info(_info);

}

