/* Problem-Task : This program will recursively calculate the nth given number in Fibonacci's sequence
 * Problem Link : https://edabit.com/challenge/BfWjk87JLY5roKzg6
*/

#include <bits/stdc++.h>

using namespace std;

long long fibonacciNumber(long long n)
{
    if (n == 1)
        return 1;
    if (n == 2)
        return 1;
    return fibonacciNumber(n - 1) + fibonacciNumber(n - 2);
}
int main()
{

    long long n;
    cin >> n;
    cout << fibonacciNumber(n);
    return 0;
}