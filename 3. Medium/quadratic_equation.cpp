/*
Problem Statement
https://edabit.com/challenge/nasKYub6qEAfQcFuy
*/

#include <iostream>
#include <math.h>
using namespace std;

int quadraticEquation(int a, int b, int c) {
	return (-b + sqrt(b*b - 4*a*c)) / (2*a);	
}

int main() {
	cout << quadraticEquation(1, 4, 4);
	return 0;
}
