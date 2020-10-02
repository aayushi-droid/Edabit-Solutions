/* Problem-Task : Create a function that takes three numbers — the width and height of a rectangle, and the radius of a circle and returns true if the rectangle can fit inside the circle, false if it can't.
 * Problem Link : https://edabit.com/challenge/PoSkat7FepavXW49T
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int width, height, radius;
    cin >> width >> height >> radius;
    if (width*width + height*height <= 4*radius*radius) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}
