#include "bits/stdc++.h"
using namespace std;

int getAbsSum(std::vector<int> arr) {
	int x=0;
  for (int y:arr)
  {
    x+= abs(y);
  }
  return x;
}

int main()
{
    vector <int> arr {2, -1, 4, 8, 10};
    cout << getAbsSum(arr) << endl;
    return 0;
}