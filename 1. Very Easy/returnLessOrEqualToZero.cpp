/* 
	Problem Task: This program will return whether a given number is less than or equal to zero
  Problem Link: https://edabit.com/challenge/7KFAJSSp3pmE8bHhK
*/

#include <iostream>
using namespace std;

bool lessThanOrEqualToZero(int a) {
    return (a <= 0);
};

int main() {
    int num;
    cin >> num;
	if(lessThanOrEqualToZero(num)){
	    cout<<"True";
	}
	else{
	    cout<<"False";
	}
	return 0;
}
