//#include<iostream>
//using namespace std;
//template <class T>
//class Array
//{
//	int size;
//	T *aptr;
//public:
//	Array(int slots = 1)
//	{
//		size = slots;
//		aptr = new T[slots];
//	}
//	void fill_Array();
//	void disp_Array();
//	~Array()
//	{
//		delete[] aptr;
//	}
//};
//template <class T>
//void Array<T>::fill_Array()
//{
//	cout << "(���룺" << size << "������)" << endl;
//	for (int i = 0; i < size; i++)
//	{
//		cout << "��" << i + 1 << "������:";
//		cin >> aptr[i];
//	}
//}
//template <class T>
//void Array<T>::disp_Array()
//{
//	for (int i = 0; i < size; i++)
//		cout << aptr[i] << " ";
//	cout << endl;
//}
//void main()
//{
//	Array<char> ac(5);//Array<char>Ϊ��ģ�壬ac(5)����ģ����Ķ���
//	cout << "���һ���ַ�����";
//	ac.fill_Array();
//	cout << "����������ǣ�";
//	ac.disp_Array();
//	Array<double> ad(4);
//	cout << "���һ���ַ�����";
//	ad.fill_Array();
//	cout << "����������ǣ�";
//	ad.disp_Array();
//	system("pause");
//}


//#include<iostream>
//using namespace std;
//template <class T>
//class A
//{
//	T m;
//	static T n;
//public:
//	A(T a):m(a) { n += m; }
//	void disp(){ cout << "m=" << m << ",n=" << n << endl; }
//};
//template <class T>
//T A<T>::n = 0;
//void main()
//{
//	A<int> a(2), b(3);
//	a.disp();
//	b.disp();
//	A<double> c(1.2), d(4.6);
//	c.disp();
//	d.disp();
//	system("pause");
//}

#include<iostream>
using namespace std;
template<class T,int size=10>
class A
{
	T *p;
public:
	A(T *q)
	{
		p = new T[size];
		for (int i = 0; i < size; i++)
			p[i] = *q++;
	}
	void disp()
	{
		int i; 
		for (int i = 0; i < size; i++)
			cout << p[i];
		cout << endl;
	}
};
void main()
{
	int a[] = { 1, 2, 4, 6, 8, 9, 5, 3 };
	char *b = "kiuygtrmjnhg";
	A<int, 5> s1(a);
	cout << "a:"; s1.disp();
	A<char> s2(b);
	cout << "b:"; s2.disp();
	system("pause");
}