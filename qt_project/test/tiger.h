#pragma once
#include "living.h"

#include<QObject>
class TigerUnit :public LivingUnit
{
public:
    TigerUnit(World* w, int r, int c,int a=0):age(a)
	{
        pos.row1 = r;
        pos.colum1 = c;
		world = w;
	}
	State getState();
	State nextState();
	void round();
protected:
	int age;
};
