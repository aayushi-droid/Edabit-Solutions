/* Problem-Task :Add up the Numbers from a Single Number
 * Problem Link : https://edabit.com/challenge/XDx6JoaumAimRHgEt
*/

#include<iostream>
using namespace std;

int addUp(int N)
{
    int sum=0;
    for(int i=1; i<=N;i++)
        sum+=i;
    return sum;
}


int main()
{
    int N;
    cin>>N;

    cout<<addUp(N);
}