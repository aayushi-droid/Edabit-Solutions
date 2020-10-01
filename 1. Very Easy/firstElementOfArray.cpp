/*
Problem task : Create a function that takes array as input and prints the first element of array as output;
Problem Link : https://edabit.com/challenge/QaApgtePE6QrCZ64o
*/


#include<iostream>
using namespace std;

void firstElemOfArray(int arr[])
{
  cout<<arr[0]<<endl;
}

int main()
{
  // input the size of array
   int arr[] = {1,2,3,4,5};

   firstElemOfArray(arr);



  return 0;
}
