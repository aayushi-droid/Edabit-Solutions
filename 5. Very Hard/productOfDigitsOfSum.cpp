/* Problem-Task : Create a function that takes numbers as arguments, adds them together, and returns the product of digits until the answer is only 1 digit long.
 * Problem Link : https://edabit.com/challenge/Kzmyf4pLx66ZRsnWk
*/

#include<bits/stdc++.h>
using namespace std;

int sumDigProd(int a=0, int b=0, int c=0, int d=0, int e=0, int f=0, int g=0, int h=0, int i=0, int j=0, int k=0, int l=0, int m=0, int n=0, int o=0, int p=0, int q=0, int r=0, int s=0, int t=0, int u=0, int v=0, int w=0, int x=0, int y=0, int z=0) //function allows upto 26 numbers
{
   int answer=a+b+c+d+e+f+g+h+i+j+k+l+m+n+o+p+q+r+s+t+u+v+w+x+y+z;
   while(answer/10!=0)
   {
        int product=answer;
        int currProduct=1;
        while(product!=0)
        {
            currProduct*=product%10;
            product/=10;
        }       
        answer=currProduct;
   }
   return answer;
}
int main() 
{
    cout<<"sumDigProd(16,28) = "<<sumDigProd(16,28)<<'\n';
    cout<<"sumDigProd(0) = "<<sumDigProd(0)<<'\n';
    cout<<"sumDigProd(1,2,3,4,5,6) = "<<sumDigProd(1,2,3,4,5,6)<<'\n';
    return 0;
}

