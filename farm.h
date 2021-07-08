#ifndef FARM_H
#define FARM_H

#include <QDialog>

namespace Ui {class farm;}

class farm : public QDialog
{
    Q_OBJECT

public:
    explicit farm(QWidget *parent = nullptr);
    ~farm();

private:
    Ui::farm *ui;
};

#endif // FARM_H
