// C++ program to Count number of ones in binary 
// repersentation of a number
#include <iostream>
using namespace std; 

/* Function to get no of set ones in binary 
representation of positive integer n */
int countSetOnes(int n) { 
	if(n==0){
		return 0;
	}
	return 1+countSetOnes(n & (n-1));
} 

/* Program to test function countSetOnes */
int main() { 
	int i;
	cout<<"Enter the number";
	cin>>i;
	cout <<"Number of Ones in the binary repersentation of the given number is : "<<countSetOnes(i); 
	return 0; 
} 

// This code is contributed by Aastik Mandil
