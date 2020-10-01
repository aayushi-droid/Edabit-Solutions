/*
Problem statement : Create a function that takes an 
                    array and finds the integer which appears an 
                    odd number of times.
Problem Link : https://edabit.com/challenge/wgnmQTbfssuhvZHqe
Difficulty : Hard
Category : Implementation
*/


#include <stdio.h> 
int findOdd(int arr[], int n) 
{ 
	int res = 0, i; 
	for (i = 0; i < n; i++) 
		res ^= arr[i]; 
	return res; 
} 
int main(void) 
{ 
	int arr[] = { -2,-1,-1, -1, -1, 14, 14 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	printf("The odd occurring element is %d ", 
		findOdd(arr, n)); 
	return 0; 
} 
