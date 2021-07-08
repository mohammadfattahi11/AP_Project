#pragma once

#ifndef ALFALFA_FIELD_H
#define ALFALFA_FIELD_H

#include <QDialog>

namespace Ui {class alfalfa_field;}

class alfalfa_field : public QDialog
{
    Q_OBJECT

public:
    explicit alfalfa_field(QWidget *parent = nullptr);
    alfalfa_field(const alfalfa_field&);
    void operator=(const alfalfa_field&);
    ~alfalfa_field();

    int get_unlock_level();
    int get_area();
    int get_level();
    void set_unlock_level(int );
    void set_level(int );
    void set_area(int );

private:

    Ui::alfalfa_field *ui;
    int Unlock_level;
    int Area;
    int Level;

};

#endif // ALFALFA_FIELD_H
