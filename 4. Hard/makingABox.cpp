/* Problem-Statement : Create a function that creates a box based on dimension n.
 * Problem Link : https://edabit.com/challenge/yHeTBuJ6LDw3nhA7k
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> makeBox(int n) {
	vector<string> ans;
	string temp;
	for(int i=0; i<n; i++)
			temp+='#';
	ans.push_back(temp);
	temp.clear();
	temp+='#';
	for(int i=0; i<n-2; i++)
			temp+=' ';
	temp+='#';
	for(int i=0; i<n-2; i++) {
		ans.push_back(temp);
	}
	if(n!=1)
		ans.push_back(ans.front());
	return ans;
}

int main() {
    int n;
    cin>>n;
    vector<string> result = makeBox(n);
    for(int i=0; i<result.size(); i++) {
        cout<<result[i]<<'\n';
    }
    return 0;
}