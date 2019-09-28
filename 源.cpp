////编写一个程序，声明一个点类Point，实现点的偏移、“==”“！=”“+=”“-=”“+”“-”
////和输出等运算。若用若干数据进行测试
//#include<iostream>
//using namespace std;
//class Point
//{
//	int x, y;
//public:
//	Point(){ x = y = 0; }
//	Point(int i, int j)
//	{
//		x = i; y = j;
//	}
//	Point(Point &);
//	~Point(){}
//	void offset(int, int);
//	bool operator ==(Point);
//	bool operator !=(Point);
//	void operator +=(Point);
//	void operator -=(Point);
//	Point operator +(Point);
//	Point operator -(Point);
//	int getx() { return x; }
//	int gety() { return y; }
//	void disp()
//	{
//		cout << "(" << x << "," << y << ")";
//	}
//};
//
//Point::Point(Point &p)
//{
//	x = p.x; y = p.y;
//}
//void Point::offset(int i, int j)
//{
//	x += i; y += j;
//}
//bool Point::operator==(Point p)
//{
//	if (x == p.getx() && y == p.gety())
//		return 1;
//	else return 0;
//}
//bool Point::operator!=(Point p)
//{
//	if (x != p.getx() || y != p.gety())
//		return 1;
//	else return 0;
//}
//void Point::operator+=(Point p)
//{
//	x += p.getx(); y += p.gety();
//}
//void Point::operator-=(Point p)
//{
//	x -= p.getx();
//	y -= p.gety();
//}
//Point Point::operator+(Point p)
//{
//	this->x += p.x;
//	this->y += p.y;
//	return *this;
//}
//Point Point::operator -(Point p)
//{
//	this->x -= p.x;
//	this->y -= p.y;
//	return *this;
//}
//void main()
//{
//	Point p1(2, 3), p2(3, 4), p3(p2);
//	cout << "1:"; p3.disp();
//	p3.offset(10, 10);
//	cout << "2:"; p3.disp();
//	cout << "3:" << (p2 == p3) << endl;
//	cout << "4:" << (p2 != p3) << endl;
//	p3 += p1;
//	cout << "5:"; p3.disp();
//	p3 -= p2;
//	cout << "6:"; p3.disp();
//	p3 = p3 + p1;
//	cout << "7:"; p3.disp();
//	p3 = p1 - p2;
//	cout << "8:"; p3.disp();
//	system("pause");
//}
