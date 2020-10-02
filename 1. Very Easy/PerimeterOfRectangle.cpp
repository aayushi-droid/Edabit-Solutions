// ****Task :- Create a function that takes length and width and finds the perimeter of a rectangle.****
// ***Problem link : https://edabit.com/challenge/XnJ24rWW7iJkNrtsh

#include <iostream>
using namespace std;

int findPerimeter(int l, int b)
{
    return (2 * (l + b));
};

int main()
{
    int l, b, perimeter;
    cout << "Enter the value of length and breadth" << endl;
    cin >> l >> b;
    perimeter = findPerimeter(l, b);
    cout << "The perimeter of rectangle is : " << perimeter << endl;
    return 0;
}
