//Problem-Task : This program will add two numbers
//Problem Link : https://edabit.com/challenge/SFzHtm63XT6EYNHWY

#include<iostream>
 
using namespace std;

int gcd(int a, int b){
    return (b != 0) ? gcd(b, a % b) : a;
}
 
int main(){
    int num1, num2, result;
    cout << "Enter two numbers to find GCD: ";
    cin >> num1 >> num2;
    cout << "\nThe GCD of " << num1 << " and " << num2 << " is: " << gcd(num1, num2) << endl;
    return 0;
}
