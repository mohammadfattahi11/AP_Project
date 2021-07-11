#pragma once

#ifndef SHEEP_PASTURE_H
#define SHEEP_PASTURE_H

#include <QDialog>
#include "place.h"

namespace Ui {class sheep_pasture;}

class sheep_pasture : public QDialog
{
    Q_OBJECT

public:
    explicit sheep_pasture(QWidget *parent = nullptr, int _id= 0);
//    sheep_pasture(const sheep_pasture&);
//    void operator=(const sheep_pasture&);
    ~sheep_pasture();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:

    Ui::sheep_pasture *ui;
int id;
};

#endif // SHEEP_PASTURE_H
