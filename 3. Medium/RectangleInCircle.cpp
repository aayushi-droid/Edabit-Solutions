/* Problem-Task : This program will add two numbers
 * Problem Link : https://edabit.com/challenge/SFzHtm63XT6EYNHWY
*/
#include<bits/stdc++.h>
using namespace std;

string check(int w,int ht,int r)
{
    int diag=sqrt(pow(w,2)+pow(r,2));
    if(2*r>=diag)
        return "true";
    else
        return "false";
}



int main()
{
    int w,l,r;
    cin>>w>>l>>r;
    cout<<check(w,l,r);
    return 0;
}
