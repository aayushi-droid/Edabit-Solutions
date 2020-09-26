/* 
Problem task : Create a function that takes three arguments prob, prize, pay and returns true if prob * prize > pay;
 otherwise return false.
Problem Link : https://edabit.com/challenge/KWHHhfYMDEEvASK6G
*/

#include <iostream>
using namespace std;

int profitableGamble(float prob, int prize, float pay) {
    if(prob * prize > pay ) {
        cout << "true";
    }else{
        cout << "false";
    }
}

int main() {
    profitableGamble(0.2, 50, 9);
    return 0;
}