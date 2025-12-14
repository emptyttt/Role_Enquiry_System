#include "widget.h"
#include "characterwindow.h"
#include "data.h"
#include <QApplication>
#include <QSoundEffect>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    Characterwindow c;
    w.show();
    w.setQss1();
    //c.setQss2();
    //播放音频
    QSoundEffect *music = new QSoundEffect();
    music->setSource(QUrl::fromLocalFile(":/music/music1.wav"));
    music->setLoopCount(QSoundEffect::Infinite);  //设置无限循环
    music->setVolume(0.5f);  //设置音量，在0到1之间
    music->play();
    return a.exec();
}


