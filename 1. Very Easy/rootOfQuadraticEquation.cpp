#include <iostream>
#include<bits/stdc++.h>

using namespace std;
// This program will find only the root value of quadratic equation.
// problem: https://edabit.com/challenge/nasKYub6qEAfQcFuy

int root(int a,int b,int c)
{
    int root= (-b+sqrt(b*b-4*a*c))/(2*a);
    return root;
}
// a(x^2)+bx+c is the quadratic equation
int main()
{
   int a,b,c;
   cin>>a>>b>>c;

   int ans= root(a,b,c);
   cout<<ans;

}
