/* Problem-Task : Create a function that takes a string as its argument and returns the string in reversed order.
 * Problem Link : https://edabit.com/challenge/gYxDahmv8CbWmiThc
*/
#include "bits/stdc++.h"
using namespace std;

std::string reverse(std::string str) {
	int i = 0;
	int j = str.length() - 1;
	while(i<j){
		char temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
	return str;
}

int main()
{
    string str = "Edabit is really helpful!";
    cout << reverse(str) << endl;
    return 0;
}