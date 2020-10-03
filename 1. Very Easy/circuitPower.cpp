
/* Problem-Task : Power Calculator
 * Problem Link : https://edabit.com/challenge/a2D3cva6PKrHyqdXC
*/

#include <iostream>
using namespace std;

int circuitPower(int vol, int cur)
{
    return vol*cur;
}

int main()
{
    int voltage, current;
    cin>>voltage>>current;
    cout<<circuitPower(voltage, current);
    return 0;
}
