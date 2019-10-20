////����������¶����List<T>��ģ�壬����������ݶԳ�����в���
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
//	cout << "��ʼ����L" << endl;
//	cout << (L.ListEmpty() ? "���" : "����") << endl;
//	cout << "����Ԫ��a,b,c,d:" << endl;
//	L.ListInsert(1, 'a');
//	L.ListInsert(2, 'b');
//	L.ListInsert(3, 'c');
//	L.ListInsert(4, 'd');
//	cout << (L.ListEmpty() ? "���" : "����") << endl;
//	cout << ("��1:"); L.DispList();
//	cout << "c�����:" << L.LocateElam('c') << endl;
//	cout << "�����3������e,f" << endl;
//	L.ListInsert(3, 'e');
//	L.ListInsert(3, 'f');
//	cout << "��L:"; L.DispList();
//	cout << "c�����:" << L.LocateElam('c') << endl;
//	L.GetElem(3, e);
//	cout << "���3��Ԫ��:" << e << endl;
//	cout << "ɾ������Ԫ��:" <<endl;
//	L.ListDelete(3, e);
//	L.ListDelete(4, e);
//	cout << "��L:"; L.DispList();
//	cout << "���ٱ�" << endl;
//	system("pause");
//}

////����������¶����Stack<T>��ģ�壬����������ݶԳ�����в��ԡ�
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
//	cout << "��ʼ��ջs" << endl;
//	cout << (s.StackEmpty() ? "ջ��" : "ջ����") << endl;
//	cout << "��ջԪ��a,b,c,d" << endl;
//	s.Push('a');
//	s.Push('b');
//	s.Push('c');
//	s.Push('d');
//	cout << (s.StackEmpty() ? "ջ��" : "ջ����") << endl;
//	s.GetPop(c);
//	cout << "ջ��Ԫ��:" << c << endl;
//	cout << "��ջ����:" << endl;
//	while (!s.StackEmpty())
//	{
//		s.Pop(c); cout << c << endl;
//	}
//	cout << endl << "����ջ" << endl;
//	system("pause");
//}

////���Queue<T>ģ�壬����������ݶԳ�����е���
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
//	cout << "��ʼ������q" << endl;
//	cout << (q.QueueEmpty() ? "�ӿ�" : "�Ӳ���") << endl;
//	cout << "����a,b,c,d" << endl;
//	q.enQueue('a');
//	q.enQueue('b');
//	q.enQueue('c');
//	q.enQueue('d');
//	cout << (q.QueueEmpty() ? "�Կ�" : "�Ӳ���") << endl;
//	cout << "����Ԫ�س���:";
//	while (q.QueueEmpty())
//	{
//		q.deQueue(e);
//		cout << e << " ";
//	}
//	cout << "���ٶ���" << endl;
//	system("pause");
//}