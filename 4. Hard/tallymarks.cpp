// Problem statement: Create a function that can convert from normal notation to tally-mark notation and vice versa. In tally-mark notation, a number can be decomposed as the sum of 5s + remainder.The function will look like this: switchNotation([current scores], desired notation)
// Probelm Link: https://edabit.com/challenge/deeB7yAgunvLKf4fJ
#include<bits/stdc++.h>
using namespace std;
std::vector<int> switchNotation(std::vector<int> scores, std::string desired_notation) {
	if (desired_notation  == "normal")
	{
		std :: vector<int> res;
		for (auto i : scores)
		{
			std ::string l = std ::to_string(i);
			int z = 0;
			for (auto j : l)
			{
				z += j - '0';
			}
			res.push_back(z);
		}
		return res;
	}
	else
	{
		std :: vector<int> res;
		for (auto i : scores)
		{
			int l = i % 5;
			std ::string f(i / 5, '5');
			if (l != 0)
				f += std ::to_string(l);
			res.push_back(stoi(f));
		}
		return res;
	}
}
int main()
{
	int t;//number of testcases;
	cin >> t;
	while (t--)
	{
		std :: vector <int> scores, res;
		int n;//size of array;
		cin >> n;
		while (n--)
		{
			int x;
			cin >> x;
			scores.push_back(x);
		}
		std :: string desired_notation;//notation type
		cin >> desired_notation;
		res = switchNotation(scores, desired_notation);
		for ( auto i : res )
		{
			cout << i << " ";
		}
		cout << endl;

	}
}