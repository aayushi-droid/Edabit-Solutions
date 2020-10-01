/* this program will add two numbers
    * Problem : https://edabit.com/challenge/SFzHtm63XT6EYNHWY
*/
#include <iostream>
using namespace std;

int addition(int a, int b) {
    if (b > 0) { 
        while (b > 0) { 
            a++; 
            b--; 
        } 
    } 
    if (b < 0) { // when 'b' is negative 
        while (b < 0) { 
            a--; 
            b++; 
        } 
    } 
}
int main() {

    int sum;

    sum = addition(5, 4);
    cout << sum << endl;
    return 0;
}
