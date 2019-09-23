#include<iostream>
using namespace std;
//class MyClass1
//{
//	int n;
//public:
//	MyClass1(){}
//	MyClass1(int m){ n = m; }
//	MyClass1 operator +(MyClass1 s)
//	{
//		MyClass1 tmp;
//		tmp.n = n + s.n;
//		return tmp;
//	}
//	void disp()
//	{
//		cout << "n=" << n << endl;
//	}
//};
//
//void main()
//{
//	MyClass1 s1(10), s2(20), s3;
//	cout << "s1:"; s1.disp();
//	cout << "s2:"; s2.disp();
//	s3 = s1 + s2;
//	cout << "s3:"; s3.disp();
//	system("pause");
//}
//class MyClass
//{
//	int n;
//public:
//	MyClass(int i) { n = i; }
//	int operator ++() { n++; return n; }	//++ÔËËã·ûÖØÔØ
//	void display()
//	{
//		cout << "n=" << n << endl;
//	}
//};
//
//void main()
//{
//	MyClass A(5);
//	A++;
//	A.display();
//	system("pause");
//}
//class MyClass2
//{
//	int n;
//public:
//	MyClass2(int i){ n = i; }
//	int operator ++(){ n++; return n; }
//	int operator ++(int){ n += 2; return n; }
//	void display()
//	{
//		cout << "n=" << n << endl;
//	}
//};
//
//void main()
//{
//	MyClass2 A(5), B(5);
//	A++;
//	++B;
//	A.display();
//	B.display();
//	system("pause");
//}
class PClass
{
	int n; double m;
public:
	PClass *operator->()
	{
		return this;
	}
	void setvalue(int n1, double m1)
	{
		n = n1; m = m1;
	}
	void disp()
	{
		cout << "n=" << n << ",m=" << m<<endl;
	}
};

void main()
{
	PClass s;
	s->setvalue(10, 20.5);
	s->disp();
	s.setvalue(20, 89.8);
	s.disp();
	system("pause");
}