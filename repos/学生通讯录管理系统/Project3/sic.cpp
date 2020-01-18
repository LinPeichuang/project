#include<iostream>
#include<string>
#include<iomanip>
#include<fstream>
#include<Windows.h>
using namespace std;
struct student
{
	char sno[12];//学号
	char sname[10];//姓名
	char phone[12];//电话
	char collge[20];//学院
	struct student *next;
};
bool snosatisfy(struct student *p)//判断输入的学号是否符合要求
{
	int len = strlen(p->sno);
	bool found = true;
	if (len != 11)
		found = false;
	else
	{
		for (int i = 0; i < len; i++)
			if (p->sno[i] > '9' || p->sno[i] < '0')
			{
				found = false;
				break;
			}
	}
	return found;
}
bool phonesatisfy(struct student* p)//判断输入的学号是否符合要求
{
	int len = strlen(p->phone);
	bool found = true;
	if (len != 11)
		found = false;
	else
	{
		for (int i = 0; i < len; i++)
			if (p->phone[i] > '9' || p->phone[i] < '0')
			{
				found = false;
				break;
			}
	}
	return found;
}
bool f1(char sno[12], struct student* head)//判断输入的学号是否已经存在
{
	struct student* p = head;
	while (p != NULL)
	{
		if (strcmp(sno, p->sno)==0)
		{
			return true;
			break;
		}
		else//否则指向下一个节点
		{
			p = p->next;
		}
	}
	return false;
}
bool nofilenull()
{
	fstream file;
	int ch;
	bool found=true;
	file.open("data.txt", ios::in);
	ch = file.get();
	if (file.eof())
	{
		found = false;
	}
	file.close();
	return found;
}
struct student* readdata()
{
	student* p = new student, * q = p;
	p->next = NULL;
	struct student stu1;
	fstream file("data.txt", ios::in);
	while (1)
	{
		file.read((char*)& stu1, sizeof(stu1));
		if (!file)
			break;
		else
		{
			struct student* v = (struct student*)malloc(sizeof(struct student));
			strcpy_s(v->sno, stu1.sno);
			strcpy_s(v->sname, stu1.sname);
			strcpy_s(v->phone, stu1.phone);
			strcpy_s(v->collge, stu1.collge);
			q->next = v;
			q->next->next = NULL;
			q = q->next;
		}
	}
	file.close();
	return(p->next);
}
void save_to_file(struct student* head)
{
	struct student head1;
	fstream file("data.txt", ios::out);
	if (!file)
	{
		cerr << "open student.dat error!" << endl;
		exit(1);
	}
	if (head != NULL)
	{
		while (head)
		{
			file.write((char*)head, sizeof(head1));//获取结构体长度的二进制码
			head = head->next;//指针下移
		}
	}
	file.close();
}
struct student * mycreate()
{
	system("cls");
	string str="0";
	struct student *head=NULL;
	int n = 0, i = 0;
	bool found=true;
	struct student *p1, *p2;
	cout << "请按下面的顺序依次输入每个学生的信息（输入“0 0 0 0”结束返回主菜单）" << endl;
	cout << setw(7) << "学号" << setw(10) << "姓名" << setw(10) << "电话" << setw(10) << "学院" << endl;
	p1 = p2 = new student;
	head = NULL;
	while (1)
	{
		do {
			cin >> p1->sno >> p1->sname >> p1->phone >> p1->collge;
			
			//cout << f1(p1->sno, head) << endl;
			if (p1->sno == str)
				break;
			if (f1(p1->sno, head))
			{
				cout << "---------------------------------------------" << endl;
				cout << "学号重复！请重新输入！" << endl;
				cout << "---------------------------------------------" << endl;
				found = false;
			}
			if (!snosatisfy(p1))
			{
				cout << "---------------------------------------------" << endl;
				cout << "学号格式不规范！请重新输入11位纯数字学号！" << endl;
				cout << "---------------------------------------------" << endl;
				found = false;
			}
			if (!phonesatisfy(p1))
			{
				cout << "---------------------------------------------" << endl;
				cout << "电话号码格式不规范！请重新输入11位纯数字电话！" << endl;
				cout << "---------------------------------------------" << endl;
				found = false;
			}
		} while (!found);
		if (p1->sno == str)
			break;
		if (i==0)
		{
			head = p1;
		}
		else
		{
			p2->next = p1;//p2为上一个节点
		}
		//更新
		p2 = p1;
		p2->next = NULL;
		p1 = new student;
		i++;
	}
	delete p1;
	return (head);
}

void mydisplay(struct student *head)//显示通讯录
{
	system("cls");
	struct student *p;
	char str;
	if (head == NULL)
	{
		cout << "该通讯录暂时没有录入任何学生的信息" << endl;
	}
	else
	{
		p = head;
		cout << setw(7) << "学号" << setw(11) << "姓名" << setw(12) << "电话" << setw(12) << "学院" << endl;
		while (p != NULL)
		{
			cout << p->sno << "  " << p->sname << "  " << p->phone << "  " << p->collge << endl;
			p = p->next;
		}
	}
	cout << endl;
	cout << "-------------------------------------------" << endl;
	cout << "输入'y'返回上一级" << endl;
	cin >> str;
	if (str == 'y')
		return;
}
void sch_num(struct student *head)
{
	system("cls");
	struct student *p;
	p = head;
	string num;
	cout << "请输入待查询的学生的学号:" ;
	cin >> num;
	while (p != NULL)
	{
		if (num == p->sno)//对应学号，输出学生信息
		{
			cout << setw(7) << "学号" << setw(11) << "姓名" << setw(12) << "电话" << setw(12) << "学院" << endl;
			cout << p->sno << "  " << p->sname << "  " << p->phone << "  " << p->collge << endl;
			break;
		}
		else//否则指向下一个节点
		{
			p = p->next;
		}
	}
	if (p == NULL)
	{
		cout << "该学生的信息不在系统中或者输入的学号有误！" << endl;
	}
}
void sch_name(struct student *head)
{
	system("cls");
	struct student *p;
	p = head;
	string name;
	cout << "请输入待查询学生姓名：" ;
	cin >> name;
	while (p != NULL)
	{
		if (name == p->sname)//对应姓名，输出学生信息
		{
			cout << setw(7) << "学号" << setw(11) << "姓名" << setw(12) << "电话" << setw(12) << "学院" << endl;
			cout << p->sno << "  " << p->sname << "  " << p->phone << "  " << p->collge << endl;
			break;
		}
		else//否则指向下一个节点
		{
			p = p->next;
		}
	}
	if (p == NULL)
	{
		cout << "该学生的信息不在系统中或者输入的姓名有误！" << endl;
	}
}
void mysearch(struct student *head)//查询通讯录
{
	char n,c;
	do
	{
		system("cls");
		cout << "请选择查询方式：1、学号；2、姓名" << endl;
		cin >> n;
		if (n == '1')
			sch_num(head);
		else if (n == '2')
			sch_name(head);
		else
			;
		cout << endl<<"---------------------------------------------" << endl;
		cout << "是否退出查询返回主菜单?(y/n)" << endl;
		cin >> c;
	} while (c!='y');
	return;
}
struct student * myadd(struct student *head)
{
	char n;
	bool found = false;
	do
	{
		system("cls");
		struct student *newnode = new student;
		cout << "请输入加入学生的信息" << endl;
		do
		{
			found = false;
			cout << setw(7) << "学号" << setw(10) << "姓名" << setw(10) << "电话" << setw(10) << "学院" << endl;
			cin >> newnode->sno >> newnode->sname >> newnode->phone >> newnode->collge;
			if (f1(newnode->sno, head))
			{
				cout << "---------------------------------------------" << endl;
				cout << "学号重复！请重新输入！" << endl;
				cout << "---------------------------------------------" << endl;
				found = true;
			}
			if (!snosatisfy(newnode))
			{
				cout << "---------------------------------------------" << endl;
				cout << "学号格式不规范，请重新输入11位纯数字学号！" << endl;
				cout << "---------------------------------------------" << endl;
				found = true;
			}
			if (!phonesatisfy(newnode))
			{
				cout << "---------------------------------------------" << endl;
				cout << "电话格式不规范，请重新输入11位纯数字电话！" << endl;
				cout << "---------------------------------------------" << endl;
				found = true;
			}
			cout << endl;
		} while (found);
		newnode->next = NULL;
		if (head == NULL)
		{
			head = newnode;
		}
		else
		{
			struct student *node = head;
			while (node->next != NULL&&node->sno!=newnode->sno)
			{
					node = node->next;
			}
			if (node->sno == newnode->sno)
				cout << "该学生信息已经存在" << endl;
			else
			    node->next = newnode;
		}
		cout << "是否退出加入学生信息并返回主菜单？（y/n）" << endl;
		cin >> n;
	} while (n != 'y');
	return (head);
}
void mymodify(struct student *head)
{
	string num;
	char str;
	bool found=false;
	do
	{
		system("cls");
		cout << "请输入你想修改的学生信息的学号：" << endl;
		struct student *p;
		p = head;
		cin >> num;
		while (p != NULL)
		{
			if (num == p->sno)//找到该学生，修改该学生信息
			{
				cout << "该学生信息如下：" << endl;
				cout << setw(7) << "学号" << setw(11) << "姓名" << setw(12) << "电话" << setw(12) << "学院" << endl;
				cout << p->sno << "  " << p->sname << "  " << p->phone << "  " << p->collge << endl;
				cout << "--------------------------------------------------------------------------------" << endl;
				cout << "请重新输入修改后他（她）的信息：" << endl;
				do {
					found = false;
					cout << "学号" << setw(10) << "姓名" << setw(10) << "电话" << setw(10) << "学院" << endl;
					cin >> p->sno >> p->sname >> p->phone >> p->collge;
					if (p->sno == num&&phonesatisfy(p))
						break;
				    if (f1(p->sno, head))
					{
						cout << "--------------------------------------------------------------------------------" << endl;
						cout << "学号重复！请重新输入！" << endl;
						cout << "--------------------------------------------------------------------------------" << endl;
						found = true;
					}
					if (!snosatisfy(p))
					{
						cout << "--------------------------------------------------------------------------------" << endl;
						cout << "学号格式不规范，请重新输入！" << endl;
						cout << "--------------------------------------------------------------------------------" << endl;
						found = true;
					}
					if (!phonesatisfy(p))
					{
						cout << "--------------------------------------------------------------------------------" << endl;
						cout << "电话格式不规范，请重新输入！" << endl;
						cout << "--------------------------------------------------------------------------------" << endl;
						found = true;
					}
					cout << endl;
				} while (found);
				break;
			}
			else//否则指向下一个节点
			{
				p = p->next;
			}
		}
		if (p == NULL)
			cout << "该学生信息不在系统内" << endl;
		cout << endl;
		cout << "--------------------------------------------------------------------------------" << endl;
		cout << "是否继续执行修改学生信息的操作？（y/n）：";
		cin >> str;
	} while (str == 'y');
}
student *mydelete(student *head)
{
	student *p1 = head;
	student *p2 = head;
	student *head1 = head;
	int i = 0;
	char ch,str;
	system("cls");
	do {
		cout << "请选择删除方式，1.全部内容删除。2.删除单个人的信息：";
		cin >> str;
		if (str == '1' || str == '2')
			break;
		else
			cout << "输入错误,请重新输入！" << endl;
	} while (1);
	while (1)
	{
		if (head == NULL)
		{
			cout << "通讯录为空！！" << endl;
		}
		else if(str == '1')
		{
			while (p1 != NULL)
			{
				p2 = p1->next;
				delete p1;
				p1 = p2;
			}
			head1 = new student;
			head1->next = NULL;
			head1 = NULL;
			cout << "删除成功！" << endl;
		}
		else if (str == '2')
		{
			system("cls");
			cout << "请选择删除方式，1.按学号查找删除。2.按姓名查找删除：";
			cin >> i;
			if (i == 1)
			{
				string t;
				int g = 1;
				cout << "请输入学生学号：";
				cin >> t;
				while (p1 != NULL)
				{

					if (p1->sno == t && g == 1) {
						cout << "该学生信息如下：" << endl;
						cout << setw(7) << "学号" << setw(11) << "姓名" << setw(12) << "电话" << setw(12) << "学院" << endl;
						cout << p1->sno << "  " << p1->sname << "  " << p1->phone << "  " << p1->collge << endl;
						head1 = p1->next;
						delete p1;
						cout << "删除成功！" << endl;
						cout << "-----------------------------------------------------------------" << endl;
						break;
					}
					else if (p1->sno == t) {
						cout << "该学生信息如下：" << endl;
						cout << setw(7) << "学号" << setw(11) << "姓名" << setw(12) << "电话" << setw(12) << "学院" << endl;
						cout << p1->sno << "  " << p1->sname << "  " << p1->phone << "  " << p1->collge << endl;
						p2->next = p1->next;
						delete p1;
						cout << "删除成功！" << endl;
						cout << "-----------------------------------------------------------------" << endl;
						break;
					}

					p2 = p1;
					p1 = p1->next;
					g++;
				}
				if (p1 == NULL)
				{
					cout << "该用户不在通讯录内！" << endl;
				}
			}
			else if (i == 2)
			{
				string t;
				int g = 1;
				cout << "请输入学生姓名：";
				cin >> t;
				while (p1 != NULL)
				{

					if (p1->sname == t && g == 1) {
						cout << "该学生信息如下：" << endl;
						cout << setw(7) << "学号" << setw(11) << "姓名" << setw(12) << "电话" << setw(12) << "学院" << endl;
						cout << p1->sno << "  " << p1->sname << "  " << p1->phone << "  " << p1->collge << endl;
						head1 = p1->next;
						delete p1;
						cout << "删除成功！" << endl;
						cout << "-----------------------------------------------------------------" << endl;
						break;
					}
					else if (p1->sname == t) {
						cout << "该学生信息如下：" << endl;
						cout << setw(7) << "学号" << setw(11) << "姓名" << setw(12) << "电话" << setw(12) << "学院" << endl;
						cout << p1->sno << "  " << p1->sname << "  " << p1->phone << "  " << p1->collge << endl;
						p2->next = p1->next;
						delete p1;
						cout << "删除成功！" << endl;
						cout << "-----------------------------------------------------------------" << endl;
						break;
					}

					p2 = p1;
					p1 = p1->next;
					g++;
				}
				if (p1 == NULL)
				{
					cout << "该用户不在通讯录内！" << endl;
				}
			}
			else
			{
				cout << "输入错误！请重新输入！" << endl;
				continue;
			}
		}
		cout << "按'y'继续执行删除操作，按其他任意键返回主菜单" << endl;
		cin >> ch;
		if (ch != 'y')
			break;
		p1 = head1;
	}
	return head1;
}
void Swap(student* p1, student* p2, student* head)
{

	student temp;
	student* temp1;

	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	temp1 = p1->next;//交换后指针记得换回来
	p1->next = p2->next;
	p2->next = temp1;
}
void numSort(student* head,int n,int i)
{
	student* p1 = head;
	student* p2 = head;
	for (; p1 != NULL; p1 = p1->next)//遍历整个链表
	{
		for (p2 = p1->next; p2 != NULL; p2 = p2->next)//确保p1比后面都小
		{
			if (n == 1)
			{
				if (i == 1)
				{
					if (strcmp(p1->sno, p2->sno) < 0)
						Swap(p1, p2, head);
				}
				else if (i == 2)
				{
					if (strcmp(p1->sname, p2->sname) < 0)
						Swap(p1, p2, head);
				}
				else
				{
					if (strcmp(p1->collge, p2->collge) < 0)
						Swap(p1, p2, head);
				}
			}
			else
			{
				if (i == 1)
				{
					if (strcmp(p1->sno, p2->sno) > 0)
						Swap(p1, p2, head);
				}
				else if (i == 2)
				{
					if (strcmp(p1->sname, p2->sname) > 0)
						Swap(p1, p2, head);
				}
				else
				{
					if (strcmp(p1->collge, p2->collge) > 0)
						Swap(p1, p2, head);
				}
			}
		}
	}
}

void mysort(struct student *head)
{
	char str = 'n';
	while(str!='y')
	{
		system("cls");
		int i = 0, n = 0;
		cout << "请选择升降序排序：1、降序  2、升序" << endl;
		cin >> n;
		cout << "请选择排序的方式：1、按学号排序  2、按姓名排序 3、按学院排序" << endl;
		cin >> i;
		if (head != NULL && head->next != NULL)
		{
			numSort(head, n, i);
			cout << "排序成功" << endl;
		}
		else if (head == NULL)
			cout << "通讯录内暂时没有录入学生信息" << endl;
		else
			cout << "通讯录内只录入了一个学生的信息" << endl;
		cout << "---------------------------" << endl;
		cout << "返回主菜单按'y'" << endl;
		cin >> str;
	}
	return;
}
void myprint()
{
	system("cls");
	cout << "学生通讯录管理系统功能菜单" << endl;
	cout << "1、新建通讯录" << endl;
	cout << "2、显示通讯录" << endl;
	cout << "3、查询通讯录" << endl;
	cout << "4、添加通讯录" << endl;
	cout << "5、修改通讯录" << endl;
	cout << "6、删除通讯录" << endl;
	cout << "7、通讯录排序" << endl;
	cout << "8、输入其他数字退出系统" << endl;
	cout << "输入序号，即可执行相应功能" << endl;
}
int main()
{
	struct student *p = NULL;
	int n;
	if (nofilenull())
		p = readdata();
	system("Color f1");
	do
	{
		myprint();
		cin >> n;
		switch (n)
		{
		case 1:p=mycreate(); break;
		case 2:mydisplay(p); break;
		case 3:mysearch(p); break;
		case 4:p=myadd(p); break;
		case 5:mymodify(p); break;
		case 6:p=mydelete(p); break;
		case 7:mysort(p); break;
		case 8:save_to_file(p);
			; delete p; return 0; break;
		default:
			break;
		}
	} while (n >= 1 && n <= 7);
	system("pause");
	return 0;
}