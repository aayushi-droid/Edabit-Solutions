/*
    Problem Task: Write a function that returns the number of ways a 
    person can climb n stairs, where the person may only climb 1 or 2 steps at a time.
    Problem Link: https://edabit.com/challenge/JR3T5o6PwzvuGnRge
*/
#include <bits/stdc++.h>
using namespace std;

int countWays(int n){

    if(n == 1 or n == 2)
        return n;
    
    return countWays(n-1) + countWays(n-2);

}


int main(){
 	
    int n;
    cin >> n;
    cout << countWays(n) << endl;

	return 0;
}