#include <iostream>
using namespace std;
int gcd(int a, int b)
{
	if(a==0)
		return b;
	else
	    return gcd(b%a,a);
}
int main()
{
	int a,b;
	cin >> a >> b;

	int ans = gcd(a,b);
	cout << ans;
	return 0;
}
