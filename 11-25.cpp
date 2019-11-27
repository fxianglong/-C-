//#include<iostream>
//using namespace std;
//int Fun(int N, int i)
//{
//	if (i == 1 || i == 2 * N - 1)
//		return 1;
//	if (i<1 || i>2 * N - 1)
//		return 0;
//	else
//		return Fun(N - 1, i - 1) + Fun(N - 1, i) + Fun(N - 1, i + 1);
//}
//int main()
//{
//	int N; cin >> N;
//	for (int i = 0; i <= 2 * N - 1; i++)
//	{
//		if (Fun(N, i) % 2 == 0)
//		{
//			cout << i << endl; break;
//		}
//		else if (i = 2 * N - 1)
//			cout << "-1" << endl;
//	}
//	return 0;
//}

//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//	char ss[512];
//	string s;
//	string s1, s2;
//	int i, j, len1, len2, lmax;
//	while (cin >> s1 >> s2)
//	{
//		len1 = s1.length();
//		len2 = s2.length();
//		reverse(s1.begin(), s1.end());
//		reverse(s2.begin(), s2.end());
//		lmax = len1>len2 ? len1 : len2;
//		int temp = 0;
//		int sum[512];
//		int k = 0, j;
//		for (i = 0; i<lmax; i++)
//		{
//			int a = 0, b = 0;
//			if (i<len1)
//				a = s1[i] - '0';
//			else
//				a = 0;
//			if (i<len2)
//				b = s2[i] - '0';
//			else
//				b = 0;
//			int result = a + b + temp;
//			temp = result>9 ? 1 : 0;
//			sum[k++] = result % 10;
//		}
//		if (temp>0)
//		{
//			sum[k] = 1;
//			for (j = k; j >= 0; j--)
//				cout << sum[j];
//		}
//		else
//		{
//			for (j = k - 1; j >= 0; j--)
//				cout << sum[j];
//		}
//		cout << endl;
//	}
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int Sum(int x)
//{
//	int oneCount = 1;
//	int twoCount = 0;
//	int threeCount = 0;
//
//	int start = 1;
//	while (start < x)
//	{
//		int tmp = oneCount;
//		oneCount = twoCount + threeCount;
//		twoCount = tmp;
//		threeCount = oneCount;
//	start++;
//	}
//	return oneCount + twoCount + threeCount;
//}
//int main()
//{
//	int m;
//	while (cin >> m)
//	{
//		cout << Sum(m) << endl;
//	}
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//bool IsTpf(const char* p, const char* q)
//{
//	if (*p == '\0' && *q == '\0')
//		return true;
//	else if (*p == '\0' || *q == '\0')
//		return false;
//	if (*p == '?')
//	{
//		return IsTpf(p + 1, q + 1);
//	}
//	else if (*p == '*')
//	{
//		return IsTpf(p + 1, q) || IsTpf(p + 1, q + 1) || IsTpf(p + 1, q + 1);
//	}
//	else if (*p == *q)
//	{
//		return IsTpf(p + 1, q + 1);
//	}
//	return false;
//}
//int main()
//{
//	string s1, s2;
//	while (cin >> s1 >> s2)
//	{
//		if (IsTpf(s1.c_str(), s2.c_str()))
//			cout << "true" << endl;
//		else
//		{
//			cout << "false" << endl;
//		}
//	}
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int N = 0;
//	while (cin >> N)
//	{
//		int count = 0; int i = 0;
//		for (i = 0; i <= N; i++)
//		{
//			for (int j = 0; j <= N; j++)
//			{
//				if ((i + 2 * j) == N)
//					count++;
//			}
//		}
//		cout << count << endl;
//	}
//	return 0;
//}

//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	int i = 0, j = 0;
//	int N = 0; int x = 0;
//	vector<int> str;
//	while (cin >> x)
//	{
//		if (x != EOF)
//			str.push_back(x);
//	}
//	cin >> N;
//	for (i = 0; i < str.size();i++)
//	for (j = i + 1; j < str.size(); j++)
//	{
//		if ((str[i] + str[j])==N)
//	cout << "[" << i << "," <<j<<"]" << endl;
//	}
//	return 0;
//}

//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	vector<int> a;
//	int arr[10000] = { 0 };
//	int N = 0; int k = 0;
//	cin >> N >> k;
//	for (int i = 0; i < N; i++)
//		cin >> arr[i];
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = i + 1; j < N; j++)
//		{
//			if (arr[i]>arr[j])
//				swap(arr[i], arr[j]);
//			else
//			{
//				a.push_back(arr[i]);
//			}
//		}
//	}
//	cout << a[k - 1] << endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int x = 0; int R = 0;
//	cin >> x;
//	cin >> R; int out = 0;
//	while (x)
//	{
//		out += 10 * (x%R);
//		x = x / R;
//	}
//	cout << out << endl;
//	return 0;
//}

#include<iostream>
#include<string>
using namespace std;
int sz(char s)
{
	if (s == 'I') return 1;
	if (s == 'V')return 5;
	if (s == 'X') return 10;
	if (s == 'L') return 50;
	if (s == 'C') return 100;
	if (s == 'D') return 500;
	if (s == 'M') return 1000;
}
int main()
{
	string s; char arr[10000] = { 0 };
	scanf("%s", arr); int sum = 0;
	for (int i = 0; i < strlen(arr); i++)
	{
		if (sz(arr[i]) < sz(arr[i + 1]))
			sum -= sz(arr[i]);
		else
		{
			sum += sz(arr[i]);
		}	
	}
	cout << sum << endl;
	return 0;
}