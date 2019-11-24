//#include<iostream>
//using namespace std;
//int main()
//{
//	int n = 0;
//	while (cin >> n)
//	{
//		int count = 1;
//		if (n<0 || n>50000)
//			return -1;
//		for (int i = 2; i<n; i++)
//		{
//			int sum = 1;
//			for (int j = 2; j<i; i++)
//			{
//				if (i%j == 0)
//				{
//					sum += i;
//				}
//			}
//			if (sum==i)
//				count++;
//		}
//		cout << count << endl;
//	}
//	return 0;
//}


#include<iostream>
using namespace std;
int count(int n)
{
	int add = 0; int sum = 0;
	while (n != 0)
	{
		for (int i = 1; i < n; i++)
		{
			if (n%i == 0)
			{
				sum += 1;
			}
			else continue;
		}
		if (sum == n)
			add++;
		n--;
		sum = 0;
	}
	if (n == 0)
		return add;
	return -1;
}
int main()
{
	int num = 0;
	int ret = 0;
	while (cin >> num){
		ret = count(num);
		cout << ret << endl;
	}
	return 0;
}