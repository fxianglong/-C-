////编写一个程序，设计一个点类Point和一个距离类Distance，
////后者的数据成员包括了Point类的两个对象p1和p2，并计算这两个点的距离。
//#include<iostream>
//#include<math.h>
//using namespace std;
//class Point
//{
//private:
//	int X, Y;
//public:
//	Point(int x = 0, int y = 0) { X = x; Y = y; }
//	Point(Point &p);
//	int GetX() { return X; }
//	int GetY() { return Y; }
//	void disp() { cout << "(" << X << "," << Y << ")"; }
//};
//Point::Point(Point &p)
//{
//	X = p.X;
//	Y = p.Y;
//	cout << "Point复制构造函数被调用" << endl;
//}
//
//class Distance
//{
//private:
//	Point p1, p2;
//	double dist;
//public:
//	Distance(Point xp1, Point xp2);
//	double GetDis(){ return dist; }
//};
//
//Distance::Distance(Point xp1, Point xp2) :p1(xp1), p2(xp2)
//{
//	cout << "Distance构造函数被调用" << endl;
//	double x = double(p1.GetX() - p2.GetX());
//	double y = double(p1.GetY() - p2.GetY());
//	dist = sqrt(x*x + y*y);
//}
//
//void main()
//{
//	Point p1(1, 2), p2(8, 6);
//	Distance d(p1, p2);
//	p1.disp();
//	cout << "和";
//	p2.disp();
//	cout << "两个点的距离为：" << d.GetDis() << endl;
//	system("Pause");
//}
////编写一个程序，有若干教师和研究生，每个研究生有且仅有一名指导教师，每个指导教师
////可以带若干名研究生，建立一个教师数组和研究生对象数组，通过相关函数为每个研究生
////指定指导老师，最后输出所有研究生的完整信息和所有教师的完整信息
//#include<iostream>
//#include<string.h>
//using namespace std;
//class Graduate;
//const int Max = 6;
//class Teacher
//{
//	int tno;
//	char tname[10];
//	char prof[8];
//	int num;
//	Graduate *sp[Max];
//public:
//	Teacher() {};
//	Teacher(int n, char na[], char pr[])
//	{
//		tno = n;
//		strcpy(tname,na);
//		strcpy(prof, pr);
//		num = 0;
//	}
//	void addgraduate(Graduate *gp)
//	{
//		sp[num] = gp;
//		num++;
//	}
//	void Tdisp()
//	{
//		cout << tname << "(" << tno << "," << prof << ")" << endl;
//	}
//	void Tdispall();//输出一个教师的完整信息
//};
//
//class Graduate
//{
//	int sno;
//	char sname[10];
//	Teacher t;
//public:
//	Graduate(int n, char na[])
//	{
//		sno = n;
//		strcpy(sname, na);
//	}
//	void setteacher(Teacher &t1)
//	{
//		t1.addgraduate(this);
//		t = t1;
//	}
//	void Gdisp()
//	{
//		cout << "学号：" << sno << "姓名：" << sname << endl;
//	}
//	void Gdispall()
//	{
//		cout << "学号：" << sno << "姓名：" << sname << "导师：";
//		t.Tdisp();
//	}
//};
//
//void Teacher::Tdispall()
//{
//	int i;
//	cout << " " << tname << "(" << tno << "," << prof << ")" << endl;
//	cout << " 指导研究生人数：" << num << endl;
//	for (i = 0; i < num; i++)
//		sp[i]->Gdisp();
//}
//void main()
//{
//	int i;
//	Teacher t[3] = { Teacher(101, "王贺", "教授"), Teacher(102, "陈粒", "副教授"), 
//		Teacher(103, "陈建华", "教授") };
//	Graduate g[5] = { Graduate(201, "张三"), Graduate(202, "李四"), Graduate(203, "王五"),
//		Graduate(204, "赵六"), Graduate(205, "刘琦") };
//	g[0].setteacher(t[0]);
//	g[1].setteacher(t[1]);
//	g[3].setteacher(t[2]);
//	g[4].setteacher(t[1]);
//	g[2].setteacher(t[0]);
//	cout << "研究生列表" << endl;
//	for (i = 0; i < 5; i++)
//		g[i].Gdispall();
//	cout << "教师列表" << endl;
//	for (i = 0; i < 3; i++)
//		t[i].Tdispall();
//	system("pause");
//}