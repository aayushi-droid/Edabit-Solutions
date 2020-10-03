/*
Problem statement : The nth Fibonacci number
Probelm Link : https://edabit.com/challenge/BfWjk87JLY5roKzg6
*/

#include<iostream>
using namespace std;

// Function that find nth fibonacci number
int fib(int n) 
{ 
    if(n==0 || n==1)
    {
        return n;
    }

    return fib(n-1)+fib(n-2);
} 
  

int main() 
{ 
    int n;
    cin>>n;
    int ans = fib(n);
    cout<<ans;
} 