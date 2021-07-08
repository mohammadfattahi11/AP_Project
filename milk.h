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
    ~milk();

private:
    Ui::milk *ui;
};

#endif // MILK_H
