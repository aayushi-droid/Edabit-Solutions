/* Problem-Statement : Create a function that takes a string and replaces each letter with its appropriate position in the alphabet.
 * Problem Link : https://edabit.com/challenge/rZbXfisPPKbR6yNXn
*/
#include <iostream>
#include <string>
using namespace std;

string alphabetIndex(string str) {
	string ans;
	for(int i=0; i<str.size(); i++) {
		if(str[i]>='a' && str[i]<='z') {
			ans+=to_string(str[i]-'a'+1);
			ans +=' ';
		}
        //Note - Both Uppercase and Lowercase alphabets is kept at same index
		else if(str[i]>='A' && str[i]<='Z') {
			ans += to_string(str[i]-'A'+1);
			ans +=' ';
		}
        // Note - Ignore all other charaters except alphabets.
	}
	ans.pop_back();
	return ans;
}

int main() {
    string s;
    getline(cin, s);    // Input string containing spaces.
    string result = alphabetIndex(s);
    cout<<result<<'\n';
    return 0;
}