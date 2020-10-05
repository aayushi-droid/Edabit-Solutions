// Problem-Task : This program will print the next prime number.
//Problem Link : https://edabit.com/challenge/arobBz954ZDxkDC9M

// C++ implementation of the approach 
#include <bits/stdc++.h> 
using namespace std; 
  
// Function that returns true if n  
// is prime else returns false  
bool isPrime(int n)  
{  
    // Corner cases  
    if (n <= 1)  return false;  
    if (n <= 3)  return true;  
    
    // This is checked so that we can skip   
    // middle five numbers in below loop  
    if (n%2 == 0 || n%3 == 0) return false;  
    
    for (int i=5; i*i<=n; i=i+6)  
        if (n%i == 0 || n%(i+2) == 0)  
           return false;  
    
    return true;  
}  
  
// Function to return the smallest 
// prime number greater than N 
int nextPrime(int N) 
{ 
  
    // Base case 
    if (N <= 1) 
        return 2; 
  
    int prime = N; 
    bool found = false; 
  
    // Loop continuously until isPrime returns 
    // true for a number greater than n 
    while (!found) { 
        prime++; 
  
        if (isPrime(prime)) 
            found = true; 
    } 
  
    return prime; 
} 
  
// Driver code 
int main() 
{ 
    int N;
    cout<<"Enter the no. - ";
    cin>>N;
  
    cout << nextPrime(N); 
  
    return 0; 
} 
