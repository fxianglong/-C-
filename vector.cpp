#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
using namespace std;


//// constructing vectors
//#include <iostream>
//#include <vector>
//int main()
//{
//	// constructors used in the same order as described above:
//	std::vector<int> first; // empty vector of ints
//	std::vector<int> second(4, 100); // four ints with value 100
//	std::vector<int> third(second.begin(), second.end()); // iterating through second
//	std::vector<int> fourth(third); // a copy of third
//	// 下面涉及迭代器初始化的部分，我们学习完迭代器再来看这部分
//	// the iterator constructor can also be used to construct from arrays:99
//	int myints[] = { 16, 2, 77, 29 };
//	std::vector<int> fifth(myints, myints + sizeof(myints) / sizeof(int));
//	std::cout << "The contents of fifth are:";
//	for (std::vector<int>::iterator it = fifth.begin(); it != fifth.end(); ++it)
//		std::cout << ' ' << *it;
//		std::cout << '\n';
//		system("pause");
//	return 0;
//}

void PrintVector(const vector<int>& v)
{
	vector<int>::const_iterator it = v.cbegin();
	while (it != v.cend())
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;
}
//int main()
//{
//	vector<int> v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(4);
//	// 使用迭代器进行遍历打印
//	vector<int>::iterator it = v.begin();
//	while (it != v.cend())
//	{
//		cout << *it << " ";
//		it++;
//	}
//	cout << endl;
//	// 使用迭代器进行修改
//	it = v.begin();
//	while (it != v.begin())
//	{
//		*it *= 2;
//		it++;
//	}
//	// 使用反向迭代器进行遍历再打印
//	vector<int>::reverse_iterator rit = v.rbegin();
//	while (rit != v.rend())
//	{
//		cout << *rit << " ";
//		rit++;
//	}
//	cout << endl;
//	PrintVector(v);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	size_t sz;
//	std::vector<int> foo;
//	sz = foo.capacity();
//	std::cout << "making foo grow:\n";
//	for (int i = 0; i<100; ++i) {
//		foo.push_back(i);
//		if (sz != foo.capacity()) {
//			sz = foo.capacity();
//			std::cout << "capacity changed: " << sz << '\n';
//		}
//		std::cout << sz<<endl;
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	size_t sz;
//	std::vector<int> foo;
//	sz = foo.capacity();
//	std::cout << "making foo grow:\n";
//	for (int i = 0; i<100; ++i) {
//		foo.push_back(i);
//		if (sz != foo.capacity()) {
//			sz = foo.capacity();
//			std::cout << "capacity changed: " << sz << '\n';
//		}
//	}
//	PrintVector(foo);
//	std::vector<int> bar;
//	sz = bar.capacity();
//	bar.reserve(100); 
//	std::cout << "making bar grow:\n";
//	for (int i = 0; i<100; ++i) {
//		bar.push_back(i);
//		if (sz != bar.capacity()) {
//			sz = bar.capacity();
//			std::cout << "capacity changed: " << sz << '\n';
//		}
//	}
//	PrintVector(bar);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	std::vector<int> myvector;
//	// set some initial content:
//	for (int i = 1; i<10; i++)
//		myvector.push_back(i);
//	myvector.resize(5);
//	myvector.resize(8, 100);
//	myvector.resize(12);
//	std::cout << "myvector contains:";
//	for (int i = 0; i<myvector.size(); i++)
//		std::cout << ' ' << myvector[i];
//	std::cout << '\n';
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a[] = { 1, 2, 4, 6, 7, 8 };
//	vector<int> v(a, a + sizeof(a) / sizeof(int));
//	vector<int>::iterator it = v.begin();
//	while (it != v.end())
//	{
//		cout << *it << " ";
//		it++;
//	}
//	cout << endl;
//	v.pop_back();
//	v.pop_back();
//	it = v.begin();
//	while (it != v.end())
//	{
//		cout << *it << " ";
//		it++;
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a[] = { 1, 2, 34, 56, 7, 8, 90, 9 };
//	vector<int> v(a, a + sizeof(a) / sizeof(int));
//	vector<int>::iterator pos = find(v.begin(), v.end(), 2);
//	v.insert(pos, 233);
//	vector<int>::iterator it = v.begin();
//	while (it != v.end())
//	{
//		cout << *it << " ";
//		it++;
//	}
//	cout << endl;
//	pos = find(v.begin(), v.end(), 90);
//	v.pop_back();
//	v.erase(pos);
//	it = v.begin();
//	while (it != v.end())
//	{
//		cout << *it << " ";
//		it++;
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a[] = { 1, 345, 6, 78, 7, 9, 8 };
//	vector<int>v(a,a+sizeof(a)/sizeof(int));
//	v[0] = 10;
//	cout << v[0] << endl;
//	for (size_t sz = 0; sz < v.size(); sz++)
//	{
//		cout << v[sz] << " ";
//	}
//	cout << endl;
//	vector<int> vs;
//	vs.swap(v);
//	for (size_t sz = 0; sz < v.size(); sz++)
//	{
//		cout << v[sz] << " ";
//	}
//	cout << endl;
//	for (size_t sz = 0; sz < vs.size(); sz++)
//	{
//		cout << vs[sz] << " ";
//	}
//	cout << endl;
//	for (size_t sz = 0; sz < v.size(); sz++)
//	{
//		cout << v[sz] << " ";
//	}
//	cout << endl;
//	for (auto x : vs)
//	{
//		cout << x << " ";
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a[] = { 1, 23, 4, 5, 6, 78, 4, 9 };
//	vector<int> v(a, a + sizeof(a) / sizeof(int));
//	vector<int>::iterator pos = find(v.begin(), v.end(), 5);
//	v.erase(pos);
//	pos = find(v.begin(), v.end(), 3);
//	v.insert(pos, 4);
//	for (auto x : v)
//	{
//		cout << x << " ";
//	}
//	system("pause");
//	return 0;
//}

// 常见的迭代器失效的场景
//int main()
//{
//	int a[] = { 1, 2, 3, 4 };
//	vector<int> v(a, a + sizeof(a) / sizeof(int));
//	/*vector<int>::iterator it = v.begin();*/
//	//while (it != v.end())
//	//{
//	//	if (*it % 2 == 0)
//	//		v.erase(it);
//	//		++it;
//	//}
//	vector<int>::iterator it = v.begin();
//	while (it != v.end())
//	{
//		if (*it % 2 == 0)
//			it = v.erase(it);
//		else
//			++it;
//	}
//	for (auto x : v)
//	{
//		cout << x << " ";
//	}
//	system("pause");
//	return 0;
//}

//对std::vector的模拟构造
#include<iostream>
#include<vector>
#include <algorithm>
#include<assert.h>
using namespace std;
namespace fxl
{
	template<class T>
	class Vector
	{
	public:
		typedef T* Iterator;
		typedef const T* ConstIterator;
		Iterator Begin() { return _start; }
		Iterator End(){ return _finish; }

		Iterator CBegin() const { return _start; }
		Iterator CEnd() const { return _finish; }

		size_t Size() const { return _finish - _start; }
		size_t Capacity() const { return _endOfStorage - _start; }

		Vector()
			:_start(nullptr)
			, _finish(nullptr)
			, _endOfStorage(nullptr)
		{ }

		Vector(int n, const T& value = T())
			:_start(nullptr)
			, _finish(nullptr)
			, _endOfStorage(nullptr)
		{
			Reserve(n);
			while (n--)
			{
				PushBack(value);
			}
		}

		template<class InputIterator>
		Vector(InputIterator first, InputIterator last)
		{
			Reserve(last - first);
			while (last != first)
			{
				PushBack(*first);
				first++;
			}
		}

		Vector(const Vector<T>& v)
			:_start(nullptr)
			, _finish(nullptr)
			, _endOfStorage(nullptr)
		{
			Reserve(v.Capacity());
			Iterator it = Begin();
			ConstIterator vit = v.CBegin();
			while (vit != v.CEnd())
			{
				*it++ = *vit++;
			}
			_finish = _start + v.Size();
			_endOfStorage = _start + v.Capacity();
		}

		Vector<T>& operator=(Vector<T> v)
		{
			Swap(v);
			return *this;
		}

		~Vector()
		{
			delete[] _start;
			_start = _finish = _endOfStorage = nullptr;
		}

		void Reserve(size_t n)
		{
			if (n > Capacity())
			{
				size_t size = Size();
				T* tim = new T[n];
				if (_start)
				{
					for (size_t i = 0; i < size; i++)
						tim[i] = _start[i];
				}
				_start = tim;
				_finish = _start + size;
				_endOfStorage = _start + n;
			}
		}

		void Resize(size_t n, const T&value = T())
		{
			if (n <= Size())
			{
				_finish = _start + n;
				return ;
			}
			if (n > Capacity())
			{
				Reserve(n);
			}
			Iterator it = _finish;
			Iterator _finish = _start + n;
			while (it != _finish)
			{
				*it = value;
				++it;
			}
		}

		void Swap(Vector<T>&v)
		{
			swap(_start , v._start);
			swap(_finish , v._finish);
			swap(_endOfStorage , v._endOfStorage);
		}

		void PushBack(const T&x)
		{
			Insert(End(), x);
		}

		void PopBack()
		{
			Erase(--End());
		}

		Iterator Insert(Iterator pos, const T&x)
		{
			assert(pos <= _finish);
			if (_finish == _endOfStorage)
			{
				size_t size = Size();
				size_t newCapacity = Capacity() == 0 ? 1 : Capacity() * 2;
				Reserve(newCapacity);
				pos = _start + size;
			}
			Iterator end = _finish - 1;
			while (end >= pos)
			{
				*(end + 1) = *end;
				end--;
			}
			*pos = x;
			_finish++;
			return pos;
		}

		Iterator Erase(Iterator pos)
		{
			Iterator begin = pos + 1;
			while (begin != _finish)
			{
				*(begin - 1) = *begin;
				begin++;
			}
			_finish--;
			return pos;
		}

		T& operator[](size_t pos)
		{
			return _start[pos];
		}
	private:
		Iterator _start; // 指向数据块的开始
		Iterator _finish; // 指向有效数据的尾
		Iterator _endOfStorage; // 指向存储容量的尾
	};
}

void TestVector1()
{
	fxl::Vector<int> first;
	fxl::Vector<int> second(4, 100);
	fxl::Vector<int> third(second.Begin(), second.End());
	fxl::Vector<int> fourth(third);
	int myints[] = { 1, 23, 4, 56, 7, 8 };
	fxl::Vector<int> fifth(myints, myints + sizeof(myints) / sizeof(int));
	std::cout << "The contents of fifth are:";
	for (fxl::Vector<int>::Iterator it = fifth.Begin(); it != fifth.End(); ++it)
		std::cout << ' ' << *it;
	std::cout << '\n';
	fxl::Vector<string> strV;
	strV.PushBack("1111");
	strV.PushBack("2222");
	strV.PushBack("3333");
	strV.PushBack("4444");
	for (size_t i = 0; i < strV.Size(); ++i)
	{
		cout << strV[i] << " ";
	}
	cout << endl;
}

void PrintVector(const fxl::Vector<int>& v)
{
	fxl::Vector<int>::ConstIterator it = v.CBegin();
	while (it != v.CEnd())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;
}

void TestVector2()
{
	fxl::Vector<int> v;
	v.PushBack(1);
	v.PushBack(2);
	v.PushBack(3);
	v.PushBack(4);

	fxl::Vector<int>::Iterator it = v.Begin();
	while (it != v.End())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;

	it = v.Begin();
	while (it != v.End())
	{
		*it *= 2;
		++it;
	}
	PrintVector(v);
}

void TestVector3()
{
	size_t sz;
	fxl::Vector<int> foo;
	sz = foo.Capacity();
	std::cout << "making foo grow:\n";
	for (int i = 0; i < 100; ++i) {
		foo.PushBack(i);
		if (sz != foo.Capacity()) {
			sz = foo.Capacity();
			std::cout << "capacity changed: " << sz << '\n';
		}
	}
	// resverse
	fxl::Vector<int> bar;
	sz = bar.Capacity();
	bar.Reserve(100); // this is the only difference with foo above
	std::cout << "making bar grow:\n";
	for (int i = 0; i < 100; ++i) {
		bar.PushBack(i);
		if (sz != bar.Capacity()) {
			sz = bar.Capacity();
			std::cout << "capacity changed: " << sz << '\n';
		}
	}
	// resize
	fxl::Vector<int> myvector;
	// set some initial content:
	for (int i = 1; i < 10; i++)
		myvector.PushBack(i);
	myvector.Resize(5);
	myvector.Resize(8, 100);
	myvector.Resize(12);
	std::cout << "myvector contains:";
	for (size_t i = 0; i < myvector.Size(); i++)
		std::cout << ' ' << myvector[i];
	std::cout << '\n';
}

void TestVector4()
{
	int a[] = { 1, 2, 3, 4 };
	fxl::Vector<int> v(a, a + sizeof(a) / sizeof(int));
	fxl::Vector<int>::Iterator pos = find(v.Begin(), v.End(), 3);
	v.Insert(pos, 30);
	fxl::Vector<int>::Iterator it = v.Begin();
	while (it != v.End()) {
		cout << *it << " ";
		++it;
	}
	cout << endl;
	pos = find(v.Begin(), v.End(), 3);
	v.Erase(pos);
	it = v.Begin();
	while (it != v.End()) {
		cout << *it << " ";
		++it;
	}
	cout << endl;
}

void TestVector5()
{
	int a[] = { 1, 2, 3, 4 };
	fxl::Vector<int> v(a, a + sizeof(a) / sizeof(int));
	v[0] = 10;
	cout << v[0] << endl;
	for (size_t i = 0; i < v.Size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;
	fxl::Vector<int> swapv;
	swapv.Swap(v);
	cout << "v data:";
	for (size_t i = 0; i < v.Size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;
	cout << "swapv data:";
	for (size_t i = 0; i < swapv.Size(); ++i)
	{
		cout << swapv[i] << " ";
	}
	cout << endl;
}

void TestVector6()
{
	int a[] = { 1, 2, 3, 4 };
	fxl::Vector<int> v(a, a + sizeof(a) / sizeof(int));
	fxl::Vector<int>::Iterator pos = find(v.Begin(), v.End(), 3);
	v.Erase(pos);
	/*cout << *pos << endl; */// 此处会导致非法访问
	pos = find(v.Begin(), v.End(), 3);
	v.Insert(pos, 30);
	//cout << *pos << endl; // 此处会导致非法访问
	fxl::Vector<int>::Iterator it = v.Begin();
	while (it != v.End())
	{
		if (*it % 2 == 0)
			v.Erase(it);
		++it;
	}
	it = v.Begin();
	while (it != v.End())
	{
		if (*it % 2 == 0)
			it = v.Erase(it);
		else
			++it;
	}
}

int main()
{
	/*TestVector1();
	TestVector2();
	TestVector3();*/
	//TestVector4();
	/*TestVector5();*/
	TestVector6();
	system("pause");
	return 0;
}