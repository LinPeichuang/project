
#include "basic.h"
#include "empty.h"
#include "grass.h"
#include "rabbit.h"
#include "fox.h"
#include "world.h"
#include"tiger.h"
#include <QDebug>
 World::World(int index)
{		
    curMap=new Map[N];

	initWorld();  //初始化世界，默认为全空

	switch(index)
	{
		case WORLD_OF_GRASS:
			worldOfGrass();
			break;
			
		case WORLD_OF_RABBIT:
			worldOfRabbit();
			break;
		case WORLD_OF_FOX:
			worldOfFox();
			break;
		case WORLD_OF_TIGER:
			worldOfTiger();
			break;
	}
}


void World::initWorld()
{
	for (int i=0;i<N;i++)
		for (int j=0;j<N;j++)
		{			
			(*curMap)[i][j]=EMPTY;			
		}
}





void World::worldOfGrass()
{
    for (int i = 1; i < N - 1; ++i)
        for (int j = 1; j < N - 1; ++j)
        {
            if ((i + j) % 7 == 0)
            {
                (*curMap)[i][j] = RABBIT;
            }
            else
            {
                if ((i + j) % 7 == 1)
                {
                    (*curMap)[i][j] = FOX;
                }
                else
                {
                    if ((i + j) % 7 == 2)
                    {
                        (*curMap)[i][j] = TIGER;
                    }
                    else
                    {
                        (*curMap)[i][j] = GRASS;
                    }
                }
            }
        }
}



void World::worldOfRabbit()
{
	for (int i = 2; i < N - 2; ++i)
		for (int j = 2; j < N - 2; ++j)
		{
			if ((i + j) % 6 == 0)
			{
				(*curMap)[i][j] = RABBIT;
			}
			else
			{
				if ((i + j) % 6 == 1)
				{
					(*curMap)[i][j] = FOX;
				}
				else
				{
					if ((i + j) % 6 == 2)
					{
						(*curMap)[i][j] = TIGER;
					}
					else
					{
						(*curMap)[i][j] = GRASS;
					}
				}
			}
		}
}



void World::worldOfFox()
{
	for (int i = 2; i < N - 2; ++i)
		for (int j = 2; j < N - 2; ++j)
		{
			if ((i + j) % 8 == 0)
			{
				(*curMap)[i][j] = RABBIT;
			}
			else
			{
				if ((i + j) % 8 == 1)
				{
					(*curMap)[i][j] = FOX;
				}
				else
				{
					if ((i + j) % 8 == 2)
					{
						(*curMap)[i][j] = TIGER;
					}
					else
					{
						(*curMap)[i][j] = GRASS;
					}
				}
			}
		}
}

void World::worldOfTiger()
{
	for (int i = 2; i < N - 2; ++i)
		for (int j = 2; j < N - 2; ++j)
		{
			if ((i + j) % 9 == 0)
			{
				(*curMap)[i][j] = RABBIT;
			}
			else
			{
				if ((i + j) % 9 == 1)
				{
					(*curMap)[i][j] = FOX;
				}
				else
				{
					if ((i + j) % 9 == 2)
					{
						(*curMap)[i][j] = TIGER;
					}
					else
					{
						(*curMap)[i][j] = GRASS;
					}
				}
			}
		}
}

void World::update()
{
    for (int i=1;i<N-1;i++){
		for (int j=1;j<N-1;j++)
		{
			LivingUnit* p=locate(i,j);
			(*curMap)[i][j]=p->nextState();
		}
    }
}
World::~World(){
    delete []curMap;
}


void World::display()
{
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++)
        {
            qDebug()<<((*curMap)[i][j]);
        }
    }
}




LivingUnit* World::locate(int row,int colum)
{
    int index=(*curMap)[row][colum];
    switch(index)
	{
	case EMPTY:
        return(new EmptyUnit(this,row,colum));
	case GRASS:
        return(new GrassUnit(this,row,colum));
	case RABBIT:
		return(new RabbitUnit(this,row,colum));
	case FOX:
		return(new FoxUnit(this,row,colum));
	case TIGER:
		return(new TigerUnit(this, row, colum));
    default:break;
	}
    return(new EmptyUnit(this,row,colum));
}




void World::sums(Position pos, int sum[STATES]) //世界某个位置周围的各类生物的总数的列表
{
	int i,j;
	
	sum[EMPTY]=sum[GRASS]=0;
	sum[RABBIT]=sum[FOX]=0;

	State state;
	
    for (i=-1;i<=1;i++)
        for (j=-1;j<=1;j++)
        {
            if(pos.row1+i<N&&pos.colum1+j<N){
                state=(*curMap)[pos.row1+i][pos.colum1+j];
                sum[state]++;
            }
		}		
}

Map* World::getcurmap(){
    return this->curMap;
}
