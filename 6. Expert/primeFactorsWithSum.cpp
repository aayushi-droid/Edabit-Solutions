/* 
	Problem-Task : Prime Factors with Sum
  	Problem Link : https://edabit.com/challenge/Ch9a2fsTckkdE26XX
*/
#include<bits/stdc++.h>
using namespace std;
bool isPrime(int x) {
    for (int d = 2; d * d <= x; d++) {
        if (x % d == 0)
            return false;
    }
    return true;
}
string sumPrime(vector<int> arr) {
	string res = "";
	int maxn = *max_element(arr.begin(), arr.end());
	for(int i=2; i<=maxn; i++){
		if(isPrime(i)){
			int localSum = 0;
			bool inside = false;
			for(auto n: arr)
				if(n%i==0)
					inside = true, localSum += n;
			if(inside)
				res += "(" + to_string(i) + " " + to_string(localSum) + ")";}
	}
	return res;
}
int main(){
	cout << sumPrime({2, 12, 15});
}