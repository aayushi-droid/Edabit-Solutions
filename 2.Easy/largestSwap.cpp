/* Problem-Task : Function that takes a two-digit number and determines if it's the largest of two possible digit swaps.
 * Problem Link : https://edabit.com/challenge/mQbddasCYNTTzQEgm
*/
#include <iostream>
using namespace std;

bool largestSwap(int num)
{
    int rev = 0, d;
    int dup = num;
    while (num > 0)
    {
        d = num % 10;
        num /= 10;
        rev = rev * 10 + d;
    }
    if (dup >= rev)
        return true;
    else
        return false;
}

int main()
{
    int num;
    cin >> num;

    cout << largestSwap(num);
    return 0;
}