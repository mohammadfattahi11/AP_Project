#pragma once

#ifndef COW_PASTURE_H
#define COW_PASTURE_H

#include <QDialog>
#include "place.h"
#include "milk.h"

namespace Ui {class cow_pasture;}

class cow_pasture : public QDialog
{
    Q_OBJECT

public:
    explicit cow_pasture(QWidget *parent = nullptr);
//    cow_pasture(const cow_pasture&);
//    void operator=(const cow_pasture&);
    ~cow_pasture();

//    milk get_milk();
//    void set_milk(milk );

private:

    Ui::cow_pasture *ui;
//    milk Milk;

};

#endif // COW_PASTURE_H
