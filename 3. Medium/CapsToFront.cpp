/*
  * Create a function that moves all capital letters to the front of a word.
  * Problem : https://edabit.com/challenge/rQ7yMFF9aTxPADmTT
*/


#include <stdio.h>
#include <ctype.h>
#include<bits/stdc++.h>
std::string capToFront(std::string str) {
	std::string a = "";
	std::string b = "";

	for (int i = 0; i < str.length(); i++)
	{	
		if (isupper(str[i]))
			a = a + str[i];
		else
			b = b + str[i];
	}
	return a + b;
}

int main(){
    std::string s;
    std::cin>>s;
    std::cout<<capToFront(s);
    return 0;
}