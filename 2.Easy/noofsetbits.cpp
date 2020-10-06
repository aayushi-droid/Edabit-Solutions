#include <iostream>
using namespace std;
//Method 1
int noofsetbit(int n) //Funtion to calculate no of set bits
{
    int count = 0;
    while (n > 0)
    {
        if ((n & 1) > 0) //Checking each bit one by one
        {
            count++;
        }
        n = n >> 1;
    }
    return count;
}
//Method 2 Using Brian Kerningham Algo
int setbit(int n)
{
    int count = 0;
    while (n > 0)
    {
        count++;
        n = n & (n - 1); //Brian Kerningham Algo
    }
    return count;
}
int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    cout << noofsetbit(n) << endl;
    cout << setbit(n) << endl;
    return 0;
}
