/*
Problem task : convert age to days
Problem Link: https://edabit.com/challenge/bL7hSc6Zh4zZJzGmw
*/

#include <iostream>
using namespace std;

int calcage(int age) {
//in one year there are 365 days as problem said to ignore the leap year
    int days=age*365;
   return days;
}

int main() {
     int age;
    cout<<"enter the age";
    cin>>age;
//we have to convert the age in no. of days
    int days=calcage(age);
    cout<<days;
    return 0;
}
