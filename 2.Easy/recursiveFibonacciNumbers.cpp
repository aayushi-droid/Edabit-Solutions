/* Problem-Task : This program will recursively calculate the nth given number in Fibonacci's sequence
 * Problem Link : https://edabit.com/challenge/SFzHtm63XT6EYNHWY
*/

#include<iostream>

int fibonacci(unsigned int n);

int fibonacci(unsigned int n) {
 
  if(n == 0 || n == 1)
    return n;
  
  else 
    return (fibonacci(n-1) + fibonacci(n-2));
 
}

int main() {
    int n = 8;

	std::cout << fibonacci(n);
	
    return 0;
}