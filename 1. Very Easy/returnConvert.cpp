
/* Problem-Task : Convert Minutes into Seconds
 * Problem Link : https://edabit.com/challenge/MtNAJmJZ49i5Xf3AW
*/

#include <iostream>
#include <string>

using namespace std;

int convert(int minutes)
{
    return 60*minutes;
}

int main()
{
    int minutes;
    cin>>minutes;
    cout<<convert(minutes);
    return 0;
}