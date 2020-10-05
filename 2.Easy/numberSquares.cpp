/* Problem-Task : Number of Squares in an N * N Grid
 * Problem Link : https://edabit.com/challenge/ncqFJAp4bBiGwfBcg
*/
#include <iostream>
using namespace std;

int number_squares(int n)
{
        return (n*(n+1)*(2*n+1))/6;
}

int main()
{
    int num;
    cin >> num;

    cout << number_squares(num);
    return 0;
}