#include<bits/stdc++.h> 
using namespace std;


int minCoins(int coins[], int m, int N)
{
  
  if (N == 0)
    return 0;
  
  
  int result = INT_MAX;
  
  
  for (int i=0; i<m; i++)
  {
    if (coins[i] <= N)
    {
      int res = 1 + minCoins(coins, m, N-coins[i]);
      
      if (res < result)
        result = res;
    }
  }
  return result;
}

int main() {
  int coins[] = {1,2,3,4,5};
  int sum = 11; 
  int total_coins = 5;
  cout << minCoins(coins,total_coins,sum);
}