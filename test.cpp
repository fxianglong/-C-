#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
//力扣415字符串相加
//class Solution {
//public:
//	string addStrings(string num1, string num2) {
//		string ret;
//		int carry = 0;
//		for (int i = num1.size() - 1, j = num2.size() - 1; i >= 0 || j >= 0; i--, j--)
//		{
//			int sum = carry;
//			sum += (i >= 0) ? num1[i] - '0' : 0;
//			sum += (j >= 0) ? num2[j] - '0' : 0;
//			ret.insert(ret.begin(), '0' + sum % 10);
//			carry = sum / 10;
//		}
//		if (carry == 1)
//			ret.insert(ret.begin(), '1');
//		return ret;
//	}
//};

void TestString()
{
	string s1();
	string s2("hello c++");
	string s3(10, 'a');
	string s4(s2);
	string s5(s3, 5);
}
void TestString1()
{
	string s("hello c++");
	cout << s.length() << endl;
	cout << s.size()<<endl;
	cout << s.capacity() << endl;
	cout << s << endl;

	s.clear();
	cout << s.size() << endl;
	cout << s.capacity() << endl;
	cout << s.length() << endl;
	
	s.resize(20, 'a');
	cout << s.length() << endl;
	cout << s.size() << endl;
	cout << s.capacity() << endl;
	cout << s << endl;

	s.resize(5, 'a');
	cout << s.length() << endl;
	cout << s.size() << endl;
	cout << s.capacity() << endl;
	cout << s << endl;
}
void TestString2()
{
	string s;
	s.resize(100);
	cout << s.length() << endl;
	cout << s.size() << endl;
	cout << s.capacity() << endl;

	s.resize(10);
	cout << s.length()<<endl;
	cout << s.size()<<endl;
	cout << s.capacity() << endl;
	
	s.resize(230);
	cout << s.length() << endl;
	cout << s.size() << endl;
	cout << s.capacity() << endl;
}

void TestString3()
{
	string s1("JHYGTFRDS");
	const string s2("LOIUGBNK");
	cout << s1 << " " << s2 << endl;
	s1[2] = 'j';
	cout << s1 << endl;
	cout << s2 << endl;
}
void TestString4()
{
	string s("hello C++");
	s.push_back('s');
	s.append("iuygfdcghj");
	cout << s << endl;
	cout << s.c_str() << endl;
	//s += suh;
	s += s;
	cout << s << endl; 
	string file1("string.cpp");
	size_t pos = file1.rfind('.');
	cout << pos << endl;
	string suffix(file1.substr(pos, file1.size() - pos));
	cout << suffix << endl;

	string url("http://www.cplusplus.com/reference/string/string/find/");
	cout << url << endl;
	size_t start = url.find("://"); cout << start << endl;
	if (start == string::npos)
	{
		cout << "invalid url" << endl;
		return;
	}
	start += 3;
	size_t finish = url.find('/', start); cout << finish << endl;
	string address = url.substr(start, finish - start);
	cout << address << endl;

	// 删除url的协议前缀
	pos = url.find("://");
	cout << pos << endl;
	url.erase(0, pos + 3);
	cout << url << endl;
}

void PushBack()
{
	string s;
	size_t sz = s.capacity();
	cout << sz << endl;
	cout << "making a grow\0" << endl;
	for (int i = 0; i < 100; i++)
	{
		s += 'c';
		if (sz != s.capacity())
		{
			sz = s.capacity();
			cout << s << endl;
			cout << "capacity change" << endl;
		}
	}
}
void TestPushBack_p()
{
	string s;
	s.reserve(100);
	size_t sz = s.capacity();

	cout << "making s grow:\n";
	for (int i = 0; i < 100; ++i)
	{
		s += 'c'; cout << s << endl;
		if (sz != s.capacity())
		{
			sz = s.capacity(); cout << abort << endl;
			cout << "capacity changed: " << sz << '\n';
		}
	}
}


int main()
{
	TestPushBack_p();
	system("pause");
	return 0;
}

























