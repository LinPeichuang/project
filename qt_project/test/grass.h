

#include "living.h"
#include<QObject>

class GrassUnit:public LivingUnit
{
public:
	GrassUnit(World* w,int r,int c)
	{
        pos.row1=r;
        pos.colum1=c;
		world=w;
	}

	State getState();	
	State nextState();
	void round(); 
protected:
    int age;
};


