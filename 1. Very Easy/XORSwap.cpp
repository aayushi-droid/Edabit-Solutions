//Problem statement : Switch 2 variables using the XOR operator
//Probelm Link : https://edabit.com/challenge/dHYXiEXydZxrwntBq
#include <utility>
std::pair<int, int> XOR(int a, int b) {
	a^=b;
	b^=a;
	a^=b;
	return std::make_pair(a,b);
}