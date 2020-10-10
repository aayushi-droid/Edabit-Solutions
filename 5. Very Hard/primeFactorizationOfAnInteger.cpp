/* Problem-Task : Find all the Prime Factors of an Integer
 * Problem Link : https://edabit.com/challenge/8vBvgJMc2uQJpD6d7
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> primeFactorsFunction(int n){
    vector<int> primeFactors;
    if(n%2==0){
        primeFactors.push_back(2);
        while(n%2==0){
            n/=2;
        }
    }
    for(int i = 3;i<=n;i+=2){
        if(n%i==0){
            primeFactors.push_back(i);
            while(n%i==0){
                n /= i;
            }
        }
    }
    if( n > 2) {
        primeFactors.push_back(n);
    }
    return primeFactors;
}

int main() {
    int n;
    cin>>n;
    vector<int> primeFactors = primeFactorsFunction(n);
    int noOfPrimes = primeFactors.size();
    for(auto it:primeFactors) {
        cout<<it<<" ";
    }
    return 0;
}
