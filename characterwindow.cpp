#include "ui_characterwindow.h"
#include "characterwindow.h"
#include "ui_searchwindow.h"
#include "widget.h"
#include <vector>

Characterwindow::Characterwindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Characterwindow)
    , search_ui(new searchwindow)
{
    ui->setupUi(this);
   // this->setQss2();
    connect(ui->c1, &QPushButton::clicked, this, [this]() { Characterwindow::to_specify_character(0); });
    connect(ui->c2, &QPushButton::clicked, this, [this]() { Characterwindow::to_specify_character(1); });          //这里的数字对应的是table[]表中的人物序号
    connect(ui->c3, &QPushButton::clicked, this, [this]() { Characterwindow::to_specify_character(2); });
    connect(ui->c4, &QPushButton::clicked, this, [this]() { Characterwindow::to_specify_character(3); });
    connect(ui->c5, &QPushButton::clicked, this, [this]() { Characterwindow::to_specify_character(4); });      //特别提醒，如果序号断层，则程序会崩溃，就是说
    connect(ui->c6, &QPushButton::clicked, this, [this]() { Characterwindow::to_specify_character(5); });      //如果table[]中人物序号不连续，则从不连续的地方开始的部分都会崩溃
    connect(ui->c7, &QPushButton::clicked, this, [this]() { Characterwindow::to_specify_character(6); });
    connect(ui->c8, &QPushButton::clicked, this, [this]() { Characterwindow::to_specify_character(7); });
    connect(ui->c9, &QPushButton::clicked, this, [this]() { Characterwindow::to_specify_character(8); });
    connect(ui->c10, &QPushButton::clicked, this, [this]() { Characterwindow::to_specify_character(9); });
    connect(ui->c11, &QPushButton::clicked, this, [this]() { Characterwindow::to_specify_character(10); });
    connect(ui->c12, &QPushButton::clicked, this, [this]() { Characterwindow::to_specify_character(11); });
    connect(ui->c13, &QPushButton::clicked, this, [this]() { Characterwindow::to_specify_character(12); });
    connect(ui->c14, &QPushButton::clicked, this, [this]() { Characterwindow::to_specify_character(13); });
    connect(ui->c15, &QPushButton::clicked, this, [this]() { Characterwindow::to_specify_character(14); });
    connect(ui->c16, &QPushButton::clicked, this, [this]() { Characterwindow::to_specify_character(15); });
    connect(ui->c17, &QPushButton::clicked, this, [this]() { Characterwindow::to_specify_character(16); });
    connect(ui->c18, &QPushButton::clicked, this, [this]() { Characterwindow::to_specify_character(17); });
    connect(ui->c19, &QPushButton::clicked, this, [this]() { Characterwindow::to_specify_character(18); });
    connect(ui->c20, &QPushButton::clicked, this, [this]() { Characterwindow::to_specify_character(19); });
    connect(ui->c21, &QPushButton::clicked, this, [this]() { Characterwindow::to_specify_character(20); });
    connect(ui->c22, &QPushButton::clicked, this, [this]() { Characterwindow::to_specify_character(21); });
    connect(ui->c23, &QPushButton::clicked, this, [this]() { Characterwindow::to_specify_character(22); });
    connect(ui->c24, &QPushButton::clicked, this, [this]() { Characterwindow::to_specify_character(23); });
    connect(ui->c25, &QPushButton::clicked, this, [this]() { Characterwindow::to_specify_character(24); });
    connect(ui->c26, &QPushButton::clicked, this, [this]() { Characterwindow::to_specify_character(25); });
    connect(ui->c27, &QPushButton::clicked, this, [this]() { Characterwindow::to_specify_character(26); });
    connect(ui->c28, &QPushButton::clicked, this, [this]() { Characterwindow::to_specify_character(27); });
    connect(ui->c36, &QPushButton::clicked, this, [this]() { Characterwindow::to_specify_character(28); });
    connect(ui->c37, &QPushButton::clicked, this, [this]() { Characterwindow::to_specify_character(29); });
    connect(ui->c31, &QPushButton::clicked, this, [this]() { Characterwindow::to_specify_character(30); });
    connect(ui->c32, &QPushButton::clicked, this, [this]() { Characterwindow::to_specify_character(31); });
    connect(ui->c33, &QPushButton::clicked, this, [this]() { Characterwindow::to_specify_character(32); });
    connect(ui->c34, &QPushButton::clicked, this, [this]() { Characterwindow::to_specify_character(33); });
    connect(ui->c35, &QPushButton::clicked, this, [this]() { Characterwindow::to_specify_character(34); });
    connect(ui->c36, &QPushButton::clicked, this, [this]() { Characterwindow::to_specify_character(35); });
    connect(ui->c37, &QPushButton::clicked, this, [this]() { Characterwindow::to_specify_character(36); });
    connect(ui->c38, &QPushButton::clicked, this, [this]() { Characterwindow::to_specify_character(37); });
    connect(ui->c39, &QPushButton::clicked, this, [this]() { Characterwindow::to_specify_character(38); });
    connect(ui->c40, &QPushButton::clicked, this, [this]() { Characterwindow::to_specify_character(39); });
    connect(ui->c41, &QPushButton::clicked, this, [this]() { Characterwindow::to_specify_character(40); });
    connect(ui->c42, &QPushButton::clicked, this, [this]() { Characterwindow::to_specify_character(41); });

}

Characterwindow::~Characterwindow()
{
    delete ui;
    delete search_ui;
}
void Characterwindow::paintEvent(QPaintEvent* e)
{
    QStyleOption opt;
    opt.initFrom(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}

/*void Characterwindow::setQss2()
{
    QFile file("file/myqss.qss");
    // QFile file("Role_Enquiry_System\\file\\myqss.qss");
    // QFile file("../../../file/myqss.qss");
    // QFile file("../../file/myqss.qss");
    file.open(QFile::ReadOnly);
    // file.open(QIODevice::ReadOnly);
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
}*/


void Characterwindow::to_specify_character(int value)
{
    vector<int> tmp;
    tmp.insert(tmp.begin(),value);
    search_ui->searching(tmp);
    search_ui->show();
    //this->hide();                // 隐藏主窗口
    //this->close();            // 关闭当前窗口
}



