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
    ~place();

private:
    Ui::place *ui;
};

#endif // PLACE_H
