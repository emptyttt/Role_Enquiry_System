/********************************************************************************
** Form generated from reading UI file 'characterwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARACTERWINDOW_H
#define UI_CHARACTERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Characterwindow
{
public:
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;

    void setupUi(QWidget *Characterwindow)
    {
        if (Characterwindow->objectName().isEmpty())
            Characterwindow->setObjectName("Characterwindow");
        Characterwindow->resize(645, 506);
        pushButton_1 = new QPushButton(Characterwindow);
        pushButton_1->setObjectName("pushButton_1");
        pushButton_1->setGeometry(QRect(20, 10, 121, 61));
        pushButton_2 = new QPushButton(Characterwindow);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(20, 100, 121, 61));
        pushButton_3 = new QPushButton(Characterwindow);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(20, 200, 121, 61));
        pushButton_4 = new QPushButton(Characterwindow);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(20, 300, 121, 61));
        pushButton_5 = new QPushButton(Characterwindow);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(20, 400, 121, 61));

        retranslateUi(Characterwindow);

        QMetaObject::connectSlotsByName(Characterwindow);
    } // setupUi

    void retranslateUi(QWidget *Characterwindow)
    {
        Characterwindow->setWindowTitle(QCoreApplication::translate("Characterwindow", "Form", nullptr));
        pushButton_1->setText(QCoreApplication::translate("Characterwindow", "\350\264\276\345\256\235\347\216\211", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Characterwindow", "\346\236\227\351\273\233\347\216\211", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Characterwindow", "\350\226\233\345\256\235\351\222\227", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Characterwindow", "\350\226\233\350\237\240", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Characterwindow", "\347\216\213\347\206\231\345\207\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Characterwindow: public Ui_Characterwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARACTERWINDOW_H
