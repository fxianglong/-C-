//ÔËËã·ûÖØÔØ
#include<iostream>
using namespace std;
class Complex
{
	float a;
	float b;
public:
	Complex(){}
	Complex(float a1, float b1) :a(a1), b(b1){}
	Complex operator+(Complex &);
	friend Complex operator-(Complex &, Complex &);
	void disp()
	{
		cout << a;
		if (b >= 0) cout << "+";
		cout << b << "i" << endl;
	}
};
Complex Complex::operator+(Complex &c)
{
	Complex tmp;
	tmp.a = a + c.a;
	tmp.b = b + c.b;
	return tmp;
}
Complex operator -(Complex &c1, Complex &c2)
{
	Complex tmp;
	tmp.a = c1.a - c2.a;
	tmp.b = c1.b - c2.b;
	return tmp;
}
void main()
{
	Complex s1(2, 5), s2(1, 10), s3, s4;
	s3 = s1 + s2;
	s4 = s1 - s2;
	cout << "s1:"; s1.disp();
	cout << "s2:"; s2.disp();
	cout << "s3:"; s3.disp();
	cout << "s4:"; s4.disp();
	system("pause");
}



















