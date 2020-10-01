/* Problem-Task : This program checks whether numbers are consecutive
 * Problem Link : https://edabit.com/challenge/TMxknsmodKM3HDbYt
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
	int flag=0;
	int k=arr[0];
	for(int i=0;i<arr.size();i++)
	{
		if(arr[i]!=k+i)
		{
			flag=1;
			break;
		}
	}
	if(flag==0) cout<<"Possible";
	else cout<<"Not possible";
}
