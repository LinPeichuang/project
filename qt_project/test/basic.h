
#ifndef BASIC_H_
#define BASIC_H_

//�ͳ���ʵ����ص�һЩ�����ĳ�������������
enum State{EMPTY,GRASS, RABBIT, FOX,TIGER, STATES};
const int DGRA=6;
const int DRAB=3;     //���ӵ�����
const int DFOX=4;     //���������
const int TMFOX=2;    //̫��ĺ�����
const int DTIGER = 5; //�ϻ�������
const int TMTIGER = 2; //̫����ϻ���
const int CYCLES=5;   //�����ܲ���
const int N=50;       //����Ĵ�С



struct Position    //λ��
{
    int row1;     //��
    int colum1;   //��
};

#endif
