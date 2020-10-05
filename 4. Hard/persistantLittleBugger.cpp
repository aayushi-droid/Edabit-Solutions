/* Problem-Task : This program finds the multiplicative persistence.
 * Problem Link : https://edabit.com/challenge/j6zxMhNChzi5uKLvx
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin>>num;
    int cnt=0;
	while(num>9)
	{
		int temp=num;
		vector<int> v;
		while(temp!=0)
		{
			v.push_back(temp%10);
			temp/=10;
		}
		num=1;
		for(int i=0;i<v.size();i++)
		{
			num*=v[i];
		}
		cnt++;
	}
	cout<<cnt;
}
