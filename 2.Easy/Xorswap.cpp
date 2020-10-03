/*
Problem Statement -  switch 2 variables using the XOR operator

Problem Link - https://edabit.com/challenge/dHYXiEXydZxrwntBq
*/

#include<iostream>
using namespace std;

// Function to swap 2 variables 
void pair(int a,int b) 
{ 
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<a;
    cout<<" ";
    cout<<b;
} 
  

int main() 
{ 
    int a,b;
    cin>>a;
    cin>>b;
    pair(a,b);
} 