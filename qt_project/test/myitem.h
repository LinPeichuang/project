#ifndef MYITEM_H
#define MYITEM_H
#include<QGraphicsPixmapItem>
#include<QString>
#include<QGraphicsSceneMouseEvent>
class myitem : public QGraphicsPixmapItem
{
public:
    myitem();
    void setPic(QString path);
    void setDeer(bool deer);
    bool isDeer();
    void setStart(bool start);
    bool isStart();
private:
    bool deer;
    bool start;
};

#endif // MYITEM_H
