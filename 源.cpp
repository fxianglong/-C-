//#include<iostream>
//using namespace std;
//template <class T>
//T min(T x, T y)
//{
//	if (x < y) return x;
//	else return y;
//}
//void main()
//{
//	int n1 = 2, n2 = 10;
//	double d1 = 2.3, d2 = 2.2;
//	cout << "较小整数" << min(n1, n2) << endl;
//	cout << "较小实数" << min(d1, d2) << endl;
//	system("pause");
//}
////编写一个对具有n个元素的数组a[]求最小值的程序，要求将求最小值的函数设计成函数模板
//#include<iostream>
//using namespace std;
//template <class T>
//T ArrayMin(T a[], int n)
//{
//	int i;
//	T ArrayMin = a[0];
//	for (i = 0; i < n;i++)
//	if (ArrayMin>a[i])
//		ArrayMin = a[i];
//	return ArrayMin;
//}
//void main()
//{
//	int a[] = { 2, 4, 10, 6, 5, 3, 2 };
//	double b[] = { 2.3, 5.4, 3.2 };
//	cout << "a数组最小的数：" << ArrayMin(a, sizeof(a) / sizeof(a[0])) << endl;
//	cout << "b数组最小的数：" << ArrayMin(b, sizeof(b) / sizeof(b[0])) << endl;
//	system("pause");
//}
//#include<iostream>
//using namespace std;
//class MyClass
//{
//	int x, y;
//public:
//	MyClass(int x1, int y1)
//	{
//		x = x1; y = y1;
//	}
//	int getx(){ return x; }
//	int gety(){ return y; }
//	int operator<(MyClass &c);
//};
//
//int MyClass::operator<(MyClass &c)
//{
//	if (x < c.x&&y < c.y)
//		return 1;
//	else return 0;
//}
//template<class T>
//T &min(T &o1, T &o2)
//{
//	if (o1 < o2)
//		return o1;
//	else return o2;
//}
//void main()
//{
//	MyClass s1(5, 9);
//	MyClass s2(6, 8);
//	MyClass s3=min(s1, s2);
//	cout << "较小的坐标：(" << s3.getx() << "," << s3.gety() << "," << ")";
//	system("pause");
//}
//#include<iostream>
//using namespace std;
//template <class T>
//void dispArr(T *arr, int n)
//{
//	int i;
//	for (i = 0; i < n; i++)
//		cout << arr[i] << " ";
//	cout << endl;
//}
//template <class T>
//void dispArr(T *arr, int i, int j)
//{
//	int k;
//	for (k = i; k < j; k++)
//		cout << arr[k] << " ";
//	cout << endl;
//}
//void main()
//{
//	int a[] = { 1, 2, 4, 6, 8, 5, 3, 5, 8, 2 };
//	dispArr(a, sizeof(a) / sizeof(a[0]));
//	dispArr(a, 1, 7);
//	system("pause");
//}
//
#include<iostream>
using namespace std;
template<class T>
T max(T x, T y)
{
	cout << "函数模板max=";
	return (x > y) ? x : y;
}
int max(int x, int y, int z = 0)
{
	int m;
	cout << "int重载函数：max=";
	if (z == 0) return (x > y) ? x : y;
	else
	{
			m = (x > y) ? x : y;
			return (m > z) ? m : z;
	}
}
char max(char x, char y)
{
	cout << "char重载函数：max=";
	return (x > y) ? x : y;
}
void main()
{
	int i1 = 2, i2 = 3, i3 = 5;
	char c1 = 'a', c2 = 'c', c3 = 'd';
	double f1 = 2.321, f2 = 3.133;
	cout << max(i1, i2) << endl;
	cout << max(i1, i2, i3) << endl;
	cout << max(c1, c2) << endl;
	cout << (char)max(c1, c2, c3) << endl;
	cout << max(f1, f2) << endl;
	system("pause");
}



