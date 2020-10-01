//Problem Statement: Create a function that takes in an array of numbers and returns the sum of its cubes.
// Problem link: https://edabit.com/challenge/XdAR3KohR5w7rjrFg
#include <iostream>
using namespace std; 
  
// function to find the sum of cubes of elements of an array
long sumOfCubes(int a[]) 
{     
    int n=sizeof(a)/sizeof(a[0]);

    // initialize sum 
    long sum = 0; 
    
    // add cube of the elements to sum 
    for(int i=0;i<=n;i++){
      sum = sum+(long)(a[i]*a[i]*a[i]); 
      }
      
    // required sum     
    return sum;     
} 
  
// Driver program to test above 
int main() 
{   
    int arr[] = {3,4,5}; 
    cout << "Sum = "
         << sumOfCubes(arr); 
    int b[5] = {}; 
    cout << "Sum = "
         << sumOfCubes(b);      
    return 0;
}


//Output:

//Sum = 216 Sum = 0
