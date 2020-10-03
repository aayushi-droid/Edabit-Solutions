/*
Problem statement : Create a function that returns the number of characters shared between two words.
Probelm Link : https://edabit.com/challenge/qeCS48GXtK9NJLc9C
*/
#include<bits/stdc++.h>
using namespace std;
#define forl(i,m,n) for(int i=m; i<n;i++)

//STRINGS STORE CHARACTERS IN DYNAMIC FORMAT
int commonChars(string word1, string word2)
{
    int commonCount=0;
    //LOOPING THROUGH CHARACTERS OF 1ST WORD
    forl(i,0,word1.length())
    //LOOPING THROUGH CHARACTERS OF 2ND WORD WHILE LETTER OF 1ST WORD IS FIXED STARTING FROM SAME POSITION AS THAT LETTER
        forl(j,i,word2.length())
            if(word1[i]==word2[j])
            {
                //STORING DATA WHEN COMMON CHARACTER IS FOUND
                commonCount++;
                //BREAKING TO PREVENT ADDITIONAL DATA IF SAY SECOND WORD ANOTHER COMMON CHARACTER AS HERE IN word2[i]
                break;
            }
    return commonCount;
}

int main()
{
    string firstWord, secondWord;
    getline(cin,firstWord);
    getline(cin,secondWord);
    int commonCharacters=commonChars(firstWord,secondWord);
    cout<<commonCharacters;
}
