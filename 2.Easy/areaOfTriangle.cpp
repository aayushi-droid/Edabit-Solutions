/* 
   Problem-Task : A program that takes the base and height of a triangle and return its area.
   Problem Link : https://edabit.com/challenge/HvYiBXgfPtnDHitym
*/

#include <iostream> 
using namespace std; 

int triArea(int base, int height) 
{
    long area;
    area = (base * height)/2;
    return area;
}
  
int main() 
{ 
    int base, height;
    cin >> base;
    cin >> height;
    if(base||height > 0)
    {
        cout << "Enter a non-negative, non-zero integer";
        return 0;
    }
    cout << triArea(base,height) << endl;
    return 0; 
} 