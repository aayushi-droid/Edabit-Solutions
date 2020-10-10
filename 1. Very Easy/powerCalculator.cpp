/* Problem-name : Power Calculator
Problem-task : Create a function that takes voltage and current and returns the calculated power.
Problem-Link : https://edabit.com/challenge/a2D3cva6PKrHyqdXC
*/

#include<bits/stdc++.h>

using namespace std;

int circuitPower(int v,int c)
{
    return (v * c);
}

int main()
{
    int pow,volt,curr;
    cin>>volt>>curr;
    pow = circuitPower(volt, curr);
    cout<<pow;
}