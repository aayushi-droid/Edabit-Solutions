//Problem:Find The array of multiples of a given number till given length
//Problem Link:https://edabit.com/challenge/7oyHeyJR2LkB3hr8g

#include <iostream>
#include<vector>
using namespace std;

vector<int>arr;

void arrayOfMultiples(int number , int length)
{
	for(int i=number ; i <= number*length ; i = i + number)
	{
		arr.push_back(i);
	}
}

int main()
{
	int number,length;
	cin >> number >> length;

	arrayOfMultiples(number,length);

	for(int i = 0;i < arr.size() ; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}
