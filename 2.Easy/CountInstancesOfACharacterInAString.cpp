/*
Problem Task: Count Instances of a Character in a String
Problem Link: https://edabit.com/challenge/kbFhwaDyrd79JrgeB
*/

#include <bits/stdc++.h>
using namespace std;

int instancesOfACharacter(string str1, string str2){
    char ch = str1[0];
    int count = 0;
    for(int i = 0; i < str2.size(); i++){
        if(str2[i] == ch)
            count++;
    }
    return count;
}

int main(){
    string str1, str2;
    cin >> str1;
    getline(cin, str2);
    cout << instancesOfACharacter(str1, str2);
    return 0;
}