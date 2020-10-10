Poblem statement:Create a function that returns a base-2 (binary) representation of a base-10 (decimal) string number. 
				To convert is simple: ((2) means base-2 and (10) means base-10) 010101001(2) = 1 + 8 + 32 + 128.

problem link:https: //edabit.com/challenge/3kcrnpHk7krNZdnKK

#include <iostream> 
using namespace std; 
  
// Function that convert Decimal to binary 
int decToBinary(long long int n) 
{ 
    
    for (long long int i = 31 ; i >= 0; i--) { 
        long long int k = n >> i; 
        if (k & 1) 
            cout << "1"; 
        else
            cout << "0"; 
    } 
} 
  

int main() 
{ 
    long long int n;
    cin>>n;
    decToBinary(n); 
} 
