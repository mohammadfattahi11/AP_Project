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

    if(info["alfalfa_upgrading"].toBool()){
        ui->btn_upgrade->setEnabled(false);
        if(ui->alfalfa_upgrade_pro->value() == 100){
            info["exp"] = QJsonValue(info["exp"].toInt() + 3); //when upgrade finished
            info["alfalfa_level"] = QJsonValue(info["alfalfa_level"].toInt() + 1);

            QJsonArray info_2 = _info["User"].toArray();
            info_2[id] = QJsonValue(info);
            _info["User"] = info_2;
            write_info(_info);

            ui->btn_upgrade->setEnabled(true);
        }
    }

    _info = read_info();
    info = (_info["User"].toArray())[id].toObject();

    ui->spinBox->setMaximum(5 * pow(2, info["alfalfa_level"].toInt() - 1));
    ui->lbl_area_value->setText(QString::number(5 * pow(2, info["alfalfa_level"].toInt() - 1)));
    ui->lbl_level_value->setText(QString::number(info["alfalfa_level"].toInt()));
    ui->lbl_cultivated_area_value->setText(QString::number(info["alfalfa_cultivated_area"].toInt()));
}

alfalfa_field::~alfalfa_field()
{
    delete ui; 
}

void alfalfa_field::on_btn_upgrade_clicked()
{

}

void alfalfa_field::on_btn_seed_clicked()
{

}

void alfalfa_field::on_btn_harvesting_clicked()
{

}
