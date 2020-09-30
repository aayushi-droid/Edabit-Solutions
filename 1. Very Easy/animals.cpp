/* Problem statement : In this challenge, a farmer is asking you to tell him how many legs can be counted among all his animals. The farmer breeds three species:
 chickens = 2 legs
 cows = 4 legs
 pigs = 4 legs
 The farmer has counted his animals and he gives you a subtotal for each species. You have to implement a function that returns the total number of legs of all the animals. */

// Probelm Link :  https://edabit.com/challenge/aADAoRtkbZWEKw9Ap
// Choose one Cateorgy - Very Easy
// question category : algorithms, math

#include <iostream>

using namespace std;

int animals(int chickens, int cows, int pigs) {
	int res;
	res = (2*chickens) + (4*cows) + (4*pigs);
	return res;
}

int main()
{
    int ch, c, p;
    cin>>ch>>c>>p;
    
    int x = animals(ch, c, p);
    
    cout<<x;

    return 0;
}