#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QFile>
#include <QString>
#include <QPainter>
#include <QDebug>
#include <QStylePainter>
#include <QStyleOption>
#include <QStyle>
#include "characterwindow.h"
#include "data.h"
#include "searchwindow.h"
#include <qfile.h>
#include <qpainter.h>




QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    void paintEvent(QPaintEvent *e);
    void setQss1();
    void action();


private slots:
    void on_pushButton_clicked();

private:
    Ui::Widget *ui;
    Characterwindow *characterWindow;  // 指向角色窗口的指针
    searchwindow *searchWindow;
};
#endif // WIDGET_H
