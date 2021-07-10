#pragma once

#ifndef CHECKEN_COOP_H
#define CHECKEN_COOP_H

#include <QDialog>
#include "place.h"

namespace Ui {class checken_coop;}

class chicken_coop : public QDialog
{
    Q_OBJECT

public:
    explicit chicken_coop(QWidget *parent = nullptr);
//    chicken_coop(const chicken_coop&);
//    void operator=(const chicken_coop&);
    ~chicken_coop();

private:

    Ui::checken_coop *ui;

};

#endif // CHECKEN_COOP_H
