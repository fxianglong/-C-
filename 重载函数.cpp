////����һ��Assoc�࣬������һ�������ʾÿ�����ʵ����������ÿ�����ʳ��������ֵĴ�����
////��Ӧ����õ��ʱ�����˶���һ���ṹ����������һ�������������[ ]����Ա��������������
////ĳ�������Ѿ����ֵĴ���������ֵ��һ�����ã������ڸı�ֵ����ÿ���ҵ�һ�ֵ��ʺ󷵻��Գ�
////�ֵĴ������������߽���++���㣬����ڷ���ֵ++����ӵ���ÿ�ҵ�һ�����ʱ㽫���ĳ��ִ���
////+1��Ŀ�ġ�
//#include<iostream>
//#include<string.h>
//using namespace std;
//struct Pair//˵���ṹ������
//{
//	char *name;//����
//	int num;//���ֵĴ���
//};
//class Assoc
//{
//	struct Pair *vec;//ָ��ṹ�������ָ��
//	int size;//�����ܵĵ�Ԫ����
//	int used;//��ʹ�õĵ�Ԫ����
//public:
//	Assoc(int m)//���캯��
//	{
//		size = (m > 16) ? m : 16;//size���ٴ���16
//		used = 0;
//		vec = new Pair[size];//����ռ�
//	}
//	int & operator [] (char *);
//	void disp();
//};
//int & Assoc::operator[](char *p)//���ص���pp->num������
//{
//	struct Pair *pp;
//	for (pp = vec; pp < vec + used; pp++)//�����еĵ����в���
//	if (strcmp(p, pp->name) == 0)//���ҵ����ش���
//		return pp->num;
//	pp = &vec[used++];//�����еĵ�����δ�ҵ�����ʹ�õĵ�Ԫ����+1
//	pp->name = new char[strlen(p) + 1];//����һ����Ԫ�ռ�
//	strcpy(pp->name, p);
//	pp->num = 0;
//	return pp->num;//����0
//}
//void Assoc::disp()
//{
//	cout << "���ʳ��ִ���ͳ�ƣ�" << endl;
//	for (int i = 0; i < used; i++)
//	{
//		cout << " " << vec[i].name << ":" << vec[i].num << "��" << endl;
//	}
//}
//void main()
//{
//	char buf[16];
//	Assoc vecc(20);//����20����Ԫ��ŵ���
//	int k = 10;
//	cout << "������" << k << "������" << endl;
//	for (int i = 0; i < k; i++)
//	{
//		cout << "��" << i + 1 << "�����ʣ�";
//		cin >> buf;
//		vecc[buf]++;//���á�[]���������õ��ʳ��ִ�����1
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
//	void *operator new(size_t size);//����һ���СΪsize���ڴ�
//	void *operator new(size_t size, char tag);//����һ���СΪsize���ڴ棬���ַ�tag��ֵ
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

////���һ����������ʵ������ҵ���Ԫ��ת��
//#include<iostream>
//using namespace std;
//class RMB
//{
//	double rmb;//�����
//	double rate;//����
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
//		cout << "�����:"; cin >> rmb;
//		cout << "����"; cin >> rate;
//	}
//	void disp()
//	{
//		cout << "�����" << rmb << "Ԫ������Ϊ" << rate << ":1)";
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
//	cout << "Ԫ<=>" << m1 << "��Ԫ" << endl;
//	m2 = double(b);
//	b.disp();
//	cout << "Ԫ<=>" << m2 << "��Ԫ" << endl;
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