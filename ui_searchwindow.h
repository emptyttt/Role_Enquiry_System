/********************************************************************************
** Form generated from reading UI file 'searchwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHWINDOW_H
#define UI_SEARCHWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_searchwindow
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_1;
    QLabel *label;
    QLineEdit *search_line;
    QPushButton *search_button;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label2;
    QLineEdit *growth_line;
    QLabel *growth_value_label;
    QPushButton *growth_value_button;
    QHBoxLayout *horizontalLayout_3;
    QLabel *name_label;
    QHBoxLayout *horizontalLayout_4;
    QLabel *personality_label;
    QLabel *status_label;
    QHBoxLayout *horizontalLayout_5;
    QTextEdit *introduction;
    QPushButton *pushButton;

    void setupUi(QWidget *searchwindow)
    {
        if (searchwindow->objectName().isEmpty())
            searchwindow->setObjectName("searchwindow");
        searchwindow->resize(726, 503);
        searchwindow->setStyleSheet(QString::fromUtf8("\n"
"    border-image:url(:/back/5.jpg);\n"
"    border: 1px solid #32435E;\n"
"    background:rgb(255, 255, 0);\n"
"    border-radius: 5px;\n"
""));
        verticalLayoutWidget = new QWidget(searchwindow);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(98, 20, 541, 421));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_1 = new QHBoxLayout();
        horizontalLayout_1->setObjectName("horizontalLayout_1");
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("color:black;\n"
"font: 12pt \"\346\245\267\344\275\223\";"));

        horizontalLayout_1->addWidget(label);

        search_line = new QLineEdit(verticalLayoutWidget);
        search_line->setObjectName("search_line");

        horizontalLayout_1->addWidget(search_line);

        search_button = new QPushButton(verticalLayoutWidget);
        search_button->setObjectName("search_button");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(search_button->sizePolicy().hasHeightForWidth());
        search_button->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        search_button->setFont(font);
        search_button->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\245\267\344\275\223\";"));

        horizontalLayout_1->addWidget(search_button);


        verticalLayout_3->addLayout(horizontalLayout_1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label2 = new QLabel(verticalLayoutWidget);
        label2->setObjectName("label2");
        label2->setStyleSheet(QString::fromUtf8("color:black;\n"
"font: 12pt \"\346\245\267\344\275\223\";"));

        horizontalLayout_2->addWidget(label2);

        growth_line = new QLineEdit(verticalLayoutWidget);
        growth_line->setObjectName("growth_line");

        horizontalLayout_2->addWidget(growth_line);

        growth_value_label = new QLabel(verticalLayoutWidget);
        growth_value_label->setObjectName("growth_value_label");

        horizontalLayout_2->addWidget(growth_value_label);

        growth_value_button = new QPushButton(verticalLayoutWidget);
        growth_value_button->setObjectName("growth_value_button");
        growth_value_button->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\245\267\344\275\223\";"));

        horizontalLayout_2->addWidget(growth_value_button);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        name_label = new QLabel(verticalLayoutWidget);
        name_label->setObjectName("name_label");
        name_label->setStyleSheet(QString::fromUtf8("color:black;\n"
"font: 12pt \"\346\245\267\344\275\223\";"));

        horizontalLayout_3->addWidget(name_label);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        personality_label = new QLabel(verticalLayoutWidget);
        personality_label->setObjectName("personality_label");
        personality_label->setStyleSheet(QString::fromUtf8("color:black;\n"
"font: 12pt \"\346\245\267\344\275\223\";"));

        horizontalLayout_4->addWidget(personality_label);


        verticalLayout_3->addLayout(horizontalLayout_4);

        status_label = new QLabel(verticalLayoutWidget);
        status_label->setObjectName("status_label");
        status_label->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\245\267\344\275\223\";\n"
"color:black;"));

        verticalLayout_3->addWidget(status_label);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        introduction = new QTextEdit(verticalLayoutWidget);
        introduction->setObjectName("introduction");
        introduction->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\245\267\344\275\223\";"));

        horizontalLayout_5->addWidget(introduction);


        verticalLayout_3->addLayout(horizontalLayout_5);

        pushButton = new QPushButton(searchwindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(630, 460, 71, 24));
        pushButton->setStyleSheet(QString::fromUtf8("font: 10pt \"\346\245\267\344\275\223\";\n"
"background-color:rgbr(255,255,0,0);"));

        retranslateUi(searchwindow);

        QMetaObject::connectSlotsByName(searchwindow);
    } // setupUi

    void retranslateUi(QWidget *searchwindow)
    {
        searchwindow->setWindowTitle(QCoreApplication::translate("searchwindow", "Form", nullptr));
        label->setText(QCoreApplication::translate("searchwindow", "\346\220\234\347\264\242\357\274\232", nullptr));
        search_button->setText(QCoreApplication::translate("searchwindow", "\346\237\245\350\257\242", nullptr));
        label2->setText(QCoreApplication::translate("searchwindow", "\346\210\220\351\225\277\345\200\274\350\256\276\347\275\256\357\274\232", nullptr));
        growth_value_label->setText(QCoreApplication::translate("searchwindow", "0", nullptr));
        growth_value_button->setText(QCoreApplication::translate("searchwindow", "\350\256\276\347\275\256", nullptr));
        name_label->setText(QCoreApplication::translate("searchwindow", "\345\220\215\345\255\227\357\274\232", nullptr));
        personality_label->setText(QCoreApplication::translate("searchwindow", "\346\200\247\346\240\274\357\274\232", nullptr));
        status_label->setText(QCoreApplication::translate("searchwindow", "\350\272\253\344\273\275\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("searchwindow", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class searchwindow: public Ui_searchwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHWINDOW_H
