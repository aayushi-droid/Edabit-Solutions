/* Problem-Task : Create a function that takes an array of numbers between 1 and 10 (excluding one number) and returns the missing number.
 * Problem Link : https://edabit.com/challenge/7YaJhC4terApw5DFa
*/
#include<bits/stdc++.h>

using namespace std;

int findTheNumber(vector<int> arr){
	// sum will contain the sum of first 10 natural numbers
	int sum = 10*(11)/2;
	
	// arraysum will contain the sum of all the elements in the array
	int arraySum = accumulate(arr.begin(),arr.end(),0);
	
	return sum - arraySum;
}

int main() {
    int a;
    vector<int> arr;
    for(int i=0;i<9;i++){
		cin>>a;
		arr.push_back(a);
	}
	
	int result = findTheNumber(arr);
	
	cout<<result;
    return 0;
}
