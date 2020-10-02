/* Problem-Task : Create a function that takes a string and returns the number (count) of vowels contained within it.
 * Problem Link : https://edabit.com/challenge/jwPaBe2xjE46baPoG
*/  

#include<iostream>
#include <string>
using namespace std;

int check(char a)
{
    char vowels[11]={"aeiouAEIOU"};

    for (int i = 0; vowels[i] != '\0'; i++)
    {
        if(a==vowels[i])
            {
                return 1;
                break;
            }
    }
    
    return 0;
}

void countVowels(string S)
    {
    int ctr=0;

    for (int i = 0; i < S.size(); i++)
    {
        ctr += check(S[i]);
    }
    
    cout<<"\nNumber of vowels: "<<ctr;
    }

int main()
{

countVowels("Celebration");
return 0;
}