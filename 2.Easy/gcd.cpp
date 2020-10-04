
/* 
   Problem-Task : Write a function that returns the greatest common divisor (GCD) of two integers.
   Problem Link : https://edabit.com/challenge/6g5Nj6Qz44Sd2NbBQ
*/

#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long

ull gcd(ull a, ull b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main()
{
    ull t;
    cout << "Enter the number of test case: ";
    cin >> t;
    while (t--)
    {
        ull a, b;
        cout << "\nEnter 1st number: ";
        cin >> a;
        cout << "\nEnter 2nd number: ";
        cin >> b;
        cout << endl;
        cout << gcd(a, b);
    }
    return 0;
}
