////���һ������������3����CBank��BBank��GBank���ֱ�Ϊ�й������࣬�����������
////ũҵ�����ࡣÿ���඼������һ��˽������balance���ڴ�Ŵ����ڸ��еĴ����������
////һ����Ԫ����total���ڼ��㴢���������������еĴ������
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
//		cout << "�����й����д������";
//		cin >> balance;
//	}
//	void disp()
//	{
//		cout << "�й����д������" << balance << endl;
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
//		cout << "�����빤�����д������";
//		cin >> balance;
//	}
//	void disp()
//	{
//		cout << "�������д����Ϊ��" << balance<<endl;
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
//		cout << "������ũҵ���д������";
//		cin >> balance;
//	}
//	void disp()
//	{
//		cout << "ũҵ���д����Ϊ��" << balance << endl;
//	}
//	friend void total(CBank, BBank, GBank);
//};
//void total(CBank A, BBank B, GBank C)
//{
//	cout << "�ܴ������" << A.balance + B.balance + C.balance << endl;
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
////���һ������������NumSet,��������һ�������������е�Ԫ�ض��ǵ������еģ����Ҳ�������ͬ��Ԫ��
////�������һ����Ԫ����������������������������ĺϲ������Ҫ��ϲ����Ҳ��һ�����������Ҳ�����
////�ظ���Ԫ�ء�
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
//	cout << "����һ��";
//	set1.disp();
//	set2.addnum(8);
//	set2.addnum(2);
//	set2.addnum(6);
//	set2.addnum(5);
//	cout << "�������";
//	set2.disp();
//	set3 = unionset(set1, set2);
//	cout << "�ϲ������";
//	set3.disp();
//	system("pause");
//}
//
