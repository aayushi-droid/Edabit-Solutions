/*****************************************************************************
Problem statement : Create a function that transposes a 2D matrix.
Probelm Link : https://edabit.com/challenge/4KaoDvxaFSmf38bPQ

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int r,c;
    cout<<"Enter the number of rows";
    cin>>r;
    cout<<"Enter the number of columns";
    cin>>c;
    int m[r][c];
    for(int i=1;i<=r;i++)
    {
      for(int j=1;j<=c;j++){
       cin>>m[i][j];   
      }
      
    }
    cout<<endl;
  swap(r,c);
    cout<<"Transpose of the matrix is"<<endl;
   for(int k=1;k<=r;k++)
    {
      for(int l=1;l<=c;l++){
       cout<<m[l][k]<<" ";   
      }
      cout<<endl;
      
    } 
    
    
}
