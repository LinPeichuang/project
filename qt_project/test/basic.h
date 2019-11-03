
#ifndef BASIC_H_
#define BASIC_H_

//和程序实现相关的一些基础的常量、函数声明
enum State{EMPTY,GRASS, RABBIT, FOX,TIGER, STATES};
const int DGRA=6;
const int DRAB=3;     //兔子的寿命
const int DFOX=4;     //狐狸的寿命
const int TMFOX=2;    //太多的狐狸数
const int DTIGER = 5; //老虎的寿命
const int TMTIGER = 2; //太多的老虎数
const int CYCLES=5;   //仿真总步数
const int N=50;       //世界的大小



struct Position    //位置
{
    int row1;     //行
    int colum1;   //列
};

#endif
