/*
Problem-Task: Create a function that counts the number of syllables a word has. Each syllable is separated with a dash -.
Problem Link: https://edabit.com/challenge/zRe5fx3MbiBxcrvXH
*/
#include <bits/stdc++.h>
using namespace std;

int numberSyllables(std::string word) {
	int count = 0;
     for(int i=0;i<word.length();i++){
			 if(word[i] == '-')
				 count++;
		 }
	return count+1;
}

int main()
{
    string str = "mon-u-men-tal";
    cout << numberSyllables(str) << endl;
    return 0;
}