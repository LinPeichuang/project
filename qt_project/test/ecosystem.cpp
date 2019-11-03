#include "ecosystem.h"
#include "ui_ecosystem.h"
#include<QMessageBox>
#include<QDebug>
#include"data.h"
ecosystem::ecosystem(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ecosystem)
{
    ui->setupUi(this);
    this->sc=new myScene;
    this->ui->graphicsView->setScene(sc);
    connect(this->ui->start,SIGNAL(clicked(bool)),this->sc,SLOT(startFun()));
    connect(this->ui->btn_pause,SIGNAL(clicked(bool)),this->sc,SLOT(pauseFun()));
    connect(this->ui->btn_end,SIGNAL(clicked(bool)),this->sc,SLOT(endFun()));
    this->time_1=0;
    connect(this->sc,SIGNAL(sendtime()),this,SLOT(addScore()));
}

ecosystem::~ecosystem()
{
    delete ui;
}
void ecosystem::closeEvent(QCloseEvent *event){
    int ret=QMessageBox::question(this,"确定","你真的要关闭吗？","是","否");
    if(ret==1){
        event->ignore();
    }
}


void ecosystem::addScore(){
    this->time_1++;
    QString s = QString::number(this->time_1, 10);
    this->ui->text1->setText(s);
    QString s1=QString::number(num,10);
    this->ui->text2->setText(s1);
}
void ecosystem::Send_L_colse()
{
    emit L_colse();
}
