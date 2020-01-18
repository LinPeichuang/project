#include<iostream>
#define _USE_MATH_DEFINES
#include<math.h>
#include<string>
using namespace std;
class Circle
{
public:
	Circle();//将半径设为0
	Circle(double r) :radius(r) {};//有初值传入的构造函数
	Circle(Circle&);//拷贝构造函数
	~Circle() {};//析构函数
	void setcircle();//输入圆的半径
	double getPerimeter();//获取圆的周长
	double getArea();//获取圆的面积
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
	cout << "请输入圆的半径：";
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
	Table();//初始化height为0
	Table(double);//有值传入的构造函数
	Table(Table&);//拷贝构造函数
	~Table() {};//析构函数
	double getHeight();//返回高度的成员函数
	void setHeight();//输入桌子的高度
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
	cout << "请输入桌子的高度：";
	cin >> height;
}
class Roundtable :public Circle,public Table
{
	Roundtable(double r, double h, char* c) :Circle(r),Table(h),color(c){};//有值传入的构造函数
	void settable();//输入颜色
	char* getColor();//输出颜色
	~Roundtable() {};//析构函数
	void display();//打印桌子的信息
private:
	char *color;
};
void Roundtable::settable()
{
	cout << "请输入桌子的颜色：";
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
	cout << "桌子的面积为：" << getArea() << endl;
	cout << "桌子的高度为：" << getHeight() << endl;
	cout << "桌子的颜色为：" << color << endl;
}
int main()
{
	Roundtable Rt1(2,3,"red"),Rt2();
}