/*
Problem-Task: Create a function which validates whether a bridge is safe to walk on (i.e. has no gaps in it to fall through).
Problem Link: https://edabit.com/challenge/udrQ2ckXP9cXNXiSk
*/

#include <bits/stdc++.h>
using namespace std;

bool isSafeBridge(std::string s) {
	if(s.length() == 0)
		return false;
	for(int i=0;i<s.length();i++){
		if(s.at(i) == ' ')
			return false;
	}
	return true;
}

int main()
{
    string str = "####";
    cout << isSafeBridge(str) << endl;
    return 0;
}
