/* Problem-Task : Split 25. Split numbers for maximum product
 * Problem Link : https://edabit.com/challenge/PbtMHCLm83NwqSnnS
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin>>num;
    if(num<=4) cout<<num;
    else if(num==5)
    {
        cout<<6;
    }
    else
    {
    	if(num%3==0)
    	{
    		int k=num/3;
    		cout<<pow(3,k);
    	}
    	else
    	{
    		int k=num/3 ;
    		int last = num%3;
    		cout<<max(pow(3,k)*last,pow(3,k-1)*(last+3));
    	}
    }
}
