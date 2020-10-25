/* Problem-Task : The Atbash cipher is an encryption method in which each letter of a word is replaced with its "mirror" letter in the alphabet: A <=> Z; B <=> Y; C <=> X; etc.
 * Problem Link : https://edabit.com/challenge/977xgdi57bp23ibz5
*/

#include <iostream>

using namespace std;

string atbash(string str) {
    int sz = str.size();
    string ans = "";
    for (int i = 0; i < sz; i ++){
        if('a' <= str[i] && str[i] <= 'z'){
            ans += ((25 - (str[i] - 'a')) + 'a');  
        } else if('A' <= str[i] && str[i] <= 'Z'){
            ans += ((25 - (str[i] - 'A')) + 'A');
        } else 
            ans += str[i];
    }
    return ans;
}

int main()
{
    cout << atbash("apple") << '\n';
    cout << atbash("Hello world!") << '\n';
    cout << atbash("Christmas is the 25th of December") << '\n';
    return 0;
}
