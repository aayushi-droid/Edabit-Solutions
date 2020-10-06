#include<iostream> 
#include<cmath>
using namespace std;
//We can deduce a formula for left and right shift
//For left shift N*(2^i)
//For right shift N/(2^i)

int rightshift(int n, int i) //Funtion to determine right shift
{
    return n >> i;

}
int leftshift(int n, int i) //Function to determine left shift
{
    return n << i;
}
int Formleftshift(int n,int i)//Funtion to calculate left shift using formula
{
    return n*pow(2,i);
}
int Formrightshift(int n,int i)//Function to calculate right shift using formula
{
    return n/(pow(2,i));
}
int main(int argc, char const *argv[])
{
    int i, n;
    cout << "Enter the number" << endl;
    cin >> n;
    cout << "Enter the number of times left and right shift to be performed" << endl;
    cin >> i;
    cout << "n"<< "<<"<< "i" << "=" <<leftshift(n, i) << endl;
    cout << "n"<< ">>" << "i" << "=" <<rightshift(n, i) << endl;
    cout << "n"<< "<<" << "i" << "=" <<Formleftshift(n, i) << endl;
    cout << "n"<< ">>" << "i" << "=" <<Formrightshift(n, i) << endl;
    return 0;
}
