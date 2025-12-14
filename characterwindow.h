#ifndef CHARACTERWINDOW_H
#define CHARACTERWINDOW_H

#include <QWidget>
#include <QFile>
#include <QString>
#include "searchwindow.h"



namespace Ui {
class Characterwindow;
}

class Characterwindow : public QWidget
{
    Q_OBJECT

public:
    explicit Characterwindow(QWidget *parent = nullptr);
    ~Characterwindow();

    void paintEvent(QPaintEvent *e);
    //void setQss2();

private slots:
    void to_specify_character(int value);

private:
    Ui::Characterwindow *ui;
    searchwindow *search_ui;
};

#endif // CHARACTERWINDOW_H
