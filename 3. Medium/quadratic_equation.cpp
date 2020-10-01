/*
Problem Statement
https://edabit.com/challenge/nasKYub6qEAfQcFuy

Create a function to find only the root value of x in any quadratic equation ax^2 + bx + c. The function will take three arguments:

a as the coefficient of x^2
b as the coefficient of x
c as the constant term

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
