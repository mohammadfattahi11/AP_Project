#pragma once

#ifndef REGISTER_INFO_H
#define REGISTER_INFO_H

#include <QDialog>

namespace Ui {class register_info;}

class register_info : public QDialog
{
    Q_OBJECT

public:
    explicit register_info(QWidget *parent = nullptr);
    register_info(const register_info&);
    void operator=(const register_info&);
    ~register_info();

    QString get_Fullname();
    QString get_Username();
    QString get_Password();
    QString get_Email();
    QString get_Gender();
    //////
    void set_Fullname(QString );
    void set_Username(QString );
    void set_Password(QString );
    void set_Email(QString );
    void set_Gender(QString );

private slots:
    void on_pushButton_clicked();

private:

    Ui::register_info *ui;
    QString Fullname;
    QString Username;
    QString Password;
    QString Email;
    QString Gender;

};

#endif // REGISTER_INFO_H
