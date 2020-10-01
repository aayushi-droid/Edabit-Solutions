/* Problem-Task : This will take a HEX number and returns the binary equivalent (as a string).
 * Problem Link : https://edabit.com/challenge/NX5uRSLwuXwsqKfiR
*/

#include <iostream>
using namespace std; 
void toBinary(string hexnum) 
{ 
    long int i = 0; 
  
    while (hexnum[i]) { 
  
        switch (hexnum[i]) { 
        case '0': 
            cout << "0000"; 
            break; 
        case 'x': 
            cout << ""; 
            break; 
        case '1': 
            cout << "0001"; 
            break; 
        case '2': 
            cout << "0010"; 
            break; 
        case '3': 
            cout << "0011"; 
            break; 
        case '4': 
            cout << "0100"; 
            break; 
        case '5': 
            cout << "0101"; 
            break; 
        case '6': 
            cout << "0110"; 
            break; 
        case '7': 
            cout << "0111"; 
            break; 
        case '8': 
            cout << "1000"; 
            break; 
        case '9': 
            cout << "1001"; 
            break; 
        case 'A': 
        case 'a': 
            cout << "1010"; 
            break; 
        case 'B': 
        case 'b': 
            cout << "1011"; 
            break; 
        case 'C': 
        case 'c': 
            cout << "1100"; 
            break; 
        case 'D': 
        case 'd': 
            cout << "1101"; 
            break; 
        case 'E': 
        case 'e': 
            cout << "1110"; 
            break; 
        case 'F': 
        case 'f': 
            cout << "1111"; 
            break; 
        
        default: 
            cout << "\n Invalid hexadecimal digit "
                 << hexnum[i]; 
        } 
        i++; 
    } 
} 

int main() 
{ 
    char hexnum[100]; 
    cout<<"Enter a Hexadecimal number for converting it to Binary :";
	cin>>hexnum;
    cout << "\nEquivalent Binary value is : "; 
	toBinary(hexnum); 
  
    return 0; 
} 
