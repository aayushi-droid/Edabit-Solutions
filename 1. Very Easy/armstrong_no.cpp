#include <iostream>
#include<cmath>
using namespace std;
bool isarmstrong(int n)
{
    int count=0;
    int temp=n; 
    // for counting the no of digits in no
    while(temp>0)
    {
        int r=temp%10;
        temp=temp/10;
        count++;
    }
    int sum=0;
    int temp1=n;
    // for calculating the sum of n^count of digits
    // where n= number and count= count of digits in number
    while(temp1>0)
    {
        int r=temp1%10;
        sum+=pow(r,count);
        temp1=temp1/10;

    }
    if(sum==n)
    {
        return true;

    }
   return false;
}
int main() {
    int n;
    cin>>n;
    cout<<isarmstrong(n);
    return 0;

}
