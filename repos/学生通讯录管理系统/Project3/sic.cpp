#include<iostream>
#include<string>
#include<iomanip>
#include<fstream>
#include<Windows.h>
using namespace std;
struct student
{
	char sno[12];//ѧ��
	char sname[10];//����
	char phone[12];//�绰
	char collge[20];//ѧԺ
	struct student *next;
};
bool snosatisfy(struct student *p)//�ж������ѧ���Ƿ����Ҫ��
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
bool phonesatisfy(struct student* p)//�ж������ѧ���Ƿ����Ҫ��
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
bool f1(char sno[12], struct student* head)//�ж������ѧ���Ƿ��Ѿ�����
{
	struct student* p = head;
	while (p != NULL)
	{
		if (strcmp(sno, p->sno)==0)
		{
			return true;
			break;
		}
		else//����ָ����һ���ڵ�
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
			file.write((char*)head, sizeof(head1));//��ȡ�ṹ�峤�ȵĶ�������
			head = head->next;//ָ������
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
	cout << "�밴�����˳����������ÿ��ѧ������Ϣ�����롰0 0 0 0�������������˵���" << endl;
	cout << setw(7) << "ѧ��" << setw(10) << "����" << setw(10) << "�绰" << setw(10) << "ѧԺ" << endl;
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
				cout << "ѧ���ظ������������룡" << endl;
				cout << "---------------------------------------------" << endl;
				found = false;
			}
			if (!snosatisfy(p1))
			{
				cout << "---------------------------------------------" << endl;
				cout << "ѧ�Ÿ�ʽ���淶������������11λ������ѧ�ţ�" << endl;
				cout << "---------------------------------------------" << endl;
				found = false;
			}
			if (!phonesatisfy(p1))
			{
				cout << "---------------------------------------------" << endl;
				cout << "�绰�����ʽ���淶������������11λ�����ֵ绰��" << endl;
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
			p2->next = p1;//p2Ϊ��һ���ڵ�
		}
		//����
		p2 = p1;
		p2->next = NULL;
		p1 = new student;
		i++;
	}
	delete p1;
	return (head);
}

void mydisplay(struct student *head)//��ʾͨѶ¼
{
	system("cls");
	struct student *p;
	char str;
	if (head == NULL)
	{
		cout << "��ͨѶ¼��ʱû��¼���κ�ѧ������Ϣ" << endl;
	}
	else
	{
		p = head;
		cout << setw(7) << "ѧ��" << setw(11) << "����" << setw(12) << "�绰" << setw(12) << "ѧԺ" << endl;
		while (p != NULL)
		{
			cout << p->sno << "  " << p->sname << "  " << p->phone << "  " << p->collge << endl;
			p = p->next;
		}
	}
	cout << endl;
	cout << "-------------------------------------------" << endl;
	cout << "����'y'������һ��" << endl;
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
	cout << "���������ѯ��ѧ����ѧ��:" ;
	cin >> num;
	while (p != NULL)
	{
		if (num == p->sno)//��Ӧѧ�ţ����ѧ����Ϣ
		{
			cout << setw(7) << "ѧ��" << setw(11) << "����" << setw(12) << "�绰" << setw(12) << "ѧԺ" << endl;
			cout << p->sno << "  " << p->sname << "  " << p->phone << "  " << p->collge << endl;
			break;
		}
		else//����ָ����һ���ڵ�
		{
			p = p->next;
		}
	}
	if (p == NULL)
	{
		cout << "��ѧ������Ϣ����ϵͳ�л��������ѧ������" << endl;
	}
}
void sch_name(struct student *head)
{
	system("cls");
	struct student *p;
	p = head;
	string name;
	cout << "���������ѯѧ��������" ;
	cin >> name;
	while (p != NULL)
	{
		if (name == p->sname)//��Ӧ���������ѧ����Ϣ
		{
			cout << setw(7) << "ѧ��" << setw(11) << "����" << setw(12) << "�绰" << setw(12) << "ѧԺ" << endl;
			cout << p->sno << "  " << p->sname << "  " << p->phone << "  " << p->collge << endl;
			break;
		}
		else//����ָ����һ���ڵ�
		{
			p = p->next;
		}
	}
	if (p == NULL)
	{
		cout << "��ѧ������Ϣ����ϵͳ�л����������������" << endl;
	}
}
void mysearch(struct student *head)//��ѯͨѶ¼
{
	char n,c;
	do
	{
		system("cls");
		cout << "��ѡ���ѯ��ʽ��1��ѧ�ţ�2������" << endl;
		cin >> n;
		if (n == '1')
			sch_num(head);
		else if (n == '2')
			sch_name(head);
		else
			;
		cout << endl<<"---------------------------------------------" << endl;
		cout << "�Ƿ��˳���ѯ�������˵�?(y/n)" << endl;
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
		cout << "���������ѧ������Ϣ" << endl;
		do
		{
			found = false;
			cout << setw(7) << "ѧ��" << setw(10) << "����" << setw(10) << "�绰" << setw(10) << "ѧԺ" << endl;
			cin >> newnode->sno >> newnode->sname >> newnode->phone >> newnode->collge;
			if (f1(newnode->sno, head))
			{
				cout << "---------------------------------------------" << endl;
				cout << "ѧ���ظ������������룡" << endl;
				cout << "---------------------------------------------" << endl;
				found = true;
			}
			if (!snosatisfy(newnode))
			{
				cout << "---------------------------------------------" << endl;
				cout << "ѧ�Ÿ�ʽ���淶������������11λ������ѧ�ţ�" << endl;
				cout << "---------------------------------------------" << endl;
				found = true;
			}
			if (!phonesatisfy(newnode))
			{
				cout << "---------------------------------------------" << endl;
				cout << "�绰��ʽ���淶������������11λ�����ֵ绰��" << endl;
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
				cout << "��ѧ����Ϣ�Ѿ�����" << endl;
			else
			    node->next = newnode;
		}
		cout << "�Ƿ��˳�����ѧ����Ϣ���������˵�����y/n��" << endl;
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
		cout << "�����������޸ĵ�ѧ����Ϣ��ѧ�ţ�" << endl;
		struct student *p;
		p = head;
		cin >> num;
		while (p != NULL)
		{
			if (num == p->sno)//�ҵ���ѧ�����޸ĸ�ѧ����Ϣ
			{
				cout << "��ѧ����Ϣ���£�" << endl;
				cout << setw(7) << "ѧ��" << setw(11) << "����" << setw(12) << "�绰" << setw(12) << "ѧԺ" << endl;
				cout << p->sno << "  " << p->sname << "  " << p->phone << "  " << p->collge << endl;
				cout << "--------------------------------------------------------------------------------" << endl;
				cout << "�����������޸ĺ�������������Ϣ��" << endl;
				do {
					found = false;
					cout << "ѧ��" << setw(10) << "����" << setw(10) << "�绰" << setw(10) << "ѧԺ" << endl;
					cin >> p->sno >> p->sname >> p->phone >> p->collge;
					if (p->sno == num&&phonesatisfy(p))
						break;
				    if (f1(p->sno, head))
					{
						cout << "--------------------------------------------------------------------------------" << endl;
						cout << "ѧ���ظ������������룡" << endl;
						cout << "--------------------------------------------------------------------------------" << endl;
						found = true;
					}
					if (!snosatisfy(p))
					{
						cout << "--------------------------------------------------------------------------------" << endl;
						cout << "ѧ�Ÿ�ʽ���淶�����������룡" << endl;
						cout << "--------------------------------------------------------------------------------" << endl;
						found = true;
					}
					if (!phonesatisfy(p))
					{
						cout << "--------------------------------------------------------------------------------" << endl;
						cout << "�绰��ʽ���淶�����������룡" << endl;
						cout << "--------------------------------------------------------------------------------" << endl;
						found = true;
					}
					cout << endl;
				} while (found);
				break;
			}
			else//����ָ����һ���ڵ�
			{
				p = p->next;
			}
		}
		if (p == NULL)
			cout << "��ѧ����Ϣ����ϵͳ��" << endl;
		cout << endl;
		cout << "--------------------------------------------------------------------------------" << endl;
		cout << "�Ƿ����ִ���޸�ѧ����Ϣ�Ĳ�������y/n����";
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
		cout << "��ѡ��ɾ����ʽ��1.ȫ������ɾ����2.ɾ�������˵���Ϣ��";
		cin >> str;
		if (str == '1' || str == '2')
			break;
		else
			cout << "�������,���������룡" << endl;
	} while (1);
	while (1)
	{
		if (head == NULL)
		{
			cout << "ͨѶ¼Ϊ�գ���" << endl;
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
			cout << "ɾ���ɹ���" << endl;
		}
		else if (str == '2')
		{
			system("cls");
			cout << "��ѡ��ɾ����ʽ��1.��ѧ�Ų���ɾ����2.����������ɾ����";
			cin >> i;
			if (i == 1)
			{
				string t;
				int g = 1;
				cout << "������ѧ��ѧ�ţ�";
				cin >> t;
				while (p1 != NULL)
				{

					if (p1->sno == t && g == 1) {
						cout << "��ѧ����Ϣ���£�" << endl;
						cout << setw(7) << "ѧ��" << setw(11) << "����" << setw(12) << "�绰" << setw(12) << "ѧԺ" << endl;
						cout << p1->sno << "  " << p1->sname << "  " << p1->phone << "  " << p1->collge << endl;
						head1 = p1->next;
						delete p1;
						cout << "ɾ���ɹ���" << endl;
						cout << "-----------------------------------------------------------------" << endl;
						break;
					}
					else if (p1->sno == t) {
						cout << "��ѧ����Ϣ���£�" << endl;
						cout << setw(7) << "ѧ��" << setw(11) << "����" << setw(12) << "�绰" << setw(12) << "ѧԺ" << endl;
						cout << p1->sno << "  " << p1->sname << "  " << p1->phone << "  " << p1->collge << endl;
						p2->next = p1->next;
						delete p1;
						cout << "ɾ���ɹ���" << endl;
						cout << "-----------------------------------------------------------------" << endl;
						break;
					}

					p2 = p1;
					p1 = p1->next;
					g++;
				}
				if (p1 == NULL)
				{
					cout << "���û�����ͨѶ¼�ڣ�" << endl;
				}
			}
			else if (i == 2)
			{
				string t;
				int g = 1;
				cout << "������ѧ��������";
				cin >> t;
				while (p1 != NULL)
				{

					if (p1->sname == t && g == 1) {
						cout << "��ѧ����Ϣ���£�" << endl;
						cout << setw(7) << "ѧ��" << setw(11) << "����" << setw(12) << "�绰" << setw(12) << "ѧԺ" << endl;
						cout << p1->sno << "  " << p1->sname << "  " << p1->phone << "  " << p1->collge << endl;
						head1 = p1->next;
						delete p1;
						cout << "ɾ���ɹ���" << endl;
						cout << "-----------------------------------------------------------------" << endl;
						break;
					}
					else if (p1->sname == t) {
						cout << "��ѧ����Ϣ���£�" << endl;
						cout << setw(7) << "ѧ��" << setw(11) << "����" << setw(12) << "�绰" << setw(12) << "ѧԺ" << endl;
						cout << p1->sno << "  " << p1->sname << "  " << p1->phone << "  " << p1->collge << endl;
						p2->next = p1->next;
						delete p1;
						cout << "ɾ���ɹ���" << endl;
						cout << "-----------------------------------------------------------------" << endl;
						break;
					}

					p2 = p1;
					p1 = p1->next;
					g++;
				}
				if (p1 == NULL)
				{
					cout << "���û�����ͨѶ¼�ڣ�" << endl;
				}
			}
			else
			{
				cout << "����������������룡" << endl;
				continue;
			}
		}
		cout << "��'y'����ִ��ɾ��������������������������˵�" << endl;
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
	temp1 = p1->next;//������ָ��ǵû�����
	p1->next = p2->next;
	p2->next = temp1;
}
void numSort(student* head,int n,int i)
{
	student* p1 = head;
	student* p2 = head;
	for (; p1 != NULL; p1 = p1->next)//������������
	{
		for (p2 = p1->next; p2 != NULL; p2 = p2->next)//ȷ��p1�Ⱥ��涼С
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
		cout << "��ѡ������������1������  2������" << endl;
		cin >> n;
		cout << "��ѡ������ķ�ʽ��1����ѧ������  2������������ 3����ѧԺ����" << endl;
		cin >> i;
		if (head != NULL && head->next != NULL)
		{
			numSort(head, n, i);
			cout << "����ɹ�" << endl;
		}
		else if (head == NULL)
			cout << "ͨѶ¼����ʱû��¼��ѧ����Ϣ" << endl;
		else
			cout << "ͨѶ¼��ֻ¼����һ��ѧ������Ϣ" << endl;
		cout << "---------------------------" << endl;
		cout << "�������˵���'y'" << endl;
		cin >> str;
	}
	return;
}
void myprint()
{
	system("cls");
	cout << "ѧ��ͨѶ¼����ϵͳ���ܲ˵�" << endl;
	cout << "1���½�ͨѶ¼" << endl;
	cout << "2����ʾͨѶ¼" << endl;
	cout << "3����ѯͨѶ¼" << endl;
	cout << "4�����ͨѶ¼" << endl;
	cout << "5���޸�ͨѶ¼" << endl;
	cout << "6��ɾ��ͨѶ¼" << endl;
	cout << "7��ͨѶ¼����" << endl;
	cout << "8���������������˳�ϵͳ" << endl;
	cout << "������ţ�����ִ����Ӧ����" << endl;
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