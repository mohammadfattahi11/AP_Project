#pragma once

#ifndef BARN_H
#define BARN_H

#include <QDialog>
#include "milk.h"
#include <QVector>
#include <deque>

using namespace std;

namespace Ui {class barn;}

class barn : public QDialog
{
    Q_OBJECT

public:

    explicit barn(QWidget *parent = nullptr);
//    barn(const barn&);
//    void operator=(const barn&);
    ~barn();

    ///////
//    int get_Level();
//    int get_Capacity();
//    int get_Alfalfas_count();
//    int get_Nails_count();
//    int get_Shovels_count();
//    int get_Eggs_count();
//    int get_Fleeces_count();
//    deque<milk> get_Milks();
//    ///////
//    void set_Level(int );
//    void set_Capacity(int );
//    void set_Alfalfas_count(int );
//    void set_Nails_count(int );
//    void set_Shovels_count(int);
//    void set_Eggs_count(int);
//    void set_Fleeces_count(int);
//    void set_Milks(deque<milk>);

private:

    Ui::barn *ui;
//    int Level;
//    int Capacity;
//    int Alfalfas_count;
//    int Nails_count ;
//    int Shovels_count;
//    int Eggs_count;
//    int Fleeces_count;
//    deque<milk> Milk;

};

#endif // BARN_H
