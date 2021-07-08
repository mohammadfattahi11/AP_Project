#pragma once
#ifndef BARN_H
#define BARN_H

#include <QDialog>

namespace Ui {
class barn;
}

class barn : public QDialog
{
    Q_OBJECT

public:
    explicit barn(QWidget *parent = nullptr);
    ~barn();

private:
    Ui::barn *ui;
};

#endif // BARN_H
