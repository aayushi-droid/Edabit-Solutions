#include <iostream>

using namespace std;

int factorial(int num)
{
    if(num<0)
    {
        cout<<"please enter a non negative number";
        return 0;
    }


    else if(num==0)
        {
            num=1;
            return num;
        }
    else if(num<2)
    {
        num=num*1;
        return num;
    }
    else
    {
        return (num*factorial(num-1));
    }
}

int main()
{
    char choice;
    do
    {

    int value=4;
    cout<<"enter the value of which factorial has to find : ";
    cin>>value;
    int result;
    result = factorial(value);
    cout<<result;
    cout<<"\npress 'y' if you want to find more factorial: ";
    cin>>choice;
    }
    while(choice=='Y'|| choice=='y');
}
