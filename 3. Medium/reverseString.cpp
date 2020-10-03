/*
Problem task: This program will add two numbers
Problem Link: https://edabit.com/challenge/SFzHtm63XT6EYNHWY
*/

#include <iostream>
#include <string>
using namespace std;

void reverse(string &,int, int);

int main()
{
    string str="hello";
    reverse(str,0,str.length()-1);
    cout << "reverse(\"hello\") --> " << str << endl;

    string str1="world";
    reverse(str1,0,str1.length()-1);
    cout << "reverse(\"world\") --> " << str1 << endl;

    string str2="a";
    reverse(str2,0,str2.length()-1);
    cout << "reverse(\"a\") --> " << str2 << endl;

    string str3="";
    reverse(str3,0,str3.length()-1);
    cout << "reverse(\" \") --> " << str3 << endl;

    return 0;
}

void reverse(string &str,int l, int h){
    if(l<h){
        swap(str[l],str[h]);
        reverse(str,l+1,h-1);
    }

}
