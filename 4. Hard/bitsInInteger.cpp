// C++ program to Count number of ones in binary repersentation of a number
#include <iostream>
using namespace std; 

/* Function to get no of set ones in binary 
representation of positive integer n */
unsigned int countSetOnes(unsigned int n) 
{ 
	unsigned int count = 0; 
	while (n) { 
		count += n & 1; 
		n >>= 1; 
	} 
	return count; 
} 

/* Program to test function countSetOnes */
int main() 
{ 
	int i;
	cout<<"Enter the number";
	cin>>i;
	cout <<"Number of Ones in the binary repersentation of the given number is : "<<countSetOnes(i); 
	return 0; 
} 

// This code is contributed by Keshav Jha
