// Problem statement : Christmas Eve is almost upon us, so naturally we need to prepare some milk and cookies for Santa! Create a function that accepts a (year, month, day) of date and returns true if it's Christmas Eve (December 24th) and false otherwise. Keep in mind that month of Date is 0 based, meaning December is the 11th month while January is 0.
// Probelm Link : https://edabit.com/challenge/2XSQ56rSm47oH8fyF
// Choose one Cateorgy - Very Easy
// question category : dates, validation

#include <iostream>
using namespace std;

bool timeForMilkAndCookies(int year, int month, int day) {
	if(month==11 && day==24){
        return true;
    } 
    else {
        return false;
    }
}

int main()
{
    bool res;
    int y,m,d;
    cin>>y>>m>>d;

    res = timeForMilkAndCookies(y,m,d);
    if(res){
        cout<<"True";
    } else {
        cout<<"False";
    }

    return 0;
}