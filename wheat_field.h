#pragma once
#ifndef WHEAT_FIELD_H
#define WHEAT_FIELD_H

#include <QDialog>

namespace Ui {
class wheat_field;
}

class wheat_field : public QDialog
{
    Q_OBJECT

public:
    explicit wheat_field(QWidget *parent = nullptr);
    ~wheat_field();

private:
    Ui::wheat_field *ui;
};

#endif // WHEAT_FIELD_H
