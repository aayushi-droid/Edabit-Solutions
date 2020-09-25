// Problem statement: Create a function that takes a list and finds the integer which appears an odd number of times.
// Probelm Link: https://edabit.com/challenge/9TcXrWEGH3DaCgPBs
```c++
//sample test case = {2, 3, 5, 4, 5, 2, 4, 3, 5, 2, 4, 4, 2}
//sample output = 5
#include <bits/stdc++.h> 
using namespace std;  
int findodd(int ar[], int ar_size) 
{ 
    int res = 0;  
    for (int i = 0; i < ar_size; i++)      
        res = res ^ ar[i]; 
      
    return res; 
}
int main() 
{ 
    int ar[]; 
    int n = sizeof(ar)/sizeof(ar[0]);  
    cout << findodd(ar, n); 
    return 0; 
} 
```
