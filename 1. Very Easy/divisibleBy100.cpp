/* Problem-Task :Create a function that takes an integer and return true if it's divisible by 100, otherwise return false.
    * Problem : https://edabit.com/challenge/qMr6wYGr6NaXAPQGF
*/
#include <bits/stdc++.h>
using namespace std;

string divisible(int number)
{
    if (number % 100 == 0)
        return "true";
    else
        return "false";
}

int main()
{

    cout << divisible(1000);
    //divisible(1000) ➞ true
    return 0;
}
