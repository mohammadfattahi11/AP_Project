#pragma once
#ifndef COW_PASTURE_H
#define COW_PASTURE_H

#include <QDialog>

namespace Ui {
class cow_pasture;
}

class cow_pasture : public QDialog
{
    Q_OBJECT

public:
    explicit cow_pasture(QWidget *parent = nullptr);
    ~cow_pasture();

private:
    Ui::cow_pasture *ui;
};

#endif // COW_PASTURE_H
