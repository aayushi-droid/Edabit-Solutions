/* Problem-Task : This will take a HEX number and returns the binary equivalent (as a string).
 * Problem Link : https://edabit.com/challenge/NX5uRSLwuXwsqKfiR
*/

#include<bits/stdc++.h>
using namespace std;

string toBinary(string hexadecimal)
{
    int position=2;         //since the first two positions will be occupied by 0x
    int curr;               //stores current hexadecimal digit in decimal
    char binary[8];
    for(int i=0;i<8;i++)
    	binary[i]='0';     //initialises binary to "00000000"
    while(hexadecimal[position]!='\0')
    {
        if(hexadecimal[position]>=65)
            curr=hexadecimal[position]-'A'+10;
        else
            curr=hexadecimal[position]-'0';

        int binaryPos=(4*(position-2))+3;

        while(curr>0)       //converts curr to binary and stores in the required position of binary
        {
            binary[binaryPos]=(char)'0'+curr%2;
            curr/=2;
            binaryPos--;
        }
        position++;
    }
    return binary;
}
int main()
{
    string hexadecimal;
    cout<<"Enter a hexadecimal number (in 0x__ notation): ";
    cin>>hexadecimal;
    cout<<"The number in binary is: "<<toBinary(hexadecimal)<<'\n';
    return 0;
}