//Problem statement : Create a function that transposes a 2D matrix.
//Problem Link : https://edabit.com/challenge/4KaoDvxaFSmf38bPQ
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> transposeMatrix(vector<vector<int>> arr) {
	vector<vector<int>>res(arr[0].size(), vector<int>(arr.size()));
	for (int i = 0; i < arr[0].size(); i++)
		for (int j = 0; j < arr.size() ; j++)
			res[i][j] = arr[j][i];
	return res;
}
int main()
{
	int n, m; //size of matrix
	cin >> n >> m;
	vector<vector<int>>arr(n, vector<int>(m));
	vector<vector<int>>res(m, vector<int>(n));
	for (int i = 0 ; i < n ; i++)
		for (int j = 0; j < m ; j++)
			cin >> arr[i][j];
	res = transposeMatrix(arr);
	for (int i = 0 ; i < m ; i++)
	{
		for (int j = 0; j < n ; j++)
		{
			cout << res[i][j] << " ";
		}
		cout << endl;
	}

}