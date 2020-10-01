/* Problem-Task : Create a function that takes an array of numbers between 1 and 10
 (excluding one number) and returns the missing number.
 * Problem Link : https://edabit.com/challenge/7YaJhC4terApw5DFa
*/

//C++ Program to find the Missing Number

/*The logic we are using is:
 Sum of n integer elements is: n(n+1)/2. Here we are missing one element which means we
 should replace n with n+1 so the total of elements in our case becomes: (n+1)(n+2)/2.
  Once we have the total, we are removing all the elements that user has entered
   from the total, this way the remaining value is our missing number.*/

  CODE:-

#include <iostream>
using namespace std;
int findMissingNo (int arr[], int len){
   int temp;  
   temp  = ((len+1)*(len+2))/2;  
   for (int i = 0; i<len; i++)    
      temp -= arr[i];  
   return temp;
}
int main() {
   int n;   
   cout<<"Enter the size of array: "; 
   cin>>n;    
   int arr[n-1];  
   cout<<"Enter array elements: ";   
   for(int i=0; i<n; i++){    
      cin>>arr[i];  
   } 
   int missingNo = findMissingNo(arr , 10 ); 
   cout<<"Missing Number is: "<<missingNo;
   return 0;
}
Output:

Example 1:-

Enter the size of array: 10
Enter array elements: 
1
2
3
5
6
7
8
9
10
Missing Number is: 4 

Example 2:-

Enter the size of array: 10
Enter array elements: 
1
3
4
5
6
7
8
9
10
Missing Number is: 2

Example 3:-

Enter the size of array: 10
Enter array elements: 
1
2
3
4
5
7
8
9
10
Missing Number is: 6

