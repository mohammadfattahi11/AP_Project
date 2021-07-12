#ifndef STORE_H
#define STORE_H

#include <QDialog>

namespace Ui {
class store;
}

class store : public QDialog
{
    Q_OBJECT

public:
    explicit store(QWidget *parent = nullptr);
    ~store();



private:
    Ui::store *ui;
};

#endif // STORE_H
