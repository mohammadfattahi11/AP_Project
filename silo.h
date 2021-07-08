#pragma once
#ifndef SILO_H
#define SILO_H

#include <QDialog>

namespace Ui {
class silo;
}

class silo : public QDialog
{
    Q_OBJECT

public:
    explicit silo(QWidget *parent = nullptr);
    ~silo();

private:
    Ui::silo *ui;
};

#endif // SILO_H
