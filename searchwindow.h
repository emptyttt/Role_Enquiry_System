#pragma once
#include <QWidget>
#include <QFile>
#include <QString>
#include "data.h"


namespace Ui {
class searchwindow;
}

class searchwindow : public QWidget
{
    Q_OBJECT

public:
    explicit searchwindow(QWidget* parent = nullptr);
    ~searchwindow();

    void paintEvent(QPaintEvent* e);

public slots:
    void searching(vector<int> a);
    void get_former_info(QString b);
    void record();

private:
    Ui::searchwindow* search_ui;
    QWidget* Widget;

};
