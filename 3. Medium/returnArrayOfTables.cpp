/* Problem-Task : This program will return array of muliples of num and its size equals length
 * Problem Link : https://edabit.com/challenge/ebcd4Xu8TLizaj6dm
*/
#include <bits/stdc++.h>

using namespace std;

int *arrayOfTables(int num, int length)
{
    int *array = new int[length];
    for (int i = 0; i < length; i++)
    {
        array[i] = (i + 1) * num;
    }
    return array;
}
int main()
{
    int num, length, *array;
    cin >> num >> length;
    array = arrayOfTables(num, length);
    for (int i = 0; i < length; i++)
        cout << array[i] << " ";
    return 0;
}