
/* Problem-Task : Power Calculator
power = voltage * current
 * Problem Link : https://edabit.com/challenge/a2D3cva6PKrHyqdXC
*/

#include <iostream>
using namespace std;

int circuitPower(int voltage, int current)
{
    return voltage * current;
}

int main()
{
    int voltage, current;
    cin >> voltage >> current;
    int power = 0;
    power = circuitPower(voltage, current);
    cout << power;
    return 0;
}