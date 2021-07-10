#include "wheat_field.h"
#include "ui_wheat_field.h"
#include "information.h"
#include "cmath"
#include<QMessageBox>
#include<time.h>

using namespace std;

wheat_field::wheat_field(QWidget *parent, int _id) :
    QDialog(parent),
    ui(new Ui::wheat_field)
{
    id = _id;
    ui->setupUi(this);
    QJsonObject _info = read_info();
    QJsonObject info = (_info["User"].toArray())[id].toObject();

    if(info["wheat_in_use"].toBool()){
      QMessageBox::warning(this , " " , " ");
    }

    ui->spinBox->setMaximum(5 * pow(2, info["wheat_level"].toInt() - 1));
    ui->label_3->setText(QString::number(5 * pow(2, info["wheat_level"].toInt() - 1)));
    ui->label_4->setText(QString::number(info["wheat_level"].toInt()));
    ui->label_6->setText(QString::number(info["wheat_cultivated_area"].toInt()));

}

wheat_field::~wheat_field()
{
    delete ui;
}

void wheat_field::on_upgrade_clicked()
{
    QJsonObject _info = read_info();
    QJsonObject info = (_info["User"].toArray())[id].toObject();
    if(info["shovel_count"].toInt() < 1 || info["coin"].toInt() < 5 || info["level"].toInt() < 2 )
        QMessageBox::warning(this , " " , " " );
    else{
        info["shovel_count"] = QJsonValue(info["shovel_count"].toInt() - 1);
        info["coin"] = QJsonValue(info["coin"].toInt() - 5);


        info["exp"] = QJsonValue(info["exp"].toInt() + 3);
        info["wheat_level"] = QJsonValue(info["wheat_level"].toInt() + 1);
        time_t _time = time(NULL);
        info["wheat_upgrade_time"] = _time;
        QJsonArray info_2 = _info["User"].toArray();
        info_2[id] = QJsonValue(info);
        _info["User"] = info_2;
        write_info(_info);

    }

}


void wheat_field::on_seed_clicked()
{
    QJsonObject _info = read_info();
    QJsonObject info = (_info["User"].toArray())[id].toObject();
    if(info["wheat_count"].toInt() < ui->spinBox->value())
        QMessageBox::warning(this , " " , " ");
    else
    {
        time_t _time = time(NULL);
        info["wheat_cultivated_area"] = ui->spinBox->value();
        info["wheat_seed_time"] = _time;
        info["wheat_count"] = info["wheat_count"].toInt() - ui->spinBox->value();
        QJsonArray info_2 = _info["User"].toArray();
        info_2[id] = QJsonValue(info);
        _info["User"] = info_2;
        write_info(_info);
    }
}



void wheat_field::on_Harvesting_clicked()
{
    QJsonObject _info = read_info();
    QJsonObject info = (_info["User"].toArray())[id].toObject();
    if(ui->progressBar->value() == 100)
        info["wheat_count"] = info["wheat_count"].toInt() + 2 * info["wheat_cultivated_area"].toInt();

    else
        QMessageBox::warning(this , " " , " ");


}
