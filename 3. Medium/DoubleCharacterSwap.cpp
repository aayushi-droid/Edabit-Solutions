// Problem Statement - Write a function to replace all instances of character c1 with character c2 and vice versa.
// Link - https://edabit.com/challenge/s695FkhRd3J65tmdQ

#include <bits/stdc++.h>
using namespace std;

string doubleSwap(string s, char c1, char c2) {
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == c1) {
			s[i] = c2;
		}
		else if (s[i] == c2) {
			s[i] = c1;
		}
	}	
	return s;
}

int main() {
	string s;
	cin >> s;
	char c1, c2;
	cin >> c1 >> c2;
	cout << doubleSwap(s, c1, c2);
	return 0;
}