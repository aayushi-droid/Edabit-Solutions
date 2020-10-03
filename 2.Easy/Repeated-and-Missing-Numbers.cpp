//Repeat and Missing Number
/*
-->Method -- Use elements as Index and mark the visited places
-->Approach:
1. Traverse the array. 

2. While traversing, use the absolute value of every element as an index and make the value at this index as negative to mark it visited. 

3. If something is already marked negative then this is the repeating element. 

4. To find missing, traverse the array again and look for a positive value.
*/
#include <bits/stdc++.h> 
using namespace std; 
  
void printTwoElements(int arr[], int size) 
{ 
    int i; 
    cout << " The repeating element is "; 
  
    for (i = 0; i < size; i++) { 
        if (arr[abs(arr[i]) - 1] > 0) 
            arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1]; 
        else
            cout << abs(arr[i]) << "\n"; 
    } 
  
    cout << "and the missing element is "; 
    for (i = 0; i < size; i++) { 
        if (arr[i] > 0) 
            cout << (i + 1); 
    } 
} 
  
/* Driver code */
int main() 
{ 
    int arr[] = { 7, 3, 4, 5, 5, 6, 2 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    printTwoElements(arr, n); 
} 
//Time Complexity: O(n)
