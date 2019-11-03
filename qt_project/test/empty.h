
#include "living.h"



class EmptyUnit:public LivingUnit
{
public:
	EmptyUnit(World *  const w,int r,int c)
    {	pos.row1=r;
        pos.colum1=c;
		world=w;
	}
	
	State getState();	
	State nextState();
	void round(); 
};
