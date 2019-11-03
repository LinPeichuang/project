
#include "fox.h"
#include "empty.h"

State FoxUnit::getState()
{
	return FOX;
}

State FoxUnit::nextState()
{
	round();
	if (sum[TIGER] > sum[FOX])
	{
        return EMPTY;
	}
	else if (sum[FOX]>TMFOX)
	{
		return EMPTY;
	}
	else
	{
        if (age>DFOX||sum[RABBIT]==0||sum[FOX]>sum[RABBIT])
		{
			return EMPTY;
		} 
		else
		{
			return FOX;
		}
	}
}


void FoxUnit::round()
{
	world->sums(pos,sum);
    if(this->age>DFOX){
            age=0;
        }
        else{
            this->age++;
        }
}
