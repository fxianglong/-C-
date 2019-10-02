////设计满足以下定义的List<T>类模板，并用相关数据对程序进行测试
//#include<iostream>
//using namespace std;
//template<class T>
//class List;
//template <class T>
//class Node
//{
//	T data;
//	Node *next;
//public:
//	Node(){ next = NULL; }
//	Node(T data1, Node *p){ data = data1; next = p; }
//	void dispnode(){ cout << data << " "; }
//	friend class List <T>;
//};
//
//template<class T>
//class List
//{
//	Node<T> *L;
//public:
//	List(){ L = new Node<T>; }
//	~List()
//	{
//		Node<T> *p = L, *q = p->next;
//		while (q != NULL)
//		{
//			delete p;
//			p = q;
//			q = p->next;
//		}
//		delete p;
//	}
//	bool ListEmpty()
//	{
//		return (L->next == NULL);
//	}
//	int ListLength()
//	{
//		Node *p = L; int n = 0;
//		while (p->next != NULL)
//		{
//			n++;
//			p = p->next;
//		}
//	}
//	void DispList()
//	{
//		Node<T> *p = L->next;
//		while (p != NULL)
//		{
//			p->dispnode();
//			p = p->next;
//		}
//		cout << endl;
//	}
//	bool GetElem(int i, T &e)
//	{
//		int j = 0;
//		Node<T> *p = L;
//		while (j < i&&p != NULL)
//		{
//			j++; p = p->next;
//		}
//		if (p == NULL)
//			return false;
//		else return true;
//	}
//	int LocateElam(T e)
//	{
//		Node<T> *p = L->next;
//		int i = 1;
//		while (p != NULL&&p->data != e)
//		{
//			p = p->next; i++;
//		}
//		if (p == NULL) return (0);
//		else return (i);
//	}
//	bool ListInsert(int i, T e)
//	{
//		int j = 0;
//		Node<T> *p = L, *s;
//		while (j<i-1&&p!=NULL)
//		{
//			j++; p = p->next;
//		}
//		if (p == NULL) return false;
//		else
//		{
//			s = new Node<T>;
//			s->data = e;
//			s->next = p->next;
//			p->next = s;
//			return true;
//		}
//	}
//	bool ListDelete(int i, T &e)
//	{
//		int j = 0;
//		Node<T> *p = L, *q;
//		while (j<i-1&&p!=NULL)
//		{
//			j++; p = p->next;
//		}
//		if (p == NULL)
//			return false;
//		else
//		{
//			q = p->next;
//			if (q == NULL)
//				return false;
//			p->next = q->next;
//			delete q;
//			return true;
//		}
//	}
//};
//void main()
//{
//	List<char> L;
//	char e;
//	cout << "初始化表L" << endl;
//	cout << (L.ListEmpty() ? "表空" : "表不空") << endl;
//	cout << "插入元素a,b,c,d:" << endl;
//	L.ListInsert(1, 'a');
//	L.ListInsert(2, 'b');
//	L.ListInsert(3, 'c');
//	L.ListInsert(4, 'd');
//	cout << (L.ListEmpty() ? "表空" : "表不空") << endl;
//	cout << ("表1:"); L.DispList();
//	cout << "c的序号:" << L.LocateElam('c') << endl;
//	cout << "在序号3处插入e,f" << endl;
//	L.ListInsert(3, 'e');
//	L.ListInsert(3, 'f');
//	cout << "表L:"; L.DispList();
//	cout << "c的序号:" << L.LocateElam('c') << endl;
//	L.GetElem(3, e);
//	cout << "序号3的元素:" << e << endl;
//	cout << "删除两个元素:" <<endl;
//	L.ListDelete(3, e);
//	L.ListDelete(4, e);
//	cout << "表L:"; L.DispList();
//	cout << "销毁表" << endl;
//	system("pause");
//}

////设计满足以下定义的Stack<T>的模板，并用相关数据对程序进行测试。
//#include<iostream>
//using namespace std;
//template<class T>
//class Stack;
//template<class T>
//class Node
//{
//	T data;
//	Node *next;
//public:
//	Node(T d )
//	{
//		data = d;
//		next = NULL;
//	}
//	friend class Stack<T>;
//};
//template<class T>
//class Stack
//{
//	Node<T> *top;
//public:
//	Stack(){ top = NULL; }
//	~Stack()
//	{
//		Node<T> *p = top, *q=NULL;
//		if (p != NULL) q = p->next;
//		while (p != NULL&&q!=NULL)
//		{
//			delete p;
//			p = q;
//			q = p->next;
//		}
//		delete p;
//	}
//	bool StackEmpty()
//	{
//		return (top == NULL);
//	}
//	void Push(T d)
//	{
//		Node<T> *p = new Node<T>(d);
//		if (top != NULL)
//			p->next = top;
//		top = p;
//	}
//	bool Pop(T &c)
//	{
//		Node<T> *p = top;
//		if (top != NULL)
//		{
//			c = p->data;
//			top = top->next;
//			delete p;
//			return true;
//		}
//		else return false;
//	}
//	bool GetPop(T &c)
//	{
//		Node<T> *p = top;
//		if (top != NULL)
//		{
//			c = p->data; return true;
//		}
//		else return false;
//	}
//};
//void main()
//{
//	Stack<char> s;
//	char c;
//	cout << "初始化栈s" << endl;
//	cout << (s.StackEmpty() ? "栈空" : "栈不空") << endl;
//	cout << "进栈元素a,b,c,d" << endl;
//	s.Push('a');
//	s.Push('b');
//	s.Push('c');
//	s.Push('d');
//	cout << (s.StackEmpty() ? "栈空" : "栈不空") << endl;
//	s.GetPop(c);
//	cout << "栈顶元素:" << c << endl;
//	cout << "出栈次序:" << endl;
//	while (!s.StackEmpty())
//	{
//		s.Pop(c); cout << c << endl;
//	}
//	cout << endl << "销毁栈" << endl;
//	system("pause");
//}

////设计Queue<T>模板，并用相关数据对程序进行调试
//#include<iostream>
//using namespace std;
//const int MaxSize = 100;
//template<class T>
//class Queue
//{
//	T *qu;
//	int front, rear;
//public:
//	Queue()
//	{
//		qu = new T[MaxSize];
//		front = rear = 0;
//	}
//	~Queue()
//	{
//		delete[] qu;
//	}
//	bool QueueEmpty()
//	{
//		return (front == rear);
//	}
//	bool enQueue(T e)
//	{
//		if ((rear + 1) % MaxSize == front)
//			return false;
//		rear = (rear + 1) % MaxSize;
//		qu[rear] = e;
//		return true;
//	}
//	bool deQueue(T &e)
//	{
//		if (front == rear)
//			return false;
//		front = (front + 1) % MaxSize;
//		e = qu[front];
//		return true;
//	}
//};
//void main()
//{
//	Queue<char> q;
//	char e;
//	cout << "初始化队列q" << endl;
//	cout << (q.QueueEmpty() ? "队空" : "队不空") << endl;
//	cout << "进队a,b,c,d" << endl;
//	q.enQueue('a');
//	q.enQueue('b');
//	q.enQueue('c');
//	q.enQueue('d');
//	cout << (q.QueueEmpty() ? "对空" : "队不空") << endl;
//	cout << "所有元素出队:";
//	while (q.QueueEmpty())
//	{
//		q.deQueue(e);
//		cout << e << " ";
//	}
//	cout << "销毁队列" << endl;
//	system("pause");
//}