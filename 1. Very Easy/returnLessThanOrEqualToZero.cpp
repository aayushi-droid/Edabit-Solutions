/* Problem-Task : Returns wether the number is lass or equals to 0 
 * Problem Link : https://edabit.com/challenge/7KFAJSSp3pmE8bHhK
*/

#include <iostream>
using namespace std;

bool lessThanOrEqualToZero(int num) {
	return num <= 0;	
}

int main()
{
    int n;
    cin >> n;
    cout << lessThanOrEqualToZero(n);
    return 0;
}
