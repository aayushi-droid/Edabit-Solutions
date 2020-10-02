/* 
Problem Name : Is the Number Less than or Equal to Zero?
Problem Link : https://edabit.com/challenge/7KFAJSSp3pmE8bHhK
*/
#include <iostream>
using namespace std;

bool numLessThanOrEqualZero(int num)
{
    if(num <= 0)
        return true;
    else
        return false;
}    

int main()
{
    int num;
    cin >> num;
    if(numLessThanOrEqualZero(num))
        cout << "true \n";
    else
        cout << "false \n";
    return 0;
}
