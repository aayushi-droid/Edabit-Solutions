/* this program will finds the maximum range of a triangle's third edge, where the side lengths are all integers.
    * Problem : https://edabit.com/challenge/56XXwAkLJGbEccYfn
*/
#include <iostream>
using namespace std;

int nextEdge(int side1, int side2)
{
    return (side1 + side2) - 1;
};

int main()
{

    int edge;

    edge = nextEdge(8, 10);
    cout << edge << endl;
    return 0;
}
