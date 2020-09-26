/* this program will display to n number o decimal places of PI.
    * Problem : https://edabit.com/challenge/wzPBMkanx2Db8Kpmp
*/

#include <iostream>
#include <cmath>

using namespace std;

double myPi(int n) {
	return round(M_PI*pow(10, n))/pow(10, n);
}

int main(){
    int n;
    double piVal;
    cout << "Enter number of decimal places to which PI will be displayed : ";
    cin >> n;
    piVal = myPi(n);
    cout << "PI : " << piVal;
}