/*
    Given two words, the letter distance is calculated by taking the 
  absolute value of the difference in character codes and summing up 
  the difference.
    If one word is longer than another, add the difference in lengths 
  towards the score.
    Problem : https://edabit.com/challenge/5Xo5fBrQui9opFWH5
*/

#include<bits/stdc++.h>
using namespace std;

int letterDistance(string str1, string str2) {
    int res = 0;
    for(int i=0; i<min(str1.length(),str2.length()); i++) {
        res += abs(str1[i] - str2[i]);
    }
    res += abs((int)(str1.length() - str2.length()));
    return res;
}

int main() {
    int n;
    string str1, str2;
    cout << "Enter two strings: " << endl;
    cin >> str1 >> str2;
    cout << letterDistance(str1, str2) << endl;
    return 0;
}
