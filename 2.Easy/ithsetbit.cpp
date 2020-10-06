#include <iostream>
using namespace std;
//By using BIT Manipulation.
bool setbitcheck(int n, int i) //Function to check setbit
{
    int f = 1; 
    f = f << i;
    return n & f;   //Required operation to perform setbit search
}

int main(int argc, char const *argv[])
{
    int n, i;
    cout << "Enter the number" << endl;
    cin >> n;
    cout << "Position of bit to be checked" << endl;
    cin >> i;
    cout<<boolalpha<<setbitcheck(n,i)<<endl;
    return 0;
}
