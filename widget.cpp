#include "widget.h"
#include "ui_widget.h"
#include <vector>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
    , characterWindow(new Characterwindow)  // 初始化角色窗口
    , searchWindow(new searchwindow)
{
    ui->setupUi(this);
    this->setQss1();
    
    connect(ui->pushButton, &QPushButton::clicked, this, &Widget::on_pushButton_clicked);
    connect(ui->input_button, &QPushButton::clicked, this, &Widget::action);
    
}


Widget::~Widget()
{
    delete ui;
    delete characterWindow;
    delete searchWindow;
}

void Widget::action() {
    QString name1 = ui->input_to_search->text();
    searchWindow->get_former_info(name1);
    vector<int> match_indices = find_name(name1.toStdString());       //将找到名字的序号传入
    searchWindow->searching(match_indices);
    searchWindow->show();
    this->hide();                // 隐藏主窗口
}

void Widget::paintEvent(QPaintEvent *e)
{
    QStyleOption opt;
    opt.initFrom(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}


void Widget::setQss1()
{
    QFile file("file/myqss.qss");
    file.open(QFile::ReadOnly);
    if(file.isOpen())
    {
        QString styleSheet = QString(file.readAll());
        this->setStyleSheet(styleSheet);//为整个窗口设置样式
        file.close();
        qDebug() << "success";
    }
    else
    {
        qDebug() << "error";
    }
}

void Widget::on_pushButton_clicked()
{
    ui->pushButton->setIcon(QIcon(":/icons/icon.png"));  // 设置图标
    ui->pushButton->setIconSize(QSize(40,40));         // 设置图标大小
    this->hide();                // 隐藏主窗口
    characterWindow->show();     // 显示角色窗口
}





