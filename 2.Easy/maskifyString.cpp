/* Problem-Task : This program will Maskify the String
 * Problem Link : https://edabit.com/challenge/2MAr9P4TTGooXS8Xa
*/

#include <iostream>
#include <string.h>
#include <stdlib.h> 

using namespace std;

string maskifyString(string inputString){
	int len = inputString.length();
	int i,j;
	if(len>4){
		string newString = inputString;
		for(i=0;i<len-4;i++){
			newString[i]='#';	
		}
		return newString;	
	}
	else{
		return inputString;
	}
}
int main() {
	string inputString;
	cout<<"Enter String to be Masked :";
	cin>>inputString;
    cout<<maskifyString(inputString);
    return 0;
}
