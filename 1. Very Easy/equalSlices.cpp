
/* Problem-Task : Slice of Pie
 * Problem Link : https://edabit.com/challenge/zzv5CPD26cfv4pEQX
*/

#include <iostream>
using namespace std;

bool equalSlices(int total, int people, int each)
{
    return people*each<=total;
}

int main()
{
    int total, people, each;
    cin>>total>>people>>each;
    cout<<equalSlices(total, people, each);
    return 0;
}