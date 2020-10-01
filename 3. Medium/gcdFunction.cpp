//Problem statement : Create a function that takes two numbers as arguments and returns the Greatest Common Devisor (GCD) of the two numbers.
//Problem Link : https://edabit.com/challenge/BzEQsTSmPATbsZJCR
#include <iostream>
using namespace std;
int GCD(int a ,int b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    if (a == b)
        return a;
    if (a > b)
        return GCD(a-b, b);
    return GCD(a, b-a);
}
int main()
{
	int x,y;
	cin>>x>>y;
	cout<<"GCD OF THE ENTERED NUMBER IS : "<<GCD(x,y)<<endl;
	return 0;
}
