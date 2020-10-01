/* Problem-Task: This program will convert a number to base 2 representation
 * Problem Link: https://edabit.com/challenge/3kcrnpHk7krNZdnKK
*/

#include <iostream>
using namespace std;

string convertNumberToBase2(int dec) {
	string bin = "";

	while (dec != 0) {
		bin = (dec % 2 == 0 ? "0" : "1") + bin;
		dec /= 2;
	}

	return bin;
}

int main() {
	int dec;
	cout << "Enter number in decimal representation: ";
	cin >> dec;
	cout << "Binary representation: "
		<< convertNumberToBase2(dec) << end;

	return 0;
}