//Problem-Task:This program takes three integer arguments and returns the amount of integers which are of equal value.
//Problem link:https://edabit.com/challenge/wujqD4xbL7X5Bzd5e

#include<bits/stdc++.h>
using namespace std;

int equal(int a,int b,int c){
int i=0;
if(a==b)
i++;
if(b==c)
i++;
if(a==c)
i++;
return i;
}

int main(){
int a,b,c,r;
cout<<"Enter the three numbers"<<endl;
cin>>a>>b>>c;
r=equal(a,b,c);
cout<<"Number of equal values are: "<<r;
return 0;
}
