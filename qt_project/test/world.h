

#ifndef WORLD_H_
#define WORLD_H_

#include "basic.h"
//与程序内部实现相关的一些变量定义
#include "myitem.h"
typedef State Map[N][N];

class LivingUnit;
class EmptyUnit;
class GrassUnit;
class RabbitUnit;
class FoxUnit;
class TigerUnit;

enum SimWorld {WORLD_OF_GRASS,WORLD_OF_RABBIT, WORLD_OF_FOX,WORLD_OF_TIGER}; //仿真的世界

class World
{
public:
	World(int index);
	void update();      //更新世界
    void display();     //显示世界
    void sums(Position pos,int sum[STATES]); //指定位置周围的各类生物的总数的列表，返回结果保存在数组int sum[STATES]中
    Map *getcurmap();
    Map * curMap;
    ~World();

private:
	void initWorld();   //初始化世界，默认全空
	void worldOfGrass();   //配置青草的世界
	void worldOfRabbit();  //配置兔子的世界
	void worldOfFox();     //配置狐狸的世界
	void worldOfTiger();   //配置老虎的世界

    LivingUnit* locate(int row,int colum);  //根据指定位置返回指向存在于该位置的对象的指针	

      //当前的世界地图
};


#endif
