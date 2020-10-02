/*
Problem Statement
Write a function to replace all instances of character c1 with character c2 and vice versa.

https://edabit.com/challenge/s695FkhRd3J65tmdQ
*/

#include <iostream>
#include <math.h>
using namespace std;

string doubleSwap(string s, char c1, char c2) {
	string ans;
	for (int i = 0; i < s.length(); ++i) {
		if (s[i] == c1) {
			ans = ans + c2;
			continue;
		}
		if (s[i] == c2) {
			ans = ans + c1;
			continue;
		}
		ans = ans + s[i];
	}	
	return ans;
}

int main() {
	string s;
	cin >> s;
	char c1, c2;
	cin >> c1 >> c2;
	cout << doubleSwap(s, c1, c2);
	return 0;
}
