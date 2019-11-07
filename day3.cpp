//#include<iostream>
//using namespace std;
//#include<vector>
//int main()
//{
//	int n = 0;
//	while (cin >> n)
//	{
//		vector<int> a;
//		a.resize(n);
//		for (unsigned int i = 0; i<n; i++)
//			cin >> a[i];
//		int j = 0, count = 0;
//		while (j<n-1)
//		{
//			if (a[j] <= a[j + 1])
//			{
//				while (a[j]<=a[j + 1])
//				{
//					j++;
//				}
//				count++; j++;
//			}
//			else {
//				while (a[j] >= a[j + 1])
//				{
//					j++;
//				}
//				count++; j++;
//			}
//		}
//		cout << count << endl;
//	}
//	system("pause");
//	return 0;
//}
#include<iostream>
using namespace std;
#include<string>
#include<vector>
int main()
{
	string s;
	cin >> s; int max = 0;
	vector<vector<char>> a;
	for (int i = 0; i<s.size(); i++)
	{
		int length = 0; vector<char> v;
		while (s[i] >= '0'&&s[i] <= '9')
		{
			v.push_back(s[i]);
			i++;
			length++;
		}
		if (max<length)
		{
			max = length;
			a.push_back(v);
		}
	}
	vector<char> res = a.back();
	for (int i = 0; i < res.size(); i++)
		cout << res[i];
	system("pause");
	return 0;
}