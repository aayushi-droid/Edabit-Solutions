/* Problem-Task : This program will check whether number is less than zero or not
 * Problem Link : https://edabit.com/challenge/7KFAJSSp3pmE8bHhK
*/

#include <iostream>
using namespace std;

int lessThanOrEqualToZero(int number)
{
    if (number <= 0)
    {
        return true;
    }
    return false;
}

int main()
{
    cout << lessThanOrEqualToZero(5) << endl;
    cout << lessThanOrEqualToZero(0) << endl;
    cout << lessThanOrEqualToZero(2);
    return 0;
}