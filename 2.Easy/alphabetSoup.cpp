// problem statement:Create a function that takes a string 
// and returns a string with its letters in alphabetical 
// order.
//link:https://edabit.com/challenge/KNxEs8se6jzyHDBfy

#include<bits/stdc++.h> 
using namespace std; 
  
// function to print string in sorted order 
void alphabetSoup(string &str){
   sort(str.begin(), str.end()); 
   cout << str; 
} 
  
// Driver program to test above function 
int main(){ 
    string s;
    cin>>s;
    alphabetSoup(s);  
    return 0; 
} 
