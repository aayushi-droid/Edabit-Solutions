/*Problem statement :Power Calculator
Probelm Link : https://edabit.com/challenge/wAdE9te55cowBLcPs
*/

#include<iostream>
using namespace std;

double powerCalculator(double voltage, double current) {

	return voltage * current;

}

int main() {
	double voltage, current;
	cin >> voltage >> current;

	cout << powerCalculator(voltage, current);

	return 0;
}