// Problem statement: Create a function that returns the number of characters shared between 
// two words.
// Probelm Link: https://edabit.com/challenge/qeCS48GXtK9NJLc9C

#include<bits/stdc++.h>
using namespace std;
int sharedLetters(string str1,string str2) {
	map<char, int>a;
	map<char, int>b;
	for (auto i : str1){
		a[i]++;
	}
	for (auto j : str2){
		b[j]++;
	}
	string res = "";
	for (auto itr : a){
		if (a[itr.first]>0 && b[itr.first]>0){
			res += itr.first;
			a[itr.first] = 0;
			b[itr.first] = 0;
		}
	}
	for (auto itr : b){
		if (a[itr.first]>0 && b[itr.first]>0){
			res += itr.first;
			a[itr.first] = 0;
			b[itr.first] = 0;
		}
	}
	return res.size();
}
int main(){
	string s1, s2;
	cin >> s1;
	cin >> s2;
	cout << sharedLetters(s1, s2) << endl;
}
