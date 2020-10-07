/*
	Problem-Task : This program will return the amount of r's detremined by input.
 * Problem Link : https://edabit.com/challenge/vxpP4nnDhRr2Yc3Lo
*/

#include <iostream>
using namespace std;

int longBurp(int num) {
	string r;
	for (int i=0;i<num;i++) {
		r+="r";
	}
	cout << "Bu" + r +"p";
	return 0;
}

int main() {
    
		int num;
    
		cin >> num;
    longBurp(num);
    
		return 0;
}