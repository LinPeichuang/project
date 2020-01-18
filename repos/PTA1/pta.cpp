//#include <stack>
//#include<iostream>
//using namespace std;
//int main() {
//	char c;
//	bool fal = true;
//	stack<char> mystack;
//	int i=0,num1=0,num2=0;
//	while (i<1000) {
//		cin.get(c);
//		if (c == '\n')break;
//		if (c == '{' || c == '[' || c == '(')num1++;
//		if (c == '}' || c == ']' || c == ')')num2++;
//		if (fal) {
//			if (c == '{' || c == '[' || c == '(')mystack.push(c);
//			if (!mystack.empty())
//			{
//				if (c == ')' && num1 != 0) {
//					if (mystack.top() != '(')
//					{
//						fal = false;
//					}
//					else
//						mystack.pop();
//				}
//				else if (c == ']' && num1 != 0) {
//					if (mystack.top() != '[')
//					{
//						fal = false;
//					}
//					else
//						mystack.pop();
//				}
//				else if (c == '}' && num1 != 0) {
//					if (mystack.top() != '{')
//					{
//						fal = false;
//					}
//					else
//						mystack.pop();
//				}
//			}
//		}
//		i++;
//	}
//	cout << num1 << " " << num2 << endl;
//	if (!fal||num1!=num2)
//		cout << "NO";
//	else
//		cout << "YES";
//	system("pause");
//	return 0;
//}
/*
#include <stack>
#include<iostream>
#include<string>
using namespace std;
int main() {
	string str;
	bool fal = true;
	stack<char> mystack;
	int i = 0;
	getline(cin, str);
	for (int i = 0; i < 100; i++)
	{
		if (fal) {
			if (str[i] == '{' || str[i] == '[' || str[i] == '(')mystack.push(str[i]);
			if (str[i] == '}' || str[i] == ']' || str[i] == ')') {
				if (!mystack.empty())
				{
					if (str[i] == ')') {
						if (mystack.top() != '(')
						{
							fal = false;
						}
						else
							mystack.pop();
					}
					else if (str[i] == ']') {
						if (mystack.top() != '[')
						{
							fal = false;
						}
						else
							mystack.pop();
					}
					else if (str[i] == '}') {
						if (mystack.top() != '{')
						{
							fal = false;
						}
						else
							mystack.pop();
					}
				}
				else
					fal = false;
			}
		}
		else
			break;
	}
	if (!fal)
		cout << "no";
	else
		cout << "yes";
	system("pause");
	return 0;
}*/
//#include <stack>
//#include<iostream>
//#include<string>
//using namespace std;
//int main() {
//	char str,wrong='?';
//	bool fal = true;
//	stack<char> mystack;
//	int len1 = 101;
//	while (len1--)
//	{
//		cin >> str;
//		if (str == '.')break;
//		if (fal) {
//			if (str == '{' || str == '[' || str == '(')mystack.push(str);
//			if (str == '}' || str == ']' || str == ')') {
//				if (!mystack.empty())
//				{
//					if (str == ')') {
//						if (mystack.top() != '(')
//						{
//							fal = false;
//						}
//						else
//						{
//							mystack.pop();
//							wrong = str;
//						}
//					}
//					else if (str == ']') {
//						if (mystack.top() != '[')
//						{
//							fal = false;
//						}
//						else {
//							wrong = str;
//							mystack.pop();
//						}
//							
//					}
//					else if (str == '}') {
//						if (mystack.top() != '{')
//						{
//							fal = false;
//						}
//						else {
//							wrong = str;
//							mystack.pop();
//						}
//					}
//					else if (str == '/*') {
//						if (mystack.top() != '*/')
//						{
//							fal = false;
//						}
//						else {
//							wrong = str;
//							mystack.pop();
//						}
//					}
//				}
//				else
//					fal = false;
//			}
//		}
//		else
//			break;
//	}
//	while (1) {
//		cin >> str;
//		if (str == '\n')break;
//	}
//	if (!fal || !mystack.empty()) {
//		cout << "NO" << endl;
//		if (!mystack.empty())
//		{
//			int len = mystack.size();
//			while (len-- > 1) {
//				mystack.pop();
//			}
//			cout<<"?-"<< mystack.top();
//		}
//		if(wrong!='?') {
//			cout << wrong << "-?";
//		}
//	}
//		
//	else
//		cout << "YES";
//	system("pause");
//	return 0;
//}
//#include <iostream>
//#include<stack>
//#include<string>
//using namespace std;
//int main()
//{
//	stack<int>list2;
//	int N = 0, i = 0;
//	string s1;
//	cin >> N;
//	while (N--) {
//		cin >> s1;
//		if (s1 == "push") {
//			cin >> i;
//			if (list2.empty() || i <= list2.top()) {
//				list2.push(i);
//			}
//			else {
//				list2.push(list2.top());
//			}
//		}
//		else if (s1 == "min") {
//			cout << list2.top() << endl;
//		}
//		else {
//			list2.pop();
//		}
//	}
//	return 0;
//}
/*#include<iostream>
#include<vector>
#include<stack>
#include<string>
using namespace std;
int first(char str1) {
	if (str1 == '(')return 1;
	else if (str1 == '+' || str1 == '-')return 2;
	else if (str1 == '*' || str1 == '/')return 3;
	else return 0;
}
int main() {
	stack<char>list1;
	vector<char>str_latter;
	int i = 0;
	string str_middle;
	getline(cin, str_middle);
	for (i = 0; i < str_middle.length();i++) {
		if (str_middle[i] >= '0' && str_middle[i] <= '9')str_latter.push_back(str_middle[i++]);
		else if (str_middle[i] == '(') {
			list1.push(str_middle[i]);
		}
		else if (str_middle[i] == ')') {
			while (list1.top() != '(') {
				str_latter.push_back( list1.top());
				list1.pop();
			}
		}
		else {
			if (list1.empty() || first(str_middle[i]) > first(list1.top())) {
				str_latter.push_back(str_middle[i]);
			}
			else{
				while (first(str_middle[i]) <= first(list1.top())) {
					char c = list1.top();
					str_latter.push_back(c);
					list1.pop();
					if (list1.empty())break;
				}
				list1.push(str_middle[i]);
			}
			
		}
	}
	while (!list1.empty()) {
		char c = list1.top();
		str_latter.push_back( c);
		list1.pop();
	}
	for (i = 0; i < str_latter.size() - 1; i++)
		if (str_latter[i] != '(') {
			cout << str_latter[i] << " ";
		}
	cout << str_latter[i];
	return 0;
}*/
//#include<iostream>
//#include<stack>
//#include<map>
//using namespace std;
//int main() {
//	map<char, int>mapping;
//	stack<char> list;
//	string str;
//	bool isfirst = true;
//	mapping['-'] = 1, mapping['+'] = 1;
//	mapping['*'] = 2, mapping['/'] = 2;
//	mapping['('] = 3, mapping[')'] = 3;
//	cin >> str;
//	for (int i = 0; i < str.size(); i++) {
//		if (((i == 0 || str[i - 1] == '(') && (str[i] == '+' || str[i] == '-')) || (str[i] >= '0' && str[i] <= '9') || (str[i] == '.')) {
//			if (!isfirst) {
//				cout << " ";
//			}
//			if (str[i] != '+') {
//				cout << str[i];
//			}
//			while (str[i + 1] == '.' || (str[i + 1] >= '0' && str[i + 1] <= '9')) {
//				i++;
//				cout << str[i];
//			}
//			isfirst = false;
//		}
//		else {
//			if (str[i] == ')') {
//				while (!list.empty() && list.top() != '(') {
//					cout << ' ' << list.top();
//					list.pop();
//				}
//				list.pop();
//			}
//			else if (list.empty() || mapping[str[i]] > mapping[list.top()]) {
//				list.push(str[i]);
//			}
//			else {
//				while (!list.empty() && list.top() != '(') {
//					cout << ' ' << list.top();
//					list.pop();
//				}
//				list.push(str[i]);
//			}
//		}
//	}
//	while (!list.empty()) {
//		cout << ' ' << list.top();
//		list.pop();
//	}
//	return 0;
//}
//#include<iostream>
//#include<vector>
//using namespace std;
//int main() {
//	int total1 = 0, total2 = 0, i = 0, j = 0, index1 = 0,index2=0,len=0;
//	cin >> total1;
//	vector<int>list1(total1*2);
//	for (i = 0; i < total1*2; i++) {
//		cin >> list1[i];
//	}
//	cin >> total2;
//	vector<int>list2(total2*2);
//	for (i = 0; i < total2*2; i++) {
//		cin >> list2[i];
//	}
//	if (total1 == 0&&total2!=0) {
//		cout << 0 << " " << 0<<endl;
//		for (i = 0; i < list2.size()-2; i = i + 2) {
//			if (list2[i] != 0)cout << list2[i] << " "<<list2[i + 1] << " ";
//		}
//		cout << list2[i] << " "<<list2[i + 1];
//	}
//	else if (total2 == 0&&total1!=0) {
//		cout << 0 << " " << 0<<endl;
//		for (i = 0; i < list2.size() - 2; i = i + 2) {
//			if (list1[i] != 0)cout << list1[i] << " " << list1[i + 1] << " ";
//		}
//		cout << list1[i] << " " << list1[i + 1];
//	}
//	else if (total2 == 0 && total1 != 0) {
//		cout << 0 << " " << 0 << endl;
//		cout << 0 << " " << 0;
//	}
//	else{
//		if (list1[1] > list2[1])len = list1[1];
//		else len = list2[1];
//		vector<int>list3(len + 1, 0);
//		vector<int>list4(list1[1] + list2[1] + 1, 0);
//		for (i = 1; i < list1.size(); i = i + 2) {
//			for (j = 1; j < list2.size(); j = j + 2) {
//				list4[list1[i] + list2[j]] += list1[i - 1] * list2[j - 1];
//			}
//			list3[list1[i]] += list1[i - 1];
//		}
//		for (j = 1; j < list2.size(); j = j + 2) {
//			list3[list2[j]] += list2[j - 1];
//		}
//		int flag = 0;
//		for (i = list4.size() - 1; i >= 0; i--) {
//			if (!list4[i]) {
//				continue;
//			}
//			if (!flag)
//			{
//				cout << list4[i] << " " << i;
//				flag = 1;
//			}
//			else
//			{
//				cout << " " << list4[i] << " " << i;
//			}
//		}
//		if (!flag)
//		{
//			cout << 0 << " " << 0;
//		}
//		cout << endl;
//		flag = 0;
//		for (i = list3.size() - 1; i >= 0; i--) {
//			if (!list3[i]) {
//				continue;
//			}
//			if (!flag)
//			{
//				cout << list3[i] << " " << i;
//				flag = 1;
//			}
//			else
//			{
//				cout << " " << list3[i] << " " << i;
//			}
//		}
//		if (!flag)
//		{
//			cout << 0 << " " << 0;
//		}
//	}
//	return 0;
//}
//#include <iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	int N = 0, len = 0, all = 0;
//	int i = 0;
//	char s1[5];
//	cin >> N;
//	vector<int>list2(N/2, 0);
//	for (int j = 0; j < N; ++j) {
//		cin >> s1;
//		switch (s1[1])
//		{
//		case 'u':
//			cin >> i;
//			if (len == 0) {
//				list2[0] = i;
//			}
//			else {
//				if (i < list2[len - 1]) {
//					list2[len] = i;
//					
//				}
//				else {
//					list2[len] = list2[len-1];
//				}
//			}
//			++len;
//			break;
//		case 'i':
//			if (len == 0) {
//				cout << list2[0] << endl;
//			}
//			else {
//				cout << list2[len - 1] << endl;
//			}
//			break;
//		case 'o':
//			list2[len-1] = 0;
//			--len;
//			break;
//		default:
//			break;
//		}
//	}
//	return 0;
//}
//#include<iostream>
//#include<vector>
//using namespace std;
//int main() {
//	int n1, n2,num,i=0,j=0;
//	char s1;
//	cin >> n1 >> n2;
//	int max = n1, min = n2;
//	if (n1 < n2) {
//		max = n2;
//		min = n1;
//	}
//	vector<int>list1(min);
//	vector<int>list2(max);
//	while (1) {
//		cin >> s1;
//		if (s1 == 'T')break;
//		else if (s1 == 'A') {
//			cin >> num;
//			if (i < min) {
//				list1[i] = num;
//				++i;
//			}
//			else {
//				cout << "ERROR:Full" << endl;
//			}
//		}
//		else {
//			if(!j)cout << "ERROR:Empty" << endl;
//			else {
//				cout << list2[j--] << endl;
//			}
//		}
//		if (i == min && j == 0) {
//			while (i > 0) {
//				list2[++j] = list1[--i];
//			}
//		}
//	}
//	return 0;
//}
//#include<iostream>
//#include<iomanip>
//#include<string>
//#include<stack>
//using namespace std;
//int main()
//{
//	string str;
//	stack<double>list1;
//	double s1, s2;
//	int ten;
//	double sum = 0;
//	getline(cin, str);
//	for (int i = str.length()-1; i >= 0; i--) {
//		if (str[i] == ' ')continue;
//		if (str[i] >= '0' && str[i] <= '9') {
//			ten = 10;
//			sum = str[i] - 48;
//			for (--i; i >= 0; i--) {
//				if ((str[i] >= '0' && str[i] <= '9') || str[i] == '.') {
//					if (str[i] >= '0' && str[i] <= '9') {
//						sum += (str[i] - 48) * ten;
//						ten *= 10;
//					}
//					else {
//						sum /= ten;
//						ten = 1;
//					}
//				}
//				else if (str[i] == '-') {
//					sum = -sum;
//				}
//				else
//					break;
//			}
//			list1.push(sum);
//		}
//		else{
//			s1 = list1.top();
//			list1.pop();
//			s2 = list1.top();
//			list1.pop();
//			switch (str[i]) {
//			case '+':
//				sum = s1 + s2;
//				break;
//			case '-':
//				sum = s1 - s2;
//				break;
//			case '*':
//				sum = s1 * s2;
//				break;
//			case '/':
//				if (s2 == 0) {
//					cout << "ERROR";
//					exit(0);
//				}
//				sum = s1 / s2;
//				break;
//			default:
//				break;
//			}
//			list1.push(sum);
//		}
//	}
//
//	cout.setf(ios::fixed);
//	cout << fixed << setprecision(1) << sum;
//	return 0;
//}
//#include<iostream>
//#include<string>
//using namespace std;
//int main() {
//	int N = 0, M = 0, len1, len2,i;
//	string str;
//	cin >> N >> M;
//	while (N--) {
//		len1 = 0;
//		len2 = 0;
//		cin >> str;
//		int len=str.length();
//		if (str[len - 1] == 'S') {
//			cout << "NO" << endl;
//			continue;
//		}
//		else {
//			bool fal = true;
//			for (i = 0; i < len; i++) {
//				if (str[i] == 'S')++len1;
//				else ++len2;
//				if (len1 < len2||len1>M) {
//					fal = false;
//					break;
//				}
//			}
//			if (len1 != len2)fal = false;
//			if (i == len)cout << "YES" << endl;
//			else cout << "NO" << endl;
//		}
//	}
//	return 0;
//}
//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//struct node
//{
//	string addr;
//	int num;
//	string next;
//};
//int main() {
//	string head, str, next1,next2;
//	int N, i = 0, index = 0,index2=0,len=0,fin;
//	bool fal=true,fal1,fal2;
//	cin >> head >> N;
//	vector<node> node1(N);
//	while (i < N) {
//		cin >> node1[i].addr >> node1[i].num >> node1[i].next;
//		if (node1[i].addr == head) {
//			next1 = node1[i].next;
//			index = i;
//		}
//		if (node1[i].next == "-1") {
//			next2 = node1[i].addr;
//			index2 = i;
//		}
//		i++;
//	}
//	str = head; fin = index;
//	while (str != "1") {
//		for (i = 0; i < N; i++) {
//			str = node1[index].next;
//			if (node1[i].addr == str) {
//				index = i;
//			}
//		}
//		len++;
//	}
//	N = len;
//	if (N % 2 == 0) {
//		fal = false;
//	}
//	N /= 2;
//	while (N--) {
//		cout << node1[index2].addr << " " << node1[index2].num << " " << head << endl;
//		cout << head << " " <<node1[index].num<<" ";
//		if (!fal && N == 0) {
//			cout << "-1";
//			break;
//		}
//		fal1 = true;
//		fal2 = true;
//		for (i = 0; i < node1.size(); i++) {
//			if ((node1[i].next == next2)&&fal1) {
//				next2 = node1[i].addr;
//				cout << next2 << endl;
// 				index2 = i;
//				fal1 = false;
//			}
//			if ((node1[i].addr == next1)&&fal2) {
//				head = next1;
//				index = i;
//				next1 = node1[i].next;
//				fal2 = false;
//			}
//		}
//	}
//	if (fal) {
//		cout << node1[index2].addr << " " << node1[index2].num << " " << "-1";
//	}
//	return 0;
//}
//#include<iostream>
//#include<iomanip>
//#include<vector>
//using namespace std;
//struct node
//{
//	int data;
//	int next;
//}list[100000];
//int main(void)
//{
//	int now, head, N, last, K;
//	int i = 0, add, s1 = 0;
//	cin >> head >> N >> K;
//	vector<int>add_list;
//	for (i = 0; i < N; i++)
//	{
//		cin >> add;
//		cin >> list[add].data >> list[add].next;
//		if (list[add].next == -1) {
//			last = add;
//		}
//	}
//	now = head; N = 0; i = 0;
//	while (now != -1)
//	{
//		add_list.push_back(now);
//		now = list[now].next;
//		N++;
//	}
//	if (K != 1) {
//		int time = N / K;
//		for (i = 0; i < N; i = i + K) {
//			if (time==0)break;
//			for (int j = K + i - 1; j >= i; j--) {
//				cout << setfill('0') << setw(5) << add_list[j];
//				cout << " " << list[add_list[j]].data << " ";
//				if (j != i)cout << setfill('0') << setw(5) << add_list[j - 1] << endl;
//			}
//			if (time==1) {
//				if (N % K != 0) {
//					cout << setfill('0') << setw(5) << add_list[i + K] << endl;
//				}
//			}
//			else {
//				cout << setfill('0') << setw(5) << add_list[i+K+K - 1] << endl;
//			}
//			--time;
//		}
//	}
//	for (; i < N; i++) {
//		cout << setfill('0') << setw(5) << add_list[i];
//		cout << " " << list[add_list[i]].data << " ";
//		if (i != N - 1)cout << setfill('0') << setw(5) << add_list[i + 1] << endl;
//	}
//	cout << -1;
//	return 0;
//}
//#include<iostream>
//#include<vector>
//#include<cmath>
//using namespace std;
//int main() {
//	int i = 0,temp1=0,temp2=0;
//	char str;
//	vector<char>list;
//	while (cin >> str && str != 'E') {
//		list.push_back(str);
//		++i;
//	}
//	for (int j = 0; j < i; j++) {
//		if (list[j] == 'E')break;
//		if (list[j] == 'W')++temp1;
//		else if (list[j] == 'L')++temp2;
//		if ((temp1 >= 11 || temp2 >= 11) && (abs(temp1 - temp2) > 1)) {
//			cout << temp1 << ':' << temp2 << endl;
//			temp1 = 0;
//			temp2 = 0;
//		}
//	}
//    cout << temp1 << ':' << temp2 << endl;
//	cout << endl;
//	temp1 = 0; temp2 = 0;
//	for (int j = 0; j < i; j++) {
//		if (list[j] == 'E')break;
//		if (list[j] == 'W')++temp1;
//		else if (list[j] == 'L')++temp2;
//		if ((temp1 >= 21 || temp2 >= 21) && (abs(temp1 - temp2) > 1)) {
//			cout << temp1 << ':' << temp2 << endl;
//			temp1 = 0;
//			temp2 = 0;
//		}
//	}
//	cout << temp1 << ':' << temp2 << endl;
//	return 0;
//}

//#include<iostream>
//#include<string>
//#include<stack>
//using namespace std;
//int main() {
//	string str;
//	getline(cin, str);
//	stack<int>list;
//	int num1,num2,sum=0,index;
//	for (int i = 0; i < str.length(); i++) {
//		index = 1;
//		if (str[i] == ' ')continue;
//		else if (str[i] >= '0' && str[i] <= '9') {
//			if (i > 0 && str[i - 1]=='-')index = -1;
//			sum = str[i] - 48;
//			for (++i; i < str.length(); i++) {
//				if ((str[i] >= '0' && str[i] <= '9')) {
//					sum = sum * 10 + str[i] - 48;
//				}
//				else if (str[i] == ' ')break;
//			}
//			list.push(sum * index);
//		}
//		else {
//			num2 = list.top();
//			list.pop();
//			num1 = list.top();
//			list.pop();
//			switch (str[i])
//			{
//			case '+':
//				sum = num1 + num2;
//				break;
//			case '-':
//				sum = num1 - num2;
//				break;
//			case '*':
//				sum = num1 * num2;
//				break;
//			case '/':
//				if (num2 == 0) {
//					exit(0);
//					cout << "ERROR";
//				}
//				else sum = num1 / num2;
//				break;
//			default:
//				break;
//			}
//			list.push(sum);
//		}
//	}
//	cout << sum;
//	return 0;
//}
//#include<iostream>
//#include<vector>
//using namespace std;
//int main() {
//	int n,i,now=0,time=0;
//	bool fal;
//	string str;
//	vector<string>list;
//	while (cin >> n && n != 0) {
//		vector<string>list(n);
//		fal = true;
//		for ( i = 0; i < n; i++) {
//			cin >> list[i];
//		}
//		if (n % 2 == 0) {
//			fal = false;
//			now = n / 2;
//		}
//		else {
//			now = n / 2 + 1;
//		}
//		cout << "SET" << " "<<++time << endl;
//		i = 0;
//		int len = 0;
//		while (len<=n) {
//			if (len <now)
//			{
//				cout << list[i] << endl;
//				i += 2;
//				++len;
//			}
//			else if (len == now) {
//				if(fal)i -= 2;
//				++len;
//			}
//			else {
//				cout << list[i - 1] << endl;
//				i -= 2;
//				++len;
//			}
//		}
//	}
//	return 0;
//}
//#include<iostream>
//#include<vector>
//using namespace std;
//int main() {
//	int n = 0;
//	int b;
//	bool fal=false;
//	vector<int>list;
//	while (cin>>b)
//	{
//		list.push_back(b);
//		if (cin.get() == '\n')
//			break;
//	}
//	for (int i = 1; i <= list.size()-1; i+=2) {
//		if (list[i - 1] != 0 && list[i] == 0)continue;
//		if (fal)cout << ' ';
//		if (list[i-1] != 0 && list[i] != 0) {
//			cout << list[i-1] * list[i] << ' ' << list[i] - 1;
//			fal = true;
//		}
//		else if (list[i-1] == 0 && list[i] == 0) {
//			cout << "0 0";
//			fal = true;
//		}
//	}
//	if (!fal)cout << "0 0";
//	return 0;
//}
//#include<iostream>
//#include<vector>
//using namespace std;
//int main() {
//	int b = 0, j = 0;
//	vector<int> list1;
//	vector<int> list2;
//	while (cin >> b)
//	{
//		if (b < 0)
//			break;
//		list1.push_back(b);
//	}
//	while (cin >> b)
//	{
//		if (b < 0)
//			break;
//		bool nosame = true;
//		if (!list2.empty()) {
//			if (b == list2[list2.size() - 1])nosame = false;
//		}
//		if (list2.empty() || nosame) {
//			for (int i = j; i < list1.size(); i++)
//			{
//				if (b == list1[i]) {
//					list2.push_back(b);
//					j = i+1;
//					break;
//				}
//			}
//		}
//	}
//	if (list2.empty())
//		cout << "NULL";
//	else {
//		for (b = 0; b < list2.size() - 1; b++)
//		{
//			cout << list2[b] << " ";
//		}
//		cout << list2[b];
//	}
//	return 0;
//}
//#include<iostream>
//#include<iomanip>
//using namespace std;
//struct node
//{
//	int data;
//	int next;
//}list[100005];
//int main(void)
//{
//	int now, head, N,data;
//	int i = 0, add, len = 0, len1 = 0;
//	bool fal = false;
//	cin >> head >> N;
//	int add_list[100005];
//	int add_list1[100005];
//	bool repeat[100005] = {false};
//	for (i = 0; i < N; i++)
//	{
//		cin >> add;
//		cin >> list[add].data >> list[add].next;
//	}
//	now = head; N = 0; i = 0;
//
//	while (now != -1)
//	{
//		data = abs(list[now].data);
//		if (repeat[data]==false) {
//			repeat[data] = true;
//			/*if (now != head && list[now].next != -1) {
//				cout << setfill('0') << setw(5) << now << endl;
//				cout << setfill('0') << setw(5) << now;
//			}
//			cout << " " << list[now].data << " ";*/
//			add_list[len++] = now;
//		}
//		else {
//			add_list1[len1++] = now;
//		}
//		now = list[now].next;
//	}
//	for (i = 0; i < len; i++) {
//		cout << setfill('0') << setw(5) << add_list[i];
//		cout << " " << list[add_list[i]].data << " ";
//		if (i != len - 1)cout << setfill('0') << setw(5) << add_list[i + 1] << endl;
//		else cout << -1<<endl;
//	}
//	for (i = 0; i < len1; i++) {
//		cout << setfill('0') << setw(5) << add_list1[i];
//		cout << " " << list[add_list1[i]].data << " ";
//		if (i != len1 - 1)cout << setfill('0') << setw(5) << add_list1[i + 1] << endl;
//		else cout << -1;
//	}
//	return 0;
//}
//#include<iostream>
//#include<vector>
//using namespace std;
//struct node {
//	int data;
//	node* next;
//};
//int main(){
//	int b, c = -1,i;
//	bool fal1 = true, fal2 = true;
//	vector<int> list1;
//	vector<int> list2;
//	node* head1, * head2;
//	node* pre1, * pre2,*p;
//	while (cin >> b) {
//		if (b < 0)break;
//		fal1 = false;
//		if (b != c) {
//			p = new node;
//			p->data = b;
//			pre1->next = p;
//			c = b;
//		}
//	}
//	c = 0;
//	while (cin >> b) {
//		if (b < 0)break;
//		if (!fal1) {
//			for (i = c; i < list1.size(); i++) {
//				if (b == list1[i]) {
//					list2.push_back(b);
//					c = i + 1;
//					break;
//				}
//			}
//		}
//	}
//	if (fal1 || list2.empty()) {
//		cout << "NULL";
//	}
//	else {
//		for (i = 0; i < list2.size() - 1; i++) {
//			cout << list2[i] << " ";
//		}
//		cout << list2[i];
//	}
//	return 0;
//}
//#include <iostream>
//#include <stack>
//#include<string>
//using namespace std;
//int main() {
//	stack<char> str;
//	bool fal = true;
//	string s, input ="";
//	char c, wrong;
//	int i = 0;
//	while (1) {
//		getline(cin, s);
//		if (s == ".")break;
//		else if (s == " ")continue;
//		input += s;
//	}
//	for (i = 0; i < input.length();i++) {
//		c = input[i];
//		if (c == '<' || c == '>')continue;
//		if (fal) {
//			if (c == '*' && i > 0) {
//				if (input[i - 1] == '/')
//				{
//					c = '<';
//					input[i] = c;
//				}
//			}
//			else if (c == '/' && i > 0) {
//				if (input[i - 1] == '*') {
//					c = '>';
//					input[i] = c;
//				}
//			}
//
//			if (c == '<' || c == '(' || c == '[' || c == '{') {
//				str.push(c);
//			}
//			else if (c == '>' || c == ')' || c == ']' || c == '}') {
//				if (str.empty()) {
//					fal = false;
//					wrong = c;
//				}
//				else {
//					switch (c) {
//					case '>':if (str.top() != '<') {
//						fal = false;
//					}
//							break;
//					case ')':if (str.top() != '(') {
//						fal = false;
//					}
//							break;
//					case ']':if (str.top() != '[') {
//						fal = false;
//					}
//							break;
//					case '}':if (str.top() != '{') {
//						fal = false;
//					}
//							break;
//					default:break;
//					}
//					if (!fal) {
//						wrong = str.top();
//					}
//					str.pop();
//				}
//			}
//	}
//}
//	if (!fal) {
//		cout << "NO" << endl<< "?-";
//		switch (wrong) {
//		case '<':cout << "*/";break;
//		case '(':cout << ')'; break;
//		case '[':cout << ']'; break;
//		case'{':cout << '}'; break;
//		default:cout << wrong; break;
//		}
//	}
//	else {
//		if (!str.empty()) {
//			cout << "NO" << endl;
//			if (str.top() == '<')cout << "/*" << "-?";
//			else cout << str.top() << "-?";
//		}
//		else cout << "YES";
//	}
//	return 0;
//}
//#include <iostream>
//#include<string>
//using namespace std;
//struct BiTNode{
//    char data;
//    struct BiTNode *lchild, *rchild;//左右孩子  
//};
//BiTNode*T;
//void CreateBiTree(BiTNode* &T);
//void Inorder(BiTNode* &T);
//void Change(BiTNode* &T);
////===========================================主函数  
//int main(){
//	CreateBiTree(T);
//	Inorder(T);
//	cout<<endl;
//	Change(T);
//    return 0;
//}
////=============================================先序递归创建二叉树树  
//void CreateBiTree(BiTNode* &T){
//    //按先序输入二叉树中结点的值（一个字符），空格字符代表空树，  
//    //构造二叉树表表示二叉树T。 
//	char ch;
//    if ((ch = getchar()) == '#')
//        T = NULL;//其中getchar（）为逐个读入标准库函数  
//    else{
//        T = new BiTNode;//产生新的子树  
//        T->data = ch;//由getchar（）逐个读入来  
//        CreateBiTree(T->lchild);//递归创建左子树  
//        CreateBiTree(T->rchild);//递归创建右子树  
//    }
//}
////================================================中序遍历二叉树  
//void Inorder(BiTNode* &T){//中序递归遍历二叉树  
//    if (T){//bt=null退层  
//        Inorder(T->lchild);//中序遍历左子树  
//        cout << T->data;//访问参数  
//        Inorder(T->rchild);//中序遍历右子树  
//    }
//    else cout << "";
//}
//void Change(BiTNode* &T){
//	if (T){//bt=null退层  
//        Change(T->rchild);//中序遍历右子树  
//        cout << T->data;//访问参数  
//        Change(T->lchild);//中序遍历左子树  
//        
//    }
//} 
//#include<iostream>
//#include<cstdio>
//#include<cstring>
//using namespace std;
//
//#define N 100005
//#define M (2*N-1)
//
//typedef struct HTNode{// 树中结点的结构
//    long long weight;
//    int parent,lchild,rchild;
//}HTNode,*HuffmanT;
//HTNode ht[M+1];
//void Select(HTNode ht[], int k, int &s1, int &s2){
//// ht[1...k]中选择parent为0，并且weight最小的两个结点，其序号由变量s1，s2指示
//    int i;
//    for(i=1; i<=k && ht[i].parent!=0; ++i);
//    s1 = i;
//    for(i=1; i<=k; ++i){
//        if(ht[i].parent==0 && ht[i].weight<ht[s1].weight)
//            s1 = i;
//    }
//
//    for(i=1; i<=k; ++i){
//        if(ht[i].parent==0 && i!=s1)
//            break;
//    }
//    s2 = i;
//
//    for(i=1; i<=k; ++i){
//        if(ht[i].parent==0 && i!=s1 && ht[i].weight<ht[s2].weight)
//            s2 = i;
//    }
//}
//long long HuffmanTree(HTNode HT[],int n)
//{// 构造Huffman树ht，
//    int s1,s2,m=2*n-1,i;
//    long long ans=0;
//    for(i=n+1;i<=m;++i)
//    {
//        Select(ht,i-1,s1,s2);
//        ht[s1].parent=i;ht[s2].parent=i;
//        ht[i].lchild=s1;ht[i].rchild=s2;
//        ht[i].weight=ht[s1].weight+ht[s2].weight;
//        ans=(ans+ht[i].weight)%1000000007;
//    }
//    return ans%1000000007;
//}
//int main()
//{
//    int i,m,n;
//    cin>>n; 
//    for(int i=1;i<=n;i++){
//        cin>>ht[i].weight);
//        ht[i].lchild=0;ht[i].rchild=0;ht[i].parent=0;
//    }
//    for(int i=n;i<2*n-1;i++) ht[i].lchild=ht[i].rchild=ht[i].parent=0;
//    long long ans=HuffmanTree(ht,n);   // 构造Huffman树
//    cout<<ans;
//    return 0;
//}
//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//template<class T>
//class minHeap{
//	public:
//		minHeap(){}
//		minHeap(const T* array,int size){
//			v.resize(size);
//			for(int i=0;i<size;i++){
//				v[i]=array[i];
//			}
//			_Createheap();
//		}
//		//插入元素 
//		void _insert(int data){
//			v.push_back(data);
//			if(v.size()<2)return;
//			_AdjustUp(v.size()-1); 
//		}
//		//删除元素 
//		void _delete(){
//			if(v.emty()){
//				return;
//			}
//			int last = v.size()-1;
//			swap(v[last],v[0]);
//			v.pop_back();
//			_AdjustDown(0);
//		}
//		//求堆大小
//		int size()const{
//			return v.size();
//		} 
//		//取堆顶层元素
//		T top(){
//			return v[0];
//		} 
//		//输出从H[i]到根结点的路径上的数据
//		T getIterm(int child){
//			int parent = (child-1)>>1;
//			return v[parent];
//		}
//		void print(int child){
//			child = child-1;
//			cout<<v[child];
//			child=(child-1)>>1;
//			while(child>=0){
//				cout<<" "<<v[child];
//				child=(child-1)>>1;
//			}
//			cout<<endl;
//		}
//	private:
//		//实现最小堆
//		void _Createheap(){
//			if(v.size()<=1)return;
//			int root = (v.size()-1-1)>>1;
//			for(;root>=0;root--){
//				_AdjustDown(root);
//			}
//		} 
//		//向下调整 
//		void _AdjustDown(int parent){
//			int child = parent*2+1;
//			int size=v.size();
//			while(child<size){
//				if(child+1<size&&v[child]>v[child+1]){
//					child+=1;
//				}
//				if(v[parent]>v[child]){
//					swap(v[parent],v[child]);
//					parent=child;
//					child=parent*2+1;
//				}
//				else{
//					return;
//				}
//			}
//		}
//		// 向上调整
//		void _AdjustUp(int child){
//			int parent = (child-1)>>1;
//			while(0!=child){
//				if(v[parent]>v[child]){
//					swap(v[parent],v[child]);
//					child=parent;
//					parent=(child-1)>>1;
//				}
//				else{
//					return;
//				}
//			}
//		} 
//	private:
//		vector<T> v;
//};
//int main(){
//	int N,M,num;
//	cin>>N>>M;
//	minHeap<int> heap;
//	int *re = new int[M];
//	for(int i=0;i<N;i++){
//		cin>>num;
//		heap._insert(num);
//	}
//	for(int i=0;i<M;i++){
//		cin>>re[i]; 
//	} 
//	for(int i=0;i<M;i++){
//		heap.print(re[i]);
//	}
//	return 0;
//} 
//#include<iostream>
//using namespace std;
//int parent(int child){
//	if(child==0)return child;
//	return parent(child>>1);
//}
//int main(){
//	int N,n1,n2;
//	cin>>N;
//	int *re=new int[N];
//	for(int i=0;i<N;i++){
//		cin>>re[i];
//	}
//	cin>>n1>>n2;
//	if(re[n1-1]==0){
//		cout<<"ERROR: T["<<n1<<"] is NULL";
//	}
//	else if(re[n2-1]==0){
//		cout<<"ERROR: T["<<n2<<"] is NULL";
//	}
//	else{
//		
//		while(1){
//			if(n1==n2){
//			cout<<n1<<" "<<re[n1-1];
//			break;
//			}
//			if(n1>n2){
//				int temp=n1;
//				n1=n2;
//				n2=temp;
//			}
//			n2=n2>>1;
//			if(n2-n1==1){
//				n2=n2>>1;
//				cout<<n2<<" "<<re[n2-1];
//				break;
//			}
//			else if(n2==n1){
//				cout<<n1<<" "<<re[n1-1];
//				break;
//			}
//		}
//	}
//	return 0;
//}
//笛卡尔树是一种特殊的二叉树，其结点包含两个关键字K1和K2。首先笛卡尔树是关于K1的二叉搜索树，
//即结点左子树的所有K1值都比该结点的K1值小，右子树则大。
//其次所有结点的K2关键字满足优先队列（不妨设为最小堆）的顺序要求，
//即该结点的K2值比其子树中所有结点的K2值小。给定一棵二叉树，请判断该树是否笛卡尔树。
//
//输入格式:
//输入首先给出正整数N（≤1000），为树中结点的个数。随后N行，每行给出一个结点的信息，
//包括：结点的K1值、K2值、左孩子结点编号、右孩子结点编号。设结点从0~(N-1)顺序编号。若某结点不存在孩子结点，则该位置给出?1。
//
//输出格式:
//输出YES如果该树是一棵笛卡尔树；否则输出NO。
//
//输入样例1:
//6
//8 27 5 1
//9 40 -1 -1
//10 20 0 3
//12 21 -1 4
//15 22 -1 -1
//5 35 -1 -1
//输出样例1:
//YES
//输入样例2:
//6
//8 27 5 1
//9 40 -1 -1
//10 20 0 3
//12 11 -1 4
//15 22 -1 -1
//50 35 -1 -1
//输出样例2:
//NO
//#include<iostream>
//#include<vector>
//using namespace std;
//struct node{
//	int ldata;
//	int rdata;
//	int lchild;
//	int rchild;
//};
////判断二叉搜索树 
//void dfs(vector<node>re,vector<int>&re1,int num,int &j)
//{
//	if(num==-1) return;
//	else
//	{
//		dfs(re,re1,re[num].lchild,j);
//		re1[j++]=re[num].ldata;
//		dfs(re,re1,re[num].rchild,j);
//	}
//}
//int main(){
//	bool fal=true;
//	int N,i,j,root,num=0;
//	cin>>N;
//	vector<node>re(N);
//	vector<int>re1(N);
//	for(i=0;i<N;i++){
//		cin>>re[i].ldata>>re[i].rdata>>re[i].lchild>>re[i].rchild;
//	}
//	for(i=0;i<N;i++){
//		for(j=0;j<N;j++){
//			if(re[j].lchild==i||re[j].rchild==i){
//				break;
//			}
//		}
//		if(j==N){
//			root=i;
//			break;
//		}
//	}
//	for(i=0;i<N;i++){
//		if(re[i].lchild!=-1){
//			if(re[i].ldata<=re[re[i].lchild].ldata){
//				fal=false;
//				break;
//			}
//		}
//        if(re[i].rchild!=-1){
//			if(re[i].ldata>re[re[i].rchild].rdata){
//				fal=false;
//				break;
//			}
//		}
//		int index=re[i].rchild;
//		while(index!=-1){
//			if(re[i].rdata<re[index].rdata){
//				index=re[index].rchild;
//			}
//			else{
//				fal=false;
//				break;
//			}
//		}
//		if(!fal)break;
//	}
//	if(fal){
//		dfs(re,re1,root,num);
//		for(i=0;i<N-1;i++){
//			if(re1[i]>re1[i+1]){
//				fal=false;
//				break;
//			}
//		}
//	}
//	
//	if(fal)cout<<"YES";
//	else cout<<"NO";
//	return 0; 
//} 
//#include <iostream>
//#include<queue>
//using namespace std;
//typedef struct BNode* BTree;
//struct BNode
//{
//    int data;
//    BTree left;
//    BTree right;
//};
//int a[1001],b[1001],c[1001];
//int cnt=0,cnt2=0,ppx=1;
//void Insert(BTree &t,int data){
//    if(!t){
//        BTree p;
//        p->data=data;
//        p->left=NULL;
//        p->right=NULL;
//        t=p;
//    }
//    else if(data>=t->data)Insert(t->left,data);
//    else if(data<t->data)Insert(t->right,data);
//}
//void PreorderTraversal(BTree t){
//    if(t){
//        b[cnt++]=t->data;
//        PreorderTraversal(t->left);
//        PreorderTraversal(t->right);
//    }
//}
////void PostorderTraversal(BTree t){
////    if(t){
////        c[cnt2++]=t->data;
////        PostorderTraversal(t->right);
////        PostorderTraversal(t->left);
////    }
////}
//void Traversal(BTree t){
//    if(t){
//        Traversal(t->left);
//        Traversal(t->right);
//        if(ppx)ppx=0;
//        else cout<<" ";
//        cout<<t->data;
//    }
//}
//void PostTraversal(BTree t){
//    if(t){
//        PostTraversal(t->right);
//        PostTraversal(t->left);
//        if(ppx)ppx=0;
//        else cout<<" ";
//        cout<<t->data;
//    }
//}
//int judge(BTree head)
//{
//    if(!head) return 0; //如果树的根节点不存在，即树不存在，认为不是完全二叉树
//    BTree p=new BNode();
//    queue<BTree>q;
//    while(!q.empty()) q.pop();
//    q.push(head);//根节点入队
//    while(p=q.front())//队首元素不为NULL代表该节点存在，拓展这个节点的儿子节点，若为NULL，说明搜索到的节点为空节点了，那么就遍历队列里已有元素
//    {
//        q.push(p->left);
//        q.push(p->right);
//        q.pop();
//    }
//    while(!q.empty())
//    {
//        if(q.front()) return 0;
//        q.pop();
// 
//    }
//    return 1;
// 
//}
//void levelorder(BTree t){
//	queue<BTree> q;
//	BTree p;
//	if(!t)q.push(t);
//	while(!q.empty()){
//		p=q.front();
//		if(!p->left)q.push(p->left);
//		if(!p->right)q.push(p->right);
//		if(ppx)ppx=0;
//		else cout<<" ";
//		cout<<p->data;
//		q.pop();
//	}
//}
//int main()
//{
//    int n;
//    cin>>n;
//    BTree t;
//    t=NULL;
//    for(int i=0;i<n;i++){
//        cin>>a[i];
//        Insert(t,a[i]);
//    }
//    PreorderTraversal(t);
//    int f=0,p=0;
//    for(int i=0;i<n;i++){
//        if(a[i]!=b[i]){
//            f=1;
//            break;
//        }
//    }
////    for(int i=0;i<n;i++){
////        if(c[i]!=a[i]){
////            p=1;
////            break;
////        }
////    }
//    if(!f&!judge(t)){
//    	
//    	//levelorder(t);
//    	cout<<endl;
//    	cout<<"YES";
//	}
//    else {
//        //levelorder(t);
//        cout<<endl;
//        cout<<"NO";
//    }
//    return 0;
//}
//#include<iostream>
//using namespace std;
//typedef struct Node{
//	int data;
//	Node* left;
//	Node*right;
//	int height;
//}BTNode;
//int Height(Node* N){
//	if(N==NULL)return 0;
//	return N->height;
//}
//int max(int a,int b){
//	return (a>b)? a:b;
//}
//BTNode* newNode(int data){
//	Node* node = new Node();
//	node->data=data;
//	node->left=NULL;
//	node->right=NULL;
//	node->height=1;
//	return node;
//}
//BTNode* ll_rotate(BTNode* y){
//	BTNode* x=y->left;
//	y->left=x->right;
//	x->right=y;
//	y->height=max(Height(y->left),Height(y->right))+1;
//	x->height=max(Height(x->left),Height(x->right))+1;
//	return x;
//}
//BTNode*rr_rotate(BTNode* y){
//	BTNode* x=y->right;
//	y->right=x->left;
//	x->left=y;
//	y->height=max(Height(y->left),Height(y->right))+1;
//	x->height=max(Height(x->left),Height(x->right))+1;
//	return x;
//}
//int getBalance(BTNode* N){
//	if(N==NULL){
//		return 0;
//	}
//	return Height(N->left)-Height(N->right);
//}
//BTNode* insert(BTNode* node ,int data){
//	if(node==NULL){
//		return newNode(data);
//	}
//	if(data < node->data){
//		node->left = insert(node->left,data);
//	}
//	else if(data > node->data)node->right = insert(node->right,data);
//	else
//	{
//		return node;
//	}
//	int balance = getBalance(node);
//	if(balance>1&&data<node->left->data)//LL型
//	{
//		return ll_rotate(node);
//	}
//	if(balance<-1&&data>node->right->data){//RR型
//		return rr_rotate(node);
//	}
//	if(balance>1&&data>node->left->data){//LR型
//		node->left=rr_rotate(node->left);
//		return ll_rotate(node);
//	}
//	if(balance<-1&&data<node->right->data){//RL型
//		node->right=ll_rotate(node->right);
//		return rr_rotate(node);
//	}
//}
//void preOrder(Node* root){
//	if(root!=NULL){
//		cout<<root->data<<" ";
//		preOrder(root->left);
//		preOrder(root->right);
//	}
//}
//int main(){
//	BTNode* root=NULL;
//	int n,num;
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>num;
//		root = insert(root,num);
//	}
//	cout<<root->data<<endl;
//	preOrder(root);
//	return 0;
//}
//#include <iostream>
//#include<string>
//using namespace std;
//const int MAX = 1000;
//int mod(string str){
//    int len=str.length();
//    int end=3,d=0,temp=1;
//    if(len<end)end=len;
//    for(int j=1;j<=end;j++){
//        int s=str[len-j]-'A';
//        d+=s*temp;
//        temp*=32;
//    }
//    return d;
//}
//int main()
//{
//    int N,P;
//    string *str=new string[N];
//    string *visited=new string[P];
//    cin >> N >> P; //P为散列表的长度
//    int data[MAX];//输入数据
//    for(int i = 0;i<N;i++)
//    {
//        cin>>str[i];
//        data[i]=mod(str[i]);
//    }
//    for(int i=0;i<P;i++){
//        visited[i]="";
//    }
//    int index[MAX];
//    for(int i = 0;i<N;i++)
//    {
//        int d;
//        d=data[i]%P;
//        if(str[i]==visited[d])
//        {
//            index[i] = d;
//            continue;
//        }
//        int k=1;
//        while(1)//说明该位置没有元素
//        {
//            if(visited[d]!="" && visited[d]==str[i])
//            {
//                d=(d+k*k)%P;
//            }
//            else break;
//            if(visited[d]!="" && visited[d]==str[i])
//            {
//                d=(d-k*k)%P;
//                k++;
//            }
//            else break;
//        }
//        index[i] = d;
//        visited[d]=str[i];
//    }
//    for(int i = 0;i<N-1;i++)
//    {
//        cout << index[i] << ' ';
//    }
//    cout << index[N-1];
//    system("pause");
//    return 0;
//}
//#include<iostream>
//#include<string>
//#include<queue>
//#include<vector>
//using namespace std;
//
//int find(vector<int> heap,int data){
//	for(int i=1;i<=heap.size();i++){
//		if(heap[i]==data)return i;
//	}
//	return -1;
//}
//int main(){
//	
//	priority_queue<int, vector<int>, greater<int> > q;
//	int N,num,m;
//	cin>>N>>m;
//	for (int i = 1; i <=N; i++)
//	{
//		cin>>num;
//		q.push(num);
//	}
//	vector<int> heap(N+1);
//	for(int i = 1; i <=N; i++){
//		heap[i]=q.top();
//		cout<<q.top()<<" ";
//		q.pop();
//	}
//	for(int i=0;i<m;i++){
//	int a;cin>>a;
//	string p1;cin>>p1;
//	if(p1=="and"){
//		int b;cin>>b;
//		if(find(heap,a)-find(heap,b)==1||find(heap,a)-find(heap,b)==-1){
//			cout<<"T"<<endl;
//		}else{
//			cout<<"F"<<endl;
//		}
//		string p2,p3;
//		cin>>p2>>p3;
//		}else{
//			string p2;cin>>p2;
//			if(p2=="a"){
//				string p3,p4;int b;
//				cin>>p3>>p4>>b;
//				if(find(heap,a)/2==find(heap,b)){
//					cout<<"T"<<endl;
//				}else{
//					cout<<"F"<<endl;
//				}
//				
//			}else{
//				string p6;
//				cin>>p6;
//				if(p6=="root"){
//					if(a==heap[0]){
//						cout<<"T"<<endl;
//					}else{
//						cout<<"F"<<endl;
//					}
//				}else{
//					string p7;int b;
//					cin>>p7;
//					cin>>b;
//					if(find(heap,a)==find(heap,b)/2){
//						cout<<"T"<<endl;
//					}else{
//						cout<<"F"<<endl;
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}
//#include<iostream>
//#include<queue>
//using namespace std;
//#define max 100001
//int ant[max][max];
//bool visited[max];
//bool vis[max];
//int N;
//void bfs(int root){
//	queue<int> q;
//	int n;
//	visited[root]=true;
//	q.push(root);
//	while(!q.empty()){
//		n = q.front();
//		q.pop();
//		for(int i=1;i<=N;i++){
//			if(!visited[i]&&ant[n][i]){
//				visited[i]=true;
//				q.push(i);
//			}
//		}
//	}
//	cout<<n;
//}
//int main(){
//	int M,temp,root=0;
//	cin>>N;
//    int ant[max][max];
//    bool visited[max];
//    bool vis[max];
//	for(int i=1;i<=N;i++){
//		cin>>M;
//		for(int j=1;j<=M;j++){
//			cin>>temp;
//			ant[i][temp]=ant[temp][i]=1;
//			vis[temp]=1;
//		}
//	}
//	for(int i=1;i<N;i++){
//		if(vis[i]!=1){
//			root=i;
//			break;
//		}
//	}
//	bfs(root);
//	return 0;
//}
#include<iostream>
using namespace std;
int main(){
	float a=1;
	cout<<a<<endl;
	printf("%f\n",a);
	system("pause");
	return 0;
} 
