
#include <bits/stdc++.h> 
using namespace std; 
//reverse string using recursion
void reverseString(string &str, int i = 0) 
{ 
    int n = str.length(); 
    if (i == n / 2) 
        return; 
    swap(str[i], str[n - i - 1]); 
    reverseString(str, i + 1); 
} 
int main() 
{ 
	string str;
    cout<<"enter string:"<<endl; 
    getline(cin,str);
	reverseString(str); 
	cout << str; 
	return 0; 
} 
