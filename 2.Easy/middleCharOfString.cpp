/*
Problem-Task: Create a function that takes a string and returns the middle character(s). If the word's length is odd, return the middle character.
              If the word's length is even, return the middle two characters.
Problem Link: https://edabit.com/challenge/p3SCSXaWQLWpvqCYZ
*/

#include "bits/stdc++.h"
using namespace std;

std::string getMiddle(std::string str) {
	int start = 0;
	int n = str.length();
	int end = n-1;
	int mid = start+(end-start)/2;
	std::string result = "";
	// even length
	if(n%2==0){
		result = result + str[mid] + str[mid+1];
	}
	else
		result = str[mid];
  return result;
}

int main()
{
    string str = "middle";
    cout << getMiddle(str) << endl;
    return 0;
}