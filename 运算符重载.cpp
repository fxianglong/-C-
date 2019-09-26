//#include<iostream>
//using namespace std;
//class vector
//{
//	int x, y;
//public:
//	vector(){ }
//	vector(int x1, int y1)
//	{
//		x = x1; y = y1;
//	}
//	friend vector operator+=(vector v1, vector v2)//友元函数方式实现
//	{
//		vector tmp;
//		tmp.x = v1.x + v2.x;
//		tmp.y = v1.y + v2.y;
//		return tmp;
//	}
//	vector operator-=(vector v)//成员函数方式实现
//	{
//		vector tmp;
//		tmp.x = x - v.x;
//		tmp.y = y - v.y;
//		return tmp;
//	}
//	void display(){ cout << "(" << x << "," << y << ")"<<endl; }
//};
//
//void main()
//{
//	vector v1(3, 2), v2(6, 5), v3, v4;
//	v1.display() ;
//	v2.display();
//	v3 = v1 += v2;
//	v4 = v2 -= v1;
//	v3.display();
//	v4.display();
//	v1.display();
//	v2.display();
//	system("pause");
//}
#include<iostream>
#include<string.h>
using namespace std;
class SClass
{
	char* p;
public:
	SClass(char *pn)
	{
		p = new char[strlen(pn) + 1];
		strcpy(p, pn);
	}
	~SClass(){ delete p; }
	SClass operator+(SClass &s)
	{
		delete p;
		p = new char[strlen(s.p) + 1];
		strcpy(p, s.p);
		return *this;
	}
	void disp()
	{
		cout << p << endl;
	}
};

void main()
{
	SClass s1("kjhuygfcgvhuygu uyguf");
	SClass s2("kjhgfcvhbj");
	s1.disp();
	s2.disp();
	s2 = s1;
	s1.disp();
	s2.disp();
}