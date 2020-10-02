// A very simple program to check if two numbers are equal.

#include<iostream>
using namespace std;

int EqNum(int x, int y){
    if(x==y){
        cout<<"true\n";
    }
    else{
         cout<<"false";
    }

}

int main(){
    int x,y;
    cout<<"Enter the two numbers to be compared \n";
    cin>>x>>y;
    EqNum(x,y);
    return 0;
}