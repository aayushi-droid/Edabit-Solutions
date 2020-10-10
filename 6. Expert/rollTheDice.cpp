/* Problem-Task: Function that computes how many possible combinations of n 6-sided die will produce a certain number
 * Problem Link: https://edabit.com/challenge/6ejJ6e7fLdqzGPa3q
*/

#include <bits/stdc++.h>
using namespace std;

int diceRoll(int numDice, int outcome) {	
	int combinations = 0;
	int dice[numDice];
	for(int i = 0; i < numDice; i++) dice[i] = 1;
	bool done = false;
	while(!done) {
		int sum = 0;
		for(int i = 0; i < numDice; i++) sum += dice[i];
		if(sum == outcome){
			combinations++;
		}
		done = true;
		for(int i = 0; i < numDice; i++) {
			if(dice[i] != 6){
				done = false;
			}
		}
		dice[0]++;
		for(int i = 0; i < numDice - 1; i++) {
			if(dice[i] > 6){
				dice[i] = 1;
				dice[i + 1]++;
			} 
			else {
				break;
			}
		}
	}
	return combinations;
}

int main() {
	std::string numDice;
	std::string outcome;
	std::cout << "Enter number of dice: ";
	std::getline(std::cin, numDice);
	std::cout << "Enter outcome: ";
	std::getline(std::cin, outcome);
	std::cout << "There are " << diceRoll(std::stoi(numDice), std::stoi(outcome)) << " possible combinations." << std::endl;
	return 0;
}
