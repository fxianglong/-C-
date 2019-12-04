#include<iostream>
#include<string>
#include<vector>
using namespace std;
int N, M;
vector<vector<int>> mg;
vector<vector<int>> path_now;
vector<vector<int>> path_best;
void mgtake(int i,int j)
{
	mg[i][j] = 1;
	path_now.push_back({ i, j });
	if (i == N - 1 && j == M - 1)
	if (path_best.empty() || path_now.size() < path_best.size())
		path_best = path_now;

	if (i - 1 >= 0 && mg[i - 1][j] == 0)
		mgtake(i - 1, j);
	if (i + 1 < N && mg[i + 1][j] == 0)
		mgtake(i + 1, j);
	if (j - 1 >= 0 && mg[i][j - 1] == 0)
		mgtake(i, j - 1);
	if (j + 1 < M && mg[i][j + 1] == 0)
		mgtake(i, j + 1);
	mg[i][j] = 0;
	path_now.pop_back();
}
int main()
{
	while (cin >> N >> M)
	{
		mg = vector<vector<int>>(N, vector<int>(M, 0));
		path_now.clear();
		path_best.clear();
		for (auto& i : mg)
		{
			for (auto &j : i)
				cin >> j;
		}
		mgtake(0, 0);
		for (auto i : path_best)
			cout << '(' << i[0] << ',' << i[1] << ')' << endl;
	}
	return 0;
}