/* this program will add two numbers
    * Problem : https://edabit.com/challenge/SFzHtm63XT6EYNHWY
*/
#include <iostream>
using namespace std;

int addition(int a, int b) {
    return a + b;
};

int main() {

    int sum;
    cout<<"Enter the two numbers \n";
    int a,b; 
    cin>>a>>b;
    sum = addition(a,b);
    cout << "Sum of two numbers are: "<<sum << endl;
    return 0;
}
