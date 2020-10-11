/* Problem Statement: Create a function that takes a string and returns the number (count) of vowels contained within it.
* Problem link: https://edabit.com/challenge/jwPaBe2xjE46baPoG */

#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

bool isVowel(char ch) 
{ 
    ch = toupper(ch); 
    return (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'); 
} 

int countVowels(std::string str) 
{
  char ch;  
  int i, vowels = 0; 
	for(i = 0; i<str.length(); i++)
    {
        ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || isVowel(str[i])) 
            vowels++;
    }
  return vowels; 
}

int main()
{
    system("cls");
    string str;
    cin>>str;
    int noofvowels = countVowels(str);
    cout<<noofvowels<<endl;
    system("pause");
}