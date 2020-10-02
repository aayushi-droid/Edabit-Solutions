// Problem statement : Create a function that takes a string as its argument and returns the string in reversed order.
// Probelm Link : https://edabit.com/challenge/gYxDahmv8CbWmiThc
#include<iostream>
using namespace std;
string rev(string s){
    return string(s.rbegin(),s.rend());
}
int main(){
    string s;
    cin>>s;
    cout<<rev(s)<<endl;
}