#include<iostream> 
using namespace std; 

// Function to print the sorted array of string 
void printArraystring(string,int); 

// Function to Sort the array of string 
// according to lengths. This function 
// implements Insertion Sort. 
void sort(string s[], int n) 
{ 
	for (int i=1 ;i<n; i++) 
	{ 
		string temp = s[i]; 

		// Insert s[j] at its correct position 
		int j = i - 1; 
		while (j >= 0 && temp.length() < s[j].length()) 
		{ 
			s[j+1] = s[j]; 
			j--; 
		} 
		s[j+1] = temp; 
	} 
} 

// Function to print the sorted array of string 
void printArraystring(string str[], int n) 
{ 
	for (int i=0; i<n; i++) 
		cout << str[i] << " "; 
} 

// Main function 
int main() 
{ 
	string arr[] = {"GeeksforGeeks", "I", "from", "am"}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	
	// Function to perform sorting 
	sort(arr, n); 

	// Calling the function to print result 
	printArraystring(arr, n); 
	
	return 0; 
} 
