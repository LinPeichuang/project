/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer;
    QTextBrowser *textBrowser;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QSpinBox *spinBox;
    QPushButton *start1;
    QPushButton *end1;
    QHBoxLayout *horizontalLayout;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_3;
    QLabel *label_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(765, 502);
        MainWindow->setMaximumSize(QSize(765, 502));
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        widget = new QWidget(MainWindow);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame = new QFrame(widget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMaximumSize(QSize(250, 16777215));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        textBrowser = new QTextBrowser(frame);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        verticalLayout_5->addWidget(textBrowser);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 87 14pt \"Arial Black\";"));

        verticalLayout_5->addWidget(label);

        spinBox = new QSpinBox(frame);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setStyleSheet(QString::fromUtf8("font: 20pt \"04b_21\";"));

        verticalLayout_5->addWidget(spinBox);


        verticalLayout->addLayout(verticalLayout_5);

        start1 = new QPushButton(frame);
        start1->setObjectName(QString::fromUtf8("start1"));
        start1->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 240, 255);"));

        verticalLayout->addWidget(start1);

        end1 = new QPushButton(frame);
        end1->setObjectName(QString::fromUtf8("end1"));
        end1->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 235, 255);"));

        verticalLayout->addWidget(end1);


        gridLayout->addWidget(frame, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        frame_2 = new QFrame(widget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame_3 = new QFrame(frame_2);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setStyleSheet(QString::fromUtf8("background-image: url(:/animals/Resources/desktop.png);"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 130, 381, 201));
        label_2->setStyleSheet(QString::fromUtf8("background-image: url(:/animals/Resources/bd1.png);\n"
"font: 28pt \"\346\245\267\344\275\223\";\n"
"\n"
""));

        verticalLayout_2->addWidget(frame_3);


        horizontalLayout->addWidget(frame_2);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(widget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        textBrowser->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /><span style=\" font-size:16pt; font-weight:600; color:#3a3a3a;\">\347\256\200\344\273\213</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; color:#6f6f6f;\">\351\273\230\350\256\244\347\232\204\347\224\237\346\200\201\347\263\273\347\273\237\347\224\237\347\211\251\344\270\272\357\274\232\351\235\222\350\215\211\357\274\214\345\205\224\345\255\220\357\274\214\347\213\220\347\213\270\357\274\214\351\200\232\350\277\207\351\242\204\345\205\210\350"
                        "\256\276\345\256\232\350\277\233\350\241\214\346\215\225\351\243\237\343\200\202\345\205\224\345\255\220\345\222\214\347\213\220\347\213\270\345\220\214\346\227\266\346\234\211\345\271\264\351\276\204\351\231\220\345\210\266\343\200\202</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\344\270\226\347\225\214\347\232\204\345\244\247\345\260\217", nullptr));
        start1->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213", nullptr));
        end1->setText(QApplication::translate("MainWindow", "\347\273\223\346\235\237", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">\344\273\277\347\234\237\347\224\237\346\200\201\347\263\273\347\273\237GUI</p><p align=\"center\"><span style=\" font-size:16pt;\">        --18\347\275\221\345\267\2457\347\217\255\346\236\227\345\237\271\345\210\233</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
