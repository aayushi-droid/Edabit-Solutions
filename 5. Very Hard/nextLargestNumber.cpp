/* Problem-Task : This program will find the next largest number from same digits
 * Problem Link : https://edabit.com/challenge/WtfjhA6dydKSERz6G
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin>>num;
    string s;
	int temp=num;
	while(temp!=0)
	{
		s.push_back(temp%10+'0');
		temp/=10;
	}
	sort(s.begin(),s.end());
	int ans=INT_MAX;
	do
	{
		int temp=stoi(s);
		if(temp>num)
		{
		    ans=min(ans,temp);
		}
	}
	while(next_permutation(s.begin(),s.end()));
	if(ans==INT_MAX) ans=num;
	cout<<ans;
}
