#pragma once

#ifndef SILO_H
#define SILO_H

#include <QDialog>

namespace Ui {class silo;}

class silo : public QDialog
{
    Q_OBJECT

public:
    explicit silo(QWidget *parent = nullptr);
//    silo(const silo&);
//    void operator=(const silo&);
    ~silo();

//    int get_Level();
//    int get_Capacity();
//    int get_Wheats_count();
//    //////
//    void set_Level(int );
//    void set_Capacity(int );
//    void set_Wheats_count(int );

private:

    Ui::silo *ui;
//    int Level;
//    int Capacity;
//    int Wheats_count;

};

#endif // SILO_H
