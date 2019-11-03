#ifndef MYSCENE_H
#define MYSCENE_H

#include <QObject>
#include<QGraphicsScene>
#include<myitem.h>
#include<QTimer>
#include"data.h"
#include"world.h"
class myScene : public QGraphicsScene
{
    Q_OBJECT
public:
    explicit myScene(QObject *parent = nullptr);

signals:
    void sendtime();

public slots:
    void showDeer();
    void startFun();
    void pauseFun();
    void endFun();
    void addtimes();
private:
    myitem *item[N1];
    QTimer *ptimer;
    World *world;

};

#endif // MYSCENE_H
