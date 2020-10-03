/*
Problem statement : Create a function that takes a string and returns the number (count) of vowels contained within it.
Probelm Link : https://edabit.com/challenge/jwPaBe2xjE46baPoG
*/
#include<bits/stdc++.h>
using namespace std;
#define forl(i,m,n) for(int i=m; i<n;i++)
int countVowels(string str)
{
    string vowel("aeiou");
    int vowelCount=0;
    forl(i,0,str.length())
            forl(j,0,vowel.length())
                if(str[i]==vowel[j])
                    vowelCount++;
    return vowelCount;
}

int main()
{
    string word;
    getline(cin,word);
    int vowels=countVowels(word);
    cout<<vowels;
    return 0;
}


