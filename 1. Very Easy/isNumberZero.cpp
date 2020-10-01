//Problem-task: This program will check if the number is less than or equal to ze0ro.
//Problem link: https://edabit.com/challenge/7KFAJSSp3pmE8bHhK

#include<bits/stdc++.h>
using namespace std;

bool lessThanOrEqualToZero(int num) {
    if(num>0)
  return false;
  else
  return true;
}

int main(){
int num;
cout<<"Enter the number"<<endl;
cin>>num;
lessThanOrEqualToZero(num)?cout<<"True":cout<<"False";
return 0;
}
