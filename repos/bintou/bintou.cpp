//#include<iostream>
//using namespace std;
//int *egcd(int a,int b) {
//	static int arr[3];
//	int temp1=0, r0 = 1, r1 = 0, s0 = 0, s1 = 1,q;
//	while (b) {
//		temp1 = a;
//		q = a/b;
//		a = b;
//		b = temp1 % b;
//		temp1 = r0;
//		r0 = r1;
//		r1 = temp1 - q * r1;
//		temp1 = s0;
//		s0 = s1;
//		s1 = temp1 - q * s1;
//	}
//	arr[0] = a; arr[1] = r0; arr[2] = s0;
//	return arr;
//}
//int main() {
//	int a = 0, b = 0;
//	cin >> a>>b;
//	int* p = egcd(a, b);
//	for (int i = 0; i < 3; i++) {
//		cout << *(p + i) << " ";
//	}
//	system("pause");
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int rec_mod_exp(int x, int y, int p) {
//	if (y == 0)
//		return 1;
//	int z = rec_mod_exp(x, y / 2, p);
//	if ((y & 1) == 0)return z * z % p;
//	else return x * z * z % p;
//}
//int rec_mod(int x, int y, int p) {
//	int res = 1;
//	while(y){
//		if (y & 1)
//		{
//			res = (res*x)%p;
//		}
//		x = (x*x)%p;
//		y >>= 1;
//	}
//	return res;
//}
//int main() {
//	int x = 0, y = 0, p = 0;
//	cin >> x >> y >> p;
//	//cout << rec_mod_exp(x, y, p)<<endl;
//	cout << rec_mod(x, y, p);
//	system("pause");
// 	return 0;
//}
/*#include<iostream>
using namespace std;
bool is_num(char str) {
	if (str >= '0' && str <= '9')
		return true;
	return false;
}
int mian() {
	char str[21];
	cin >> str;
	int i;
	for (i = 0; str[i] != '\n'; i++) {
		if (is_num(str[i]))
		{
			for (int j = i; is_num(str[j]); j++)
			{
				cout << str[j];
				str[j] = '?';
			}
			cout << " ";
		}
		if (str[i] == '(')
		{

		}
	}
}*/
/*#include<iostream>
using namespace std;
int main() {
	int N = 0, T = 0,P = 0,i=0,total=0,large=0;
	int T1[9] = { 0 }, P1[9] = { 0 }, K[10] = { 0 };
	cin >> N;
	for (; i < N; i++) {
		cin >> T1[i] >> P1[i];
		if (P1[i] > 60)P1[i] = 60;
		if (P1[i] + T1[i] > large)large = P1[i] + T1[i];
	}
	cin >> total;
	for (i = 0; i < N-3; i = i + 3) {
		int 
	}
}*/
/*#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main() {
	string String,Patten[10];
	int N=0,i=0,n=0,j=0,slengh,plengh;
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
		char* str1;
		if ((n = String.find(Patten[i]) != string::npos)) {
			for (j = n - 1; j < slengh - n; j++)
				if (String[j] != Patten[i][j] || j >= plengh)break;
			cout << String.substr(j - 1) << endl;
		}
		else
			cout << "Not Found" << endl;
	}
	system("pause");
	return 0;
}*/
//#include<iostream>
//#include<algorithm>
//#include<string>
//#include<vector>
//using namespace std;
//struct stu {
//	string str;
//	int n1;
//	vector<int>num;
//};
//bool compare(string a, string b) {
//	return a < b;
//}
//int main() {
//	int N = 0, K = 0,index=0,i=0;
//	string name;
//	cin >> N >> K;
//	vector<stu> str_name(N);
//	vector<string> output;
//	vector<int> sum(K,0);
//	for (i = 0; i < N;i++) {
//		cin >> str_name[i].str>>str_name[i].n1;
//		for (int j = 0; j < str_name[i].n1;j++) {
//			cin >> index;
//			str_name[i].num.push_back(index);
//			sum[index-1]++;
//		}
//	}
//	for (i = 0; i < K; i++)
//	{
//		cout << i+1 << " " << sum[i] << endl;
//		if (sum[i] != 0)
//		{
//			for (int j = 0; j < N; j++)
//			{
//				int full = 0;
//				bool index = false;
//				for (int k = 0; k < str_name[j].n1; k++)
//				{
//					if (str_name[j].num[k]-1 == i)
//					{
//						index = true;
//						full++;
//						k = str_name[j].n1;
//					}
//				}
//				if (index)output.push_back( str_name[j].str );
//				if (full == sum[i])j = N;
//			}
//			std::sort(output.begin(), output.end(), compare);
//			for (int s = 0; s < sum[i]; s++)cout << output[s] << endl;
//			output.clear();
//		}
//	}
//	system("pause");
//	return 0;
//}
//#include<iostream>
//#include<vector>
//using namespace std;
//int main() {
//	int n = 0, m = 0,i=0;
//	cin >> n >> m;
//	m %= n;
//	vector<int> list(n);
//	vector<int> list1;
//	for (; i < n; i++) {
//		cin >> list[i];
//	}
//	for (i = 0; i < n; i++) {
//		if (m>0) {
//			if (i < m)
//				list1.push_back(list[i]);
//			if (i >= n - m)list[i] = list1[i - (n - m)];
//			else list[i] = list[i + m];
//		}
//		if(i<n-1)cout << list[i] << " ";
//	}
//	cout << list[i-1];
//	system("pause");
//	return 0;
//}
//#include<iostream>
//#include<vector>
//using namespace std;
//int main() {
//	int N = 0,i=0,lengh=0,index=0;
//	cin >> N;
//	vector<int>list(N,0);
//	for (; i < N; i++) {
//		cin >> list[i];
//	}
//	for (i = 0; i < N; i++) {
//		int sum = 0;
//		for (int j = i; j < N-1; j++) {
//			if (list[j + 1] <= list[j])
//				break;
//			sum++;
//		}
//		if (sum > lengh) {
//			lengh = sum;
//			index = i;
//		}
//	}
//	for (i = index; i < index+lengh; i++)
//		cout << list[i] << " ";
//	cout << list[i];
//	system("pause");
//	return 0;
//}
//#include<iostream>
//#include<vector>
//using namespace std;
//int main() {
//	int n = 0, m = 0, i = 0;
//	cin >> n >> m;
//	m %= n;
//	vector<int> list(n);
//	vector<int> list1;
//	for (; i < n; i++) {
//		cin >> list[i];
//	}
//	if (m != 0) {
//		for (i = n - 1; i >= 0; i--) {
//
//			if (n - i - 1 < m)
//				list1.push_back(list[i]);
//			if (i >= m)list[i] = list[i - m];
//			else list[i] = list1[m - i - 1];
//
//		}
//	}
//	for(i=0;i<n;i++)
//		if (i < n - 1)cout << list[i] << " ";
//	cout << list[i - 1];
//	system("pause");
//	return 0;
//}
#include<iostream>
#include <ctime>
using namespace std;
int random_1(int len) {
	srand((int)time(0));
	return rand() % len;
}

int main() {

}