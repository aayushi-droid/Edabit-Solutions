/* Problem-Task : Create a function that takes an integer and return true if it's divisible by 100, otherwise return false.
 * Problem Link : https://edabit.com/challenge/qMr6wYGr6NaXAPQGF
*/
#include<bits/stdc++.h>
using namespace std;

string checkDivisibility(int x){
    if(x%100) return "false";
    return "true";
}

int main() {
    int n;
    cin >> n;
    cout<<checkDivisibility(n);
}
