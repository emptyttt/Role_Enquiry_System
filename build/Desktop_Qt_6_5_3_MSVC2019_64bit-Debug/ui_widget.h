/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *pushButton;
    QTextBrowser *textBrowser;
    QPushButton *input_button;
    QLineEdit *input_to_search;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(806, 547);
        Widget->setMouseTracking(false);
        Widget->setFocusPolicy(Qt::NoFocus);
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName("pushButton");
        pushButton->setEnabled(true);
        pushButton->setGeometry(QRect(50, 90, 93, 121));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setFocusPolicy(Qt::StrongFocus);
        textBrowser = new QTextBrowser(Widget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setEnabled(true);
        textBrowser->setGeometry(QRect(30, 320, 256, 192));
        sizePolicy.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy);
        textBrowser->setFocusPolicy(Qt::StrongFocus);
        textBrowser->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);\n"
"font-family: \"\351\232\266\344\271\246\";\n"
"border: 2px solid rgba(0,0,0,0);\n"
""));
        input_button = new QPushButton(Widget);
        input_button->setObjectName("input_button");
        input_button->setGeometry(QRect(530, 10, 75, 24));
        input_to_search = new QLineEdit(Widget);
        input_to_search->setObjectName("input_to_search");
        input_to_search->setGeometry(QRect(230, 10, 281, 21));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "\347\272\242\n"
"\346\245\274\n"
"\346\242\246", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'\351\232\266\344\271\246'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">\346\273\241  \344\270\200  \351\203\275  \350\260\201</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">\347\272\270  \346\212\212  \344\272\221  \350\247\243</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0p"
                        "x; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">\350\215\222  \345\277\203  \344\275\234  \345\205\266</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">\345\224\220  \351\205\270  \350\200\205  \344\270\255</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">\350\250\200  \346\263\252  \347\227\264  \345\221\263</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">\357\274\214  \357\274\214  \357\274\214  \357\274\201</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt;\"><br /></p></body></html>", nullptr));
        input_button->setText(QCoreApplication::translate("Widget", "AB", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
