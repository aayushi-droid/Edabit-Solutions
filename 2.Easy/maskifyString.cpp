/*
  * This program creates a function that takes a string, and masks it.
  * Problem : https://edabit.com/challenge/2MAr9P4TTGooXS8Xa
*/
#include <iostream>
#include <string>
using namespace std;

void maskify(string a)
{
  int l = a.length();
  for (int i = 0; i < l - 4; i++)
  {
    a[i] = '#';
  }
  cout << a;
}

int main()
{
  string l;
  cout << "Enter a string you need to mask : ";
  cin >> l;
  cout << "\nNew Masked String is : ";
  maskify(l);
  return 0;
}