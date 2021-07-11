#pragma once

#ifndef FARM_H
#define FARM_H

#include <QDialog>
#include "barn.h"
#include "silo.h"
#include "chicken_coop.h"
#include "cow_pasture.h"
#include "sheep_pasture.h"
#include "wheat_field.h"
#include "alfalfa_field.h"

namespace Ui {class farm;}

class farm : public QDialog
{
    Q_OBJECT

public:
    explicit farm(QWidget *parent = nullptr, int _id = 0);
//    farm(const farm&);
//    void operator=(const farm&);
    ~farm();

//    barn get_barn();
//    silo get_silo();
//    chicken_coop get_chicken_coop();
//    cow_pasture get_cow_pasture();
//    sheep_pasture get_sheep_pasture();
//    wheat_field get_wheat_field();
//    alfalfa_field get_alfalfa_field();
//    //////
//    void set_barn(barn _Barn);
//    void set_silo(silo _Silo);
//    void set_chicken_coop(chicken_coop );
//    void set_cow_pasture(cow_pasture );
//    void set_sheep_pasture(sheep_pasture );
//    void set_wheat_field(wheat_field );
//    void set_alfalfa_field(alfalfa_field );

private slots:
    void on_pushButton_8_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_5_clicked();

private:

    Ui::farm *ui;
    int id;
//    barn Barn;
//    silo Silo;
//    chicken_coop Chicken_Coop;
//    cow_pasture Cow_Pasture;
//    sheep_pasture Sheep_Pasture;
//    wheat_field Wheat_Field;
//    alfalfa_field Alfalfa_Field;

};

#endif // FARM_H
