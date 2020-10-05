#include <bits/stdc++.h> 
using namespace std; 

const int sz = 1e5; 
bool isPrime[sz + 1]; 

// Function for Sieve of Eratosthenes 
void sieve() 
{ 
	memset(isPrime, true, sizeof(isPrime)); 

	isPrime[0] = isPrime[1] = false; 

	for (int i = 2; i * i <= sz; i++) { 
		if (isPrime[i]) { 
			for (int j = i * i; j < sz; j += i) { 
				isPrime[j] = false; 
			} 
		} 
	} 
} 

// Function to print the elements of the array 
void printArray(int arr[], int len) 
{ 
	for (int i = 0; i < len; i++) { 
		cout << arr[i] << ' '; 
	} 
} 

// Function to remove all the prime numbers 
void removePrimes(int arr[], int len) 
{ 
	// Generate primes 
	sieve(); 

	// Traverse the array 
	for (int i = 0; i < len; i++) { 

		// If the current element is prime 
		if (isPrime[arr[i]]) { 

			// Shift all the elements on the 
			// right of it to the left 
			for (int j = i; j < len; j++) { 
				arr[j] = arr[j + 1]; 
			} 

			// Decrease the loop counter by 1 
			// to check the shifted element 
			i--; 

			// Decrease the length 
			len--; 
		} 
	} 

	// Print the updated array 
	printArray(arr, len); 
} 


int main() 
{ 
	int arr[] = {1,2,3,4,5,6,7,8,9}; 
	int len = sizeof(arr) / sizeof(int); 

	removePrimes(arr, len); 

	return 0; 
} 
