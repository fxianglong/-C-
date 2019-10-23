#include<iostream>
#include<string.h>
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
//}int main(){	system("pause");	return 0;}