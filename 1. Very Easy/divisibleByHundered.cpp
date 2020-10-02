
/* Problem-Task : Multiple of 100
 * Problem Link : https://edabit.com/challenge/b3tArYGfMfmq78MoS
*/

#include <iostream>
using namespace std;

void divisible(int n)
{
    if(n%100==0)
	{
		cout<<"true";
	}    
	else
	{
		cout<<"false";
	}
}

int main()
{
    int n;
    cin>>n;
    divisible(n);
    return 0;
}
