/* Problem-Statement : Create a function that takes two numbers as arguments and returns the Greatest Common Devisor (GCD) of the two numbers.
 * Problem Link : https://edabit.com/challenge/BzEQsTSmPATbsZJCR
*/

#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if(b==0)
        return a;
    return gcd(b, a%b);
}

int main() {
    int num1,num2;
    cin>>num1>>num2;
    cout<<gcd(num1, num2)<<endl;
    return 0;
}