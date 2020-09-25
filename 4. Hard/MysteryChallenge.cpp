// Problem statement: Mystery Challenge.
// Probelm Link: https://edabit.com/challenge/RRX73DEm2BLp8z2TG
```C++
//sample test case = 1221
//sample output = 112211
#include <bits/stdc++.h>
using namespace std;
string mysteryFunc(int n)
{
    string str;
	 string st=to_string(n);;
    int c=1;
    for (int i=0; i<st.size(); i++)
    {
        if (st[i]==st[i + 1])
        {
					c=c+1; 
		}
        else
        {
    		str=str+to_string(c)+st[i];
            c=1;
        }
    }
    return str;
}
int main()
{
    int a=1221;
    string b=mysteryFunc(a);
    cout<<b;
    return 0;
}
```
