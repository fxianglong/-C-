////��дһ���������һ������Point��һ��������Distance��
////���ߵ����ݳ�Ա������Point�����������p1��p2����������������ľ��롣
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
//	cout << "Point���ƹ��캯��������" << endl;
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
//	cout << "Distance���캯��������" << endl;
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
//	cout << "��";
//	p2.disp();
//	cout << "������ľ���Ϊ��" << d.GetDis() << endl;
//	system("Pause");
//}
////��дһ�����������ɽ�ʦ���о�����ÿ���о������ҽ���һ��ָ����ʦ��ÿ��ָ����ʦ
////���Դ��������о���������һ����ʦ������о����������飬ͨ����غ���Ϊÿ���о���
////ָ��ָ����ʦ�������������о�����������Ϣ�����н�ʦ��������Ϣ
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
//	void Tdispall();//���һ����ʦ��������Ϣ
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
//		cout << "ѧ�ţ�" << sno << "������" << sname << endl;
//	}
//	void Gdispall()
//	{
//		cout << "ѧ�ţ�" << sno << "������" << sname << "��ʦ��";
//		t.Tdisp();
//	}
//};
//
//void Teacher::Tdispall()
//{
//	int i;
//	cout << " " << tname << "(" << tno << "," << prof << ")" << endl;
//	cout << " ָ���о���������" << num << endl;
//	for (i = 0; i < num; i++)
//		sp[i]->Gdisp();
//}
//void main()
//{
//	int i;
//	Teacher t[3] = { Teacher(101, "����", "����"), Teacher(102, "����", "������"), 
//		Teacher(103, "�½���", "����") };
//	Graduate g[5] = { Graduate(201, "����"), Graduate(202, "����"), Graduate(203, "����"),
//		Graduate(204, "����"), Graduate(205, "����") };
//	g[0].setteacher(t[0]);
//	g[1].setteacher(t[1]);
//	g[3].setteacher(t[2]);
//	g[4].setteacher(t[1]);
//	g[2].setteacher(t[0]);
//	cout << "�о����б�" << endl;
//	for (i = 0; i < 5; i++)
//		g[i].Gdispall();
//	cout << "��ʦ�б�" << endl;
//	for (i = 0; i < 3; i++)
//		t[i].Tdispall();
//	system("pause");
//}