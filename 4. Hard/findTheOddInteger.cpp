#include<bits/stdc++.h>
using namespace std;

int findodd(vector<int> arr)
{
    int i;
    map<int,int> mp;
    for(i=0;i<arr.size();i++) mp[arr[i]]++;
    for(auto itr=mp.begin();itr!=mp.end();itr++)
    {
        if((itr->second)%2!=0) 
            return itr->first;
    }
}

int main()
{
    int i,j;
    vector<int> arr={1,1,2,2,3,3,4,4,5};
    int odd=findodd(arr);
    cout<<odd;
    return 0;
}
