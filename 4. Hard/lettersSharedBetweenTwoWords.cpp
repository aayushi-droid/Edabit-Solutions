/* Problem-Statement : Create a function that returns the number of characters shared between two words.
 * Problem Link : https://edabit.com/challenge/qeCS48GXtK9NJLc9C
*/

#include <iostream>
using namespace std;

int sharedLetters(std::string str1, std::string str2) {
	int arr[26]={0};
	for(auto x:str1)
		arr[x-'a']++;
	int count=0;
	for(auto x:str2) {
		if(arr[x-'a']) {
			count++;
			arr[x-'a']--;
		}
	}
	return count;
}

int main() {
    string str1,str2;
    cin>>str1>>str2;
    cout<<sharedLetters(str1, str2)<<endl;
    return 0;
}