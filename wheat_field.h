#pragma once

#ifndef WHEAT_FIELD_H
#define WHEAT_FIELD_H

#include <QDialog>

namespace Ui {class wheat_field;}

class wheat_field : public QDialog
{
    Q_OBJECT

public:
    explicit wheat_field(QWidget *parent = nullptr);
    wheat_field(const wheat_field&);
    void operator=(const wheat_field&);
    ~wheat_field();

    int get_area();
    int get_level();
    //////
    void set_area(int );
    void set_level(int );

private:

    Ui::wheat_field *ui;
    int Area;
    int Level;

};

#endif // WHEAT_FIELD_H
