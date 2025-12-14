#include "ui_searchwindow.h"
#include "searchwindow.h"
#include "data.h"
#include "widget.h"
#include <vector>


searchwindow::searchwindow(QWidget* parent)
    : QWidget(parent)
    , search_ui(new Ui::searchwindow)
    //, Widget(new Widget)
{
    search_ui->setupUi(this);
    connect(search_ui->search_button,&QPushButton::clicked,this,&searchwindow::record);   //搜索值按钮连接槽
    connect(search_ui->growth_value_button,&QPushButton::clicked,this,&searchwindow::record);  //成长值按钮
}

searchwindow::~searchwindow()
{
    delete search_ui;
}

void searchwindow::paintEvent(QPaintEvent* e)
{
    QStyleOption opt;
    opt.initFrom(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}

void searchwindow::get_former_info(QString b){  //该函数用来记录widget中输入的文本
    search_ui->search_line->setText(b);
}

void searchwindow::record() {      //该函数用来获取用户输入的文本
    QString name1 = search_ui->search_line->text();
    vector<int> match_indices = find_name(name1.toStdString());
    if (match_indices.size() == 1) {
        int get_value = search_ui->growth_line->text().toInt();
        int value = setup_growth_value(table[match_indices[0]]->name, get_value);
        search_ui->growth_value_label->setText("成长值为：" + QString::number(value));
    }
    searching(match_indices);
}

void searchwindow::searching(vector<int> a) {//该函数用来查找并显示
    if (a.size() == 1) {
        search_ui->name_label->setText("姓名：" + QString::fromStdString(table[a[0]]->name));
        search_ui->status_label->setText("地位：" + QString::fromStdString(table[a[0]]->Init_status));
        search_ui->personality_label->setText("性格：" + QString::fromStdString(table[a[0]]->Init_personality));
        search_ui->introduction->setText("人物介绍：" + QString::fromStdString(table[a[0]]->introduction));
    }
    else {
        string namelist = "\0";
        for (auto index : a) {
            namelist += table[index]->name + " ";
        }
        search_ui->name_label->setText("未找到指定名字，您是否在找" + QString::fromStdString(namelist));
        search_ui->status_label->setText("\0");
        search_ui->introduction->setText("\0");
        search_ui->personality_label->setText("\0");
    }
}


