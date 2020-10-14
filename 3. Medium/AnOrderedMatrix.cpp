/*
    Probem Task : Create an ordered 2D array (matrix). A matrix is ordered if its (0, 0) element is 1, its (0, 1) element is 2, and so on. Your function needs to create an a × b matrix. a is the first argument and b is the second.
    Problem Link : https://edabit.com/challenge/qbpHHZYQrJnNYjtjn
*/


#include<bits/stdc++.h>
using namespace std;
void orderedMatrix(int a,int b)
{
  int arr[a][b];
  int count=1;
  for(int i=0;i<a;i++)
  {
    for(int j=0;j<b;j++)
    {
      arr[i][j]=count++;
    }
  }

  for(int i=0;i<a;i++)
  {
    for(int j=0;j<b;j++)
    {
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
}
int main()
{
  int a,b;
  cin>>a>>b;
  orderedMatrix(a,b);
  return 0;
}
