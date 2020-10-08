
/* Problem-Task : Is the Number Even or Odd?
 * Problem Link : https://edabit.com/challenge/65dsmYkHsenAJ3979
*/

#include <iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter the number  "<<endl;
	cin>>num;
	if(num%2==0)
	{
	    cout<<num <<" is is Even"<<endl;	
	}
	else
		cout<<num <<" is odd"<<endl;

 return 0;


string isEvenOrOdd(int number){
    return (number%2==0)?"even":"odd";
}

int main(){
    int number;
    cin>>number;
    cout<<isEvenOrOdd(number);
    return 0;

}
