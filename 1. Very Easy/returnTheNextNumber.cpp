/* this program will return next number
    * Problem statement : Create a function that takes a number as an argument, 
    * add one to the number, and return the result.    
    * https://edabit.com/challenge/QgCMMMyMmckvHbfKv
*/

#include <iostream>
using namespace std;

int addition(int n)
{
    return ++n; //using unary operator instead of perforing adding operation.
}

int main()
{
    int nextNumber;

    nextNumber = addition(5);
    cout << nextNumber << endl;
}