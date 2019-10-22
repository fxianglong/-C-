#include<iostream>
#include<stdlib.h>
#include<string>
#include<assert.h>
using namespace std;
////力扣415字符串相加
////class Solution {
////public:
////	string addStrings(string num1, string num2) {
////		string ret;
////		int carry = 0;
////		for (int i = num1.size() - 1, j = num2.size() - 1; i >= 0 || j >= 0; i--, j--)
////		{
////			int sum = carry;
////			sum += (i >= 0) ? num1[i] - '0' : 0;
////			sum += (j >= 0) ? num2[j] - '0' : 0;
////			ret.insert(ret.begin(), '0' + sum % 10);
////			carry = sum / 10;
////		}
////		if (carry == 1)
////			ret.insert(ret.begin(), '1');
////		return ret;
////	}
////};
//
//void TestString()
//{
//	string s1();
//	string s2("hello c++");
//	string s3(10, 'a');
//	string s4(s2);
//	string s5(s3, 5);
//}
//void TestString1()
//{
//	string s("hello c++");
//	cout << s.length() << endl;
//	cout << s.size()<<endl;
//	cout << s.capacity() << endl;
//	cout << s << endl;
//
//	s.clear();
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//	cout << s.length() << endl;
//	
//	s.resize(20, 'a');
//	cout << s.length() << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//	cout << s << endl;
//
//	s.resize(5, 'a');
//	cout << s.length() << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//	cout << s << endl;
//}
//void TestString2()
//{
//	string s;
//	s.resize(100);
//	cout << s.length() << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//
//	s.resize(10);
//	cout << s.length()<<endl;
//	cout << s.size()<<endl;
//	cout << s.capacity() << endl;
//	
//	s.resize(230);
//	cout << s.length() << endl;
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//}
//
//void TestString3()
//{
//	string s1("JHYGTFRDS");
//	const string s2("LOIUGBNK");
//	cout << s1 << " " << s2 << endl;
//	s1[2] = 'j';
//	cout << s1 << endl;
//	cout << s2 << endl;
//}
//void TestString4()
//{
//	string s("hello C++");
//	s.push_back('s');
//	s.append("iuygfdcghj");
//	cout << s << endl;
//	cout << s.c_str() << endl;
//	//s += suh;
//	s += s;
//	cout << s << endl; 
//	string file1("string.cpp");
//	size_t pos = file1.rfind('.');
//	cout << pos << endl;
//	string suffix(file1.substr(pos, file1.size() - pos));
//	cout << suffix << endl;
//
//	string url("http://www.cplusplus.com/reference/string/string/find/");
//	cout << url << endl;
//	size_t start = url.find("://"); cout << start << endl;
//	if (start == string::npos)
//	{
//		cout << "invalid url" << endl;
//		return;
//	}
//	start += 3;
//	size_t finish = url.find('/', start); cout << finish << endl;
//	string address = url.substr(start, finish - start);
//	cout << address << endl;
//
//	// 删除url的协议前缀
//	pos = url.find("://");
//	cout << pos << endl;
//	url.erase(0, pos + 3);
//	cout << url << endl;
//}
//
//void PushBack()
//{
//	string s;
//	size_t sz = s.capacity();
//	cout << sz << endl;
//	cout << "making a grow\0" << endl;
//	for (int i = 0; i < 100; i++)
//	{
//		s += 'c';
//		if (sz != s.capacity())
//		{
//			sz = s.capacity();
//			cout << s << endl;
//			cout << "capacity change" << endl;
//		}
//	}
//}
//void TestPushBack_p()
//{
//	string s;
//	s.reserve(100);
//	size_t sz = s.capacity();
//
//	cout << "making s grow:\n";
//	for (int i = 0; i < 100; ++i)
//	{
//		s += 'c'; cout << s << endl;
//		if (sz != s.capacity())
//		{
//			sz = s.capacity(); cout << abort << endl;
//			cout << "capacity changed: " << sz << '\n';
//		}
//	}
//}
//
//////String浅拷贝
////class String
////{
////public:
////	String(const char* std = " ")
////	{
////		if (nullptr == std)
////		{
////			assert(false); return;
////		}
////		_str = new char(strlen(std) + 1);
////		_str = strcpy(_str, std);
////	}
////	~String()
////	{
////		if (_str)
////			delete[]_str;
////		_str = nullptr;
////	}
////private:
////	char* _str;
////};
////void TestString5()
////{
////	String s1("hello bit!!!");
////	String s2(s1);
////}
//////该程序运行崩溃。
//////String类没有显式定义其拷贝构造函数与赋值运算符重载，此时编译器会合成默认的，当用s1构
//////造s2时，编译器会调用默认的拷贝构造。最终导致的问题是，s1、s2共用同一块内存空间，在释放时同一块
//////空间被释放多次而引起程序崩溃，这种拷贝方式，称为浅拷贝
//class String
//{
//public:
//	String(const char* std = " ")
//	{
//		if (nullptr == std)
//		{
//			assert(false); return;
//		}
//		_str = new char(strlen(std) + 1);
//		_str = strcpy(_str, std);
//	}
//	//String(const String& s)
//	//	: _str(nullptr)
//	//{
//	//	String strTmp(s._str);
//	//	swap(_str, strTmp);
//	//}
//	String& operator=(const String& s)
//	{
//		if (this != &s)
//		{
//			String strTmp(s);
//			swap(_str, strTmp._str);
//		}
//
//		return *this;
//	}
//	String& operator=(String s)
//	{
//		swap(_str, s._str);
//		return *this;
//	}
//	~String()
//	{
//		if (_str)
//		{
//			delete[] _str;
//			_str = nullptr;
//		}
//	}
//private:
//	char* _str;
//};
//void TestString6()
//{
//	String s1("hello bit!!!");
//	String s2(s1);
//}
//int main()
//{
//	TestString6();
//	system("pause");
//	return 0;
//}


//String类的模拟实现
namespace fxl
{
	class String
	{
	public:
		typedef char* Iterator;
		String(const char*str = "")
		{
			if (nullptr == str)
			{
				assert(false);
				return;
			}
			_str = new char[strlen(str) + 1];
			_size = strlen(str);
			_capacity = _size;
			strcpy(_str, str);
		}
		String(const String &s)
			:_str(new char[s._capacity + 1])
			, _size(s._size)
			, _capacity(s._capacity)
		{
			strcpy(_str, s._str);
		}
		String& operator=(const String &s)
		{
			if (this != &s)
			{
				char* pStr = new char[s._capacity + 1];
				strcpy(pStr, s._str);
				delete[] _str;
				_str = pStr;
				_size = s._size;
				_capacity = s._capacity;
			}
			return *this;
		}
		~String()
		{
			if (_str)
			{
				delete[]_str;
				_str = nullptr;
			}
		}
		Iterator Begin()
		{
			return _str;
		}
		Iterator End()
		{
			return _str + _size;
		}
		void PushBack(char c)//尾插
		{
			if (_size == _capacity)
				Reserve(_capacity * 2);

			_str[_size++] = c;
			_str[_size] = '\0';
		}
		void Append(size_t n,char c)
		{
			for (size_t i = 0; i < n; ++i)
				PushBack(c);
		}
		String& operator+=(char c)
		{
			PushBack(c);
			return *this;
		}
		void Append(const char* str)
		{
			int len = strlen(str);
			if (_size + len > _capacity)
			{
				this->Reserve((_size + len) * 2);
			}
			strcpy(_size + _str, str);
		}
		String& operator+=(const char* str)
		{
			this->PushBack(*str);
			return *this;
		}
		void Clear()
		{
			_size = 0;
			_str[_size] = '\0';
		}
		void Swap(String& s)
		{
			swap(_str, s._str);
			swap(_size, s._size);
			swap(_capacity, s._capacity);
		}
		const char* C_Str()const
		{
			return _str;
		}
		size_t Size()const
		{
			return _size;
		}
		size_t Capacity()const
		{
			return _capacity;
		}
		bool Empty()const
		{
			return 0 == _size;
		}
		void Resize(size_t newSize, char c = char())
		{
			if (newSize > _size)
			{
				if (newSize > _capacity)
				{
					Reserve(newSize);
				}
				memset(_str + _size, c, newSize - _size);
			}
			_size = newSize;
			_str[newSize] = '\0';
		}
		void Reserve(size_t newCapacity)
		{
			if (newCapacity > _capacity)
			{
				char* str = new char[newCapacity + 1];
				strcpy(str, _str);
				delete[] _str;
				_str = str;
				_capacity = newCapacity;
			}
		}
		char& operator[](size_t index)
		{
			assert(index < _size);
			return _str[index];
		}
		const char& operator[](size_t index)const
		{
			assert(index < _size);
			return _str[index];
		}
		bool operator<(const String& s)
		{
			if (strcmp(_str, s._str)<0)
				return true;
			return false;
		}
		bool operator<=(const String& s)
		{
			if (strcmp(_str, s._str)<=0)
				return true;
			return false;
		}
		bool operator>(const String& s)
		{
			if (strcmp(_str, s._str)>0)
				return true;
			return false;
		}
		bool operator>=(const String& s)
		{
			if (strcmp(_str, s._str)>=0)
				return true;
			return false;
		}
		bool operator==(const String& s)
		{
			if (strcmp(_str, s._str)==0)
				return true;
			return false;
		}
		bool operator!=(const String& s)		{			if (strcmp(_str, s._str)!=0)
				return true;
			return false;		}		// 返回c在string中第一次出现的位置
		size_t Find(char c, size_t pos = 0) const
		{
			while (pos <  _size)
			{
				if (_str[pos] == c)
					return pos;
				else pos++;
			}
		}
		size_t Find(const char* s, size_t pos = 0) const
		{
			int len = strlen(s); int i = 0, j = 0;
			for (i = 0; i < _size; i++)
			{
				while (j != len&&_str[i] == s[j])
				{
					i++; j++;
				}
				if (j == len)
					break; j = 0;
			}
			if (j = len&&i != _size)
				return i - len;
				return -1;
		}
		// 截取string从pos位置开始的n个字符
		String SubStr(size_t pos, size_t n)
		{

		}
		// 在pos位置上插入字符c/字符串str，并返回该字符的位置
		String& Insert(size_t pos, char c)
		{
			if (pos > _size || pos < 1)
				perror("pos error");
			if (_size == _capacity)
				this->Reserve(_capacity * 2);
			int cur = _size;
			while (cur != pos - 1)
			{
				_str[cur + 1] = _str[cur];
				cur--;
			}
			_size++;
			_str[pos] = c;
		}
		String& Insert(size_t pos, const char* str)
		{
			int len = strlen(str);
			if (pos > _size || pos < 1)
				perror("pos error");
			if (_size+len > _capacity)
				this->Reserve(_capacity * 2);
			int cur = _size+len;
			while (cur != pos - 1)
			{
				_str[cur + len] = _str[cur];
				cur--;
			}
			while (len--)
			{
				_str[pos++] = *str++;
			}
		}
		String& Erase(size_t pos, size_t len)
		{
			if (pos > _size || pos < 0)
			{
				perror("pos error");
			}
			if (pos + len >= _size)
			{
				perror("pos error");
			}
			int k = len;
			while (k--)
			{
				_str[pos] = _str[pos + len];
				pos++;
			}
			_str[pos] = '\0';
			_size -= len;
		}
		void String::ReSize(size_t n, char s)
		{
			if (n<_size)
			{
				_str[n] = 0; 
			}
			else if (n>_size&&n<_capacity || n>_capacity)
			{
				if (n>_capacity)
					this->Reserve(n);
				int pos = _size;
				while (pos != n)
				{
					_str[pos++] = s;
				}
				_str[pos] = '\0';
			}
		}
		void String::ReSize(size_t n)
		{
			if (n<_size)
			{
				_str[n] = 0;
			}
			else if (n>_size&&n<_capacity || n>_capacity)
			{
				if (n>_capacity)
					this->Reserve(n);
				int pos = n;
				_str[pos] = '\0';
			}
		}
 private:
	 friend ostream& operator<<(ostream& _cout, const fxl::String& s);
 private:
	 char* _str;
	 size_t _capacity;
	 size_t _size;
 };
}
ostream& fxl::operator<<(ostream& _cout, const fxl::String& s)
{
	cout << s._str;
	return _cout;
}
void TestBitString1()
{
	fxl::String s1;
	fxl::String s2("hello bit");
	fxl::String s3(s2);
	s1 = s3;
	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
}
void TestBitString2()
{
	fxl::String s1("hello");
	s1.PushBack(' ');
	s1.PushBack('b');
	s1.Append(1, 'i');
	s1 += 't';
	cout << s1 << endl;
	cout << s1.Size() << endl;
		cout << s1.Capacity() << endl;
	// 利用迭代器打印string中的元素
	auto it = s1.Begin();
	while (it != s1.End())
	{
		cout << *it++;
	}
	cout << endl;
	fxl::String s2("hello world!!!");
	s1.Swap(s2);
	cout << s1 << endl;
	cout << s2 << endl;
}
void TestBitString3()
{
	fxl::String s("hello");
	cout << s << endl;
	cout << s.Size() << endl;
	cout << s.Capacity() << endl;
	s.ReSize(10, 'a');
	cout << s << endl;
	cout << s.Size() << endl;
	cout << s.Capacity() << endl;
	s.ReSize(20);
	cout << s << endl;
	cout << s.Size() << endl;
	cout << s.Capacity() << endl;
	s.ReSize(5);
	cout << s << endl;
	cout << s.Size() << endl;
	cout << s.Capacity() << endl;
	s.Reserve(50);
	cout << s << endl;
	cout << s.Size() << endl;
	cout << s.Capacity() << endl;
}
int main()
{
	TestBitString1();
	TestBitString2();
	TestBitString3();
	system("pause");
	return 0;
}