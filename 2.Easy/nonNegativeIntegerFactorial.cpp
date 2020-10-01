/* 
Problem-Task : This program will calculate the factorial of a Non-Negative Integer
Problem Link : https://edabit.com/challenge/M3MZS3RHKZ67fQQBM
*/

#include <iostream> 
using namespace std; 

long long int factorial(int n) 
{ 
    if(n == 0) 
          return 1; 
    int i = n;
    long long fact = 1; 
    while (n / i != n) { 
        fact = fact * i; 
        i--; 
    } 
    return fact; 
} 
  
int main() 
{ 
    int num;
    cin >> num;
    if(num < 0){
        cout << "Please enter a non-negative integer";
        return 0;
    }
    cout << "Factorial of "
         << num << " is "
         << factorial(num) << endl; 
    return 0; 
} 