/* this program will return next number
    * Problem statement : Create a function that takes a number as an argument, 
    * add one to the number, and return the result.    
    * https://edabit.com/challenge/QgCMMMyMmckvHbfKv
*/

#include <iostream>
using namespace std;

int addition(int n) {
    return n + 1;
}

int main() {
    int number;
    cin>>number;
    cout << addition(number) << endl;
}
