
#include "grass.h"
#include "empty.h"


State GrassUnit::getState()
{
	return GRASS;
}


State GrassUnit::nextState() 
{
	round();
    if(age>DGRA){
        return EMPTY;
    }
    if (sum[GRASS]<sum[RABBIT])
	{
        return EMPTY;
	}
    else if(sum[GRASS]>sum[RABBIT]){
        return GRASS;
    }
	else
	{
		return EMPTY;
	}
}



void GrassUnit::round()
{
    world->sums(pos,sum);
    if(this->age>DFOX){
            age=0;
        }
        else{
            this->age++;
        }
}
