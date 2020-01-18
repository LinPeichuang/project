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
//	void heap_sort(int* root, int size);//堆排序
//	void select_sort(int* root, int size);//选择排序
//	void shell_sort(int* root, int size);//希尔排序
//	void quick_sort(int* root, int size);//快速排序
//	void quick_sortmean(int* root, int l, int r);//快速排序
//	void merge_sortmean(int* root, int l, int r);//归并排序
//	void merge(int* root, int l, int mid, int r);
//	void merge_sort(int* root, int size);
//	void bubble_sort(int* root, int size);//冒泡排序
//	void insert_sort(int* root, int size);//插入排序
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
//		/*从左向右找比key大的值*/
//		while (array[++i] < key)
//		{
//			if (i == high) {
//				break;
//			}
//		}
//		/*从右向左找比key小的值*/
//		while (array[--j] > key)
//		{
//			if (j == low) {
//				break;
//			}
//		}
//		if (i >= j) break;
//		/*交换i,j对应的值*/
//		swap(array[i], array[j]);
//	}
//	/*中枢值与j对应值交换*/
//	swap(array[low], array[j]);
//	quick_sortmean(array, low, j - 1);
//	quick_sortmean(array, j + 1, high);
//}
//void sort::merge(int* a, int p, int q, int r)
//{
//	int n1 = q - p + 1;       //左部分的的元素个数
//	int n2 = r - q;           //同上
//	int i, j, k;
//	int* L = new int[n1 + 1];
//	int* R = new int[n2 + 1];
//	for (i = 0; i < n1; i++)
//		L[i] = a[p + i];
//	for (j = 0; j < n2; j++)
//		R[j] = a[q + j + 1];
//	L[n1] = 11111111;
//	R[n2] = 11111111;
//	// 数组L从0~n1-1存放，第n1个存放int型所能表示的最大数，即认为正无穷，这是为了
//	//处理合并时，比如当数组L中的n1个元素已经全部按顺序存进数组a中，只剩下数组R的
//	//部分元素，这时因为R中剩下的元素全部小于11111111,则执行else语句，直接将剩下的
//	//元素拷贝进a中。
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
//	//每一次循环都更新该父节点为根的完全二叉树最大堆
//	for (int i = sign * 2 + 1; i < len; i = i * 2 + 1) {
//		if (i + 1 < len && arr[i + 1] > arr[i])
//			i++;
//		//判断子节点 大于父节点 
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
//	//1.从所有非叶子节点 构建初始大顶堆
//	for (int i = length / 2 - 1; i >= 0; i--) {
//		adjust(arr, i, length);
//	}
//	//
//	for (int i = length - 1; i; i--) {
//		//2.交换最大堆 和 相对的最后一个元素
//		swap(arr, i, 0);
//		//3.重新调整堆结构
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
	int i = left;//左序列指针
	int j = mid + 1;//右序列指针
	int t = 0;//临时数组指针
	while (i <= mid && j <= right) {
		if (arr[i] <= arr[j]) {
			temp[t++] = arr[i++];
		}
		else {
			temp[t++] = arr[j++];
		}
	}
	while (i <= mid) {//将左边剩余元素填充进temp中
		temp[t++] = arr[i++];
	}
	while (j <= right) {//将右序列剩余元素填充进temp中
		temp[t++] = arr[j++];
	}
	t = 0;
	//将temp中的元素全部拷贝到原数组中
	while (left <= right) {
		arr[left++] = temp[t++];
	}
}
void merge_sortmean(int arr[], int left, int right, int temp[])
{
	if (left < right) {
		int mid = (left + right) / 2;
		merge_sortmean(arr, left, mid, temp);//左边归并排序，使得左子序列有序
		merge_sortmean(arr, mid + 1, right, temp);//右边归并排序，使得右子序列有序
		merge(arr, left, mid, right, temp);//将两个有序子数组合并操作
	}
}
void sort(int arr[],int size)
{
	int *temp = new int[size];//在排序前，先建好一个长度等于原数组长度的临时数组，避免递归中频繁开辟空间
	merge_sortmean(arr, 0, size - 1, temp);
}
int main()
{
	int arr[] = { 0,2,1,4,3,6,8,9,7,5 };
	sort(arr, 10);
	print(arr, 10);
	return 0;
}
