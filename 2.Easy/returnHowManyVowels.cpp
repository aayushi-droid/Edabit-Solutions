/* Problem statement : Create a function that takes a string and returns the number (count) of vowels contained within it.
 * Probelm Link : https://edabit.com/challenge/jwPaBe2xjE46baPoG
*/

#include <bits/stdc++.h>

using namespace std;

set<char> vowels;

int howManyVowels(const string &s)
{
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (vowels.find(s[i]) != vowels.end())
        {
            count++;
        }
    }
    return count;
}
int main()
{
    vowels.insert('a');
    vowels.insert('e');
    vowels.insert('i');
    vowels.insert('o');
    vowels.insert('u');
    vowels.insert('A');
    vowels.insert('E');
    vowels.insert('I');
    vowels.insert('O');
    vowels.insert('U');
    string s;
    cin >> s;
    cout << howManyVowels(s);
    return 0;
}