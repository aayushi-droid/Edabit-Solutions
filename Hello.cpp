//Create a function that calculates the number of different squares in an n * n square grid. :
//https://edabit.com/challenge/ncqFJAp4bBiGwfBcg :
//Choose one Category - Easy
//question category : Math


#include <iostream>
#include<math.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int ans=1;
   for(int i=2;i<=n;i++)
    ans+=(i*i);
    cout<<ans<<"\n";
    return 0;

}