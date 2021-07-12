#include "alfalfa_field.h"
#include "ui_alfalfa_field.h"
#include "information.h"
#include "cmath"
#include <QMessageBox>
#include <time.h>

alfalfa_field::alfalfa_field(QWidget *parent, int _id):
    QDialog(parent),
    ui(new Ui::alfalfa_field)
{
    ui->setupUi(this);
    id = _id;
    QJsonObject _info = read_info();
    QJsonObject info = (_info["User"].toArray())[id].toObject();

    if(info["alfalfa_upgrade_time"].toInt() != -1){
        ui->btn_upgrade->setEnabled(false);
    }

    _info = read_info();
    info = (_info["User"].toArray())[id].toObject();

    ui->spinBox->setMaximum(4 * pow(2, info["alfalfa_level"].toInt() - 1));
    ui->lbl_area_value->setText(QString::number(4 * pow(2, info["alfalfa_level"].toInt() - 1)));
    ui->lbl_level_value->setText(QString::number(info["alfalfa_level"].toInt()));
    ui->lbl_cultivated_area_value->setText(QString::number(info["alfalfa_cultivated_area"].toInt()));
}

alfalfa_field::~alfalfa_field()
{
    delete ui; 
}

void alfalfa_field::on_btn_upgrade_clicked()
{
    QJsonObject _info = read_info();
    QJsonObject info = (_info["User"].toArray())[id].toObject();
    if(info["level"].toInt() < 4)
        QMessageBox::warning(this , " " , "You have not reached <b>level 4</b> yet!!!" );
    else if(info["coin"].toInt() < 5 * (4 * pow(2, info["alfalfa_level"].toInt() - 1)))
        QMessageBox::warning(this , " " , "<b>Coin</b> needed!" );
    else if(info["shovel_count"].toInt() < 2 * (4 * pow(2, info["alfalfa_level"].toInt() - 1)))
        QMessageBox::warning(this , " " , "<b>Shovel</b> needed!" );
    else{
        info["shovel_count"] = QJsonValue(info["shovel_count"].toInt() - 2 * (4 * pow(2, info["alfalfa_level"].toInt() - 1)));
        info["coin"] = QJsonValue(info["coin"].toInt() - 5 * (4 * pow(2, info["alfalfa_level"].toInt() - 1)));
        info["alfalfa_upgrading"] = QJsonValue(true);
        time_t _time = time(NULL);
        info["alfalfa_upgrade_time"] = QJsonValue(_time);
        QJsonArray info_2 = _info["User"].toArray();
        info_2[id] = QJsonValue(info);
        _info["User"] = info_2;
        write_info(_info);
    }
}

void alfalfa_field::on_btn_seed_clicked()
{
    QJsonObject _info = read_info();
    QJsonObject info = (_info["User"].toArray())[id].toObject();
    if(!info["alfalfa_plowed"].toBool())
        QMessageBox::warning(this , " " , "You have to plow field first!");
    else if(info["alfalfa_in_use"].toBool())
        QMessageBox::warning(this , " " , "After harvesting, you can seed!");
    else if(info["alfalfa_count"].toInt() < ui->spinBox->value())
        QMessageBox::warning(this , " " , "<b>Alfalfa</b> needed");
    else{
        time_t _time = time(NULL);
        info["alfalfa_cultivated_area"] = QJsonValue(ui->spinBox->value());
        info["alfalfa_seed_time"] = QJsonValue(_time);
        info["alfalfa_count"] = QJsonValue(info["alfalfa_count"].toInt() - ui->spinBox->value());
        info["alfalfa_in_use"] = QJsonValue(true);
        info["exp"] = QJsonValue(info["exp"].toInt() + 4 * pow(2, info["alfalfa_level"].toInt() - 1));
        QJsonArray info_2 = _info["User"].toArray();
        info_2[id] = QJsonValue(info);
        _info["User"] = info_2;
        write_info(_info);
    }
}

void alfalfa_field::on_btn_harvesting_clicked()
{
    QJsonObject _info = read_info();
    QJsonObject info = (_info["User"].toArray())[id].toObject();
    if(!info["alfalfa_in_use"].toBool())
        QMessageBox::warning(this , " " , "You havent seed yet!");
    else if(ui->prg_harvesting->value() != 100)
        QMessageBox::warning(this , " " , "Alfalfa isn't ripe");
    else{
        info["alfalfa_count"] = QJsonValue(info["alfalfa_count"].toInt() + 2 * info["alfalfa_cultivated_area"].toInt());
        info["alfalfa_in_use"] = QJsonValue(false);
        info["alfalfa_plowed"] = QJsonValue(false);
        info["exp"] = QJsonValue(info["exp"].toInt() + 2 * 4 * pow(2, info["alfalfa_level"].toInt() - 1));
        QJsonArray info_2 = _info["User"].toArray();
        info_2[id] = QJsonValue(info);
        _info["User"] = info_2;
        write_info(_info);
    }
}

void alfalfa_field::on_btn_plow_clicked()
{
    QJsonObject _info = read_info();
    QJsonObject info = (_info["User"].toArray())[id].toObject();
    if(info["alfalfa_in_use"].toBool())
        QMessageBox::warning(this , " " , "You havent seed yet!");
    else{
        time_t _time = time(0);
        info["alfalfa_plow_time"] = QJsonValue(_time);
        QJsonArray info_2 = _info["User"].toArray();
        info_2[id] = QJsonValue(info);
        _info["User"] = info_2;
        write_info(_info);
    }
}
