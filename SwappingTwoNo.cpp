#include <iostream>
using namespace std;

int main()
{
    int var1,var2, temp;
    cin>>var1>>var2;

    //displaying numbers before swapping
    cout<<"Before Swapping: First Number: "<<var1<<" Second Number: "<<var2;

    //swapping
    var1 = var1 + var2;
    var2 = var1 - var2;
    var1 = var1 - var2;

    //displaying numbers after swapping
    cout<<"\nAfter Swapping: First Number: "<<var1<<" Second Number: "<<var2;
    return 0;
}
