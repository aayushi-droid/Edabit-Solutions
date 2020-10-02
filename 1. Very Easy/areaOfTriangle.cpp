//Problem:Write a function that takes the base and height of a triangle and return its area.
//Problem Link:https://edabit.com/challenge/3CaszbdZYGN4otQD8
#include <iostream>
using namespace std;
double areaOfTriangle(int h, int b)
{
	double area=( (double)h* (double)b ) / 2;
	return area;
}
int main()
{
	int height,base;
	cin >> height >> base;

	double area = areaOfTriangle(height,base);
	cout << area;
	return 0;
}
