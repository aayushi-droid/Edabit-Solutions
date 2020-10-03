// Problem Statement - Create a function that takes an integer and outputs an n x n square solely consisting of the integer n.
// Link - https://edabit.com/challenge/omTRzwvBibk4etBkx

#include <bits/stdc++.h>
using namespace std;

void squarePatch(vector<vector<int>> &ans, int n) {
    if (n==0) return;
	for (int i = 0; i < n; i++) {
		ans.push_back(vector<int> (n, n));
	}	
}

int main() {
	int n; cin>>n;
	vector<vector<int>> ans;
    squarePatch(ans, n);
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
	return 0;
}