/*
Problem Name : Less Than 100?
Problem Link : https://edabit.com/challenge/9MjEpkL7yAjAqiH58 
*/

#include <bits/stdc++.h>
using namespace std;

bool lessThan100(int num1, int num2){
    return (num1 + num2 < 100)?true:false;
}

int main(){
    int num1, num2;
    cin >> num1 >> num2;
    if(lessThan100(num1, num2))
        cout << "true";
    else 
        cout << "false";
    return 0;
}
