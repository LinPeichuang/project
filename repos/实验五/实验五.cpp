#include<iostream>
#define _USE_MATH_DEFINES
#include<math.h>
#include<string>
using namespace std;
class Circle
{
public:
	Circle();//���뾶��Ϊ0
	Circle(double r) :radius(r) {};//�г�ֵ����Ĺ��캯��
	Circle(Circle&);//�������캯��
	~Circle() {};//��������
	void setcircle();//����Բ�İ뾶
	double getPerimeter();//��ȡԲ���ܳ�
	double getArea();//��ȡԲ�����
private:
	double radius;
};
Circle::Circle()
{
	radius = 0;
}
Circle::Circle(Circle& C)
{
	radius = C.radius;
}
void Circle::setcircle()
{
	cout << "������Բ�İ뾶��";
	cin >> radius;
}
double Circle::getPerimeter()
{
	double perimeter;
	perimeter = 2 * M_PI * radius;
	return perimeter;
}
double Circle::getArea()
{
	double area;
	area = M_PI * radius * radius;
	return area;
}
class Table
{
public:
	Table();//��ʼ��heightΪ0
	Table(double);//��ֵ����Ĺ��캯��
	Table(Table&);//�������캯��
	~Table() {};//��������
	double getHeight();//���ظ߶ȵĳ�Ա����
	void setHeight();//�������ӵĸ߶�
private:
	double height;
};
Table::Table()
{
	height = 0;
}
Table::Table(double h)
{
	height = h;
}
Table::Table(Table& T)
{
	height = T.height;
}
double Table::getHeight()
{
	return height;
}
void Table::setHeight()
{
	cout << "���������ӵĸ߶ȣ�";
	cin >> height;
}
class Roundtable :public Circle,public Table
{
	Roundtable(double r, double h, char* c) :Circle(r),Table(h),color(c){};//��ֵ����Ĺ��캯��
	void settable();//������ɫ
	char* getColor();//�����ɫ
	~Roundtable() {};//��������
	void display();//��ӡ���ӵ���Ϣ
private:
	char *color;
};
void Roundtable::settable()
{
	cout << "���������ӵ���ɫ��";
	cin >> color;
	setcircle();
	setHeight();
}
char* Roundtable::getColor()
{
	return color;
}
void Roundtable::display()
{
	cout << "���ӵ����Ϊ��" << getArea() << endl;
	cout << "���ӵĸ߶�Ϊ��" << getHeight() << endl;
	cout << "���ӵ���ɫΪ��" << color << endl;
}
int main()
{
	Roundtable Rt1(2,3,"red"),Rt2();
}