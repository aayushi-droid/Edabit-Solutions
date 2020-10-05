/* 
	Problem Task: This program will return how many numbers are equal.
  Problem Link: https://edabit.com/challenge/wujqD4xbL7X5Bzd5e
*/

#include <iostream>
using namespace std;

int equal(int a, int b, int c) {
		if (a==b && b==c && c==a) {
			return 3;
		} else if (a!=b && b!=c && c!=a) {
			return 0;
		} else {
			return 2
		}
};

int main() {

    int a, b, c;

    cin >> a >> b >> c;
		cout << equal(a, b, c);

		return 0;
}