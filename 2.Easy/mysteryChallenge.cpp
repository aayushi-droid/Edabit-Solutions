/* Problem-Task : Write a function that takes an integer n and turns it into the ouput. No further instructions..
 * Problem Link : https://edabit.com/challenge/RRX73DEm2BLp8z2TG
*/

#include<bits/stdc++.h>

std::string mysteryFunc(int n){
	int nReversed = 0;
	while (n){
		nReversed *=10;
		nReversed += n%10;
		n/=10;
	}
	std::ostringstream  os;
	while (nReversed > 0){
		int digit = nReversed% 10;
		nReversed/= 10;
		int counter = 1;
		while ((nReversed > 0) && (nReversed%10 == digit)){
			nReversed/=10;
			++counter;
		}
		os<<counter<<digit;
	}
	return os.str();
}


int main(){
    std::cout<<mysteryFunc(512)<<"\n";
    std::cout<<mysteryFunc(5211255)<<"\n";
    std::cout<<mysteryFunc(513515)<<"\n";
    return 0;
}