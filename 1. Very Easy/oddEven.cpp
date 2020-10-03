/* 
   Problem-Task : Is the Number Even or Odd?
   Problem Link : https://edabit.com/challenge/65dsmYkHsenAJ3979
*/

#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long

void isOddOrEven(ull n)
{
    cout << ((n & 1) ? "odd" : "even");
}

int main()
{
    ull n;
    cin >> n;
    isOddOrEven(n);
    return 0;
}
