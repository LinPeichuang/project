#include "myitem.h"
#include<QPixmap>
#include<QPainter>
myitem::myitem()
{
    this->setPixmap(QPixmap(":/animals/Resources/grass.png"));
    this->start=false;
    this->deer=false;
}
void myitem::setPic(QString path){
    this->setPixmap(QPixmap(path));
}


void myitem::setDeer(bool deer){
    this->deer=deer;
}
bool myitem::isDeer(){
    return this->deer;
}


void myitem::setStart(bool start){
    this->start=start;
}
bool myitem::isStart(){
    return this->start;
}
