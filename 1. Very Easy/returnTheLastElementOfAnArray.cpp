/* this program will last element of the array
    * Problem statement : Create a function that takes an array and a number as an argument, 
    * return the last element of the array.   
    * https://edabit.com/challenge/4GZcWTiv2GPA9NfcP
*/
#include <iostream>
using namespace std;

int getLastItem(int A[], int N)
{
    return A[N - 1];
}
int main()
{
    int Array[] = {1, 5, 6, 8, 2, 4, 5};
    int Size = 7;
    cout << getLastItem(Array, Size);
}