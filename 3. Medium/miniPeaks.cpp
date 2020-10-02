/* Problem-Task : Write a function that returns all the elements in an array that are strictly greater than their adjacent left and right neighbors.
 * Problem Link : https://edabit.com/challenge/5KAsvzdc9DLfEx65t
*/
#include <bits/stdc++.h>
using namespace std;

vector<int> miniPeaks(vector<int> arr) {
    vector<int> ans;
    int n = arr.size();
    for (int i = 1; i < n-1; ++i) {
            if(arr[i] > arr[i-1] && arr[i] > arr[i+1]) {
                    ans.push_back(arr[i]);
            }
    }
}
