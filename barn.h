#pragma once

#ifndef BARN_H
#define BARN_H

#include <QDialog>
#include <QVector>
#include <deque>

using namespace std;

namespace Ui {class barn;}

class barn : public QDialog
{
    Q_OBJECT

public:

    explicit barn(QWidget *parent = nullptr, int = 0);

    ~barn();

private slots:
    void on_upgrade_clicked();

private:

    Ui::barn *ui;
    int id;

};

#endif // BARN_H
