  
/* Problem-Task : Write a function that returns the greatest common divisor (GCD) of two integers.
 * Problem Link : https://edabit.com/challenge/6g5Nj6Qz44Sd2NbBQ
*/

#include<bits/stdc++.h>
using namespace std;

int gcd(int n1, int n2) {
	while(n1!=n2){
		if(n1>n2) n1-=n2;
		else n2-=n1;
	}
	return n1;
}

int main(){
    cout<<gcd(32,8)<<endl;
    cout<<gcd(8,12)<<endl;
    return 0;
}