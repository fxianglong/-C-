//#include<iostream>
//#include<list>
//#include<vector>
//using namespace std;
////int main()
////{
////	std::list<int> l1;
////	std::list<int> l2(5, 199);
////	std::list<int> l3(l2.begin(), l2.end());
////	std::list<int> l4(l3);
////	int array[] = { 1, 2, 3, 5, 6, 7, 8 };
////	std::list<int> l5(array, array + sizeof(array) / sizeof(int));
////	for (std::list<int>::iterator it = l5.begin(); it != l5.end(); it++)
////		cout << *it << " ";
////	cout << endl;
////	for (auto e : l2)
////	{
////		cout << e << endl;
////	}
////	system("pause");
////	return 0;
////}
////int main()
////{
////	int array[] = { 1, 2, 3, 4, 6, 7, 8, 9, 0, 5 };
//	//std::list<int> l1(array, array + sizeof(array) / sizeof(int));
//	///*for (std::list<int>::iterator it = l1.begin();it!=l1.end(); it++)
//	//{
//	//	cout << *it << " ";
//	//}
//	//cout << endl;*/
//	//for (list<int>::reverse_iterator it = l1.rbegin(); it != l1.rend(); it++)
//	//	cout << *it << " ";
//	//cout << endl;
//	///*std::list<int> l1(array, array + sizeof(array) / sizeof(0));
////	cout << l1.size() << endl;
////	if (l1.empty())
////	{
////		cout << "空的List" << endl;
////	}
////	else for (auto e : l1)
////	{
////		cout << e << endl;
////	}
////	l1.front() = 12;
////	l1.back() = 11;
////	for (auto e : l1)
////	{
////		cout << e << endl;
////	}
////	cout << endl;*/
////	const list<int> l2(array, array + sizeof(array) / sizeof(array[0]));
////	//int& a = l2.front(); 因为l2是const类型的list对象，因此其front()为const 引用类型
////	const int& ca = l2.front();
////	system("pause");
////	return 0;
////}
//
//void Printflist(list<int>& l)
//{
//	for (auto e : l)
//		cout << e << " ";
//	cout << endl;
//}
//void Testlist()
//{
//	int array[] = { 1, 2, 3, 5, 7, 8, 2 };
//	list<int> l(array, array + sizeof(array) / sizeof(array[0]));
//	l.push_front(43);
//	l.push_back(3212);
//	Printflist(l);
//	l.pop_back();
//	l.pop_front();
//	Printflist(l);
//}
//
//class Date
//{
//public:
//	Date(int year = 1990, int month = 1, int day = 1)
//		:_year(year)
//		, _month(month)
//		, _day(day)
//	{
//		cout << "Date(int, int, int)="<<this << endl;
//	}
//	Date(const Date&d)
//		:_year(d._year)
//		, _month(d._month)
//		, _day(d._day)
//	{
//		cout << "Date(int,int,int)=" << this << endl;
//	}
//
//private:
//	int _year;
//	int _day;
//	int _month;
//};
//
//void Testlist2()
//{
//	list<Date> l;
//	Date d(2019, 11, 5);
//	l.push_back(d);
//	l.emplace_back(2019,11,6);
//	l.emplace_front(2019,11,8);
//}
//void Testlist3()
//{
//	int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 1 };
//	list<int> l(array, array + sizeof(array) / sizeof(array[0]));
//	auto  pos = ++l.begin();
//	l.insert(pos, 32);
//	Printflist(l);
//	l.erase(pos);
//	Printflist(l);
//	pos = ++l.begin();
//	vector<int> v{ 2, 4, 5, 6, 7, 3 };
//	l.insert(pos, v.begin(), v.end());
//	Printflist(l);
//	l.insert(pos, 5, 4);
//	Printflist(l);
//	l.erase(l.begin(), l.end());
//	Printflist(l);
//}
//
//void Testlist4()
//{
//	int array[] = { 1, 2, 3, 4, 5, 2, 6, 7, 87, 654, 12 };
//	list<int> l(array, array+sizeof(array) / sizeof(array[0]));
//	l.resize(5);
//	Printflist(l);
//	l.resize(20);
//	Printflist(l);
//	l.resize(30, 2);
//	Printflist(l);
//	vector<int> v{ 2, 3, 4, 5 };
//	list<int> l2(v.begin(), v.end());
//	Printflist(l2);
//	l.swap(l2);
//	Printflist(l);
//	Printflist(l2);
//	l2.clear();
//	cout << l2.size() << endl;
//}
//int main()
//{
//	/*Testlist();
//	Testlist2();*/
//	//Testlist3();
//	Testlist4();
//	system("pause");
//	return 0;
//}

//模拟List的实现
#include<iostream>
#include<list>
#include<vector>
using namespace std;
namespace fxl
{
	template<class T>
	struct ListNode
	{
		ListNode(const T&val = T())
		:_pPre(nullptr)
		, _pNext(nullptr)
		, _val(val)
		{
		}

		ListNode<T>* _pPre;
		ListNode<T>* _pNext;
		T _val;
	};

	template<class T, class Ref, class Ptr>
	class ListIterator
	{
		typedef ListNode<T>* PNode;
		typedef ListIterator<T, Ref, Ptr> Self;
	public:
		ListIterator(PNode pNode = nullptr)
			:_pNode(pNode)
		{}
		ListIterator(const Self& l)
			:_pNode(l._pNode)
		{}
		T& operator*()
		{
			return _pNode->_val;
		}
		T& operator->()
		{
			return &(operator*());
		}
		Self& operator++()
		{
			_pNode = _pNode->_pNext;
			return *this;
		}
		Self operator++(int)
		{
			Self temp(*this);
			_pNode = _pNode->_pNext;
			return temp;
		}
		bool operator!=(const Self& l)
		{
			return _pNode != l._pNode;
		}
		bool operator==(const Self& l)
		{
			return _pNode == l._pNode;
		}
		PNode _pNode;
	};


	template<class T, class Ref, class Ptr, class Iterator>
	class ListReverseIterator
	{
		typedef ListReverseIterator<T, Ref, Ptr, Iterator>Self;
	public:
		ListReverseIterator(const Iterator& it)
			:_it(it)
		{}
		ListReverseIterator(const Self& s)
			:_it(s._it)
		{}
		Ref operator*()
		{
			Iterator temp = _it;
			return *(--temp);
		}
		Ptr operator->()
		{
			return &operator*();
		}
		Self& operator++()
		{
			--_it;
			return *this;
		}
		Self operator++(int)
		{
			Iterator temp(_it);
			--_it;
			return temp;
		}
		Self operator--()
		{
			++_it;
			return *this;
		}
		Self operator--(int)
		{
			Iterator temp(_it);
			++_it;
			return temp;
		}
		bool operator!=(const Self&s)
		{
			return _it != s._it;
		}
		bool operator==(const Self&s)
		{
			return _it == s._it;
		}
	private:
		Iterator _it;
	};

	template<class T>
	class List
	{
		typedef ListNode<T> Node;
		typedef Node* PNode;
	public:
		typedef ListIterator<T, T&, T*> Iterator;
		typedef ListIterator<T, const T&, const T&> ConstIterator;
		typedef ListReverseIterator<T, T&, T*, Iterator>ReverseIterator;
		typedef ListReverseIterator<T, const T&, const T*, ConstIterator>ConstReverseIterator;
	public:
		List()
		{
			CreateHead();
		}
		List(int n, const T& value = T())
		{
			CreateHead();
			for (int i = 0; i < n; i++)
				PushBack(value);
		}
		template<class Iterator>
		List(Iterator first, Iterator last)
		{
			CreateHead();
			while (first != last)
			{
				PushBack(*first);
				first++;
			}
		}
		List(const List<T>&l)
		{
			CreateHead();
			List<T> temp(l.CBegin(), l.CEnd());
			this->Swap(temp);
		}
		List<T>& operator=(const List<T>& l)
		{
			if (this != &l)
			{
				List<T> temp(l);
				this->Swap(temp);
			}
			return *this;
		}
		~List()
		{
			Clear();
			delete _pHead;
			_pHead = nullptr;
		}
		Iterator Begin()
		{
			return Iterator(_pHead->_pNext);
		}
		Iterator End()
		{
			return Iterator(_pHead);
		}
		ReverseIterator RBegin()
		{
			return ReverseIterator(End());
		}
		ReverseIterator REnd()
		{
			return ReverseIterator(Begin());
		}
		ConstIterator CBegin()const
		{
			return ConstIterator(_pHead->_pNext);
		}
		ConstIterator CEnd()const
		{
			return ConstIterator(_pHead);
		}
		ConstReverseIterator CRBegin()const
		{
			return ConstReverseIterator(CEnd());
		}
		ConstReverseIterator CREnd()const
		{
			return ConstReverseIterator(CBegin());
		}

		size_t Size()const
		{
			size_t count = 0;
			PNode pCur = _pHead->_pNext;;
			while (pCur != _pHead)
			{
				count++;
				pCur = pCur->_pNext;
			}
			return count;
		}
		bool Empty()const{
			return _pHead->_pNext == _pHead;
		}
		void Resize(size_t newSize, const T&val = T())
		{
			size_t oldSize = Size();
			if (newSize >= oldSize)
			{
				for (size_t i = oldSize; i < newSize; i++)
					PushBack(val);
			}
			else
			{
				for (size_t i = newSize; i < oldSize; i++)
					PoPback();
			}
		}
		T&Front()
		{
			return _pHead->_pNext->_val;
		}
		const T&Front()const
		{
			return _pHead->_pNext->_val;
		}
		T&Back()
		{
			return _pHead->_pPre->_val;
		}
		const T&Back()const
		{
			return _pHead->_pPre->_val;
		}
		void PushBack(const T&val)
		{
			PNode pnewnode = new Node(val);
			pnewnode->_pNext = _pHead;
			pnewnode->_pPre = _pHead->_pPre;
			_pHead->_pPre = pnewnode;
			pnewnode->_pPre->_pNext = pnewnode;
		}
		void PoPback()
		{
			PNode pdel = _pHead->_pPre;
			if (pdel != _pHead)
			{
				_pHead->_pPre = pdel->_pPre;
				pdel->_pPre->_pNext = _pHead;
				delete pdel;
			}
		}
		void PushBackFront(const T&val)
		{
			PNode pnewNode = new Node(val);
			pnewNode->_pNext = _pHead->_pNext;
			pnewNode->_pPre = _pHead;
			_pHead->_pNext = pnewNode;
			pnewNode->_pNext->_pPre = pnewNode;
		}
		void PopFront()
		{
			PNode pDel = _pHead->_pNext;
			if (pDel != _pHead)
			{
				_pHead->_pNext = pDel->_pNext;
				pDel->_pNext->_pPre = _pHead;
				delete pDel;
			}
		}
		Iterator Insert(Iterator pos, const T&val)
		{
			PNode pnewNode = new Node(val);
			PNode pCur = pos._pNode;
			pnewNode->_pPre = pCur->_pPre;
			pnewNode->_pNext = pCur;
			pnewNode->_pPre->_pNext = pnewNode;
			pCur->_pPre = pnewNode;
			return Iterator(pnewNode);
		}
		Iterator Erase(Iterator pos)
		{
			PNode pDel = pos._pNode;
			PNode pRet = pDel->_pNext;
			pDel->_pPre->_pNext = pDel->_pNext;
			pDel->_pNext->_pPre = pDel->_pPre;
			delete pDel;
			return Iterator(pRet);
		}
		void Clear()
		{
			PNode pCur = _pHead->_pNext;
			while (pCur != _pHead)
			{
				_pHead->_pNext = pCur->_pNext;
				delete pCur;
				pCur = _pHead->_pNext;
			}
			_pHead->_pNext = _pHead;
			_pHead->_pPre = _pHead;
		}
		void Swap(List<T>& l)
		{
			swap(_pHead, l._pHead);
		}
	private:
		void CreateHead()
		{
			_pHead = new Node;
			_pHead->_pPre = _pHead;
			_pHead->_pNext = _pHead;
		}
	private:
		PNode _pHead;
	};
}

template<class T>
void PrintfList(fxl::List<T> &l)
{
	auto it = l.Begin();
	while (it != l.End())
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;
}
//template<class T>
//void ReversePrintfList(const fxl::List<T> &l)
//{
//	auto it = l.CRBegin();
//	while (it != l.CREnd())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//}
template<class T>
void PrintListReverse(const fxl::List<T>& l)
{
	auto it = l.CRBegin();
	while (it != l.CREnd())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;
}

void TestList()
{
	fxl::List<int> l1;
	fxl::List<int> l2(4, 2);
	PrintfList(l2);
	int array[] = { 1, 3, 4, 7, 8, 9, 2 };
	fxl::List<int> l3(array, array + sizeof(array) / sizeof(array[0]));
	PrintfList(l3);
	fxl::List<int> l4(l3);
	PrintfList(l4);
	l1 = l4;
	PrintfList(l1);
	//ReversePrintfList(l1);
	//PrintListReverse(l1);
}

void TestList2()
{
	// 测试PushBack与PopBack
	fxl::List<int> l;
	l.PushBack(1);
	l.PushBack(2);
	l.PushBack(3);
	PrintfList(l);
	l.PoPback();
	l.PoPback();
	PrintfList(l);
	l.PoPback();
	cout << l.Size() << endl;
	// 测试PushFront与PopFront
	l.PushBackFront(1);
	l.PushBackFront(2);
	l.PushBackFront(3);
	PrintfList(l);
	l.PopFront();
	l.PopFront();
	PrintfList(l);
	l.PopFront();
	cout << l.Size() << endl;
}

void TestList3()
{
	int array[] = { 1, 2, 3, 4, 5 };
	fxl::List<int> l(array, array + sizeof(array) / sizeof(array[0]));
	auto pos = l.Begin();
	l.Insert(l.Begin(), 0);
	PrintfList(l);

	++pos;
	l.Insert(pos, 2);
	PrintfList(l);
	l.Erase(l.Begin());
	l.Erase(pos);
	PrintfList(l);
	// pos指向的节点已经被删除，pos迭代器失效
	cout << *pos << endl;
	auto it = l.Begin();
	while (it != l.End())
	{
		it = l.Erase(it);
	}
	cout << l.Size() << endl;
}

void TestList4()
{
	int array[] = { 1, 2, 3, 4, 5 };
	fxl::List<int> l1(array, array + sizeof(array) / sizeof(array[0]));
	cout << l1.Size() << endl;
	PrintfList(l1);
	l1.Resize(10, 6);
	cout << l1.Size() << endl;
	PrintfList(l1);
	l1.Resize(4);
	cout << l1.Size() << endl;
	PrintfList(l1);
	fxl::List<int> l2(array, array + sizeof(array) / sizeof(array[0]));
	PrintfList(l1);
	PrintfList(l2);
	l1.Swap(l2);
	PrintfList(l1);
	PrintfList(l2);
	l2.Clear();
	cout << l2.Size() << endl;
}
int main()
{
	TestList4();
	system("pause");
	return 0;
}