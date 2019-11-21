//#include<iostream>
//using namespace std;
//int Isleap(int y)
//{
//	if (((y % 4==0) && (y % 100!=0)) || (y % 400==0))
//		return 1;//ÈòÄê
//	else return 0;//Æ½Äê
//}
//int main()
//{
//	int year = 0, month = 1, day = 1; int num = 0;
//	int m_day[] = {0,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	cin >> year >> month >> day;
//	for (int i = 0; i < month; i++)
//		num += m_day[i];
//	num += day;
//	if (Isleap(year) && month>2)
//		num += 1;
//	cout << num << endl;
//	system("pause");
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int year = 0, month = 1, day = 1;
//	int m_day[] = { 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365 };
//	while (cin >> year >> month >> day){
//		int num = m_day[month - 1] + day;
//		if (((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) && month>2)
//			num += 1;
//		cout << num << endl;
//		system("pause");
//		return 0;
//	}
//}

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n, a[1000];
int DFS(int step, int sum, int mul)
{
	int r = 0;     
	for (int i = step + 1; i<n; i++)     
	{ 
		int S = sum + a[i];         
		int M = mul*a[i];        
		if (S > M)            
			r += 1 + DFS(i, S, M);         
		else if (a[i] == 1)             
			r += DFS(i, S, M);         
		else             
			break;         
		while (i<n - 1 && a[i] == a[i + 1])             
			i++;
	}     
	return r;
}

int main()
{
	cin >> n;     
	for (int i = 0; i<n; i++)         
		cin >> a[i];     
	sort(a, a + n);     
	cout << DFS(0, 1, 1) << endl;     
	return 0;
}