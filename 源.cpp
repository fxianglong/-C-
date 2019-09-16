////设计一个程序，其中有3个类CBank、BBank和GBank，分别为中国银行类，工商银行类和
////农业银行类。每个类都都包含一个私有数据balance用于存放储户在该行的存款数，另有
////一个友元函数total用于计算储户在这三家银行中的存款数。
//#include<iostream>
//using namespace std;
//class BBank;
//class GBank;
//class CBank
//{
//	int balance;
//public:
//	CBank()
//	{
//		balance = 0;
//	}
//	CBank(int b)
//	{
//		balance = b;
//	}
//	void getbalance()
//	{
//		cout << "输入中国银行存款数：";
//		cin >> balance;
//	}
//	void disp()
//	{
//		cout << "中国银行存款数：" << balance << endl;
//	}
//	friend void total(CBank, BBank, GBank);
//};
//
//class BBank
//{
//	int balance;
//public:
//	BBank()
//	{
//		balance = 0;
//	}
//	BBank(int b)
//	{
//		balance = b;
//	}
//	void getbalance()
//	{
//		cout << "请输入工商银行存款数：";
//		cin >> balance;
//	}
//	void disp()
//	{
//		cout << "工商银行存款数为：" << balance<<endl;
//	}
//	friend void total(CBank, BBank, GBank);
//};
//class GBank
//{
//	int balance;
//public:
//	GBank()
//	{
//		balance = 0;
//	}
//	GBank(int b)
//	{
//		balance = b;
//	}
//	void getbalance()
//	{
//		cout << "请输入农业银行存款数：";
//		cin >> balance;
//	}
//	void disp()
//	{
//		cout << "农业银行存款数为：" << balance << endl;
//	}
//	friend void total(CBank, BBank, GBank);
//};
//void total(CBank A, BBank B, GBank C)
//{
//	cout << "总存款数：" << A.balance + B.balance + C.balance << endl;
//}
//void main()
//{
//	CBank X;
//	BBank Y;
//	GBank Z;
//	X.disp();
//	Y.disp();
//	Z.disp();
//	X.getbalance();
//	Y.getbalance();
//	Z.getbalance();
//	total(X, Y, Z);
//	system("pause");
//}
////设计一个整数数序类NumSet,用于输入一序列整数，其中的元素都是递增序列的，并且不包含相同的元素
////另外设计一个友元函数，返回两个这样的整数数序的合并结果，要求合并结果也是一个有序序列且不包含
////重复的元素。
//#include<iostream>
//using namespace std;
//const int MAX = 20;
//class NumSet
//{
//	int count;
//	int a[MAX];
//public:
//	NumSet()
//	{
//		count = 0;
//	}
//	void addnum(int n)
//	{
//		int i = 0, j;
//		while (i < count && n >= a[i]) i++;
//		if (n == a[i - 1]) return;
//		for (j = count; j >= i; j--)
//			a[j + 1] = a[j];
//		a[i] = n;
//		count++;
//	}
//	void disp()
//	{
//		for (int i = 0; i < count; i++)
//			cout << a[i]<<" ";
//		cout << endl;
//	}
//	int geti(int i)
//	{
//		return a[i];
//	}
//	friend NumSet unionset(NumSet s1, NumSet s2)
//	{
//		NumSet s;
//		int i = 0, j = 0;
//		while (i < s1.count&&j<s2.count)
//		{
//			int v1 = s1.geti(i);
//			int v2 = s2.geti(j);
//			if (v1 < v2)
//			{
//				s.addnum(v1);
//				i++;
//			}
//			else if (v1>v2)
//			{
//				s.addnum(v2);
//				j++;
//			}
//			else {
//				s.addnum(v1);
//				i++; j++;
//			}
//		}
//		while (i < s1.count)
//		{
//			int v1 = s1.geti(i);
//			s.addnum(v1);
//			i++;
//		}
//		while (j < s2.count)
//		{
//			int v2 = s2.geti(j);
//			s.addnum(v2);
//			j++;
//		}
//		return s;
//	}
//};
//void main()
//{
//	NumSet set1, set2, set3;
//	set1.addnum(1);
//	set1.addnum(9);
//	set1.addnum(5);
//	set1.addnum(9);
//	cout << "数序一：";
//	set1.disp();
//	set2.addnum(8);
//	set2.addnum(2);
//	set2.addnum(6);
//	set2.addnum(5);
//	cout << "数序二：";
//	set2.disp();
//	set3 = unionset(set1, set2);
//	cout << "合并结果：";
//	set3.disp();
//	system("pause");
//}
//
