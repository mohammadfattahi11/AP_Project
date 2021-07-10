#pragma once

#ifndef PLACE_H
#define PLACE_H

#include <QDialog>

namespace Ui {class place;}

class place : public QDialog
{
    Q_OBJECT

public:
    explicit place(QWidget *parent = nullptr);
//    place(const place&);
//    void operator=(const place&);
    ~place();

//    int get_unlock_level();
//    int get_capacity();
//    int get_animals_count();
//    double get_feeding_time();
//    bool get_feeded();
//    bool get_product_collected();
//    //////
//    void set_capacity(int );
//    void set_animals_count(int );
//    void set_feeding_time(double );
//    void set_feeded(bool );
//    void set_product_collected(bool );

private:

    Ui::place *ui;

protected:

//    int Unlock_level;
//    int Capacity;
//    int Animals_count;
//    double Feeding_time;
//    bool Feeded;
//    bool Product_collected;

};

#endif // PLACE_H
