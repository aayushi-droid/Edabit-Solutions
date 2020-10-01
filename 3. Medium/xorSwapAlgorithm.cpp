#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    cout << "Before Swap: \n";
    cout << "A: " << a << "\n";
    cout << "B: " << b << "\n";
    a ^= b;
    b ^= a;
    a ^= b;
    cout << "After Swap: \n";
    cout << "A: " << a << "\n";
    cout << "B: " << b << "\n";
    return 0;
}
