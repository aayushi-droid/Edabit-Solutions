//Similar to rotating an image as image can be considered as 2D array
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<vector<int> >v(n,vector<int>(n));
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>v[i][j];
		}
	}
	//Taking transpose
	vector<vector<bool> >check(n,vector<bool>(n,false));
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i!=j && !check[i][j] && !check[j][i])
			{
				swap(v[i][j],v[j][i]);
				check[i][j]=true;
				check[j][i]=true;
			}
		}
	}
	//Pairwise swaping coloums from outside --->consider each row as 1D array then it can be reversed in O(N) space and no extra space
	for(int i=0;i<n/2;i++)
	{
		for(int j=0;j<n;j++)
			swap(v[j][i],v[j][n-1-i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<v[i][j]<<"  ";
		}
		cout<<endl;
	}

}