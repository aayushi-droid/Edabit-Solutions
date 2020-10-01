/* 
	Problem Task: This program will return the area of a triangle
  Problem Link: https://edabit.com/challenge/HvYiBXgfPtnDHitym
*/

#include <iostream>
using namespace std;

int areaOfTrianle(int b, int h) {
    return ((b * h) / 2);
};

int main() {

    int base, height, area;

    cin >> base >> height;
		area = areaOfTriangle(base, height);
    cout << area << endl;
    
		return 0;
}