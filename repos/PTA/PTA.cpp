////L1-044 稳赢
///*#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//int main()
//{
//	vector<string>vec1;
//	string str;
//	int n,i=0;
//	cin >> n;
//	while (1)
//	{
//		cin >> str;
//		if (str == "End")
//		{
//			for (std::vector<string>::iterator m = vec1.begin(); m != vec1.end(); m++)
//				cout << *m << endl;
//			break;
//		}
//		else
//		{
//			if (i == n)
//			{
//				vec1.push_back(str);
//				i = 0;
//			}
//			else
//			{
//				i++;
//				if (str == "ChuiZi")
//					vec1.push_back("Bu");
//				else if (str == "JianDao")
//					vec1.push_back("ChuiZi");
//				else
//					vec1.push_back("JianDao");
//			}
//			str.clear();
//		}
//	}
//	system("pause");
//	return 0;
//}*/
///*#include<iostream>
//#include<string>
//using namespace std;
//bool comform(string str)
//{
//	bool found = true;
//	int i, len;
//	len = str.length();
//	if (str != "1000")
//	{
//		if (len >= 1 && len <= 3 && str!="0")
//		{
//			for (i = 0; i < len; i++)
//				if (str[i]<'0' || str[i]>'9')
//					found = false;
//		}
//		else
//			found = false;
//	}
//	return found;
//}
//int transform(string str)
//{
//	int i=1,sum=0,len = str.length();
//	while (len > 0)
//	{
//		sum = sum + (i*(str[len - 1] - 48));
//		i = i * 10;
//		len--;
//	}
//	return sum;
//}
//int main()
//{
//	string str1, str2,str3,str4;
//	cin >> str1 >> str2;
//	str3 = str1;
//	str4 = str2;
//	if (!comform(str3))
//		str3 = "?";
//	if (!comform(str4))
//		str4 = "?";
//	if (comform(str1) && comform(str2))
//		cout << str3 << " + " << str4 << " = " << comform(str1) + comform(str2);
//	else
//		cout << str3 << " + " << str4 << " = " << "?";
//	system("pause");
//	return 0;
//}*/
///*#include<iostream>
//using namespace std;
//int main()
//{
//	int i,j,k, row1, column1,row2,column2,sum;
//		cin >> row1 >> column1;
//		int **a = new int*[row1];
//		for (i = 0; i < row1; i++)
//		   a[i] = new int[column1];
//		for (i = 0; i < row1; i++)
//			for (j = 0; j < column1; j++)
//				cin >> a[i][j];
//		cin >> row2 >> column2;
//		int **b = new int*[row2];
//		for (i = 0; i < row2; i++)
//			b[i] = new int[column2];
//		for (i = 0; i < row2; i++)
//			for (j = 0; j < column2; j++)
//				cin >> b[i][j];
//		if (column1 == row2)
//		{
//			int **c = new int*[row1];
//			for (i = 0; i < row1; i++)
//				c[i] = new int[column2];
//			cout << row1 << " " << column2;
//			for (i = 0; i < row1; i++)
//			{
//				cout << endl;
//				for (k = 0; k < column2; k++)
//				{
//					sum = 0;
//					for (j = 0; j < row2; j++)
//					{
//						sum = sum + a[i][j] * b[j][k];
//					}
//					c[i][k] = sum;
//					cout << c[i][k] << " ";
//				}
//			}
//			for(i=0;i<row1;i++)
//				delete[]c[i];
//			c = NULL;
//		}
//		else
//			cout << "Error: " << column1 << " != " << row2;
//		for (i = 0; i < row1; i++)
//		{
//			delete[]a[i];
//		}
//		for(i=0;i<row2;i++)
//			delete[]b[i];
//		a = NULL;
//		b = NULL;
//		system("pause");
//		return 0;
//}*/
////矩阵AxB
///*#include<iostream>
//using namespace std;
//int main()
//{
//	int i, j, k, row1, column1, row2, column2, sum;
//	cin >> row1 >> column1;
//	int **a = new int*[row1];
//	for (i = 0; i < row1; i++)
//		a[i] = new int[column1];
//	for (i = 0; i < row1; i++)
//		for (j = 0; j < column1; j++)
//			cin >> a[i][j];
//	cin >> row2 >> column2;
//	int **b = new int*[row2];
//	for (i = 0; i < row2; i++)
//		b[i] = new int[column2];
//	for (i = 0; i < row2; i++)
//		for (j = 0; j < column2; j++)
//			cin >> b[i][j];
//	if (column1 == row2)
//	{
//		cout << row1 << " " << column2;
//		for (i = 0; i < row1; i++)
//		{
//			cout << endl;
//			for (k = 0; k < column2; k++)
//			{
//				sum = 0;
//				for (j = 0; j < row2; j++)
//				{
//					sum = sum + a[i][j] * b[j][k];
//				}
//				cout << sum << " ";
//			}
//		}
//	}
//	else
//		cout << "Error: " << column1 << " != " << row2;
//	for (i = 0; i < row1; i++)
//	{
//		delete[]a[i];
//	}
//	for (i = 0; i < row2; i++)
//		delete[]b[i];
//	a = NULL;
//	b = NULL;
//	system("pause");
//	return 0;
//}*/
///*#include<iostream>
//using namespace std;
//int main()
//{
//	int i, j, n;
//	char str,a[100][100];
//	bool found = true;
//	cin >> str >> n;
//	for (i = 0; i < n; i++)
//		for (j = 0; j < n; j++)
//		{
//			a[i][j]=getchar();
//			if (a[i][j]!= ' ')
//				a[i][j] = str;
//		}
//	for (i = 0; i < n; i++)
//		for (j = 0; j < n; j++)
//			if (a[i][j] != a[n - 1 - i][n - 1 - j])
//			{
//				found = false;
//				break;
//			}
//	if (found)
//		cout << "bu yong dao le" << endl;
//	for (i = n - 1; i >= 0; i--)
//	{
//		for (j = n - 1; j >= 0; j--)
//			cout << a[i][j];
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}*/
////链表简单表示
///*#include<iostream>
//using namespace std;
//#define NULL 0
//struct Student
//{
//	int num;
//	float score;
//	Student *next;
//};
//int main()
//{
//	Student a, b, c, *head, *p;
//	a.num = 31001;
//	a.score = 89.5;
//	b.num = 31003;
//	b.score = 90;
//	c.num = 31007;
//	c.score = 85;
//	head = &a;
//	a.next = &b;
//	b.next = &c;
//	c.next = NULL;
//	p = head;
//	do
//	{
//		cout << p->num << " " << p->score << endl;
//		p = p->next;
//	} while (p != NULL);
//	system("pause");
//	return 0;
//}*/
////c++类的实现
///*#include<iostream>
//using namespace std;
//class Time
//{
//public:
//	int hour;
//	int minute;
//	int sec;
//};
//int main() 
//{
//	Time t1;
//	cin >> t1.hour;
//	cin >> t1.minute;
//	cin >> t1.sec;
//	cout << t1.hour << ":" << t1.minute << ":" << t1.sec;
//	system("pause");
//	return 0;
//}*/
///*#include<iostream>
//using namespace std;
//int main()
//{
//	int m, n,time,temp=0,i=0;
//	int a[4];
//	cin >> m >> n;
//	while (m)
//	{
//		a[i] = m / 10;
//		m = m / 10;
//		i++;
//	}
//	for (; i >= 0; i--)
//	{
//		for (int j = i - 1; j >= 0; j--)
//		{
//			if (a[i] != a[j])
//				temp++;
//			
//		}
//		
//	}
//}*/
///*#include<iostream>
//using namespace std;
//class people
//{
//public:
//	int age;//年龄
//	double hight;//身高
//	double weight;//体重
//	void eatting()//进食函数
//	{
//		weight += 1;
//	}
//	void sporting()//运动函数
//	{
//		hight += 1;
//	}
//	void sleeping()//睡眠函数
//	{
//		age += 1;
//		hight += 1;
//		weight += 1;
//	}
//};
//int main()
//{
//	people pe1;
//	pe1.age = 18;
//	pe1.hight = 165.2;
//	pe1.weight = 47.6;
//	cout << "年龄：" << pe1.age <<endl;
//	cout << "身高：" << pe1.hight << endl;
//	cout << "体重：" << pe1.weight << endl;
//	pe1.eatting();//调用进食函数
//	cout << "进食后体重变为：" << pe1.weight << "kg" << endl;
//	pe1.sporting();//调用运动函数
//	cout << "运动后身高变为：" << pe1.hight << "cm" << endl;
//	pe1.sleeping();//调用睡眠函数
//	cout << "睡眠后，年龄、身高、体重分别变为：" << pe1.age << " 、" << pe1.hight << "cm" << " 、" << pe1.weight << "kg";
//	system("pause");
//	return 0;
//}*/
///*#include<iostream>
//using namespace std;
//class people
//{
//public:
//	void growth()
//	{
//		eatting();
//		sporting();
//		sleeping();
//	}
//	void printperson()//输出各个值
//	{
//		cout << age << " 、" << hight << "cm" << " 、" << weight << "kg";
//	}
//private:
//	int age=19;//年龄
//	double hight=165.6;//身高
//	double weight=47.6;//体重
//	void eatting()//进食函数
//	{
//		weight += 1;
//	}
//	void sporting()//运动函数
//	{
//		hight += 1;
//	}
//	void sleeping()//睡眠函数
//	{
//		age += 1;
//		hight += 1;
//		weight += 1;
//	}
//};
//int main()
//{
//	people person;
//	cout << "年龄、身高、体重分别变为："<<endl;
//	person.printperson();
//	person.growth();
//	cout << endl;
//	cout << "经过一次生长，年龄、身高、体重分别变为："<<endl;
//	person.printperson();
//	system("pause");
//	return 0;
//}*/
////#include<iostream>
////using namespace std;
////struct student
////{
////	char sno[20];
////	char sname[20];
////	int sscore;
////	struct student * next;
////};
////bool satisfy(struct student *p)
////{
////	int len = strlen(p->sno);
////	bool found = true;
////	if (len != 11)
////		found = false;
////	else
////	{
////		for (int i = 0; i < len; i++)
////			if (p->sno[i] > '9' || p->sno[i] < '0')
////			{
////				found = false;
////				break;
////			}
////	}
////	return found;
////}
////struct student * create()
////{
////	int n = 0, i = 0;
////	struct student *head;
////	struct student *p1, *p2;
////	cout << "请输入录入学生信息的人数" << endl;
////	cin >> n;
////	cout << "学号" << " " << "姓名" << " " << "成绩" << endl;
////	p1 = p2 = new student;
////	head = NULL;
////	while (i < n)
////	{
////		while (1)
////		{
////			cin >> p1->sno >> p1->sname >> p1->sscore;
////			if (satisfy(p1))
////			{
////				break;
////			}
////			else
////				cout << "输入学号信息格式不规范！请重新输入" << endl;
////		}
////		if (i == 0)
////		{
////			head = p1;
////		}
////		else
////		{
////			p2->next = p1;//p2为上一个节点
////		}
////		//更新
////		p2 = p1;
////		p1 = new student;
////		i++;
////	}
////	//此时p2为最后一个节点
////	p2->next = NULL;
////	delete p1;
////	return (head);
////}
////void showlist(struct student *head)
////{
////	struct student *p;
////	p = head;
////	cout << "学生信息如下：" << endl;
////	while (p != NULL)//输出内容
////	{
////		cout << p->sno << " " << p->sname << p->sscore << endl;
////		p = p->next;
////	}
////	delete p;
////}
////int main()
////{
////	struct student *p;
////	p = create();
////	//打印头指针
////	showlist(p);
////	system("pause");
////	return 0;
////}
////#include<iostream>
////using namespace std;
////int main()
////{
////	char* a;
////	char c;
////	a = &c;
////	while (cin >> *a)
////	{
////		if (*a == 'k')
////		{
////			a++;
////			break;
////		}
////		a++;
////	}
////	*a = '\0';
////	a = &c;
////	while (*a != '\0')
////	{
////		cout << *a;
////		a++;
////	}
////	a = &c;
////	system("pause");
////	return 0;
////}
//#include<iostream>
//#include<cstring>
//using namespace std;
//class CStaff
//{
//private:
//	char *id;
//	char *name;
//	double salary;
//public:
//	CStaff(const char* , const char*, double s);
//	CStaff(const CStaff& c);
//	~CStaff();
//	void display();
//	static int total;
//};
//int CStaff::total = 0;
//CStaff::CStaff(const CStaff& c)
//{
//	id = new char[strlen(c.id) + 1];
//	strcpy_s(id, strlen(c.id) + 1, c.id);
//	name = new char[strlen(c.name) + 1];
//	strcpy_s(name, strlen(c.name) + 1, c.name);
//	salary = c.salary;
//}
//CStaff::CStaff(const char* i = NULL, const char* nam = NULL, double s = 0)
//{
//	if (i == NULL)
//	{
//		id = new char[1];
//		*id = '\0';
//	}
//	else
//	{
//	id = new char[strlen(i) + 1];
//	strcpy_s(id, strlen(i) + 1, i);
//	}
//	if(nam == NULL)
//	{
//		name = new char[1];
//		*name = '\0';
//	}
//	else
//	{
//	name = new char[strlen(nam) + 1];
//	strcpy_s(name, strlen(nam) + 1, nam);
//	}
//	salary = s;
//	total++;
//}
//CStaff::~CStaff()
//{
//	if(id != NULL)
//	{
//		delete[]id;
//	}
//	if(name != NULL)
//	{
//		delete[]name;
//	}
//}
//void CStaff::display()
//{
//	cout << "id" << ' ' << id;
//	cout << "name" << ' ' << name;
//	cout << "salary" << ' ' << salary;
//}
//int main()
//{
//	CStaff C1("441426000000000000", "lainglin", 1000);
//	CStaff C2("441426199911111111", "xiaoqing", 2000);
//	CStaff C3(C2);
//	C1.display();
//	C2.display();
//	C3.display();
//	cout << endl;
//	cout << "total" << ' ' << C3.total;
//	system("pause");
//	return 0;
//}
//#include<iostream>
//using namespace std;
//class Base {
//public:
//	Base(int m = 0) :i(m) { cout << "调用Base构造函数" << endl; }
//	virtual void demo()= 0;
//	/*friend ostream& operator<<(ostream& os, const Base& b1);
//	friend istream& operator>>(istream& is, const Base& b1);*/
//	virtual ~Base(){ cout << "调用Base析构函数" << endl; }
//protected:
//	int i;
//};
////ostream& operator<<(ostream& os, const Base& b1)
////{
////	os << b1.i;
////	return os;
////}
////istream& operator>>(istream& is, const Base& b1)
////{
////	is >> b1.i;
////	return is;
////}
//class Base1 :virtual public Base {
//public:
//	Base1(int m, int n) :Base(m), a(n) { cout << "调用Base1构造函数" << endl; }
//	~Base1() { cout << "调用Base1析构函数" << endl; }
//	void demo() { cout << "this is Base1" << endl; }
//protected:
//	int a;
//};
//class Base2 :virtual public Base {
//public:
//	Base2(int m, int n) :Base(m), b(n) { cout << "调用Base2构造函数" << endl; }
//	~Base2() { cout << "调用Base2析构函数" << endl; }
//	void demo() { cout << "this is Base2" << endl; }
//protected:
//	int b;
//};
//class Base3 :public Base1, public Base2 {
//public:
//	Base3(int i, int a, int b) :Base(i), Base2(i, b), Base1(i, a) { cout << "调用Base3构造函数" << endl; };
//	~Base3() { cout << "调用Base3析构函数" << endl; }
//	void demo() { cout << "this is Base3" << endl; }
//};
//int main()
//{
//	Base* b1 = new Base3(1, 2, 3);
//	b1->demo();
//	system("pause");
//	return 0;
//}
//#include<iostream>
//#include<fstream>
//using namespace std;
//int main()
//{
//	int a[10];
//	ofstream outfile;
//	outfile.open("fi.dat", ios::out);
//	if (!outfile)
//	{
//		cerr << "open file error" << endl;
//		exit(1);
//	}
//	cout << "enter 10 integer numbers" << endl;
//	for (int i = 0; i < 10; i++)
//	{
//		cin >> a[i];
//		outfile << a[i] << " ";
//	}
//	outfile.close();
//	return 0;
//}
/*#include<iostream>
#include<string>
using namespace std;
int strStr(string haystack, string needle) {
	if (needle == "")
		return 0;
	int hl = haystack.length(), nl = needle.length();
	if (hl < nl)
		return -1;
	int i, j;
	for (i = 0; i <= hl - nl; i++)
	{
		if (haystack[i] == needle[0])
		{
			if (haystack.substr(i, nl) == needle)
			{
				return i;
			}
		}
	}
	return -1;
}
int main()
{
	string haystack = "hello", needle = "lm";
	cout << strStr(haystack,needle) << endl;
	system("pause");
	return 0;
}*/
/*#include<iostream>
using namespace std;
int statistics_1(long long num) {   //除2取余
	int count =0;
	while (num) {
		if (num % 2 == 1)count++;
		num /= 2;
	}
	return count;
}
int statistics_2(long long num) {   //每一位与1比较，右移
	int count = 0;
	while (num) {
		if (num & 1)count++;
		num >>= 1;
	}
	return count;
}
int statistics_3(long long num) {   //减一比较
	int count = 0;
	while (num) {
		count++;
		num = (num - 1) & num;
	}
	return count;
}
int main()
{
	long long num;
	cin >> num;
	cout << statistics_1(num) << endl;
	system("pause");
	return 0;
}*/
//#include<iostream>
//#include<string>
//using namespace std;
//int main() {
//	int is = 0, times = 0, num = 0, second = 0, index = 0, largest = 0;
//	int a[10] = { 0 };
//	string result[10];
//	cin >> times;
//	while (is<times) {
//		bool noexit = true;
//		cin >> num;
//		for (int i = 0; i < num; i++) {
//			cin >> a[i];
//			if (i == 0) {
//				index = a[i];
//				largest = a[i];
//			}
//			if (index > a[i]) {
//				index = a[i];
//				noexit = false;
//			}
//			if (largest < a[i])
//			{
//				largest = a[i];
//				noexit = false;
//			}
//		}
//		if (noexit == true) {
//			result[is] = "NO";
//		}
//		else {
//			second = largest;
//			for (int i = 0; i < num; i++) {
//				if (second > a[i]&&a[i]!=index) {
//					second = a[i];
//				}
//			}
//			result[is] = to_string(second);
//		}
//		is++;
//	}
//	for (int i = 0; i < times; i++)
//		cout << result[i] << endl;
//	system("pause");
//	return 0;
//}
/*#include<iostream>
using namespace std;
int main() {
	long long base_num=0,index_num=0,result=1;
	unsigned int a[3] = { 0 };
	cin >> base_num>> index_num;
	while (index_num != 0) {
		if (index_num & 1)result = result * base_num;
		base_num *= base_num;
		index_num >>= 1;
		result = result % 1000;
	}
	for (int i = 2; i >= 0; i--)
	{
		a[i] = result % 10;
		result /= 10;
	}
	for (int i = 0; i < 3; i++)
		cout << a[i];
	system("pause");
	return 0;
}*/
/*#include<iostream>
#include<vector>
using namespace std;
int main(){
	int m = 0, n = 0, S = 0,lengh=0,begin=0;
	cin >> m;
	while (m--) {
		cin >> n >> S;
		vector<int> vec1(n);
		for (int i = 0; i < n; i++){
			cin>> vec1[i];
		}
		for (int i = 0; i < n; i++) {
			int j = i;
			int sum = 0;
			bool no_full = true;
			while (j<n&&no_full)
			{
				sum += vec1[j++];
				if (sum >= S)no_full = false;
			}
			if (sum < S)continue;
			else {
				if (i == 0)
				{
					lengh = j - i;
				}
				if (lengh>j-i) {
					lengh = j - i;
					begin = i;
				}
			}
		}
		cout << lengh << endl;
		if (lengh > 0) {
			int index;
			for (index = begin; index < begin + lengh - 1; index++)
				cout << vec1[index] << " ";
			cout << vec1[index] << endl;
		}
		else
			cout << 0 << endl;
	}
	system("pause");
	return 0;
}*/
/*#include<iostream>
#include<vector>
using namespace std;
int main() {
	int b = 0,index=0;
	vector<int> list1;
	vector<int> list2;
	while (cin >> b)
	{
		if (b < 0)
			break;
		list1.push_back(b);
	}
	while (cin >> b)
	{
		if (b < 0)
			break;
		bool nosame = true;
		if (!list2.empty()) {
			if (b == list2.back()) {
				nosame = false;
			}
		}
		if (list2.empty() || nosame) {
			for (int i = index; i < list1.size(); i++)
			{
				if (b == list1[i])list2.push_back(b);
				if (b < list1[i])index = i;
			}
		}
	}
	if (list2.empty())
		cout << "NULL";
	else{
		for (b = 0; b < list2.size() - 1; b++)
		{
			cout << list2[b] << " ";
		}
		cout << list2[b];
	}
	system("pause");
	return 0;
}*/
/*#include<iostream>
#include<vector>
using namespace std;
int main() {
	int b=0;
	vector<int> list1;
	vector<int> list2;
	while (cin >> b)
	{
		if (b < 0)
			break;
		list1.push_back(b);
	}
	while (cin >> b)
	{
		if (b < 0)
			break;
		list2.push_back(b);
	}
	int len1 = list1.size(), len2 = list2.size();
	if (len1 == 0 && len2 == 0)cout << "NULL";
	else if (len1 == 0) {
		for (int i = 0; i < len2; i++)
			cout << list2[i] << " ";
	}
	else if (len2 == 0) {
		for (int i = 0; i < len1; i++)
			cout << list1[i] << " ";
	}
	else{

		int i = 0, j = 0, k = 0;
		while (j < len1 && k < len2)
		{
			if (list1[j] > list2[k]) {
				cout<< list2[k++]<<" ";
			}
			else{
				cout << list1[j++] << " ";
			}
		}
		if (j == len1) {
			while (k < len2-1) {
				cout << list2[k++] << " ";
			}
			cout << list2[k];
		}
		else {
			while (k < len2-1) {
				cout << list1[j++] << " ";
			}
			cout << list1[j];
		}
	}
	system("pause");
	return 0;
}*/
//#include<iostream>
//#include<vector>
//using namespace std;
//int main() {
//	int num = 0, b = 0;
//	vector<int>list1;
//	vector<int>list2;
//	vector<int>list3;
//	vector<int>list4;
//	cin >> num;
//	while (num--) {
//		cin >> b;
//		list1.push_back(b);
//	}
//	cin >> num;
//	while (num--) {
//		cin >> b;
//		list2.push_back(b);
//	}
//	for(int i=0;i<list2.size();i=i+2)
//		for (int j = 0; j < list1.size(); j=j+2)
//		{
//			int pow = list2[i] * list1[j];
//			list3.push_back(pow);
//			if (list2[i + 1] == list1[j + 1]) {
//				list4.push_back(list2[i] + list1[j]);
//				list4.push_back(list2[i + 1]);
//			}
//			else if (list2[i + 1] > list1[j + 1]) {
//				list4.push_back(list2[i]);
//				list4.push_back(list2[i + 1]);
//			}
//			else {
//				list4.push_back(list1[i]);
//				list4.push_back(list1[i + 1]);
//			}
//		}
//}
/*#include<iostream>
#include<vector>
using namespace std;
int main() {
	int m = 0, n = 0, S = 0, lengh = 0, begin = 0,j;
	cin >> m;
	int indec1=0;
	std::vector<std::vector<int> > vec2(m, vector<int>());
	while (indec1<m) {
		lengh = 0; begin = 0;
		cin >> n >> S;
		vector<int> vec1(n);
		for (int i = 0; i < n; i++) {
			cin >> vec1[i];
		}
		for (int i = 0; i < n; i++) {
			int j = i;
			int sum = 0; 
			bool no_full = true;
			while (j < n && no_full)
			{
				sum += vec1[j++];
				if (sum >= S)no_full = false;
			}
			if (sum < S)continue;
			else {
				if (i == 0)
				{
					lengh = j - i-1;
				}
				if (lengh > j - i-1) {
					lengh = j - i-1;
					begin = i;
				}
			}
		}
		
		if (lengh > 0) {
			int index;
			vec2[indec1].push_back(lengh+1);
			for (index = begin; index < begin + lengh+1 ; index++)
				vec2[indec1].push_back(vec1[index]);
		}
		else
		{
			vec2[indec1].push_back(0);
			vec2[indec1].push_back(0);
		}
		indec1++;
	}
	for (int i = 0; i < m; i++) {
		lengh= vec2[i].size();
		for (j = 0; j < lengh-1; j++)
		{
			if (j == 0)cout << vec2[i][0] << endl;
			else
				cout << vec2[i][j] << " ";
		}
		cout << vec2[i][j];
		cout << endl;
	}
	system("pause");
	return 0;
}*/

/*#include<iostream>
#include<string>
using namespace std;
int main() {
	string String, Patten[10];
	int N = 0, i = 0, n = 0, j = 0, slengh, plengh;
	cin >> String;
	cin >> N;
	slengh = String.length();
	for (; i < N; i++) {
		cin >> Patten[i];
	}
	for (i = 0; i < N; i++) {
		plengh = Patten[i].length();
		if (slengh < plengh) {
			cout << "Not Found" << endl;;
			continue;
		}
		n = String.find(Patten[i]);
		if (n >=0) {
			cout << String.substr(n) << endl;
		}
		else
			cout << "Not Found" << endl;
	}
	system("pause");
	return 0;
}*/
//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
//int main() {
//	string str;
//	int N;
//	cin >> N;
//	int i = 0, j = 0, len = 0;
//	vector<string>num;
//	vector<string>num1;
//	vector<string>num2;
//	while (N--) {
//		cin >> str;
//		if (str == "Push") {
//			cin >> str;
//			num.push_back(str);
//			num2.push_back(str);
//		}
//		if (num.empty())num1.push_back("Invalid");
//		else {
//
//			len = num.size();
//			sort(num2.begin(), num2.end());
//			if (str == "PeekMedian") {
//
//				if (len % 2 == 0)len = len / 2 - 1;
//				else
//					len = len / 2;
//				num1.push_back(num2[len]);
//			}
//			if (str == "Pop")
//			{
//				num1.push_back(num[len - 1]);
//				num.pop_back();
//				num2.pop_back();
//			}
//		}
//	}
//	for (int i = 0; i < num1.size(); i++) {
//		cout << num1[i] << endl;
//	}
//	return 0;
//}
//#include<iostream>
//#include<vector>
//#include <cmath>
//#include<string>
//using namespace std;
//struct node
//{
//	string addr;
//	int num;
//	string next;
//};
//int main() {
//	int N,i=0,j=0,index=0, inden=0;
//	bool fal;
//	string first, next,next1;
//	cin >> first >> N;
//	vector<node> node1(N);
//	vector<node>node2;
//	vector<node>node3;
//	while (i<N) {
//		cin >> node1[i].addr >> node1[i].num >> node1[i].next;
//		if (node1[i].addr == first) {
//			index = i;
//			next = node1[i].next;
//			node2.push_back(node1[i]);
//		}
//		i++;
//	}
//	while (node2.size()<N){
//		for (i = 0; i < N; i++) {
//			if (i != index) {
//				if (node1[i].addr == next) {
//					node2.push_back(node1[i]);
//					next = node1[i].next;
//					break;
//				}
//			}
//		}
//	}
//	for (i = 0; i < node2.size()-1; i++) {
//		fal = true;
//		for (int j = 0; j <= i; j++) {
//			if (abs(node2[i+1].num) == abs(node2[j].num))
//			{
//				fal = false;
//				break;
//			}
//		}
//		if (!fal) {
//			if (node3.size() > 0)node3[node3.size() - 1].next = node2[i+1].addr;
//			node3.push_back(node2[i+1]);
//			node2[i].next = node2[i+1].next;
//			node2.erase(node2.begin() + i+1);
//		}
//		next = node2[i].next;
//	}
//	node2[node2.size() - 1].next = "-1";
//	node3[node3.size() - 1].next = "-1";
//	for (i = 0; i < node2.size(); i++)
//	{
//		cout << node2[i].addr << " " << node2[i].num << " " << node2[i].next << endl;
//	}
//	for (i = 0; i < node3.size(); i++)
//	{
//		cout << node3[i].addr << " " << node3[i].num << " " << node3[i].next << endl;
//	}
//	system("pause");
//	return 0;
//}
// #include<iostream>
// #include<string>
// #include <stack>
// using namespace std;
// int main() {
// 	string str;
// 	bool fal=true;
// 	stack<char> mystack;
// 	int i=0,len;
// 	char c;
// 	while (i<100) {
// 		cin >> c;
// 		if (c == '\n')break;
// 		if (c == '{' || c == '[' || c == '(')mystack.push(c);
// 		if (c == ')') {
// 			if (mystack.top() != '(')
// 			{
// 				fal = false;
// 				break;
// 			}
// 			else
// 				mystack.pop();
// 		}
// 		else if (c == ']') {
// 			if (mystack.top() != '[')
// 			{
// 				fal = false;
// 				break;
// 			}
// 			else
// 				mystack.pop();
// 		}
// 		else if (c == '}') {
// 			if (mystack.top() != '{')
// 			{
// 				fal = false;
// 				break;
// 			}
// 			else
// 				mystack.pop();
// 		}
// 		i++;
// 	}
// 	if (fal)
// 		cout << "yes";
// 	else
// 	{
// 		cout << "no";
// 	}
// 	system("pause");
// 	return 0;
// }
//#include <iostream>  
//using namespace std;
//struct BiTNode {
//	char data;
//	struct BiTNode *lchild, *rchild;//左右孩子  
//};
//BiTNode*T;
//void CreateBiTree(BiTNode* &T);
//void Inorder(BiTNode* &T);
//void PreOrderTraverse(BiTNode* &T);
//void Posorder(BiTNode* &T);
////===========================================主函数  
//int main() {
//	cout << "创建一颗树，其中A->Z字符代表树的数据，用“#”表示空树:" << endl;
//	CreateBiTree(T);
//	cout << "先序递归遍历：" << endl;
//	PreOrderTraverse(T);
//	cout << endl;
//	cout << "中序递归遍历：" << endl;
//	Inorder(T);
//	cout << endl;
//	cout << "后序递归遍历：" << endl;
//	Posorder(T);
//	cout << endl;
//	return 1;
//}
////=============================================先序递归创建二叉树树  
//void CreateBiTree(BiTNode* &T) {
//	//按先序输入二叉树中结点的值（一个字符），空格字符代表空树，  
//	//构造二叉树表表示二叉树T。  
//	char ch;
//	if ((ch = getchar()) == '#')
//		T = NULL;//其中getchar（）为逐个读入标准库函数  
//	else {
//		T = new BiTNode;//产生新的子树  
//		T->data = ch;//由getchar（）逐个读入来  
//		CreateBiTree(T->lchild);//递归创建左子树  
//		CreateBiTree(T->rchild);//递归创建右子树  
//	}
//}//CreateTree  
////===============================================先序递归遍历二叉树  
//void PreOrderTraverse(BiTNode* &T) {
//	//先序递归遍历二叉树  
//	if (T) {//当结点不为空的时候执行  
//		cout << T->data;
//		PreOrderTraverse(T->lchild);//  
//		PreOrderTraverse(T->rchild);
//	}
//	else cout << "";
//}//PreOrderTraverse  
////================================================中序遍历二叉树  
//void Inorder(BiTNode* &T) {//中序递归遍历二叉树  
//	if (T) {//bt=null退层  
//		Inorder(T->lchild);//中序遍历左子树  
//		cout << T->data;//访问参数  
//		Inorder(T->rchild);//中序遍历右子树  
//	}
//	else cout << "";
//}//Inorder  
////=================================================后序递归遍历二叉树  
//void Posorder(BiTNode* &T) {
//	if (T) {
//		Posorder(T->lchild);//后序递归遍历左子树  
//		Posorder(T->rchild);//后序递归遍历右子树  
//		cout << T->data;//访问根结点  
//	}
//	else cout << "";
//}
// #include<iostream>
// #include <iomanip>//这个头文件是声明一些 “流操作符”的
// //比较常用的有:setw(int);//设置显示宽度，left//right//设置左右对齐。 setprecision(int);//设置浮点数的精确度。
// using namespace std;
// // 哈夫曼树的结点结构
// struct element
// {
//     int weight;        // 权值域
//     int lchild, rchild, parent;  // 该结点的左、右、双亲结点在数组中的下标
// };
// // 选取权值最小的两个结点
// void selectMin(element a[],int n, int &s1, int &s2)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i].parent == -1)// 初始化s1,s1的双亲为-1
//         {
//             s1 = i;
//             break;
//         }
//     }
//     for (int i = 0; i < n; i++)// s1为权值最小的下标
//     {
//         if (a[i].parent == -1 && a[s1].weight > a[i].weight)
//             s1 = i;
//     }
//     for (int j = 0; j < n; j++)
//     {
//         if (a[j].parent == -1&&j!=s1)// 初始化s2,s2的双亲为-1
//         {
//             s2 = j;
//             break;
//         }
//     }
//     for (int j = 0; j < n; j++)// s2为另一个权值最小的结点
//     {
//         if (a[j].parent == -1 && a[s2].weight > a[j].weight&&j != s1)
//             s2 = j;
//     }
// }
// // 哈夫曼算法
// // n个叶子结点的权值保存在数组w中
// void HuffmanTree(element huftree[], int w[], int n)
// {
//     for (int i = 0; i < 2*n-1; i++)    // 初始化，所有结点均没有双亲和孩子
//     {
//         huftree[i].parent = -1;
//         huftree[i].lchild = -1;
//         huftree[i].rchild = -1;
//     }
//     for (int i = 0; i < n; i++)    // 构造只有根节点的n棵二叉树
//     {
//         huftree[i].weight = w[i];
//     }
//     for (int k = n; k < 2 * n - 1; k++) // n-1次合并
//     {
//         int i1, i2; 
//         selectMin(huftree, k, i1, i2); // 查找权值最小的俩个根节点，下标为i1,i2
//         // 将i1，i2合并，且i1和i2的双亲为k
//         huftree[i1].parent = k;
//         huftree[i2].parent = k;
//         huftree[k].lchild = i1;
//         huftree[k].rchild = i2;
//         huftree[k].weight = huftree[i1].weight + huftree[i2].weight;
//     }

// }
// // 打印哈夫曼树
// void print(element hT[],int n)
// {
//     // cout << "index weight parent lChild rChild" << endl;
//     // cout << left;    // 左对齐输出 
//     // for (int i = 0; i < n; ++i) 
//     // {
//     //     cout << setw(5) << i << " ";
//     //     cout << setw(6) << hT[i].weight << " ";
//     //     cout << setw(6) << hT[i].parent << " ";
//     //     cout << setw(6) << hT[i].lchild << " ";
//     //     cout << setw(6) << hT[i].rchild << endl;
//     // }
//     for (int i = 0; i < n; ++i) {
//         cout<<hT[i].weight<<" ";
//     }
// }
// int main()
// {
//     int x[] = { 5,29,7,8,14,23,3,11 };        // 权值集合
//     element *hufftree=new element[2*8-1];    // 动态创建数组
//     HuffmanTree(hufftree, x, 8);
//     print(hufftree,15);
//     system("pause");
//     return 0;
// }
#include <iostream>
using namespace std;
template<typename T>
//树结点结构
class BSTNode {
public:
	T _key; //关键在字（键值）
	BSTNode *_lchild; //左孩
	BSTNode *_rchild; //右孩
	BSTNode *_parent; // 双亲

	//构造函数
	BSTNode(T key, BSTNode *lchild, BSTNode *rchild, BSTNode *parent) :
		_key(key), _lchild(lchild), _rchild(rchild), _parent(parent) {};
};
template<typename T>
class BSTree {
private:
	BSTNode<T> *_Root;  //根结点

public:
	BSTree() :_Root(NULL) {};
	~BSTree() {};


	void insert(T key);//二叉树的插入

	BSTNode<T>* search(T key);//二叉树的查找

	void preOrder();  //先序输出
	void inOrder();   //中序输出
	void postOrder(); //后序输出

	BSTNode<T>* minimumNode();//查找最小的节点
	BSTNode<T>* maximumNode();//查找最大的节点

	T minimumKey();//查找最小的键值
	T maximumKey();//查找最小的键值

	void print();//打印二叉树
	void remove(T key);

	BSTNode<T>* predecessor(BSTNode<T>* x);//查找某个结点的前驱
	BSTNode<T>* sucessor(BSTNode<T>* x); //查找某个结点的后继

	void destory();

	//内部使用函数，供外部接口调用
private:
	void insert(BSTNode<T>* &tree, BSTNode<T>* z);
	BSTNode<T>* search(BSTNode<T>* &tree, T key) const;
	void preOrder(BSTNode<T>*&tree) const;
	void inOrder(BSTNode<T>*&tree) const;
	void postOrder(BSTNode<T>*&tree) const;
	BSTNode<T>* minimumNode(BSTNode<T> *&tree);
	BSTNode<T>* maximumNode(BSTNode<T> *&tree);
	void print(BSTNode<T>*& tree);
	BSTNode<T>* remove(BSTNode<T>* &tree, BSTNode<T> *z);
	void destory(BSTNode<T>*& tree);
};
template<typename T>
void BSTree<T> ::insert(BSTNode<T>* &tree, BSTNode<T>* z)
{
	BSTNode<T>* parent = NULL;
	BSTNode<T>* temp = tree;

	//寻找插入点
	while (temp != NULL)
	{
		parent = temp;
		if (z->_key > temp->_key)
			temp = temp->_rchild;
		else
			temp = temp->_lchild;
	}
	z->_parent = parent;
	if (parent == NULL) //如果树本来就是空树，则直接把z节点插入根节点
		tree = z;
	else if (z->_key > parent->_key) //如果z的值大于其双亲，则z为其双亲的右孩
		parent->_rchild = z;
	else
		parent->_lchild = z;
}
/*
*
*接口
*/
template <typename T>
void BSTree<T>::insert(T key)
{
	//创建一个新的节点，使用构造函数初始化
	BSTNode<T>* z = new BSTNode<T>(key, NULL, NULL, NULL);
	if (!z) //如果创建失败则返回
		return;
	//调用内部函数进行插入
	insert(_Root, z);
}
template <typename T>
void BSTree<T>::inOrder(BSTNode<T>*&tree) const
{
	if (tree)
	{

		inOrder(tree->_lchild);
		cout << tree->_key << " ";
		inOrder(tree->_rchild);
	}
}
template<typename T>
void BSTree<T>::preOrder(BSTNode<T>*&tree) const
{
	if (tree)
	{
		cout << tree->_key << " ";
		preOrder(tree->_lchild);
		preOrder(tree->_rchild);
	}
}
template<typename T>
void BSTree<T>::preOrder()
{
	preOrder(_Root);
}
template <typename T>
void BSTree<T>::inOrder()
{
	inOrder(_Root);
}
int main() {
	BSTree<int> s;
	int n, a;
	cout << "请输入二叉树结点以构造二叉查找树：" << endl;
	cin >> n;
	while (n--) {
		cin >> a;
		s.insert(a);
	}
	s.postOrder();
	cout << endl;
	s.inOrder();
	return 0;
}
