//#include<stdio.h>
//#include<string.h>
//#define N 100
//int ans = 0;
//typedef struct
//{
//	int elem[N];
//	int last;
//} seqlist;
//void inslist(seqlist *L, int i, int e)
//{
//	if (i<1 || i>L->last + 2 || L->last >= N - 1)//1<=i<=L->last+2
//	{
//		printf("插入错误！\n\n");
//		ans = 1;
//		return;
//	}
//	for (int k = L->last; k >= i - 1; k--)
//		L->elem[k + 1] = L->elem[k];
//	L->elem[i - 1] = e;
//	L->last++;
//	return;
//}
//void del(seqlist *L, int i)  //1<=i<<L->last+1
//{
//	if ((i<1) || (i>L->last + 1))
//	{
//		printf("删除错误！\n\n");
//		ans = 1;
//		return;
//	}
//	for (int k = i; k <= L->last; k++)
//		L->elem[k - 1] = L->elem[k];
//	L->last--;
//	return;
//}
//void Operation()
//{
//	printf("首先输入元素m，然后输入m个元素\n");
//	printf("在第x个位置前插入元素y请输入:I x y\n");
//	printf("删除第x个元素请输入: D x\n输入'E'结束\n");
//}
//void prin(seqlist *L)
//{
//	for (int i = 0; i <= L->last; i++)
//		printf("%d ", L->elem[i]);
//	printf("\n\n");
//}
//int main()
//{
//	char Q;
//	Operation();
//	int n, m, i, j, x, y;
//	seqlist *L, test;
//	scanf("%d", &m);
//	for (i = 0; i<m; i++)
//		scanf("%d", &test.elem[i]);
//	test.last = m - 1;
//	L = &test;
//	getchar();
//	while (scanf("%c", &Q))
//	{
//		ans = 0;
//		if (Q == 'E')break;
//		if (Q == 'D')
//		{
//			scanf("%d", &x);
//			del(L, x);
//			if (ans) continue;
//			printf("删除第%d个元素得：\n", x);
//			prin(L);
//			continue;
//		}
//		if (Q == 'I')
//		{
//			scanf("%d%d", &x, &y);
//			inslist(L, x, y);
//			if (ans) continue;
//			printf("在第%d个位置前插入元素%d得：\n", x, y);
//			prin(L);
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//#include<malloc.h>
//#include<stdlib.h>
//#define N 100
//typedef int SLDataType;
//typedef struct Seqlist
//{
//	SLDataType array[N];
//	size_t size;
//}Seqlist;
//typedef struct SeqList
//{
//	SLDataType* array;
//	size_t size;
//	size_t capicity;
//}SeqList;
//
////初始化
//void SeqListInit(SeqList* psl, size_t capacity)
//{
//	assert(psl);
//	if (capacity == 0)
//	{
//		psl->array = NULL;
//		psl->size = 0;
//		psl->capicity = 0;
//	}
//	else
//	{
//		psl->array = (SLDataType*)malloc(sizeof(SLDataType)*capacity);
//		psl->size = 0;
//		psl->capicity = capacity;
//		assert(psl->array);
//	}
//}
//
////销毁
//void SeqListDestory(SeqList* psl)
//{
//	assert(psl);
//	free(psl->array);
//	psl->array = NULL;
//	psl->capicity = 0;
//	psl->size = 0;
//}
//
////容量检测
//void CheckCapacity(SeqList* psl)
//{
//	if (psl->size == psl->capicity)
//	{
//		SLDataType* tmp;
//		if (psl->capicity == 0)
//		{
//			psl->capicity = 2;
//		}
//		else
//		{
//			tmp = (SLDataType*)realloc(psl->array, psl->capicity * 2 * sizeof(SLDataType));
//			assert(tmp);
//			psl->array = tmp;
//			psl->capicity *= 2;
//		}
//	}
//}
//
////尾插
//void SeqListPushBack(SeqList* psl, SLDataType x)
//{
//	assert(psl);
//	CheckCapacity(psl);
//	psl->array[psl->size] = x;
//	psl->size++;
//}
//
////尾删
//void SeqListPopBack(SeqList* psl)
//{
//	assert(psl);
//	if (psl->size > 0)
//	{
//		psl->size--;
//	}
//}
//
////头插
//void SeqListPushFront(SeqList* psl, SLDataType x)
//{
//	assert(psl);
//	int end;
//	CheckCapacity(psl);
//	end = psl->size;
//	while (end >= 1)
//	{
//		psl->array[end] = psl->array[end - 1];//注意条件，避免越界访问
//		end--;
//	}
//	psl->array[0] = x;
//	psl->size++;
//}
//
////头删
//void SeqListPopFront(SeqList* psl)
//{
//	assert(psl);
//	if (psl->size > 0)
//	{
//		size_t start;
//		start = psl->array[0];
//		while (start < psl->size - 1)
//		{
//			psl->array[start] = psl->array[start + 1];
//			start++;
//		}
//		psl->size--;
//	}
//}
//
////查找
//int SeqListFind(SeqList* psl, SLDataType x)
//{
//	assert(psl);
//	size_t i = 0;
//	for (i = 0; i < psl->size; i++)
//	{
//		if (psl->array[i] == x)
//		{
//			return i;
//		}
//	}
//	return -1;
//}
//
////任何pos位置的插入数据
//void SeqListInsert(SeqList* psl, size_t pos, SLDataType x)
//{
//	int end;
//	assert(psl);
//	CheckCapacity(psl);
//	end = psl->size - 1;
//	while ((int)pos <= end)
//	{
//		psl->array[end + 1] = psl->array[end];
//		end--;
//	}
//	psl->array[pos] = x;
//	psl->size++;
//}
//
////删除pos位置的数据
//void SeqListErase(SeqList* psl, size_t pos)
//{
//	assert(psl);
//	size_t start = pos;
//	while (start<psl->size - 1)
//	{
//		psl->array[start] = psl->array[start + 1];
//		start++;
//	}
//	psl->size--;
//}
//
////删除指定数据
//void SeqListRemove(SeqList* psl, SLDataType x)
//{
//	assert(psl);
//	size_t  pos;
//	pos = SeqListFind(psl, x);
//	if (pos != -1)
//	{
//		SeqListErase(psl, pos);
//	}
//}
//
////修改某个位置(下标)的数据
//void SeqListModify(SeqList* psl, size_t pos, SLDataType x)
//{
//	assert(psl);
//	psl->array[pos] = x;
//}
//
////输出顺序表
//void SeqListPrint(SeqList* psl)
//{
//	size_t i = 0;
//	assert(psl);
//	for (i = 0; i < psl->size; i++)
//	{
//		printf("%3d ", psl->array[i]);
//	}
//	printf("\n");
//}
//
//void SeqListBubbleSort(SeqList* psl)//冒泡排序
//{
//	assert(psl);
//	size_t i = 0;
//	size_t j = 0;
//	for (i = 0; i < psl->size - 1; i++)
//	{
//		int flag = 0;
//		for (j = 0; j < psl->size - 1 - i; j++)
//		{
//			if (psl->array[j]>psl->array[j + 1])
//			{
//				SLDataType tmp = psl->array[j + 1];
//				psl->array[j + 1] = psl->array[j];
//				psl->array[j] = tmp;
//				flag = 1;
//			}
//		}
//		if (0 == flag)
//		{
//			return;
//		}
//	}
//}
//
//int BinarySearch(SeqList* psl, SLDataType x)//二分查找
//{
//	assert(psl);
//	int left = 0;
//	int right = psl->size - 1;
//	while (left <= right)
//	{
//		SLDataType mid = left + (right - left);
//		if (psl->array[mid] < x)
//		{
//			left = mid + 1;
//		}
//		else if (psl->array[mid] > x)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return 0;
//}
//
//void SeqListRemoveAll(SeqList* psl, SLDataType x)//要求时间复杂度是O(N) 空间复杂度O(1)
//{
//	assert(psl);
//	SLDataType ret = 0;
//	size_t i = 0;
//	while (i < psl->size - 1)
//	{
//		ret = SeqListFind(psl, x);
//		if (ret != -1)
//		{
//			SeqListRemove(psl, x);
//		}
//		i++;
//	}
//}
//
//void TestSeqList()
//{
//	SeqList sl;
//	SeqListInit(&sl, 10);
//
//	SeqListPushBack(&sl, 1);
//	SeqListPushBack(&sl, 9);
//	SeqListPushBack(&sl, 2);
//	SeqListPushBack(&sl, 6);
//	SeqListPushBack(&sl, 3);
//	SeqListPushBack(&sl, 7);
//	SeqListPushBack(&sl, 4);
//	SeqListPushBack(&sl, 8);
//	SeqListPushBack(&sl, 5);
//	SeqListPrint(&sl);
//
//	SeqListPopBack(&sl);
//	SeqListPrint(&sl);
//
//	SeqListPushFront(&sl, 0);
//	SeqListPrint(&sl);
//
//	SeqListPopFront(&sl);
//	SeqListPrint(&sl);
//
//	SeqListFind(&sl, 4);
//	SeqListInsert(&sl, 2, 6);
//	SeqListPrint(&sl);
//
//	SeqListErase(&sl, 3);
//	SeqListPrint(&sl);
//
//	SeqListModify(&sl, 1, 7);
//	SeqListPrint(&sl);
//
//	SeqListRemove(&sl, 7);
//	SeqListPrint(&sl);
//
//	SeqListBubbleSort(&sl);
//	SeqListPrint(&sl);
//
//	printf("%d\n", BinarySearch(&sl, 2));
//
//	SeqListRemoveAll(&sl, 6);
//	SeqListPrint(&sl);
//
//}
//
//
//
//int main()
//{
//	TestSeqList();
//	system("pause");
//	return 0;
//}

//#include<iostream>
//#include<algorithm>
//using namespace std;
//bool Issushu(int x)
//{
//	for (size_t i = 2; i <= sqrt(x); i++)
//	{
//		if (x%i == 0)
//			return false;
//	}
//	return true;
//}
//int main()
//{
//	int x;
//	while (cin >> x)
//	{
//		int mid = x / 2;
//		for (int i = mid; i > 0; i++)
//		{
//			if (Issushu(i) && Issushu(x - i)){
//				cout << i << endl;
//				cout << x - i << endl;
//				break;
//			}
//		}
//	}
//	return 0;
//}

//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//void get_yue_shu(int n,vector<int>& a)
//{
//	for (int i = 2; i <= sqrt(n); i++){
//		if (n%i == 0){
//			a.push_back(i);
//			if (n / i != i)
//				a.push_back(n / i);
//		}
//	}
//}
//int main()
//{
//	int n, m;
//	while (cin >> n >> m)
//	{
//		vector<int> res(m + 1, 0);
//		res[n] = 1;
//		for (int i = n; i <= m; i++){
//			vector<int>a;
//			if (res[i] == 0)
//				continue;
//			get_yue_shu(i, a);
//			for (int j = 0; j<a.size(); j++){
//				if ((a[j] + i) <= m&&res[a[j] + i] != 0)
//					res[a[j] + i] = min(res[a[j] + i], res[i] + 1);
//				else if ((a[j] + i) <= m)
//					res[a[j] + i] = res[i] + 1;
//			}
//		}
//		if (res[m] == 0)
//			cout << -1 << endl;
//		else
//			cout << res[m] - 1 << endl;
//	}
//	return 0;
//}

#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	string str;
	while (getline(cin, str))
	{
		bool flag = false;
		vector<string> v;
		string row;
		for (int i = 0; i < str.size(); i++)
		{
			if (flag)
			{
				if (str[i] != '\"')
					row += str[i];
				else flag = false;
			}
			else {
				if (str[i] == ' ')
				{
					v.push_back(row);
					row = "";
				}
				else if (str[i] == '\"')flag = true;
				else row = +str[i];
			}
		}
		v.push_back(row);
		cout << v.size() << endl;
		for (auto e : v) cout << e << endl;
	}
	return 0;
}