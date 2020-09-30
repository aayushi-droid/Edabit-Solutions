/* Problem-Task : Given an integer, create a function that returns the next prime. If the number is prime, return the number itself.
 * Problem Link : https://edabit.com/challenge/arobBz954ZDxkDC9M
*/

#include<bits/stdc++.h>
using namespace std;

bool isPrime(int no){
    for(int i = 2;i*i<=no;i++){
        if(no%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    if(n<=1){
        cout<<2<<endl;
        return 0;
    }

    for(int i = n;;i++){
        if(isPrime(i)){
            cout<<i<<endl;
            break;
        }
    }

    return 0;
}