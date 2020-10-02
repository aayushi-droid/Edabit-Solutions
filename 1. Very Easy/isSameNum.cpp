
/* Problem-Task : Are the Numbers Equal?
 * Problem Link : https://edabit.com/challenge/uSiEPX7YrhNsqtzMr
*/

#include <iostream>
using namespace std;

int isSameNum(int num1 ,int num2)
{
    if(num1==num2)
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
    int num1,num2;
    cin>>num1>>num2;
    isSameNum(num1,num2);
    return 0;
}
