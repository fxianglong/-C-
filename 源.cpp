//#include<iostream>
//#include<string.h>
//using namespace std;
//const int MAX = 256;
//class MyClass
//{
//	char name[MAX];
//public:
//	MyClass(){}
//	MyClass(char *str)
//	{
//		strcpy(name, str);
//	}
//	~MyClass(){}
//	MyClass operator+(const MyClass &);
//	void display(){ cout << name << endl; }
//};
//MyClass MyClass::operator+(const MyClass &s)
//{
//	char str[MAX];
//	strcpy(str, name);
//	strcat(str, s.name);
//	return MyClass(str);
//}
//void main()
//{
//	char *str;
//	str = new char[MAX];
//	MyClass s1("Visual C++");
//	MyClass s2("6.0");
//	cout << "s1="; s1.display();
//	cout << "s2="; s2.display();
//	MyClass s3 = s1 + s2;
//	cout << "s3="; s3.display();
//	cout << "s1="; s1.display();
//	cout << "s2="; s2.display();
//	delete str;
//	system("pause");
//}
////设计一个日期类Date,包括年、月、日等私有数据成员。要求实现从计算机时钟获取当前日期（默认构造
////函数）输出日期和两日期相差的天数等功能
//#include<iostream>
//#include<time.h>
//using namespace std;
//int day_tab[2][12] = { { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },
//					 { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 } };
//class Date
//{
//	int year;
//	int month;
//	int day;
//public:
//	Date()//默认构造函数：获取当前日期
//	{
//		char tmpbuf[10];
//		_strdate(tmpbuf); cout << _strdate(tmpbuf);
//		month = (tmpbuf[0] - '0') * 10 + (tmpbuf[1]-'0');
//		day = (tmpbuf[3] - '0')*10 + (tmpbuf[4] - '0');
//		year = 2000 + (tmpbuf[6] - '0') * 10 + (tmpbuf[7] - '0');
//	}
//	Date(int y1, int m1, int d1)//构造函数
//	{
//		year = y1;
//		day = d1;
//		month = m1;
//	}
//	void display()
//	{
//		cout << year << "." << month << "." << day << endl;
//	}
//	int operator-(Date d1)
//	{
//		return (dton(*this) - dton(d1));
//	}
//	int isleap(int y)
//	{
//		return ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0);
//	}
//	int dton(Date &d)
//	{
//		int y1, m1, days = 0;
//		for (y1 = 1; y1 <= d.year; y1++)
//			if (isleap(y1))
//				days += 366;
//			else
//			{
//				days += 365;
//			}
//		for (m1 = 0; m1 < d.month - 1; m1++)
//				if (isleap(d.year))
//					days += day_tab[1][m1];
//				else
//				{
//					days += day_tab[1][m1];
//				}
//		days += d.day;
//		return days;
//	}
//
//};
//
//void main()
//{
//	Date odate(2018, 7, 25), cdate;
//	cout << "以前日期:"; odate.display();
//	cout << "现在日期:"; cdate.display();
//	cout << "相距天数:" << (cdate - odate) << endl;
//	system("pause");
//}
//#include<iostream>
//using namespace std;
//class vector
//{
//	int x, y;
//public:
//	vector(){ };//默认构造函数
//	vector(int x1, int y1)//重载函数
//	{
//		x = x1;y=y1;
//	}
//	vector operator+(vector v)
//	{
//		vector tmp;
//		tmp.x = x + v.x;
//		tmp.y = y + v.y;
//		return tmp;
//	}
//	vector operator-(vector v)
//	{
//		vector tmp;
//		tmp.x = x - v.x;
//		tmp.y = y - v.y;
//		return tmp;
//	}
//	void display()
//	{
//		cout << "(" << x << "," << y << ")";
//	}
//};
//void main()
//{
//	vector v1(2, 3), v2(3, 5), v3, v4;
//	cout << "v1:"; v1.display();
//	cout << "v2:"; v2.display();
//	v3 = v1 + v2; v4 = v1 - v2;
//	cout << "v3:"; v3.display();
//	cout << "v4:"; v4.display();
//	system("pause");
//}

//#include<iostream>
//using namespace std;
//class vector
//{
//	int x, y;
//public:
//	vector(){ };//默认构造函数
//	vector(int x1, int y1)//重载函数
//	{
//		x = x1; y = y1;
//	}
//	friend vector operator+(vector v, vector v1)
//	{
//		vector tmp;
//		tmp.x = v1.x + v.x;
//		tmp.y = v1.y + v.y;
//		return tmp;
//	}
//	friend vector operator-(vector v, vector v1)
//	{
//		vector tmp;
//		tmp.x = v1.x - v.x;
//		tmp.y = v1.y - v.y;
//		return tmp;
//	}
//	void display()
//	{
//		cout << "(" << x << "," << y << ")";
//	}
//};
//void main()
//{
//	vector v1(2, 3), v2(3, 5), v3, v4;
//	cout << "v1:"; v1.display();
//	cout << "v2:"; v2.display();
//	v3 = v1 + v2; v4 = v1 - v2;
//	cout << "v3:"; v3.display();
//	cout << "v4:"; v4.display();
//	system("pause");
//}

//设计一个日期类Date1,包括年月日等私有数据成员，要求实现两个日期的大于、小于和等于比较。
#include<iostream>
using namespace std;
class Date1
{
	int year, month, day;
public:
	Date1(){ }//默认构造函数
	Date1(int y1, int m1, int d1)//重载构造函数
	{
		year = y1; month = m1; day = d1;
	}
	Date1(const Date1 &d1)//复制构造函数
	{
		year = d1.year; month = d1.month; day = d1.day;
	}
	void display()
	{
		cout << year << "." << month << "." << day << endl;
	}
	bool operator<(const Date1 d1)
	{
		if ((year < d1.year) || (year == d1.year&&month < d1.month)
			|| (year == d1.year&&month == d1.month&&day < d1.day))
			return true;
		else return false;
	}
	bool operator>(const Date1 d1)
	{
		if ((year > d1.year) || (year == d1.year&&month > d1.month)
			|| (year == d1.year&&month == d1.month&&day > d1.day))
			return true;
		else return false;
	}
	bool operator==(const Date1 d1)
	{
		if  (year == d1.year&&month == d1.month&&day == d1.day)
			return true;
		else return false;
	}
};

void main()
{
	Date1 d1(2019, 9, 8), d2(2019, 9, 25), d3(d1);
	cout << "d1:"; d1.display();
	cout << "d2:"; d2.display();
	cout << "d3:"; d3.display();
	cout << "d1<d2:" << (d1 < d2) << endl;
	cout << "d1>d2:" << (d1 > d2) << endl;
	cout << "d1==d2:" << (d1 == d2) << endl;
	cout << "d1==d3:" << (d1 == d3) << endl;
	system("pause");
}