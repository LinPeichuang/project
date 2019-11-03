#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"data.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setWindowTitle(QString("生态系统GUI"));

    connect(ui->start1,&QPushButton::pressed,this,&MainWindow::Open_Sub);

    connect(ui->end1,&QPushButton::pressed,this,&MainWindow::close);

    connect(&sub,&ecosystem::L_colse,this,&MainWindow::close_All);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow:: Open_Sub()
{
    this->hide();
    sub.show();
}
void MainWindow::close_All()
{
    sub.close();
    this->close();
}
