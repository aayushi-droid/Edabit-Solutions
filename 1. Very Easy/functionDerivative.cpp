/* Problem-Task : Derivative of a Function
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
