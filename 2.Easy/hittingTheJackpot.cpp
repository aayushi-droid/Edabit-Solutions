/*
    Problem Task: Create a function that takes in an array (slot machine outcome) 
    and returns true if all elements in the array are identical, 
    and false otherwise. The array will contain 4 elements.
    Problem Link: https://edabit.com/challenge/5eStPo3wrZRju7j9G
*/
#include <bits/stdc++.h>
using namespace std;

bool testJackpot(vector<string> arr, int N){

    for(int i = 1; i < N; i++){
        if(arr[i] != arr[i-1])
            return false;
    }

    return true;
}


int main(){
 	
    const int N = 4;
    vector<string> arr;
    for(int i = 0; i < N; i++){
        string s; cin >> s;
        arr.push_back(s);
    }

    testJackpot(arr, N) ? cout << "true" : cout << "false";


	return 0;
}