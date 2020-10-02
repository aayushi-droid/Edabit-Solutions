/* Problem-Task : Function that takes a two-digit number and determines if it's the largest of two possible digit swaps.
 * Problem Link : https://edabit.com/challenge/mQbddasCYNTTzQEgm
*/
#include <iostream>
using namespace std;

bool largestSwap(int num)
{    
    int temp = (num%10)*10 + (num/10);

    if(temp < num)
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