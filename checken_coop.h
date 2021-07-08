#pragma once
#ifndef CHECKEN_COOP_H
#define CHECKEN_COOP_H

#include <QDialog>

namespace Ui {
class checken_coop;
}

class checken_coop : public QDialog
{
    Q_OBJECT

public:
    explicit checken_coop(QWidget *parent = nullptr);
    ~checken_coop();

private:
    Ui::checken_coop *ui;
};

#endif // CHECKEN_COOP_H
