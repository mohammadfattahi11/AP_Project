#pragma once
#ifndef SHEEP_PASTURE_H
#define SHEEP_PASTURE_H

#include <QDialog>

namespace Ui {
class sheep_pasture;
}

class sheep_pasture : public QDialog
{
    Q_OBJECT

public:
    explicit sheep_pasture(QWidget *parent = nullptr);
    ~sheep_pasture();

private:
    Ui::sheep_pasture *ui;
};

#endif // SHEEP_PASTURE_H
