//#include<iostream>
//#include<string.h>
//using namespace std;
//class String {
//	friend String operator+(const String& s1, const String& s2);
//
//	friend ostream& operator<<(ostream& os, const String& obj);
//
//	friend istream& operator>>(istream& is, String& obj);
//
//	friend bool operator>(const String& s1, const String& s2);
//
//	friend bool operator>=(const String& s1, const String& s2);
//
//	friend bool operator==(const String& s1, const String& s2);
//
//	friend bool operator!=(const String& s1, const String& s2);
//
//	friend bool operator<(const String& s1, const String& s2);
//
//	friend bool operator<=(const String& s1, const String& s2);
//
//private:
//	int len;
//	char* data;
//public:
//
//	String(const char* s = "");
//
//	String(const String& other);
//
//	String& operator+=(const String& other);
//
//	String& operator=(const String& other);
//
//	String operator()(int start, int end);
//
//	char& operator[](int index);
//
//	~String();
//
//};
//String::String(const char* s = "")
//{
//	if (s == NULL)
//	{
//		len = 1;
//		data = new char[len];
//		data = '\0';
//	}
//	else
//	{
//		len = strlen(s) + 1;
//		data = new char[len];
//		strcpy(data, s);
//	}
//}
//String::String(const String& other)
//{
//	len = other.len;
//	data = new char[strlen(other.data) + 1];
//	strcpy(data, other.data);
//}
//String& String::operator+=(const String& other)
//{
//	if (other.data == NULL)
//		return *this;
//	else
//	{
//		len = strlen(strcat(data, other.data)) + 1;
//		data = new char[len];
//		strcpy(data, strcat(data, other.data));
//		return *this;
//	}
//}
//String& String::operator=(const String& other)
//{
//	if (other.data == NULL)
//	{
//		len = 1;
//		data = new char[len];
//		data = '\0';
//	}
//	else
//	{
//		len = strlen(other.data) + 1;
//		data = new char[len];
//		strcpy(data, other.data);
//	}
//	return *this;
//}
//String String::operator()(int start, int end)
//{
//	if (end < start||start<0||end>len)
//	{
//		String s1(NULL);
//		return s1;
//	}
//	else
//	{
//		char* d1 = new char[end - start + 1];
//		for (int i = 0; i <= end - start; i++)
//			d1[i] = data[i + start];
//		d1[end - start + 1] = '\0';
//		String s1(d1);
//		return d1;
//	}
//}
//String::~String()
//{
//	if (data != NULL)
//	{
//		delete[]data;
//		data = NULL;
//	}
//}
//String operator+(const String & s1, const String & s2)
//{
//	String s3(strcat(s1.data, s2.data));
//	return s3;
//}
//char &String::operator[](int index)
//{
//	char str;
//	if (index<0 || index>len)
//		str = '\0';
//	else
//		str = data[index];
//	return str;
//}
//ostream& operator<<(ostream & os, const String & obj)
//{
//	os << obj.data;
//	return os;
//}
//istream& operator>>(istream & is, String & obj)
//{
//	is >> obj.data;
//	return is;
//}
//bool operator>(const String & s1, const String & s2)
//{
//	if (strcmp(s1.data, s2.data) > 0)
//		return true;
//	else
//		return false;
//}
//bool operator>=(const String & s1, const String & s2)
//{
//	if (strcmp(s1.data, s2.data) < 0)
//		return false;
//	else
//		return true;
//}
//bool operator==(const String & s1, const String & s2)
//{
//	if (strcmp(s1.data, s2.data) == 0)
//		return true;
//	else
//		return false;
//}
//bool operator!=(const String & s1, const String & s2)
//{
//	if (strcmp(s1.data, s2.data) == 0)
//		return false;
//	else
//		return true;
//}
//bool operator<(const String & s1, const String & s2)
//{
//	if (strcmp(s1.data, s2.data) < 0)
//		return true;
//	else
//		return false;
//}
//bool operator<=(const String & s1, const String & s2)
//{
//	if (strcmp(s1.data, s2.data) > 0)
//		return false;
//	else
//		return true;
//}
//int main()
//{
//	String str1,str2("love c++"),str3;
//	int len1;
//	cin>>str1;
//	if (str1 > str2)
//		cout << "str1>str2" << endl;
//	else if (str1 == str2)
//		cout << "str1==str2" << endl;
//	else
//		cout << "str1<str2" << endl;
//	str3 = str1 + str2;
//	cout << "str3=" << str3 << endl;
//	cout << "str2+=" << str2+=str3 <<endl;
//	system("pause");
//	return 0;
//}
//#include<iostream>
//using namespace std;
//class sort {
//public:
//	sort() {}
//	~sort() {}
//	void adjust_heap(int* root, int i, int size);
//	void create_heap(int* root, int size);
//	void heap_sort(int* root, int size);//������
//	void select_sort(int* root, int size);//ѡ������
//	void shell_sort(int* root, int size);//ϣ������
//	void quick_sort(int* root, int size);//��������
//	void quick_sortmean(int* root, int l, int r);//��������
//	void merge_sortmean(int* root, int l, int r);//�鲢����
//	void merge(int* root, int l, int mid, int r);
//	void merge_sort(int* root, int size);
//	void bubble_sort(int* root, int size);//ð������
//	void insert_sort(int* root, int size);//��������
//};
//void sort::select_sort(int* root, int size)
//{
//	int i, j, k;
//	for (i = 0; i < size; i++) {
//		k = i;
//		for (j = i + 1; j < size; j++) {
//			if (root[k] > root[j]) {
//				k = j;
//			}
//		}
//		if (k != i) {
//			int tmp = root[k];
//			root[k] = root[i];
//			root[i] = tmp;
//		}
//	}
//}
//void sort::bubble_sort(int* root, int size)
//{
//	int i, j;
//	for (i = 0; i < size; i++) {
//		for (j = 1; j < size - i; j++) {
//			if (root[j - 1] > root[j]) {
//				int tmp = root[j - 1];
//				root[j - 1] = root[j];
//				root[j] = tmp;
//			}
//		}
//	}
//}
//void sort::insert_sort(int* root, int size)
//{
//	int i, j, k;
//	for (i = 1; i < size; i++) {
//		int mark = root[i];
//		k = i;
//		for (j = i; j > 0; j--) {
//			if (root[j - 1] > mark) {
//				root[j] = root[j - 1];
//			}
//			else {
//				break;
//			}
//		}
//		if (j != i) {
//			root[j] = mark;
//		}
//	}
//}
//void sort::shell_sort(int* root, int size)
//{
//	int i, j, grp;
//	int temp;
//	for (grp = size / 2; grp > 0; grp /= 2) {
//		for (i = grp; i < size; i++) {
//			for (j = i - grp; j >= 0; j -= grp) {
//				if (root[j] > root[j + grp]) {
//					temp = root[j];
//					root[j] = root[j + grp];
//					root[j + grp] = temp;
//				}
//			}
//		}
//	}
//}
//void sort::adjust_heap(int* root, int i, int size)
//{
//	int left, right, mark;
//	left = 2 * i + 1;
//	right = left + 1;
//	if (left >= size) {
//		return;
//	}
//	mark = i;
//	if (root[mark] < root[left]) {
//		mark = left;
//	}
//
//	if (right < size && root[mark] < root[right]) {
//		mark = right;
//	}
//
//	if (mark != i) {
//		int tmp = root[i];
//		root[i] = root[mark];
//		root[mark] = tmp;
//		adjust_heap(root, mark, size);
//	}
//}
//void sort::create_heap(int* root, int size)
//{
//	int range = size / 2 - 1;
//	while (range >= 0) {
//		adjust_heap(root, range--, size);
//	}
//}
//void sort::heap_sort(int* root, int size)
//{
//	create_heap(root, size);
//	while (size > 1) {
//		size--;
//		int tmp = root[0];
//		root[0] = root[size];
//		root[size] = tmp;
//		adjust_heap(root, 0, size);
//	}
//}
//void sort::quick_sort(int* root, int size)
//{
//	quick_sortmean(root, 0, size - 1);
//}
//void sort::quick_sortmean(int array[], int low, int high)
//{
//	if (high <= low)
//		return;
//	int i = low;
//	int j = high + 1;
//	int key = array[low];
//	while (true)
//	{
//		/*���������ұ�key���ֵ*/
//		while (array[++i] < key)
//		{
//			if (i == high) {
//				break;
//			}
//		}
//		/*���������ұ�keyС��ֵ*/
//		while (array[--j] > key)
//		{
//			if (j == low) {
//				break;
//			}
//		}
//		if (i >= j) break;
//		/*����i,j��Ӧ��ֵ*/
//		swap(array[i], array[j]);
//	}
//	/*����ֵ��j��Ӧֵ����*/
//	swap(array[low], array[j]);
//	quick_sortmean(array, low, j - 1);
//	quick_sortmean(array, j + 1, high);
//}
//void sort::merge(int* a, int p, int q, int r)
//{
//	int n1 = q - p + 1;       //�󲿷ֵĵ�Ԫ�ظ���
//	int n2 = r - q;           //ͬ��
//	int i, j, k;
//	int* L = new int[n1 + 1];
//	int* R = new int[n2 + 1];
//	for (i = 0; i < n1; i++)
//		L[i] = a[p + i];
//	for (j = 0; j < n2; j++)
//		R[j] = a[q + j + 1];
//	L[n1] = 11111111;
//	R[n2] = 11111111;
//	// ����L��0~n1-1��ţ���n1�����int�����ܱ�ʾ�������������Ϊ���������Ϊ��
//	//����ϲ�ʱ�����統����L�е�n1��Ԫ���Ѿ�ȫ����˳��������a�У�ֻʣ������R��
//	//����Ԫ�أ���ʱ��ΪR��ʣ�µ�Ԫ��ȫ��С��11111111,��ִ��else��䣬ֱ�ӽ�ʣ�µ�
//	//Ԫ�ؿ�����a�С�
//	for (i = 0, j = 0, k = p; k <= r; k++)
//	{
//		if (L[i] <= R[j])
//			a[k] = L[i++];
//		else
//			a[k] = R[j++];
//	}
//
//	delete[]L;
//	delete[]R;
//}
//void sort::merge_sortmean(int* a, int l, int r)
//{
//	if (l < r)
//	{
//		int m = (l + r) / 2;
//		merge_sortmean(a, l, m);
//		merge_sortmean(a, m + 1, r);
//		merge(a, l, m, r);
//	}
//}
//void sort::merge_sort(int* root, int size)
//{
//	merge_sortmean(root, 0, size - 1);
//}
//void show(int* arr, int size)
//{
//	int i;
//	for (i = 0; i < size; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//int main()
//{
//	int unsorted[] = { 2, 3, 8, -2, 1, 7, 0, 10, -1,4 };
//	sort s;
//	//s.bubble_sort(unsorted, 10);
//	//s.merge_sort(unsorted, 10);
//	//s.shell_sort(unsorted, 10);
//	//s.insert_sort(unsorted, 10);
//	//s.select_sort(unsorted, 10);
//	s.heap_sort(unsorted, 10);
//	//s.quick_sort(unsorted, 10);
//	show(unsorted, 10);
//	return 0;
//}
#include <iostream>
using namespace std;
//template<typename T>
//void adjust(T* arr, int sign, int len) {
//	T temp = arr[sign];
//	//ÿһ��ѭ�������¸ø��ڵ�Ϊ������ȫ����������
//	for (int i = sign * 2 + 1; i < len; i = i * 2 + 1) {
//		if (i + 1 < len && arr[i + 1] > arr[i])
//			i++;
//		//�ж��ӽڵ� ���ڸ��ڵ� 
//		if (arr[i] > temp) {
//			arr[sign] = arr[i];
//			sign = i;
//		}
//	}
//	arr[sign] = temp;
//}
//
//template<typename T>
//void swap(T* arr, int x, int y) {
//	T temp = arr[x];
//	arr[x] = arr[y];
//	arr[y] = temp;
//}
//
//template<typename T>
//void sort(T* arr, int length) {
//	//1.�����з�Ҷ�ӽڵ� ������ʼ�󶥶�
//	for (int i = length / 2 - 1; i >= 0; i--) {
//		adjust(arr, i, length);
//	}
//	//
//	for (int i = length - 1; i; i--) {
//		//2.�������� �� ��Ե����һ��Ԫ��
//		swap(arr, i, 0);
//		//3.���µ����ѽṹ
//		adjust(arr, 0, i);
//	}
//}
//
//template<typename T>
//void print(const T* ar, int len) {
//	for (int j = 0; j < len; j++) {
//		cout << j << " :  " << ar[j] << endl;
//	}
//}
void print(const int* ar, int len) {
	for (int j = 0; j < len; j++) {
		cout << j << " :  " << ar[j] << endl;
	}
}
void merge(int arr[], int left, int mid, int right, int temp[])
{
	int i = left;//������ָ��
	int j = mid + 1;//������ָ��
	int t = 0;//��ʱ����ָ��
	while (i <= mid && j <= right) {
		if (arr[i] <= arr[j]) {
			temp[t++] = arr[i++];
		}
		else {
			temp[t++] = arr[j++];
		}
	}
	while (i <= mid) {//�����ʣ��Ԫ������temp��
		temp[t++] = arr[i++];
	}
	while (j <= right) {//��������ʣ��Ԫ������temp��
		temp[t++] = arr[j++];
	}
	t = 0;
	//��temp�е�Ԫ��ȫ��������ԭ������
	while (left <= right) {
		arr[left++] = temp[t++];
	}
}
void merge_sortmean(int arr[], int left, int right, int temp[])
{
	if (left < right) {
		int mid = (left + right) / 2;
		merge_sortmean(arr, left, mid, temp);//��߹鲢����ʹ��������������
		merge_sortmean(arr, mid + 1, right, temp);//�ұ߹鲢����ʹ��������������
		merge(arr, left, mid, right, temp);//����������������ϲ�����
	}
}
void sort(int arr[],int size)
{
	int *temp = new int[size];//������ǰ���Ƚ���һ�����ȵ���ԭ���鳤�ȵ���ʱ���飬����ݹ���Ƶ�����ٿռ�
	merge_sortmean(arr, 0, size - 1, temp);
}
int main()
{
	int arr[] = { 0,2,1,4,3,6,8,9,7,5 };
	sort(arr, 10);
	print(arr, 10);
	return 0;
}
