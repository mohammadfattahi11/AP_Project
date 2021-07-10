#pragma once
    
#ifndef ALFALFA_FIELD_H
#define ALFALFA_FIELD_H

#include <QDialog>

namespace Ui {class alfalfa_field;}

class alfalfa_field : public QDialog
{
    Q_OBJECT

public:
    explicit alfalfa_field(QWidget *parent = nullptr, int = 0);
//    alfalfa_field(const alfalfa_field&);
//    void operator=(const alfalfa_field&);
    ~alfalfa_field();

//    int get_unlock_level();
//    int get_area();
//    int get_level();
//    int get_cultivated_area();
//    bool get_status();
//    double get_seed_time();
//    //////
//    void set_unlock_level(int );
//    void set_level(int );
//    void set_area(int );
//    void set_cultivated_area(int );
//    void set_status(bool );
//    void set_seed_time(double );

private:

    Ui::alfalfa_field *ui;
    int id;
//    int Unlock_level;
//    int Area;
//    int Level;
//    int cultivated_area;
//    bool in_use;
//    double seed_time;
//    double plow_time;

};

#endif // ALFALFA_FIELD_H
