#include <bits/stdc++.h> 
using namespace std; 
  
float find_area(float a, float b, float c){  
    if (a < 0 || b < 0 || c < 0 || (a + b <= c) || a + c <= b || b + c <= a){  //Triangle inequality theorem
        cout << "Not a valid triangle";  
        exit(0);  
    }  
    float s = (a + b + c) / 2;  
    return sqrt(s * (s - a) * (s - b) * (s - c));  //Heron's formula
}  
 
int main(){  
    float a,b,c;
    cout<<"Enter the three sides of the triangle"<<endl;
    cin>>a>>b>>c;
    cout << "Area of the triangle is " << find_area(a, b, c);  
    return 0;  
    }
