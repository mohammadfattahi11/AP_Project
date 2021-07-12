#pragma once

#ifndef SILO_H
#define SILO_H

#include <QDialog>

namespace Ui {class silo;}

class silo : public QDialog
{
    Q_OBJECT

public:
    explicit silo(QWidget *parent = nullptr, int = 0);

    ~silo();



private slots:
    void on_upgrade_clicked();

private:

    Ui::silo *ui;
    int id;

};

#endif // SILO_H
