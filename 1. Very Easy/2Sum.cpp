/* Problem-Task : This program will add two numbers
 * Problem Link : https://edabit.com/challenge/SFzHtm63XT6EYNHWY
*/

#include<iostream>
using namespace std;

int addition(int a, int b) {
	return a + b;
}

int main() {
    int a, b, sum;
    cin >> a;
    cin >> b;
    sum =  addition(a,b);
    cout << sum;
    return 0;
}

