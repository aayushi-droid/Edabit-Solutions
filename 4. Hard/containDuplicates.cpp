#include <iostream>
#include<string>
#include <sstream> 


using namespace std;
bool areChractersUnique(string str) 
{ 
    // An integer to store presence/absence 
    // of 26 characters using its 32 bits. 
    int checker = 0; 
  
    for (int i = 0; i < str.length(); ++i) 
    { 
        int val = (str[i]-'a'); 
  
        // If bit corresponding to current 
        // character is already set 
        if ((checker & (1 << val)) > 0) 
            return false; 
  
        // set bit in checker 
        checker |=  (1 << val); 
    } 
  
    return true; 
} 

void DuplicateLetters(string str){
    // Initialise the istringstream 
    // with the given string 
    istringstream iss(str); 
    int flag=0;
    
    // Iterate the istringstream 
    // using do-while loop 
    do { 
        string subs; 
  
        // Get the word from the istringstream 
        iss >> subs; 

        // make flag=1 if a word with duplicate found and print false
        if (subs.length()>1 && areChractersUnique(subs)==0){
            cout<<"False";
            flag=1;
            break;
        }
        
  
    } while (iss); 
    //if no word with duplicate print true
    if(flag==0){
        cout<<"True";
    }
  
}

int main()
{
   DuplicateLetters("this iis the word");
   return 0;
}