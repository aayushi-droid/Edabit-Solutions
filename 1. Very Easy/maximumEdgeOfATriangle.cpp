/* 
Maximum Edge of a Triangle
- Create a function that finds the maximum range of a 
triangle's third edge, where the side lengths are all 
integers.
Problem : https://edabit.com/challenge/56XXwAkLJGbEccYfn
*/
#include <iostream>
using namespace std;

int nextEdge(int side1, int side2){
    return (side1 + side2) - 1;
};

int main(){
    int side1, side2;
    cin >> side1;
    cin >> side2;
    cout << nextEdge(side1, side2) << endl;
    return 0;
}
