/* Problem statement :The task is to swap every ith element of the array with (i+2)th element.
Probelm Link : https://practice.geeksforgeeks.org/problems/need-some-change
*/

#include <iostream>
using namespace std;

// Function prototype
void swapElements (int[], int);

void swapElements (int arr[], int sizeof_array)
{
  int temp, i;
  for (i = 0; i < (sizeof_array - 2); i++)
    {
      temp = arr[i];
      arr[i] = arr[i + 2];
      arr[i + 2] = temp;
    }

}


int main ()
{
      int sizeof_array;
      cin >> sizeof_array;

      int arr[sizeof_array];

      for (int i = 0; i < sizeof_array; i++)
    	{
    	  cin >> arr[i];
    	}

      swapElements (arr, sizeof_array);

      for (int i = 0; i < sizeof_array; i++)
    	{
    	  cout << arr[i] << " ";
    	}

      cout << endl;
  return 0;
}
