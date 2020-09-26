/* Problem statement :Area of Triangle
   Probelm Link : https://edabit.com/challenge/HvYiBXgfPtnDHitym
*/
#include <iostream>
using namespace std;

int area(int a, int b) {
    return 0.5*a*b;
}

int main() {

    int Area;
    int base,height; //to take the input of base and height from user
	cin>>base>>height;
    Area = area(base, height);
    cout << Area << endl;
    return 0;
}

