/*
Problem-Task: Create a function that takes an array of numbers and returns only the even values.
Problem Link: https://edabit.com/challenge/7iT6DbY3GsHnLBPq4
*/

#include <bits/stdc++.h>

using namespace std;
vector<int> noOdds(std::vector<int> arr) {
	vector<int> result;
	for(int i=0;i<arr.size();i++){
		if(arr[i]%2==0)
			result.push_back(arr[i]);
	}
	return result;
}

int main(){

vector<int> arr = {1,2,3,4,5,6,7,8};
vector<int> result = noOdds(arr);
for(auto num : result){
    if(num % 2 != 0)
       return -1;
}
return 0;
}
