#pragma once

#ifndef MILK_H
#define MILK_H

#include <QDialog>

namespace Ui {class milk;}

class milk : public QDialog
{
    Q_OBJECT

public:
    explicit milk(QWidget *parent = nullptr);
    milk(const milk&);
    void operator=(const milk&);
    ~milk();

    double get_collect_milk_time();
    void set_collect_milk_time(double );

private:

    Ui::milk *ui;
    double Collect_milk_time;

};

#endif // MILK_H
