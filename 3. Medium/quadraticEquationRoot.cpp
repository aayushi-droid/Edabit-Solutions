/*
Problem statement : Create a function to find only the root value of x in any quadratic equation ax^2+bx+c. The problem will take 3 arguments :

a as the co-efficient of x^2
b as the co-efficient of x
c as the constant term

Problem Link : https://edabit.com/challenge/nasKYub6qEAfQcFuy
Question category : Medium
*/

#include <iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
   int a,b,c;
   cin>>a>>b>>c;

   int ans= root(a,b,c);
   cout<<ans;

}
