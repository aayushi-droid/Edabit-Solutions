/* 
	Problem Task: This program will return the area of a triangle
  Problem Link: https://edabit.com/challenge/HvYiBXgfPtnDHitym
*/

#include <iostream>
using namespace std;

double areaOfTriangle(double b, double h) {
    return ((b * h) / 2);
};

int main() {
    double base, height;
    cin >> base >> height;
    cout << areaOfTriangle(base, height) << endl;
	return 0;
}
