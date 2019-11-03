

#include "rabbit.h"
#include "empty.h"

State RabbitUnit::getState()
{
	return RABBIT;
}

State RabbitUnit::nextState()
{
	round();
    if (sum[FOX]>sum[RABBIT])
	{
        return EMPTY;
	} 
    else if(sum[TIGER]>sum[RABBIT]){
        return EMPTY;
    }
	else if (age>DRAB)
	{
		return EMPTY;
	} 
    else if(sum[RABBIT]>sum[GRASS]){
        return EMPTY;
    }
	else
	{
		return RABBIT;
	}
}



void RabbitUnit::round()
{
	world->sums(pos,sum);
    if(this->age>DRAB){
        age=0;
    }
    else{
        this->age++;
    }
}
