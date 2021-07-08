#pragma once

#ifndef SHEEP_PASTURE_H
#define SHEEP_PASTURE_H

#include <QDialog>
#include "place.h"

namespace Ui {class sheep_pasture;}

class sheep_pasture : public QDialog
{
    Q_OBJECT

public:
    explicit sheep_pasture(QWidget *parent = nullptr);
    sheep_pasture(const sheep_pasture&);
    void operator=(const sheep_pasture&);
    ~sheep_pasture();

private:

    Ui::sheep_pasture *ui;

};

#endif // SHEEP_PASTURE_H
