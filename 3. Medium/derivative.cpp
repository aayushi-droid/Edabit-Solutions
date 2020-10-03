/*
  * This program takes numbers b and m as arguments and returns the derivative of the function f(x)=x^b with respect to x at the point where x=m, where b and m are constants.
  * Problem : https://edabit.com/challenge/sR3aNNQ9kJoSurDLK
*/
#include <iostream>
#include <cmath>
using namespace std;

int derivative(int b, int m)
{
    int ans = b * (pow(m, b - 1));
    return (ans);
}

int main()
{
    int b, m;
    cout << "Enter exponenet of the function (b) for function f(x) = x^b : ";
    cin >> b;
    cout << "\nEnter the value of constant (m) as point x = m : ";
    cin >> m;

    cout << derivative(b, m);
    return 0;
}
