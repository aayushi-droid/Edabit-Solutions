/* this program will add two numbers
    * Problem : https://edabit.com/challenge/SFzHtm63XT6EYNHWY
*/
#include <iostream>
using namespace std;

int addition(int a, int b) {
    return a + b;
};

int main() {
    int num1,num2;
    cin>>num1>>num2;
    cout << addition(num1, num2) << endl;
    return 0;
}
