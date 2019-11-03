/********************************************************************************
** Form generated from reading UI file 'ecosystem.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ECOSYSTEM_H
#define UI_ECOSYSTEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ecosystem
{
public:
    QWidget *centralWidget;
    QGraphicsView *graphicsView;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_3;
    QPushButton *start;
    QSpacerItem *verticalSpacer_4;
    QPushButton *btn_pause;
    QPushButton *btn_end;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QComboBox *comboBox;
    QLabel *label;
    QLabel *label_2;
    QTextEdit *text1;
    QLabel *label_3;
    QTextEdit *text2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ecosystem)
    {
        if (ecosystem->objectName().isEmpty())
            ecosystem->setObjectName(QString::fromUtf8("ecosystem"));
        ecosystem->resize(1062, 701);
        centralWidget = new QWidget(ecosystem);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(10, -10, 771, 651));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(920, 270, 101, 321));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 5, 0, 1, 1);

        start = new QPushButton(layoutWidget);
        start->setObjectName(QString::fromUtf8("start"));
        start->setIconSize(QSize(30, 30));

        gridLayout->addWidget(start, 2, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 8, 0, 1, 1);

        btn_pause = new QPushButton(layoutWidget);
        btn_pause->setObjectName(QString::fromUtf8("btn_pause"));
        btn_pause->setIconSize(QSize(30, 30));

        gridLayout->addWidget(btn_pause, 4, 0, 1, 1);

        btn_end = new QPushButton(layoutWidget);
        btn_end->setObjectName(QString::fromUtf8("btn_end"));
        btn_end->setIconSize(QSize(30, 30));

        gridLayout->addWidget(btn_end, 7, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        comboBox = new QComboBox(centralWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(920, 110, 101, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("04b_21"));
        font.setPointSize(14);
        comboBox->setFont(font);
        comboBox->setAutoFillBackground(true);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(830, 190, 81, 41));
        label->setFont(font);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(830, 110, 81, 31));
        label_2->setFont(font);
        text1 = new QTextEdit(centralWidget);
        text1->setObjectName(QString::fromUtf8("text1"));
        text1->setGeometry(QRect(920, 30, 101, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("04b_21"));
        font1.setPointSize(20);
        text1->setFont(font1);
        text1->setLayoutDirection(Qt::LeftToRight);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(830, 30, 81, 41));
        label_3->setFont(font);
        text2 = new QTextEdit(centralWidget);
        text2->setObjectName(QString::fromUtf8("text2"));
        text2->setGeometry(QRect(920, 180, 104, 51));
        text2->setLayoutDirection(Qt::LeftToRight);
        text2->setStyleSheet(QString::fromUtf8("font: 14pt \"04b_21\";"));
        ecosystem->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ecosystem);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1062, 23));
        ecosystem->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ecosystem);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        ecosystem->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ecosystem);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        ecosystem->setStatusBar(statusBar);

        retranslateUi(ecosystem);

        QMetaObject::connectSlotsByName(ecosystem);
    } // setupUi

    void retranslateUi(QMainWindow *ecosystem)
    {
        ecosystem->setWindowTitle(QApplication::translate("ecosystem", "ecosystem", nullptr));
        start->setText(QApplication::translate("ecosystem", "\345\274\200\345\247\213", nullptr));
        btn_pause->setText(QApplication::translate("ecosystem", "\346\232\202\345\201\234", nullptr));
        btn_end->setText(QApplication::translate("ecosystem", "\347\273\223\346\235\237", nullptr));
        comboBox->setItemText(0, QApplication::translate("ecosystem", "\350\215\211", nullptr));
        comboBox->setItemText(1, QApplication::translate("ecosystem", "\351\272\213\351\271\277", nullptr));
        comboBox->setItemText(2, QApplication::translate("ecosystem", "\347\213\274", nullptr));
        comboBox->setItemText(3, QApplication::translate("ecosystem", "\350\200\201\350\231\216", nullptr));

        label->setText(QApplication::translate("ecosystem", "\344\270\226\347\225\214\345\244\247\345\260\217", nullptr));
        label_2->setText(QApplication::translate("ecosystem", "\347\224\237\347\211\251\347\261\273\345\236\213", nullptr));
        text1->setHtml(QApplication::translate("ecosystem", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'04b_21'; font-size:20pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-size:9pt;\"><br /></p></body></html>", nullptr));
        label_3->setText(QApplication::translate("ecosystem", "\346\233\264\346\226\260\346\254\241\346\225\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ecosystem: public Ui_ecosystem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ECOSYSTEM_H
