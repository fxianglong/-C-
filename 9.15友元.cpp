////��дһ������������Ԫ�����ķ�ʽ����һ���㵽һ��ֱ�ߵľ���
//#include<iostream>
//#include<math.h>
//using namespace std;
//class Point
//{
//public:
//	Point(int x1, int y1){ x = x1; y = y1; }
//	int x, y;
//};
//class Line//����
//{
//	int a, b, c;
//public:
//	Line(int a1, int b1, int c1){ a = a1; b = b1; c = c1; }
//	friend double dist(Line l, Point p)
//	{
//		double d;
//		d = abs(l.a*p.x + l.b*p.y + l.c) / (sqrt(l.a*l.a + l.b*l.b));
//		return d;
//	}
//};
//void main()
//{
//	Point p(10, 10);
//	Line l(2, 4, -3);
//	cout << "d=" << dist(l, p) << endl;
//	system("pause");
//}
////���һ��������Stud������ѧ���������ɼ����������һ����Ԫ��������ɼ���Ӧ�ĵȼ�
//#include<iostream>
//#include<string.h>
//using namespace std;
//class Stud
//{
//	char name[10];
//	int deg;
//	char level[7];
//public:
//	Stud(char na[], int d)
//	{
//		strcpy(name, na);
//		deg = d;
//	}
//	char *getname() { return name; }
//	friend void trans(Stud &s)
//	{
//		if (s.deg >= 90)
//			strcpy(s.level, "��");
//		else if (s.deg >= 80)
//			strcpy(s.level, "��");
//		else if (s.deg >= 70)
//			strcpy(s.level, "��");
//		else if (s.deg >= 60)
//			strcpy(s.level, "����");
//		else strcpy(s.level, "������");
//	}
//	void disp()
//	{
//		cout << " " << name << "," << deg << "," << level << endl;
//	}
//};
//void main()
//{
//	Stud st[] = { Stud("����", 78), Stud("����", 87), Stud("��ΰ",57), Stud("��Ȩ", 99) };
//	cout << "��������" << endl;
//	for (int i = 0; i < 4; i++)
//	{
//		trans(st[i]);
//		st[i].disp();
//	}
//	system("pause");
//}
////��дһ������ʵ��ջ��ѹ��͵����������������ࣺһ���ǽ����Node,���������ֵdata
////��ָ����һ���ڵ�next����һ������ջStack��������ͷָ��top��
//#include<iostream>
//using namespace std;
//class Stack;
//class Node
//{
//	int data;
//	Node *next;
//public:
//	Node(int d)
//	{
//		data = d;
//		next = NULL;
//	}
//	friend class Stack;
//};
//
//class Stack
//{
//	Node *top;
//public:
//	Stack()
//	{
//		top = NULL;
//	}
//	void push(int d)
//	{
//		Node *p = new Node(d);
//		if (top != NULL)
//			p->next = top;
//			top = p;
//	}
//	int pop(int &c)
//	{
//		Node *p = top;
//		if (top != NULL)
//		{
//			c = p->data;
//			top = top->next;
//			delete p;
//			return 1;
//		}
//		else return 0;
//	}
//};
//
//void main()
//{
//	Stack s;
//	int c;
//	s.push(1);
//	s.push(2);
//	s.push(3);
//	s.push(4);
//	cout << "��ջ����";
//	while (s.pop(c))
//		cout << c << " ";
//	cout << endl;
//	system("pause");
//}
