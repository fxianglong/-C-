////设置一个Assoc类，其中用一个数组表示每个单词的情况，而且每个单词除了他出现的次数，
////还应保存该单词本身，因此定义一个结构。该类中有一个重载运算符“[ ]”成员函数，用来返回
////某个单词已经出现的次数，返回值是一个引用，可用于改变值。在每查找到一种单词后返回以出
////现的次数在运算符后边进行++运算，相对于返回值++，间接地起到每找到一个单词便将它的出现次数
////+1的目的。
//#include<iostream>
//#include<string.h>
//using namespace std;
//struct Pair//说明结构体类型
//{
//	char *name;//单词
//	int num;//出现的次数
//};
//class Assoc
//{
//	struct Pair *vec;//指向结构体变量的指针
//	int size;//分配总的单元个数
//	int used;//已使用的单元个数
//public:
//	Assoc(int m)//构造函数
//	{
//		size = (m > 16) ? m : 16;//size至少大于16
//		used = 0;
//		vec = new Pair[size];//分配空间
//	}
//	int & operator [] (char *);
//	void disp();
//};
//int & Assoc::operator[](char *p)//返回的是pp->num的引用
//{
//	struct Pair *pp;
//	for (pp = vec; pp < vec + used; pp++)//在已有的单词中查找
//	if (strcmp(p, pp->name) == 0)//若找到返回次数
//		return pp->num;
//	pp = &vec[used++];//在已有的单词中未找到，则使用的单元个数+1
//	pp->name = new char[strlen(p) + 1];//分配一个单元空间
//	strcpy(pp->name, p);
//	pp->num = 0;
//	return pp->num;//返回0
//}
//void Assoc::disp()
//{
//	cout << "单词出现次数统计：" << endl;
//	for (int i = 0; i < used; i++)
//	{
//		cout << " " << vec[i].name << ":" << vec[i].num << "次" << endl;
//	}
//}
//void main()
//{
//	char buf[16];
//	Assoc vecc(20);//设置20个单元存放单词
//	int k = 10;
//	cout << "请输入" << k << "个单词" << endl;
//	for (int i = 0; i < k; i++)
//	{
//		cout << "第" << i + 1 << "个单词：";
//		cin >> buf;
//		vecc[buf]++;//调用“[]”，并将该单词出现次数增1
//	}
//	vecc.disp();
//	system("pause");
//}


//#include<iostream>
//#include<stddef.h>
//using namespace std;
//class MyClass
//{
//public:
//	void *operator new(size_t size);//分配一块大小为size的内存
//	void *operator new(size_t size, char tag);//分配一块大小为size的内存，用字符tag赋值
//	void operator delete(void *p);
//};
//void *MyClass::operator new(size_t size)
//{
//	cout << "new1 operator" << endl;
//	char *s = new char[size];
//	*s = 'a';
//	return s;
//}
//void *MyClass::operator new(size_t size,char tag)
//{
//	cout << "new2 operator" << endl;
//	char *s = new char[size];
//	*s = tag;
//	return s;
//}
//void MyClass::operator delete(void *p)
//{
//	cout << "delete operator" << endl;
//	char *s = (char*)p;
//	delete[]s;
//}
//void main()
//{
//	MyClass *s1 = new MyClass;
//	delete s1;
//	MyClass *s2 = new('B') MyClass;
//	delete s2;
//	system("pause");
//}

////设计一个程序，用于实现人民币到美元的转换
//#include<iostream>
//using namespace std;
//class RMB
//{
//	double rmb;//人民币
//	double rate;//汇率
//public:
//	RMB(){}
//	RMB(double x, double y)
//	{
//		rmb = x;
//		rate = y;
//	}
//	operator double()
//	{
//		return (rmb / rate);
//	}
//	void satvalue()
//	{
//		cout << "人民币:"; cin >> rmb;
//		cout << "汇率"; cin >> rate;
//	}
//	void disp()
//	{
//		cout << "人民币" << rmb << "元（汇率为" << rate << ":1)";
//	}
//};
//
//void main()
//{
//	RMB a, b(1000, 7.72);
//	double m1, m2;
//	a.satvalue();
//	m1 = double(a);
//	a.disp();
//	cout << "元<=>" << m1 << "美元" << endl;
//	m2 = double(b);
//	b.disp();
//	cout << "元<=>" << m2 << "美元" << endl;
//	system("pause");
//}

#include<iostream>
using namespace std;
class PClass
{
public:
	double operator()(double x, double y) const;
	double operator()(double x) const;
};

double PClass::operator()(double x, double y)const
{
	if (x < y) return (y);
	else return (x);
}
double PClass::operator()(double x) const
{
	if (x < 0) return (-x);
	else return (x);
}
void main()
{
	PClass fun;
	cout << fun(1.2, 2.3) << endl;
	cout << fun(-6) << endl;
	system("pause");
}