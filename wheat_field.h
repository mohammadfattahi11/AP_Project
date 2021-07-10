#pragma once

#ifndef WHEAT_FIELD_H
#define WHEAT_FIELD_H

#include <QDialog>

namespace Ui {class wheat_field;}

class wheat_field : public QDialog
{
    Q_OBJECT

public:
    explicit wheat_field(QWidget *parent = nullptr, int _id = 0);
//    wheat_field(const wheat_field&);
//    void operator=(const wheat_field&);
    ~wheat_field();

//    int get_area();
//    int get_level();
//    int get_cultivated_area();
//    bool get_status();
//    double get_seed_time();
//    //////
//    void set_area(int );
//    void set_level(int );
//    void set_cultivated_area(int );
//    void set_status(bool );
//    void set_seed_time(double );

private:

    Ui::wheat_field *ui;
//    int Area;
//    int Level;
//    int cultivated_area;
//    bool in_use;
//    double seed_time;

};

#endif // WHEAT_FIELD_H
