/* Problem-Task : Create a function that takes a name and returns a greeting in the form of a string.
 * Problem Link : https://edabit.com/challenge/MtG39AgXhyeePSiY2
*/
#include<iostream>
using namespace std;

std::string helloName(std::string name) {
	return "Hello " + name + "!\n";
}

int main() {
	cout << helloName("Gerald");
	cout << helloName("Tiffany");
	cout << helloName("Ed");
	return 0;
}

/*
Sample Output:
Hello Gerald!
Hello Tiffany!
Hello Ed!
*/