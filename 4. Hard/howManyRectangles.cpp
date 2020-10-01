/* Problem-Task : How many rectangles are there in a square matrix
 * Problem Link : https://edabit.com/challenge/EePutMiQcitWdEA5s
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int step;
    cin>>step;
    int tri=(step*(step+1))/2;
    cout<<tri*tri;
}
