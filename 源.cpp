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
//	cout << "(输入：" << size << "个数据)" << endl;
//	for (int i = 0; i < size; i++)
//	{
//		cout << "第" << i + 1 << "个数据:";
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
//	Array<char> ac(5);//Array<char>为类模板，ac(5)定义模板类的对象
//	cout << "填充一个字符数组";
//	ac.fill_Array();
//	cout << "数组的内容是：";
//	ac.disp_Array();
//	Array<double> ad(4);
//	cout << "填充一个字符数组";
//	ad.fill_Array();
//	cout << "数组的内容是：";
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