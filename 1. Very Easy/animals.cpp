#include <iostream>

using namespace std;

int animals(int chickens, int cows, int pigs) {
	int res;
	res = (2*chickens) + (4*cows) + (4*pigs);
	return res;
}

int main()
{
    int ch, c, p;
    cin>>ch>>c>>p;
    
    int x = animals(ch, c, p);
    
    cout<<x;

    return 0;
}