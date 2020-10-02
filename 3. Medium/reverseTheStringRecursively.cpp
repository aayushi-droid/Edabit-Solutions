/* Problem-Task : This program will reverse the string recursively
 * Problem Link :  https://edabit.com/challenge/HXGx9oXukEgsFK6PH
 * */


#include<iostream>
#include<string>
#include<algorithm>

void reverse(std::string &str,int i=0){
    int n=str.length();
    if(i==n/2){
        return;
    }
    std::swap(str[i],str[n-i-1]);
    reverse(str,i+1);
    
}

int main(){
    std::string str="Hello World";
    reverse(str);
    std::cout<<str;
    return 0;
}