
#ifndef  LIVING_H_
#define  LIVING_H_

#include<QObject>
#include "basic.h"

#include "world.h"


class LivingUnit:public QObject    //��Ԫ����󣬷�Ϊ �յģ��ݣ��á����� ��
{
    Q_OBJECT
public:
	virtual State getState()=0;   //��ȡ��������λ�õĵ�ǰ����ʱ��״̬
	virtual State nextState()=0;  //�õ�Ԫ��һ������ʱ�̵�״̬
	virtual void round()=0;     //��Χ̬�ƣ��õ�����������Ŀͳ��	

protected:
	Position pos;       //���ڵ�λ��
	World *world;       //���ڵ�����
	int sum[STATES];    //����λ�ø����ĸ���������Ŀͳ��
	
};


#endif
