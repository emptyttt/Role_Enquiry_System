/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
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
        Widget->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        Widget->setStyleSheet(QString::fromUtf8("QWidget#Widget\n"
"{\n"
"    border-image:url(:/back/1.jpg);\n"
"    border: 1px solid #32435E;\n"
"    background:rgb(255, 255, 0);\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QLabel#label\n"
"{\n"
"    color:white;\n"
"    font-size:20pt;\n"
"    font-family:\"Microsoft Yahei\";\n"
"    font-style:itelic;\n"
"    font-weight:bold;/*\345\212\240\347\262\227*/\n"
"    text-align: center;\n"
"}\n"
"\n"
"QPushButton {\n"
"    font-family: \"STKaiti\";\n"
"    background-color: rgb(245, 144, 66); /* \347\273\277\350\211\262\350\203\214\346\231\257 */\n"
"    border: none;             /* \345\216\273\346\216\211\350\276\271\346\241\206 */\n"
"    color: white;             /* \345\255\227\344\275\223\351\242\234\350\211\262 */\n"
"    padding: 10px 20px;       /* \345\206\205\350\276\271\350\267\235 */\n"
"    text-align: center;       /* \345\261\205\344\270\255\345\257\271\351\275\220 */\n"
"    font-size: 25px;          /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    border-radius: 8px;       /* \345"
                        "\234\206\350\247\222\350\276\271\346\241\206 */\n"
"    transition: 0.3s;         /* \345\212\250\347\224\273\350\277\207\346\270\241 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(245, 191, 66); /* \351\274\240\346\240\207\346\202\254\345\201\234\345\217\230\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #3e8e41; /* \346\214\211\344\270\213\345\217\230\350\211\262 */\n"
"}\n"
""));
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName("pushButton");
        pushButton->setEnabled(true);
        pushButton->setGeometry(QRect(70, 90, 61, 121));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setFocusPolicy(Qt::FocusPolicy::StrongFocus);
        textBrowser = new QTextBrowser(Widget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setEnabled(true);
        textBrowser->setGeometry(QRect(30, 320, 256, 192));
        sizePolicy.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy);
        textBrowser->setFocusPolicy(Qt::FocusPolicy::StrongFocus);
        textBrowser->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);\n"
"font-family: \"\351\232\266\344\271\246\";\n"
"border: 2px solid rgba(0,0,0,0);\n"
""));
        input_button = new QPushButton(Widget);
        input_button->setObjectName("input_button");
        input_button->setGeometry(QRect(530, 10, 91, 41));
        sizePolicy.setHeightForWidth(input_button->sizePolicy().hasHeightForWidth());
        input_button->setSizePolicy(sizePolicy);
        input_button->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\245\267\344\275\223\";"));
        input_to_search = new QLineEdit(Widget);
        input_to_search->setObjectName("input_to_search");
        input_to_search->setGeometry(QRect(230, 10, 281, 41));
        input_to_search->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\245\267\344\275\223\";"));

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
        input_button->setText(QCoreApplication::translate("Widget", "\346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
