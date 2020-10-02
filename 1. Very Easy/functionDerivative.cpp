/* Problem-Task : Create a function that takes numbers b and m as arguments and returns the derivative of the function f(x)=x^b with respect to x at the point where x=m, where band m are constants.
  * Problem Link : https://edabit.com/challenge/sR3aNNQ9kJoSurDLK
 */
 
#include <bits/stdc++.h>
using namespace std;

int derivative(int b, int m) {
  return b*pow(m, b-1);
}

int main() {
  int b, m;
  cin>>b>>m;
  cout<<derivative(b, m);
  return 0;
}
