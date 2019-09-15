////编写一个函数，以友元函数的方式计算一个点到一条直线的距离
//#include<iostream>
//#include<math.h>
//using namespace std;
//class Point
//{
//public:
//	Point(int x1, int y1){ x = x1; y = y1; }
//	int x, y;
//};
//class Line//线类
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
////设计一个函数类Stud，包括学生姓名、成绩，其中设计一个友元函数输出成绩相应的等级
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
//			strcpy(s.level, "优");
//		else if (s.deg >= 80)
//			strcpy(s.level, "良");
//		else if (s.deg >= 70)
//			strcpy(s.level, "中");
//		else if (s.deg >= 60)
//			strcpy(s.level, "及格");
//		else strcpy(s.level, "不及格");
//	}
//	void disp()
//	{
//		cout << " " << name << "," << deg << "," << level << endl;
//	}
//};
//void main()
//{
//	Stud st[] = { Stud("王华", 78), Stud("李明", 87), Stud("张伟",57), Stud("孙权", 99) };
//	cout << "输出结果：" << endl;
//	for (int i = 0; i < 4; i++)
//	{
//		trans(st[i]);
//		st[i].disp();
//	}
//	system("pause");
//}
////编写一个程序，实现栈的压入和弹出。其中有两个类：一个是结点类Node,它包含结点值data
////和指向下一个节点next，另一个类是栈Stack，它包含头指针top。
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
//	cout << "出栈次序：";
//	while (s.pop(c))
//		cout << c << " ";
//	cout << endl;
//	system("pause");
//}
