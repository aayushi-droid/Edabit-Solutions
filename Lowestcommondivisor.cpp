//Problem statement :Write a fuction to find the lowest common divisor of two numbers.
//Probelm Link : https://edabit.com/challenge/BzEQsTSmPATbsZJCR
//Choose one Cateorgy - Very Easy, Easy, Medium, Hard, Very Hard, Expert
//question category : Medium
#include <iostream>
using namespace std;

int lcd(int m, int n)
{
	int i=1,ans=1;
	for(i=1;i<=n;i++)
	{
		if(m%i==0 && n%i==0)
		{
			ans=i;
		}

	}
	return ans;

}


int main()
{
	int a,b;
	cout<<"enter two numbers"<<endl;
    cin>>a>>b;

	if(a>b)
	{
		cout<<lcd(a,b);
	}
	else
	{
		cout<<lcd(b,a);
	}
	return 0;

}
