#include<iostream>
using namespace std;

// 深浅拷贝问题
//namespace bit
//{
//	class string
//	{
//	public:
//		/*	string()
//				:_str(new char[1])
//				{
//				*_str = '\0';
//				}*/
//
//		//string(const char* str = "\0")    错误示范
//		//string(const char* str = nullptr) 错误示范
//		string(const char* str = "")
//			:_str(new char[strlen(str)+1])
//		{
//			// 已经拷贝'\0'
//			strcpy(_str, str);// while (*dst++ = *src++);
//		}
//
//		~string()
//		{
//			delete[] _str;
//			_str = nullptr;
//		}
//
//		//string copy1(s1)
//		string(const string& s)
//			:_str(new char[strlen(s._str)+1])
//		{
//			strcpy(_str, s._str);
//		}
//
//		// s1 = s2;
//		// s1 = s1;
//		string& operator=(const string& s)
//		{
//			if (this != &s)
//			{
//				delete[] _str;
//				_str = new char[strlen(s._str) + 1];
//				strcpy(_str, s._str);
//			}
//
//			return *this;
//		}
//
//		const char* c_str()
//		{
//			return _str;
//		}
//
//		char& operator[](size_t pos)
//		{
//			return _str[pos];
//		}
//
//	private:
//		char* _str;
//	};
//}
//
//int main()
//{
//	bit::string s1("hello");
//	s1[0] = 'x';
//	cout << s1.c_str() << endl;
//
//	bit::string copy1(s1);
//	cout << copy1.c_str() << endl;
//
//	copy1[0] = 'h';
//	cout << s1.c_str() << endl;
//	cout << copy1.c_str() << endl;
//
//	bit::string s2 = "world";
//	s1 = s2;
//	cout << s1.c_str() << endl;
//
//	return 0;
//}

namespace bit
{
	// string 模拟实现  增删查改
	class string
	{
	public:
		typedef const char* const_iterator;
		typedef char* iterator;

		const_iterator begin() const 
		{
			return _str;
		}

		iterator begin()
		{
			return _str;
		}

		iterator end()
		{
			return _str + _size;
		}

		string(const char* str = "")
			:_str(new char[strlen(str) + 1])
		{
			// 已经拷贝'\0'
			strcpy(_str, str);// while (*dst++ = *src++);
			_size = strlen(str);
			_capacity = _size;
		}

		~string()
		{
			delete[] _str;
			_str = nullptr;
			_size = _capacity = 0;
		}

		//string copy1(s1)
		string(const string& s)
			:_str(new char[s._size + 1])
			, _size(s._size)
			, _capacity(s._size)
		{
			strcpy(_str, s._str);
		}

		// s1 = s2;
		// s1 = s1;
		string& operator=(const string& s)
		{
			if (this != &s)
			{
				delete[] _str;
				_str = new char[s._size + 1];
				strcpy(_str, s._str);
				_size = s._size;
				_capacity = s._capacity;
			}

			return *this;
		}

		const char* c_str()
		{
			return _str;
		}

		char& operator[](size_t pos)
		{
			return _str[pos];
		}

		size_t size()
		{
			return _size;
		}

		void push_back(char ch)
		{
			if (_size == _capacity)
			{
				// 扩容
			}

			_str[_size] = ch;
			++_size;
			_str[_size] = '\0';
		}

		// s1.append("11111");
		void append(const char* str)
		{
			size_t len = strlen(str);
			if (_size+len > _capacity)
			{
				// 扩容
			}

			// 

		}

		const string& operator+=(char ch)
		{
			push_back(ch);
			return *this;
		}

		const string& operator+=(const char* str)
		{
			append(str);
			return *this;
		}

		/*operator>
		operator<
		operator==
		operator>=
		*/

	private:
		char* _str;
		size_t _size;
		size_t _capacity;
	};
}

int main()
{
	bit::string s1("hello");
	cout << s1.c_str() << endl;
	bit::string copy1(s1);
	cout << copy1.c_str() << endl;

	bit::string::iterator it1 = s1.begin();
	while (it1 != s1.end())
	{
		cout << *it1 << " ";
		++it1;
	}
	cout << endl;

	for (auto e : s1)
	{
		cout << e << " ";
	}
	cout << endl;

	return 0;
}