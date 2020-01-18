/*#include<iostream>
using namespace std;
#define N 6
void QSort(int c[], int low, int high)
{
	int poivot;
	if (low < high)
	{
		poivot = Partition(c[0],low,high);
		QSort(c[], low, poivot -1 );
		QSort(c[], poivot + 1,high);
	}
}
int Partition(int c[], int low, int high)
{
	int pivotkey;
	pivotkey = c[low];
	while (low < high)
	{
		while (low < high&&c[high] >= pivotkey)
			high--;
		swap(c[low], c[high]);
		while (low < high&&c[low] < pivotkey)
			low++;
		swap(c[low], c[high]);
	}
	return low;
}
int main()
{
	int b, a[N] = { 7,5,8,4,1,9 };
	cout << "the array before the sort:" << endl;
	for (b = 0; b < N; b++) {
		cout << a[b] << " ";
	}
	QSort(a[b],0, N - 1);
	cout << "the array after quicksort:" << endl;
	for (b = 0; b < N; b++)
		cout <<a[b]<< " ";
	cout << endl;
	system("pause");
	return 0;
}*/
/*#include<iostream>  
using namespace std;
void quickSort(int a[], int, int);
int main()
{
	int array[] = { 34,65,12,43,67,5,78,10,3,70 }, k;
	int len = sizeof(array) / sizeof(int);
	cout << "The orginal arrayare:" << endl;
	for (k = 0; k < len; k++)
		cout << array[k] << ",";
	cout << endl;
	quickSort(array, 0, len - 1);
	cout << "The sorted arrayare:" << endl;
	for (k = 0; k < len; k++)
		cout << array[k] << ",";
	cout << endl;
	system("pause");
	return 0;
}

void quickSort(int s[], int l, int r)
{
	if (l < r)
	{
		int i = l, j = r, x = s[l];
		while (i < j)
		{
			while (i < j && s[j] >= x) // 从右向左找第一个小于x的数  
				j--;
			if (i < j)
				s[i++] = s[j];
			while (i < j && s[i] < x) // 从左向右找第一个大于等于x的数  
				i++;
			if (i < j)
				s[j--] = s[i];
		}
		s[i] = x;
		quickSort(s, l, i - 1); // 递归调用  
		quickSort(s, i + 1, r);
	}
}*/
/*#include <iostream>
using namespace std;
#define N 10
//选择排序
void sortchoice(int a[], int n) {
	int i, j, t, k;
	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			if (a[j] < a[i]) {
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
	cout << "the array after the sorchoice:" << endl;
	for (k = 0; k < n; k++) {
		cout << a[k] << " ";
	}
	cout << endl;
}
//冒泡排序
void sortbubble(int a[], int n) {
	int m, i, t, k;
	for (m = n - 1; m >= 0; m--) {
		for (i = 0; i < m; i++) {
			if (a[i] > a[i + 1]) {
				t = a[i + 1];
				a[i + 1] = a[i];
				a[i] = t;
			}
		}
	}
	cout << "the array after the sortmaopao:" << endl;
	for (k = 0; k < n; k++) {
		cout << a[k] << " ";
	}
	cout << endl;
}
//插入排序
void sortinsert(int a[], int n) {
	int i, j, k;
	for (i = 1; i < n; i++) {
		j = i;
		while (j > 0 && a[j] < a[j - 1]) {
			swap(a[j], a[j - 1]);
			j--;
		}
	}
	cout << "the array after the sortinset:" << endl;
	for (k = 0; k < n; k++) {
		cout << a[k] << " ";
	}
	cout << endl;
}
//快速排序
void sortquick(int a[], int left, int right) {

	{
		if (left < right)
		{
			int i = left, j = right, x = a[left];
			while (i < j)
			{
				while (i < j && a[j] >= x)
					j--;
				if (i < j) {
					i++;
					a[i] = a[j];
				}
				while (i < j && a[i] < x)
					i++;
				if (i < j) {
					j--;
					a[j] = a[i];
				}
			}
			a[i] = x;
			sortquick(a, left, i - 1);
			sortquick(a, i + 1, right);
		}
	}
}
int main()
{
	int b, a[N] = { 7,51,8,4,11,9 ,-4,-50,0,1666 };
	cout << "the array before the sort:" << endl;
	for (b = 0; b < N; b++) {
		cout << a[b] << " ";
	}
	cout << endl;
	sortchoice(a, N);
	sortbubble(a, N);
	sortinsert(a, N);
	sortquick(a, 0, N - 1);
	cout << "the array after the sortquick:" << endl;
	for (b = 0; b < N; b++)
		cout << a[b] << " ";
	cout << endl;
	system("pause");
	return 0;
}*/
/*#include<iostream>
using namespace std;
#define N 10
void quickSort(int a[], int left, int right) {

	{
		if (left < right)
		{
			int i = left, j = right, x = a[left];
			while (i < j)
			{
				while (i < j && a[j] >= x)
					j--;
				if (i < j) {
					i++;
					a[i] = a[j];
				}
				while (i < j && a[i] < x)
					i++;
				if (i < j) {
					j--;
					a[j] = a[i];
				}
			}
			a[i] = x;
			quickSort(a, left, i - 1);
			quickSort(a, i + 1, right);
		}
	}
}
//二分检索
int binarySearch(int a[], int size, int value)
{
	int first = 0,
		last = size - 1,
		middle,
		position = -1;
	bool found = false;
	while (first <= last && !found)
	{
		middle = (first + last) / 2;
		if (a[middle] == value)
		{
			found = true;
			position = middle;
		}
		else if (a[middle] > value)
			last = middle - 1;
		else
			first = middle + 1;
	}
	return position;
}
int main()
{
	int a[N] = { 7,51,8,4,11,9 ,-4,-50,0,1666 };
	cout << endl;
	quickSort(a, 0, N - 1);
	int n, results;
	cout << "input the number you want to search for: "<<endl;
	cin >> n;

	results = binarySearch(a, N, n);

	if (results == -1)
		cout << "it does not exist in the array."<<endl;
	else
	{

		cout << "it exist in the array ";
	}
	system("pause");
	return 0;
}*/
/*#include<iostream>
using namespace std;
#define N 10
void func(int a)
{
	if (a > 0)
		cout << a << " ,";
	else
		cout << 0<<",";
}
int main()
{
	int a[N] = { 10,-12,50,0,46,2,-53,700,-1000,-6 };
	int i;
	for (i = 0; i <= N-1; i++)
		func(a[i]);
	system("pause");
	return 0;
		
}
#include<iostream>
using namespace std;
#define N 10
int func(int n)
{
	int i,m=0;
	int a[N] = { 10,-12,50,0,46,2,-53,700,-1000,-6 };
	for (i = 0; i <= N - 1; i++)
	{
		if (n == a[i])
			m++;
	}
	return m;
}
int main()
{
	int n, s;
	cin >> n;
	s = func(n);
	cout << s;
	system("pause");
	return 0;
}
#include<iostream>
using namespace std;
double Max_Array(double a[],int lengh)
{
	int i=0;
	double n;
	while( i < lengh)
	{
		if (a[i] <= a[i + 1])
		{
			n = a[i + 1];
			a[i] = a[i + 1];
		}
		else
			n = a[i];
		a[i + 1] = a[i];
		i++;
	}
	return n;
}
int main()
{
	int lengh = 10;
	double n;
	double a[10] = { 10,50,45.5,48.2,-46.2,81,100.2,1602.23,56.56,123.023 };
	n=Max_Array(a, lengh);
	cout << n << endl;
	system("pause");
}
#include<iostream>
#include"stdlib.h"
#include"time.h"
using namespace std;
void create_Ary(int a[], int n)
{
	srand(time(0));
	int i, j, x;
	i = 0;
	while (i < n)
	{
		x = rand();
		if (x < 10 || x >= 100)
			continue;
		j = 0;
		while (j <= i && a[j] != x)
			j++;
		if (j > i)
			a[i++] = x;
	}
}
int main()
{
	int a[10];
	int i,n = 10;
	create_Ary(a, n);
	for (i = 0; i < n; i++)
		cout << a[i] << ",";
	system("pause");
}*/
/*#include<iostream>
using namespace std;
#define N 2
int main()
{
	int n=N, i, j,k;
	cout << "input n,get 'n x n'matrix" << endl;
	int a[N][N];
	int	b[N][N];
	int	c[N][N];
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		{
			cout << "input " << i+1 << "row," << j+1 << " column";
				cin >> a[i][j];
		}
	cout << endl;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		{
			cout << "input " << i+1 << "row," << j+1 << " column";
			cin >> b[i][j];
		}
	cout << endl;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++) {
			c[i][j] = 0;
			for (k = 0; k < n; k++)
				c[i][j] = a[i][k] * b[k][j]+c[i][j];

				if (k == n) {
					cout << i + 1 << "row," << j + 1 << " column" << c[i][j] << endl;
				}
			}
	system("pause");
	return 0;
	
}*/
/*#include<iostream>
using namespace std;
#define N 10
int binarySearch(int a[], int size, int value)
{
	int first = 0,
		last = size - 1,
		middle,
		position = -1;
	bool found = false;
	while (first <= last && !found)
	{
		middle = (first + last) / 2;
		if (a[middle] == value)
		{
			found = true;
			position = middle;
		}
		else if (a[middle] > value)
			last = middle - 1;
		else
			first = middle + 1;
	}
	return position;
}
int main()
{
	int i,a[N];
	cout << "input a ten number sorted_arr "<<endl;
	for (i = 0; i < N; i++)
		cin >> a[i];
	cout <<endl;
	int x, results;
	cout << "input the number'x' you want to search for: " << endl;
	cin >> x;
	results = binarySearch(a, N, x);
	if (results == -1)
		cout << "Not Found." << endl;
	else
	{
		cout << "[";
		for (i = 0; i < N; i++)
			cout << a[i] << ",";
		cout << "]" << endl;
		cout << "idx" << endl;
	}
	system("pause");
	return 0;
}*/
/*#include<iostream>
using namespace std;
 int main()
{
	 int array[5], i;
	 cout << "Enter the originl array." << endl;
	 for (i = 0; i < 5; i++)
		 cin >> array[i];
	 cout << endl;
	 for (i = 0; i < 5; i++)
		 cout << array[i] << " ";//输出输入的数组
	 cout << endl;
	 {
		 int j, k, t ,n= 5;
		 for (i = 0; i < n - 1; i++)//选择排序
		 {
			 k = i;
			 for (j = i + 1; j < n; j++)
				 if (array[j] < array[k])k = j;
			 t = array[k];
			 array[k] = array[i];
			 array[i] = t;
		 }
	 }
	 cout << "The sorted array:\n";
	 for (i = 0; i < 5; i++)
		 cout << array[i] << " ";
	 cout << endl;
	 system("pause");
}*/
/*#include<iostream>
using namespace std;
void main()
{
	int a, e[10], c, i = 0;
	cout << "输入一整数";
		cin >> a;
		while (a != 0)
		{
			c = a % 2;
			a = a / 2;
			e[i] = c;
			i++;
		}
		for (; i > 0; i--)
			cout << e[i - 1];
		system("pause");

}*/
/*#include<iostream>
using namespace std;
void main()
{
	char*p, s[] = "ABCDEFG";
	for (p = s; *p != '\0'; p++)
		cout << p << endl;
	system("pause");
}*/
/*#include<iostream>
using namespace std;
void main()
{
	int a[10] = { 3,2,6,8,7,4,5,10,12,11 };
	int sum = 0, i;
	for (i = 0; (i < 10) && (a[i] % 2 == 0); i++)
		sum = sum + a[i];
	cout << "sum=" << sum << endl;
	system("pause");
}*/
/*#include<iostream>
using namespace std;
void main()
{

	int a[10] = { 3,2,6,8,7,4,5,10,12,11 };
	int sum = 0, i;
	for (i = 0; i < 10; i++)
		if (a[i] % 2 == 0)sum = sum + a[i];
	cout << "sum=" << sum<<endl;
	system("pause");
}*/
/*#include<iostream>
using namespace std;
int func(int);
int main()
{
	int x;
	x=func(100);
	cout << x;
	system("pause");
	return 0;
}
int func(int n)
{
	if (n == 1)
		return 10;
	else
	 return 3 * func(n - 1) + 1;
}*/
/*#include<iostream>
using namespace std;
#define n 10
void func()
{
	int a[n][n];
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (j == 0 || j == i)
				a[i][j] = 1;
			else
				a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
int main()
{
	func();
	system("pause");
}*/
/*#include<iostream>
#define _CRT_SECURE_NO_WARNING 1
using namespace std;
const int mon[2][12] = { {31,28,31,30,31,30,31,31,30,31,30,31},{31,28,31,30,31,30,31,31,30,31,30,31} };
int issleep(int year)
{
	if ((year % 4 == 0 && year & 100 != 0) || (year % 400 == 0))
		return 1;
	else
	return 0;
}

int first_day_of_year(int year)
{
	int base_year = 2000;
	int first_day = 6;
	int i = 2000;
	int	total=0;
	for (i = base_year; i < year; i++)
	{
		total = total + 365 + issleep(1);
	}
	return (total+first_day)%7;
}
int first_day_of_month(int year, int month, int first_year)
{
	int tatol = 0;
	int i = 0;
	for (i = 1; i < month; i++)
	{
		tatol = tatol + mon[issleep(year)][i];
	}
	return (tatol + first_year) % 7;
}
void show(int year,int m,int first_month)
{
	int i = 0;
	cout<<"SUN " << "MON " << "TUE " << "WEN " << "THU " << "FRI " << "SAT " << endl;
	for (i = 1; i <= mon[issleep(year)][m]; i++)
	{
		cout << i<<" ";
		if ((first_month - 1 + i) % 7==0)
		cout << endl;
	}
	cout << endl;
}
int main()
{
	int year,m;
	cin >> year;
	cin >> m;
	int first_year = first_day_of_year(year);
	int fist_month = first_day_of_month(year, m, first_year);
	show(year, m, fist_month);
	system("pause");
	return 0;
}*/
/*void sortMerge(SqList *L)
{
	MSort(L->r, L_ > r,l, L-> lengh);
}
void MSort(int SR[], int TR1[], int s, int t)
{
	int m;
	int TR2[MAXSIZE + 1];
	if (s == t)
		TR1[s] = SR[s];
	else
	{
		m = (s + t) / 2;
		MSort(SR, TR2, s, m);
		MSort(SR, TR2, m + 1, t);
		Merge(TR2, TR1, s, m);
	}
}
void Merge(int SR[], int TR[], int i, int m, int n)
{
	int j, k, l;
	for(j=m+1)
}*/
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char a[100], b[100], c[100], d[100];
	gets_s(a);
	gets_s(b);
	gets_s(c);
	int i, h, l, t;
	char *p;
	h = 0, t = 0, l = 0;
	for (i = 0; a[i] != 0; i++)
	{
		if (a[i] == b[0])
		{
			p = &a[i];
			while (b[h] == *p)
			{
				p++;
				h++;

			}
			if (b[h] == 0)
			{
				do
				{
					d[t] = c[l];
					t++;
					l++;


				} while (c[l] != 0);
				i = i + h - 1;


			}
			else
			{
				d[t] = a[i];
				t++;


			}

		}
		else
		{



			d[t] = a[i];
			t++;
		}
		l = 0, h = 0;
	}
	d[t] = 0;
	puts(d);

	return 0;
}*/
/*#include<iostream>
using namespace std;
int func1(int);
int main()
{
	int i = 1, n;
	long long sum;
	cin >> n;
	while (getchar() != '\n\n')
	{
		sum = func1(n);
		cout << sum % 1000000007 << endl;
		cin >> n;
	}
	system("pause");
	return 0;
}
int func1(int n)
{
	int i;
	long long m = 1, sum = 0;
	for (i = 1; i <= n; i++)
	{
		m = m * i;
		sum = sum + m;
	}
	return sum;

}*/
/*#include<iostream>
using namespace std;
int main()
{
	int i = 1, n;
	long long s = 1, sum = 0;
	cin >> n;
	while (getchar() != '\n\n')
	{
		while (i <= n)
		{
			s *= i;
			sum += s;
			i++;
		}
		sum %= 1000000007;
		cout << sum << endl;
		cin >> n;
	}
	return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{
	int i = 1, n;
	long long s = 1, sum = 0;
	cin >> n;
	while (getchar() != '\n\n')
	{
		while (i <= n)
		{
			s *= i;
			s %= 1000000007;
			sum += s;
			i++;
		}
		sum %= 1000000007;
		cout << sum << endl;
		cin >> n;
	}
	return 0;
}*/
/*#include<iostream>
using namespace std;
long long func1(int n)
{
	int i;
	long long m = 1, sum = 0;
	for (i = 1; i <= n; i++)
	{
		m = m * i;
		sum = sum + m;
	}
	return sum;

}
int main()
{
	long long sum;
	int n;
	while (getchar() != '\n\n')
	{
		cin >> n;
		sum = func1(n);
		cout << sum % 1000000007 << endl;
	}
	return 0;
}*/
/*#include<iostream>
#include"stdlib.h"
#include"time.h"
using namespace std;
void create_Ary(int a[],int n)
{
	srand(time(0));
	int i, j, x;
	i = 0;
	while (i < n)
	{
		x = rand();
		if (x < 10 || x >= 100)
			continue;
		j = 0;
		while (j <= i && a[j] != x)
			j++;
		if (j > i)a[i++] = x;
	}
}
int main()
{
	int a[10];
	int i,n=10;
	create_Ary(a, n);
	cout << "[";
	for (i = 0; i < n; i++)
		cout << a[i]<<" ";
	cout << "]";
	return 0;
}*/
/*#include<iostream>
using namespace std;
const int n = 10;
void func(int a[])
{
	int j;
	for (j = 0; j < n; j++)
	{
		if (a[j] > 0)
			cout << a[j]<<" ";
		else
			cout << "0"<<" ";
	}
}
int main()
{
	int i,a[n];
	cout << "please input 10 number" << endl;
	for (i = 0; i < n ; i++)
		cin >> a[i];
	func(a);
	return 0;

}*/
/*#include<iostream>
using namespace std;
const int m = 10;
int seach(int a[],int len,int n)
{
	int i,j=0;
	for (i = 0; i < len; i++)
		if (a[i] == n)
			j++;
	return j;
}
int main()
{
	int k,x,a[m] = { 0,1,-10,20,10,1,0,23,0,5 };
	int lenth = sizeof(a) / sizeof(int);
	cout << "[";
	for (k = 0; k < lenth; k++)
		cout << a[k]<<" ";
	cout << "]";
	cout << endl;
	cin >> x;
	cout << seach(a,lenth,x) << endl;
	return 0;
	
}*/
/*#include <iostream>
using namespace std;
const int N = 10;
int Max_Array(int a[], int lengh)
{
	int i;
	for (i = 0; i < lengh; i++)
	{
		if (a[i] > a[i + 1])
			swap(a[i], a[i + 1]);
	}
	return a[i];

}
int main()
{
	int j, a[N] = { 10,-12,-10,100,1,0,12,-15,11,-1 };
	int lengh = sizeof(a) / sizeof(int);
	cout << "[";
	for (j = 0; j < N; j++)
	{
		cout << a[j] << " ";
	}
	cout << "]";
	cout << endl;
	cout << Max_Array(a, lengh);
	return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{
	int i = 0,l=0,t=0,u;
	int n,j,k;
	cin >> n;
	u = n;
	while (n)
	{
		n = n / 10;
		l++;
	}
	int a[5];
	while (i < l)
	{
		a[i] = u % 10;
		u = u / 10;
		i++;
	}
	for (j = 0; j <= 9; j++)
	{
		for (k = 0; k < l; k++)
			if (a[k] == j)
				t++;
		if (t > 0)
			cout << j << ":" << t << endl;
	}
	cout << l;
	system("pause");
	return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{
	int n, i,j, k;
	char a;
	cin >> n >> a;
	if (n % 2 == 0)
		k = n / 2;
	else
		k = n / 2 + 1;
	for (i = 1; i <= k; i++)
	{
		for (j = 1; j <=n; j++)
		{
			cout << a;
		}
		cout << endl;
	}
	return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{
	int a,b,c,t;
	cin >> a >> b >> c;
	if (a > b)
	{
		t = a;
		a = b;
		b = t;
	}
	if (a > c)
	{
		t = a;
		a = c;
		c = t;
	}
	if (b > c)
	{
		t = b;
		b = c;
		c = t;
	}
	cout << a << "->" << b << "->" << c;
	return 0;
}*/
/*#include <iostream>
#include<string>
using namespace std;
int book[256];
int main() {
	string s, a;
	getline(cin, s);
	getline(cin, a);
	for (int i = 0; i < a.length(); i++) {
		book[a[i]] = 1;
	}
	for (int i = 0; i < s.length(); i++) {
		if (book[s[i]] == 1) {
			continue;
		}
		cout << s[i];
	}
	return 0;
}*/
/*#include<iostream>
#include<string>
using namespace std;
void func(long long n)
{
	int i, j = 0;
	int a[20];
	string name[10] = { "ling", "yi","er","san","si","wu","liu","qi","ba","jiu" };
	while (n)
	{
		a[j] = n % 10;
		n = n / 10;
		j++;
	}
	while (j >= 0)
	{
		for (i = 0; i < 10; i++)
			if (a[j] == i)
			{
				if (j != 0)
					cout << name[i] << " ";
				else
					cout << name[i];
			}
		j--;
	}
}
int main()
{
	long long n;
	cin >> n;
	if (n < 0)
	{
		cout << "fu" << " ";
		n = 0 - n;
		func(n);
	}
	else if (n == 0)
		cout << "ling";
	else
		func(n);
	return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{
	int a[1000],b[1000];
	int n,m,l,t,sum=0, i=0,j=0;
	char c;
	cin >> n;
	while (i < n)
	{
		cin >> m;
		a[i] = m;
		cin >> c;
		cin >> l;
		b[j] = l;
		j++;
		i++;
	}
	j = 1;
	while (j > 0)
	{
		t = 0;
		for (i = 0; i < n; i++)
			if (j%b[i] == 0)
				t++;
		if (t == n)break;
		j++;
	}
	for (i = 0; i < n; i++)
	{
		a[i] = a[i] * (j / b[i]);
		sum = sum + a[i];
		
	}
  if (sum < 0)
	{
		sum = 0 - sum;
		if(sum>j)
		cout <<"-"<< sum / j << " " << sum - j * (sum / j) << c<< j;
		else if(sum%j==0)
			cout << "-" << sum / j ;
		else
			cout << "-"<< sum - j * (sum / j) << c << j;
	}
  else
  {
	  if (sum > j)
		  cout << sum / j << " " << sum - j * (sum / j) << c<< j;
	  else if (sum%j == 0)
		  cout << "-" << sum / j;
	  else
		  cout << "-" << sum - j * (sum / j) << c<< j;
  }
  return 0;
}*/
/*
using namespace std;
const int NUM = 10;
int issord(int A[])
{
	int i, k, b = 1;
	for (i = 0; i < NUM - 1; i++)
		for (k = i + 1; k < NUM; k++)
		{
			if (A[i] > A[k])

			{
				b = 0;
				break;
			}
			else
				continue;
		}
	return b;
}
int main()
{
	int A[NUM];
	int i, k,m;
	int temp;
	cout << "请输入10个整数" << endl;
	for (i = 0; i < NUM; i++)
		cin >> A[i];
	m = issord(A);
		if (m == 1) {
			for (i = 0; i < NUM; i++)
				cout << A[i] << " ";
		}
		else
		{
			for (i = 1; i < NUM; i++)
			{
				for (k = 0; k < NUM - i; k++)
					if (A[k] > A[k + 1])
					{
						temp = A[k];
						A[k] = A[k + 1];
						A[k + 1] = temp;
					}
			}
			for (i = 0; i < NUM; i++)
				cout << A[i] << " ";
		}
	//cout << endl;
	return 0;
}*/
/*#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack<int>mystack;
	int num = 0;
	for (int i = 0; i <= 10; i++) {
		mystack.push(i);
	}
	cout << "size is" << mystack.size() << endl;
	while (!mystack.empty()) {
		cout << " " << mystack.top();
		mystack.pop();
	}
	cout << endl;
	system("pause");
	return 0;
}*/
/*#include<iostream>
#include<queue>
using namespace std;
int main()
{
	queue<int>q;
	int i, n;
	cin >> n;
	cout << q.empty() << endl;
	for (i = 1; i <= n; i++)q.push(i);
	cout << q.front() << " " << q.back() << endl;
	cout << q.size() << endl;
	while (!q.empty()) {
		cout << q.front() << endl;
		q.pop();
	}
	return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{
	char c;
	int j=0, k=0, l=0,n=0;
	cout << "输入一串字符" << endl;
	while ((c = getchar()) != '\n')
	{
		if ((c >= 'a'&&c <= 'z') || (c >= 'A'&&c <= 'Z'))
			j++;
		else if (c >= '0'&&c <= '9')
			k++;
		else if (c == ' ')
			l++;
		else
			n++;

	}
	cout << "英文字母个数" << j << endl;
	cout << "数字个数" << k<<endl;
	cout << "空格个数" << l << endl;
	cout << "其他字符" << n<<endl;
	cout << endl;
	return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{
	int i,n, *p;
	cout << "输入数组长度" << endl;
	cin >> n;
	p = new int[n];
	cout << "请给数组赋值赋值" << endl;
	for (i = 0; i < n; i++)
		cin >> *(p + i);
	for (i = 0; i < n; i++)
		cout << *(p + i)<<" ";
	delete p;
	return 0;
}*/
/*#include<iostream>
#include<iomanip>
using namespace std;
const int N = 10;
int main()
{
	int i=1,j=0;
	int a[N][N];
	int left = 0, upper = 0, right=N-1, down = N-1;
	while (left <= right)
	{
		for (j = upper; j <= down; j++, i++)
		{
			a[j][left] = i;
		}
		left++;
		for (j = left; j <= right; j++, i++)
		{
			a[down][j] = i;
		}
		down--;
		for (j = down; j >= upper; j--, i++)
		{
			a[j][right] = i;
		}
		right--;
		for (j = right; j >= left; j--, i++)
		{
			a[upper][j] = i;
		}
		upper++;
	}
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
		{
			cout << setw(4) << a[i][j];
			if (j == N - 1)
				cout << endl;
		}
	system("pause");
	return 0;
}*/
/*#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
	int day_m[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	string date[7] = { "SUN","MON","TUS","WES","THU","FRI","STA" };
	int days=1,i, d, m,y,t=0;
	cin >> y >> m;
	for (i = 0; i < 7; i++)
		cout << setw(4) << date[i];
	cout << endl;
	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
		day_m[1] = 29;
	for (i = 0; i < m - 1; i++)
		days = days + day_m[i];
	d = (y - 1 + (y - 1) / 4 - (y - 1) / 100 + (y - 1) / 400 + days) % 7;
		for (i = 0; i < d; i++)
			cout << setw(4) << " ";
		for (i = 1; i <= 7 - d; i++)
			cout << setw(4) << i;
		cout << endl;
		while (i <= day_m[m - 1])
		{
			cout << setw(4) << i;
			t++;
			if (t == 7)
			{
				cout << endl;
				t = 0;
			}
			i++;
		}
	system("pause");
	return 0;
}*/
/*#include<iostream>
using namespace std;
int day_m[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
struct date
{
	int y;
	int m;
	int d;
}day;
int main()
{
	int i,days=0;
	date date1;
	cin >> date1.y >> date1.m >> date1.d;
	if ((date1.y % 4 == 0 && date1.y % 100 != 0) || date1.y % 400 == 0)
		day_m[1] = 29;
	for (i = 0; i < date1.m - 1; i++)
		days = days + day_m[i];
	date1.d = date1.d + days;
	cout << date1.d << endl;
	system("pause");
	return 0;
}*/

/*#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	int  n,j,m;
	double l = 0, i = 0, sum;
	cin >> m;
	n= abs(m);
	while (n)
	{
		j = n % 10;
		n = n / 10;
		i++;
		if (j == 2)
			l++;
	}
	sum = l / i;
	if (sum == 0)
		cout << sum;
	else
	{
		if (m < 0)
			sum = sum * 1.5;
		if (m % 2 == 0)
			sum = sum * 2;
		sum = sum * 100;

		cout<<fixed<<setprecision(2) << sum << "%" << endl;
	}
	system("pause");
	return 0;
}*/
/*#include<iostream>
#include"stdlib.h"
#include"time.h"
using namespace std;
unsigned create(int);
unsigned create(int n)
{
		srand(time(0));
		int i = 0, j = 1;
		unsigned x;
		while (i < n)
		{
			j = j * 10;
			i++;
		}
			x=(rand() % (j - j / 10)) + j / 10;
		return x;
}
int main()
{
	int n;
	cin >> n;
	cout << create(n);
	system("pause");
	return 0;

}*/
/*#include<iostream>
using namespace std;
int main()
{
	int i, k, j, l=0, n,m,s=0,t=0;
	int sum;
	int a[500],b[500];
	cin >> n;
	while (l < n)
	{
		cin >> m;
		for (i = 1; i <= m; i++)
		{
			cin >> j;
			if (j%i <= i / 2)
				sum = sum + j / 2;
			else
				sum = sum + j;
		}
		while (sum)
		{
			k = sum % 2;
			sum = sum / 2;
			if (k == 0)
				s++;
			else
				t++;
			a[l] = s;
			b[l] = t;
		}
		sum = 0;
		l++;
	}
	for (i = 0; i < n; i++)
		cout << a[i] << " " << b[i] << endl;
	system("pause");
}*/
/*#include<iostream>
using namespace std;
int main()
{
	char c1 = 'a', c2 = 'b', c3 = 'c', c4 = '\101', c5 = '\116';
	cout << c1 << c2 << c3 << '/n';
	cout << "\t\b" << c4 << '\t' << c5 << '\n';
	system("pause");
		return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{
	int n, m, i=0, j=0, k,t,s;
	int temp = 0;
	int a[9], b[9];
	cin >> n >> m;
	while (n)
	{
		t = n % 10;
		n = n / 10;
		a[i] = t;
		i++;
	}
	while (m)
	{
		s = m % 10;
		m = m / 10;
		b[j] = s;
		j++;
	}
	for(k=0;k<i;k++)
		for(j=0;j<i;j++)
			if (a[k] == b[j])
			{
				temp++;
				continue;
			}
	cout << temp << endl;
	system("pause");
	return 0;
}*/
/*#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,m,y,l;
	for (n = 1; n < 100000; n++)
	{
		m = sqrt(n + 100);
		y = sqrt(n + 100 + 168);
		if (m*m ==n + 100 && y*y ==n + 100 + 168)
		{
			cout << n<<" ";
		}
	}
	system("pause");
	return 0;
}*/
/*#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n, i, j, k,l;
	cin >> n;
	for (j = 2; j <= n; j++)
	{
		k = sqrt(j);
		l = 0;
		for (i = 2; i <=k; i++)
			if (j%i == 0)
				l++;
		if (l < 1)
			cout << j << " ";
	}
	system("pause");
	return 0;
}*/
/*#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n, i, k, l=0;
	cin >> n;
	if (n < 2)
		cout << "这不是一个素数" << endl;
	else
	{

		 k = sqrt(n);
			for (i = 2; i <= k; i++)
			{
				if (n%i == 0)
					l++;
			}
			if (l < 1)
				cout << "这是一个素数" << endl;
			else
				cout << "这不是一个素数" << endl;
	}
	system("pause");
	return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{
	int i,k, l;
	int sum;
	for (i = 100; i < 1000; i++)
	{
		sum = 0;
		l = i;
		while (l)
		{
			k = l % 10;
			l = l / 10;
			sum = sum + k * k* k;
		}
		if (sum == i)
			cout << i << " ";
	}
	system("pause");
	return 0;
}*/
/*#include<iostream>
#include <cctype>
using namespace std;
void func(double a,double b)
{
	int n,m;
	n = (int)a;
	m = (int)b;
	if (a - n == 0 && a > 0 && !isdigit(a))
		cout << a;
	else
		cout << "?";
	cout << " " << "+" << " ";
	if (b - n == 0 && b > 0 && !isdigit(b))
		cout << b;
	else
		cout << "?";
	if (!isdigit(a) && !isdigit(b))
	{
		cout << a + b;
	}
	else
		cout << "?";
}
int main()
{
	double a, b;
	cin >> a >> b;
	func(a, b);
	system("pause");
}*/
/*#include<iostream>
using namespace std;
int main()
{
	static int k[10];
	int i, j, n, s;
	for (j = 2; j < 1000; j++)
	{
		n = -1;
		s = j;
		for (i = 1; i < j; i++)
		{
			if (j%i == 0)
			{
				n++;
				s = s - i;
				k[n] = j;
			}
		}
		if (s == 0)
		{
			for (i = 0; i <= n; i++)
				cout << k[n]<<" ";
		}
	}
	system("pause");
	return 0;
}*/
//杨辉三角
/*#include<iostream>
using namespace std;
int main()
{
	int i,j;
	int a[10][10];
	for (i = 0; i < 9; i++)
	{
		a[i][0] = 1;
		a[i][i] = 1;
			for (j = 1; j < i; j++)
				a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
	}
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j <= i; j++)
			cout << a[i][j]<<" ";
		cout << endl;
	}
	system("pause");
	return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{
	int i, j, k;
	char a[5] = { '*','*','*','*','*' };
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < i; j++)
			cout << " ";
		for (k = 0; k < 5; k++)
			cout << a[i]<<" ";
		cout << endl;
	}
	system("pause");
	return 0;
}*/
/*#include<iostream>
#include<string>
using namespace std;
int main()
{
	string string1 = "* * * * *";
	int i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < i; j++)
			cout << " ";
		cout << string1 << endl;
	}
	system("pause");
}*/
/*#include<iostream>
using namespace std;
int main()
	{
		int i, j, k,s=0;
		int n;
		char a;
		cin >> n >> a;
		do
		{
			s++;
		 }while ((2 * s*s - 1) < n);
		for (i = 0; i <= s-1; i++)
		{
			for (j = 0; j <= i; j++)
				cout << " ";
			for (k = 0; k <= s - 2 * i; k++)
				cout << a;
			cout << endl;;
		}
		for (i = 1; i <s; i++)
		{
			for (j = 0; j <= s - i; j++)
				cout << " ";
			for (k = 0; k <= s * i; k++)
				cout << a;
			cout << endl;;
		}
		cout << n - (2 * s*s - 1);
		system("pause");
		return 0;
	}*/
/*#include<iostream>
using namespace std;
int main()
{
	int i, j,sum=0;
	for (j = 2; j < 1000; j++)
	{
		sum = 0;
		for (i = 1; i < j; i++)
			if (j%i == 0)
				sum = sum + i;
		if (sum == j)
			cout << j << " ";
	}
	system("pause");
	return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{
	int i, j;
	int a[5];
	cin >> i;
		j = 0;
		while (i)
		{
			a[j] = i % 10;
			i = i / 10;
			j++;
		}
		if (a[0] == a[4] && a[1] == a[3])
			cout << "这是一个回文数 ";
		else
			cout << "这不是一个回文数";
	system("pause");
	return 0;
}*/
/*#include <iostream>
using namespace std;
#define N 10
//选择排序
void sortchoice(int a[], int n) {
	int i, j, t, k;
	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			if (a[j] < a[i]) {
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
}
//冒泡排序
void sortbubble(int a[], int n) {
	int m, i, t, k;
	for (m = n - 1; m >= 0; m--) {
		for (i = 0; i < m; i++) {
			if (a[i] > a[i + 1]) {
				t = a[i + 1];
				a[i + 1] = a[i];
				a[i] = t;
			}
		}
	}
}
//插入排序
void sortinsert(int a[], int n) {
	int i, j, k;
	for (i = 1; i < n; i++) {
		j = i;
		while (j > 0 && a[j] < a[j - 1]) {
			swap(a[j], a[j - 1]);
			j--;
		}
	}
}
//快速排序
void quickSort(int a[], int left, int right) {

	{
		if (left < right)
		{
			int i = left, j = right, x = a[left];
			while (i < j)
			{
				while (i < j && a[j] >= x)
					j--;
				if (i < j) {
					i++;
					a[i] = a[j];
				}
				while (i < j && a[i] < x)
					i++;
				if (i < j) {
					j--;
					a[j] = a[i];
				}
			}
			a[i] = x;
			quickSort(a, left, i - 1);
			quickSort(a, i + 1, right);
		}
	}
}
//二分检索
int binarySearch(int a[], int size, int value)
{
	int first = 0,
		last = size - 1,
		middle,
		position = -1;
	bool found = false;
	while (!found && first <= last)
	{
		middle = (first + last) / 2;
		if (a[middle] == value)
		{
			found = true;
			position = middle;
		}
		else if (a[middle] > value)
			last = middle - 1;
		else
			first = middle + 1;
	}
	return position;
}
int main()
{
	int b, a[N] = { 7,51,8,4,11,9 ,-4,-50,0,1666 };
	cout << "the array before the sort:" << endl;
	for (b = 0; b < N; b++) {
		cout << a[b] << " ";
	}
	cout << endl;
	sortchoice(a, N);
	cout << "the array after the sorchoice:" << endl;
	for (b = 0; b < N; b++) {
		cout << a[b] << " ";
	}
	cout << endl;
	sortbubble(a, N);
	cout << "the array after the sortmaopao:" << endl;
	for (b = 0; b < N; b++) {
		cout << a[b] << " ";
	}
	cout << endl;
	sortinsert(a, N);
	cout << "the array after the sortinset:" << endl;
	for (b = 0; b < N; b++) {
		cout << a[b] << " ";
	}
	cout << endl;
	quickSort(a, 0, N - 1);
	cout << "the array after the quicksort:" << endl;
	for (b = 0; b < N; b++)
		cout << a[b] << " ";
	cout << endl;
	int n, results;
	cout << "Enter n you wish to search for: ";
	cin >> n;

	results = binarySearch(a, N, n);

	if (results == -1)
		cout << "That number does not exist in the array.\n";
	else
	{

		cout << "n is in the array ";
	}
	system("pause");
	return 0;
}*/
/*#include<iostream>
using namespace std;
double pi()
{
	double n=1.0, i=1.0,sum=0;
	while (n >= 1e-7)
	{
		n = 1 / n;
		sum = sum + i * n;
		i = 0 - i;
		n = n + 2;
	}
	return sum * 4;
}
int main()
{
	double p;
	p = pi();
	cout << p << endl;
	system("pause");
	return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{
	int a, i, n, sum = 0, t;
	cin >> n >> a;
	while (a == 0)
	{
		cout << "输入错误，请重新输入" << endl;
		cin >> n >> a;
	}
	t = a;
	for (i = 1; i <= n; i++)
	{
		sum = sum + a;
		a = a * 10 + t;
	}
	cout << sum << endl;
	return 0;
}
#include<iostream>
using namespace std;
int main()
{
	double i, m, n, sum = 0;
	cin >> m >> n;
	while (m <= 0 || n <= 0)
	{
		cout << "输入错误，请重新输入" << endl;
		cin >> m >> n;
	}
	if (n == 1)
	{
		sum = m;
		cout << sum << endl;
	}
	else
	{
		sum = m;
		for (i = 1; i < n; i++)
		{

			sum = sum + m;
			m = m / 2;
		}
		cout << sum << endl;
	}
	return 0;
}
#include<iostream>
using namespace std;
const int n = 5;
void swap(int a[])
{
	int i, j, k, l, s, temp;
	l = a[0];
	s = a[0];
	for (i = 1; i < n; i++)
	{
		if (l < a[i])
		{
			l = a[i];
			j = i;
		}
		if (s > a[i])
		{
			s = a[i];
			k = i;
		}
	}
		temp = a[j];
		a[j] = a[k];
		a[k] = temp;
}
int main()
{
		int i, a[n];
		for (i = 0; i < n; i++)
			cin >> a[i];
		cout << "交换前的数组" << endl;
		for (i = 0; i < n; i++)
			cout << a[i] << " ";
		cout << endl;
		cout << "交换后的数组" << endl;
		swap(a);
		for (i = 0; i < n; i++)
			cout << a[i] << " ";
		return 0;
}*/
/*#include<iostream>
using namespace std;
const int n = 27;
void change(char a[])
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (a[i] > 'Z'&&a[i] <= 'z')
		{
			if (a[i] == 'a')
				a[i] = 'z';
			else if (a[i] == 'z')
				a[i] = 'a';
			else
				a[i] = a[i] - 1;
		}
		else
			continue;
	}

}
void sord(char a[])
{
	int i, j;
	char temp;
	for (i = 0; i < n; i++)
		for (j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
}


int main()
{
		int i;
		char a[n] = "jjyyzzabcdefgJJYYZZABCDEFG";
		change(a);
		sord(a);
		for (i = 0; i < n; i++)
			cout << a[i];
		return 0;
}*/
/*#include<iostream>
#include<iomanip>
using namespace std;
struct Time
{
	short hour;
	char a;
	short minute;
};
void output(short a)
{
	cout.setf(ios::right);
	cout.fill('0');
	cout.width(2);
	cout << a;
}
int main()
{
	short i;
	Time time;
	cin >> time.hour >> time.a >> time.minute;
	if (time.hour < 13)
	{
		cout << "Only ";
		output(time.hour);
		cout << time.a;
		output(time.minute);
		cout<< "." << "  Too early to Dang.";
	}
	else
	{
		if (time.minute > 0)
			i = time.hour - 11;
		else
			i = time.hour - 12;
		for (; i > 0; i--)
			cout << "Dang";
	}
	system("pause");
	return 0;
}*/
/*#include<iostream>
#include<cmath>
using namespace std;
int isperfect(short h,short w)
{
	int i;
	double w1;
	w1 = (double)(h - 100)*0.9;
	if (abs(((double)w/2 - w1)) < (double)(w1*0.1))
		i = 1;
	else if (abs(((double)w / 2 - w1)) > (double)(w1*0.1))
		i = 2;
	else
		i = 3;
	return i;
}
int main()
{
	int i, n;
	short a[20],b[20];
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> a[i]>>b[i];
	for (i = 0; i < n; i++)
	{
		switch (isperfect(a[i], b[i]))
		{
		case 1:cout << "You are wan mei!"<<endl; break;
		case 2:cout << "You are tai pang le!"<<endl; break;
		case 3:cout << "You are tai shou le!"<<endl; break;
		}
	}
	return 0;
}*/
/*#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	if (b == 0)
		cout << a << "/" << b << "=" << "Error";
	else if (b < 0)
		cout << a << "/" << "(" << b << ")" << "=" << fixed << setprecision(2) << (float)a / b;
	else
		cout << a << "/" << b << "=" << fixed << setprecision(2) << (float)a / b;
	system("pause");
	return 0;
}*/
/*#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double high[10],tall;
	int i=0,n;
	char a;
	cin >> n;
	while (n)
	{
		cin >> a >> tall;
		if (a == 'F')
			high[i] = tall * 1.09;
		else
			high[i] = tall / 1.09;
		i++;
		n--;
	}
	for (n = 0; n < i; n++)
		cout << fixed << setprecision(2) << high[n]<<endl;
	system("pause");
	return 0;
}*/
/*#include<iostream>
#include<string>
using namespace std;
int main()
{
	char c;
	int i = 1,n, flag, j = 1;
	while (((cin >> n).get(c)))
	{
		if (n == 250 && j == 1)
		{
			flag = i;
			j++;
		}
		i++;
		if (c == '\n')
		{
			cout << flag << endl;
			break;
		}
	}
	return 0;
}*/
/*#include<iostream>
#include<string>
using namespace std;
string s[10] = { "ling", "yi","er","san","si","wu","liu","qi","ba","jiu" };
int main()
{

	return 0;
}*/
/*#include<iostream>
#include<string>
using namespace std;
int main()
{
	string string1;
	cin >> string1;
	char a[10] = { '0','1','2','3','4','5','6','7','8','9' };
	int b[10] = { 0 };
	int i, j, len;
	len = string1.length();

	for (i = 0; i < len; i++)
		for (j = 0; j < 10; j++)
			if (string1[i] == a[j])
				b[j]++;
	for (i = 0; i < 10; i++)
		if (b[i] > 0)
			cout << i << ":" << b[i] << endl;
	return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{
	short a1, a2, i,n,temp1 = 0, temp2 = 0;
	short hi1[100], hi2[100], ha1[100], ha2[100];
	cin >> a1 >> a2;
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> hi1[i] >> ha1[i] >> hi2[i] >> ha2[i];
	for(i=0;i<n;i++)
	{
		if (ha1[i] == hi1[i] + hi2[i])
			temp1++;
	    if (ha2[i] == hi1[i] + hi2[i])
			temp2++;
		if (temp1 > a1)
		{
			cout << "A" << endl;
			cout << temp2;
			break;
		}
		else if (temp2 > a2)
		{
			cout << "B" << endl;
			cout << temp1;
			break;
		}
		else
			;
	}
	return 0;
}*/
/*#include<iostream>
#include<string>
using namespace std;
int transform(string, int);
string panduan(string, int);
string panduan(string s, int len)
{
	short i;
	for (i = 0; i < len; i++)
	{
		if (s[i] >= '0'&& s[i] <= '9')
			continue;
		else
		{
			s = "?";
			break;
		}
	}
	return s;
}
int transform(string s, int len)
{
	int i,l=1,sum=0;
	for (i = 1; i < len; i++)
		l = l * 10;
	i = 0;
	while (l)
	{
		sum = sum + (s[i]-48)*l;
		l = l / 10;
		i++;
	}
	return sum;
}
int main()
{
	string s1, s2;
	int len1, len2;
	cin >> s1 >> s2;
	len1 = s1.length();
	len2 = s2.length();
	s1=panduan(s1, len1);
	s2=panduan(s2, len2);
	if (s1 != "?")
		if (transform(s1, len1) < 1 || transform(s1, len1) > 1000)
			s1 = "?";
	if (s2 != "?")
		if (transform(s2, len1) < 1 || transform(s2, len2) > 1000)
			s2 = "?";
	if (s1 != "?"&&s2 != "?")
		cout << transform(s1, len1) << " + " << transform(s2, len2) << " = " << transform(s1, len1) + transform(s2, len2);
	else if (s1 != "?"&&s2 == "?")
		cout << transform(s1, len1) << " + " << "?" << " = " << "?";
	else if (s1 == "?"&&s2 != "?")
		cout << "?" << " + " << transform(s2, len2) << " = " << "?";
	else
		cout<< "?" << " + " << "?" << " = " << "?";
	return 0;
}
#include<iostream>
#include<string>
using namespace std;
int ch[17] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
char sh[11] = { '1','0','X','9','8','7','6','5','4','3','2' };
int main()
{
	int i,j,m=0, n,sum;
	string str1, str[100];
	cin >> n;
	for (i = 0; i < n; i++)
	{
		sum = 0;
		cin >> str1;
		for (j = 0; j < 17; j++)
		{
			if (str1[j] >= '0'&&str1[j] <= '9')
			{
				sum = sum + ((str1[j] - 48)*ch[j]);
			}
			else
				break;
		}
		if ( (j < 17)|| (j == 17 && sh[sum % 11] != str1[17]))
		{
			str[m] = str1;
			m++;
		}
	}
	if (m == 0)
		cout << "All passed";
	else
	{
		for (i = 0; i < m; i++)
			cout << str[i] << endl;
	}
	return 0;
}*/
/*#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
	string str;
	int i,len, sum = 0;
	double result;
	cin >> str;
	len = str.length();
	for (i = 0; i < len; i++)
		if (str[i] == '2')
			sum++;
	if (str[0] == '-')
		result = (double)sum / (len-1) * 1.5;
	else
		result = (double)sum / len;
	if ((str[len - 1] - 48) % 2 == 0)
		result *= 2;
	else
		;
	if (result == 0)
		cout << "00.00%";
	else
		cout << fixed << setprecision(2) << result*100 << "%" << endl;
	return 0;
}*/
/*#include<iostream>
#include<string>
using namespace std;
struct stu
{
	short sex;
	string name;
};
int main()
{
	stu stu1[50];
	string boy[25], girl[25];
	int i,n,b=0,g=0;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> stu1[i].sex >> stu1[i].name;
		if (stu1[i].sex == 0)
		{
			girl[g] = stu1[i].name;
			g++;
		}
		else
		{
			boy[b] = stu1[i].name;
			b++;
		}
	}
	g = 0;
	b = 0;
	for (i = 0; i < n/2; i++)
	{
		if (stu1[i].sex == 0)
		{
			cout << girl[g] << " " << boy[n / 2 - 1 - g] << endl;
			g++;
		}
		else
		{
			cout << boy[b] << " " << girl[n / 2 - 1 - b] << endl;
			b++;
		}
	}
	return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{
	int **a = new int*[10];
	for (int i = 0; i < 10; i++)
		a[i] = new int[10];
	a[5][5] = -23;
	cout << a[5][5] << endl;
	for (int i = 0; i < 10; i++)
		delete[] a[i];
	delete[] a;
	cout << a[5][5];
	system("pause");
	return 0;
}*/
#include<stdio.h>
int main()
{
	int n;
	scanf_s("%d", &n);
	printf("%d",n);
	return 0;
}