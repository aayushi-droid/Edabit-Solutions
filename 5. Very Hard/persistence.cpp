/* Problem-Task : The additive persistence of an integer, n, is the number of times you have to replace n with the sum of its digits until n becomes a single digit integer.

The multiplicative persistence of an integer, n, is the number of times you have to replace n with the product of its digits until n becomes a single digit integer.

Create two functions that take an integer as an argument and:

    Return its additive persistence.
    Return its multiplicative persistence.

* Problem Link : https://edabit.com/challenge/vHvu4Wis8RhmQbwXm
*/

#include<bits/stdc++.h>
using namespace std;

int additivePersistence(int n)
{
    int counter=0;
    while(n/10>0)
    {
        counter++;
        int temp=0;
        while(n!=0)
        {
            temp+=n%10;
            n/=10;
        }
        n=temp;
    }
    return counter;
}

int multiplicativePersistence(int n)
{
    int counter=0;
    while(n/10>0)
    {
        counter++;
        int temp=1;
        while(n!=0)
        {
            temp*=n%10;
            n/=10;
        }
        n=temp;
    }
    return counter;
}

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Additive Persistence of n: "<<additivePersistence(n)<<'\n';
    cout<<"Multiplicative Persistence of n: "<<multiplicativePersistence(n)<<'\n';
    return 0;
}