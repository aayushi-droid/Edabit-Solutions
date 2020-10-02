
/* Problem-Task : Is the Number Even or Odd?
 * Problem Link : https://edabit.com/challenge/65dsmYkHsenAJ3979
*/

#include <iostream>
using namespace std;

int isEvenOrOdd(int number)
{
    if (number % 2 == 0)
    {
        cout << "even";
    }
    else
    {
        cout << "odd";
    }
}

int main()
{
    int number;
    cin >> number;
    cout << isEvenOrOdd(number);
    return 0;
}
