#pragma once

#ifndef ALFALFA_FIELD_H
#define ALFALFA_FIELD_H

#include <QDialog>

namespace Ui {
class alfalfa_field;
}

class alfalfa_field : public QDialog
{
    Q_OBJECT

public:
    explicit alfalfa_field(QWidget *parent = nullptr);
    ~alfalfa_field();

private:
    Ui::alfalfa_field *ui;
};

#endif // ALFALFA_FIELD_H
