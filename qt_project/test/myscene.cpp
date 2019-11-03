#include "myscene.h"
#include<stdlib.h>
#include"data.h"
#include"world.h"

myScene::myScene(QObject *parent) : QGraphicsScene(parent)
{

    this->world=new World(WORLD_OF_GRASS);
    int i=0;
    for(i=0;i<N1;i++){
        this->item[i] = new myitem;
        this->item[i]->setScale(0.3);
        this->item[i]->setPos(i/num*this->item[i]->boundingRect().width()*0.3,i%num*this->item[i]->boundingRect().height()*0.3);
        this->addItem(this->item[i]);
    }
    //this->item[4]->setPic(":/animals/Resources/deer.png");
    this->ptimer = new QTimer;
    connect(this->ptimer,SIGNAL(timeout()),this,SLOT(showDeer()));
}

void myScene::showDeer(){
    int i=0;
    int j=0;
    int index=0;
    int now=0;
    this->world->update();
     for(i = 0;i<num;i++){
         for(j = 0;j<num;j++){
             Map *p=this->world->curMap;
             index=(*p)[i][j];
             switch (index) {
             case 0:
                 this->item[now]->setPic(":/animals/Resources/backgroung.png");
                 this->item[now++]->setDeer(true);break;
             case 1:
                 this->item[now]->setPic(":/animals/Resources/grass.png");
                 this->item[now++]->setDeer(true);break;
             case 2:
                 this->item[now]->setPic(":/animals/Resources/deer.png");
                 this->item[now++]->setDeer(true);break;
             case 3:
                 this->item[now]->setPic(":/animals/Resources/wolf.png");
                 this->item[now++]->setDeer(true);break;
             case 4:
                 this->item[now]->setPic(":/animals/Resources/tiger.png");
                 this->item[now++]->setDeer(true);break;
             default:this->item[now]->setPic(":/animals/Resources/backgroung.png");
                 this->item[now++]->setDeer(true);break;
             }
         }
     }
     this->addtimes();
}
void myScene::startFun(){
    int i=0;
    for(i=0;i<N1;i++){
       this->item[i]->setStart(true);
    }
    this->ptimer->start(500);
}
void myScene::pauseFun(){
    int i=0;
    for(i=0;i<N1;i++){
       this->item[i]->setStart(false);
    }
    this->ptimer->stop();
}
void myScene::endFun(){
    int i=0;
    for(i=0;i<N1;i++){
        this->item[i]->setStart(true);
    }
    this->ptimer->stop();
    for(i=0;i<N1;i++){
        this->item[i]->setPic(":/animals/Resources/grass.png");
        this->item[i]->setDeer(false);
    }
}
void myScene::addtimes(){
    emit sendtime();
}

