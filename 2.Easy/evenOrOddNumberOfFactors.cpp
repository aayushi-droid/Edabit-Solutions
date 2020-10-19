/* Problem-Task : This function will return "even" if a number has an even number of factors and "odd" if a number has an odd number of factors.
 * Problem Link : https://edabit.com/challenge/zaHon4mMJJorEhBXx
*/
#include <iostream>
using namespace std;

char *factor_group(int n)
{
    int i, c = 0;
    for (i = 1; i <= n; ++i)
        if (n % i == 0)
            c++;
    if (c % 2 == 0)
        return "even";
    return "odd";
}

int main()
{
    cout << factor_group(33) << endl;
    //factor_group(33) ➞ "even"
    cout << factor_group(36) << endl;
    //factor_group(36) ➞ "odd"
    return 0;
}