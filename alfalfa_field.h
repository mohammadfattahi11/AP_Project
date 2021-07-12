#pragma once
    
#ifndef ALFALFA_FIELD_H
#define ALFALFA_FIELD_H

#include <QDialog>

namespace Ui {class alfalfa_field;}

class alfalfa_field : public QDialog
{
    Q_OBJECT

public:
    explicit alfalfa_field(QWidget *parent = nullptr, int = 0);
    ~alfalfa_field();


private slots:
    void on_btn_upgrade_clicked();

    void on_btn_seed_clicked();

    void on_btn_harvesting_clicked();

    void on_btn_plow_clicked();

private:

    Ui::alfalfa_field *ui;
    int id;

};

#endif // ALFALFA_FIELD_H
