
/* Problem-Task : Using the :? Operator
 * Problem Link : https://edabit.com/challenge/Qs9aWacyy5jXdNz45
*/

#include <iostream>
using namespace std;

void yeahNope(bool t)
{
    string c = t?"yeah":"nope";
    cout<<c;
}

int main()
{
    bool t;
    cin>>t;
    yeahNope(t);
    return 0;
}
