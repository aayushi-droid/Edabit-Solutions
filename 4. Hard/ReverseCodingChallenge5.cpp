/* Problem-Task : This program solved Reverse Coding Challenge 5 problem
 * Problem Link : https://edabit.com/challenge/64CeZWx5wWhTxhHLL
*/
#include <iostream>
#include <algorithm>

using namespace std;

int sortDigitdAndMakeNumber(int num){
	int sz = 0, res = 0;
	int a[11];
	while (num){
		a[sz ++] = num % 10;
		num /= 10;
	}
	sort(a, a + sz);
	for (int i = 0; i < sz; i ++)
		res = res * 10 + a[i];
	return res;
}
int mysteryFunc(int num) {
	return num - sortDigitdAndMakeNumber(num);
}

int main(){
	cout << mysteryFunc(832) << '\n';
	cout << mysteryFunc(51) << '\n';
	cout << mysteryFunc(7977) << '\n';
	cout << mysteryFunc(1) << '\n';
	return 0;
}
