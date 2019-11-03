

#ifndef WORLD_H_
#define WORLD_H_

#include "basic.h"
//������ڲ�ʵ����ص�һЩ��������
#include "myitem.h"
typedef State Map[N][N];

class LivingUnit;
class EmptyUnit;
class GrassUnit;
class RabbitUnit;
class FoxUnit;
class TigerUnit;

enum SimWorld {WORLD_OF_GRASS,WORLD_OF_RABBIT, WORLD_OF_FOX,WORLD_OF_TIGER}; //���������

class World
{
public:
	World(int index);
	void update();      //��������
    void display();     //��ʾ����
    void sums(Position pos,int sum[STATES]); //ָ��λ����Χ�ĸ���������������б����ؽ������������int sum[STATES]��
    Map *getcurmap();
    Map * curMap;
    ~World();

private:
	void initWorld();   //��ʼ�����磬Ĭ��ȫ��
	void worldOfGrass();   //������ݵ�����
	void worldOfRabbit();  //�������ӵ�����
	void worldOfFox();     //���ú��������
	void worldOfTiger();   //�����ϻ�������

    LivingUnit* locate(int row,int colum);  //����ָ��λ�÷���ָ������ڸ�λ�õĶ����ָ��	

      //��ǰ�������ͼ
};


#endif
