#include "tiger.h"
#include "empty.h"

State TigerUnit::getState()
{
	return TIGER;
}

State TigerUnit::nextState()
{
	round();

	if (sum[TIGER] > TMTIGER)
	{
		return EMPTY;
	}
	else if (age > DTIGER)
	{
		return EMPTY;
	}
    else if(sum[TIGER]>sum[RABBIT]+sum[FOX]){
        return EMPTY;
    }
    else if (sum[RABBIT] == 0 && sum[FOX] == 0)
	{
		return EMPTY;
	}
	else
	{
		return TIGER;
	}
}



void TigerUnit::round()
{
	world->sums(pos, sum);
    if(this->age>DTIGER){
        age=0;
    }
    else{
        this->age++;
    }

}
