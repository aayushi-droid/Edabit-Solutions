/* Problem-Task : Create a function that returns the subarrays of n consecutive elements from the original element that sum up to k.
 * Problem Link : https://edabit.com/challenge/SkJoSKw9i3GQf62k5
*/

#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> slidingSum(vector<int> arr, int n, int k) {
 vector <vector <int> > ans;
 int count = 0, sum = 0, i = 0, j = 0;
 while(i < arr.size() || j < arr.size()){
     while(j - i < n && j < arr.size()){
         sum += arr[j];
         j ++;
     }
     if(sum == k && j - i == n){
         vector <int> buf;
         for (int b = i; b < j; b ++)
             buf.push_back(arr[b]);
         ans.push_back(buf);
     }
     sum -= arr[i];
     i ++;
 }
 return ans;
}

void tester(vector <int> arr, int n, int k, int testNumber){
    cout << "Test number: #" << testNumber << '\n';
    vector <vector <int> > ans = slidingSum(arr, n, k);
    for (int i = 0; i < ans.size(); i ++){
        for (int j = 0; j < ans[i].size(); j ++)
            cout << ans[i][j] << ' ';
        cout << '\n';
    }
}
int main()
{
    vector<int> test1{3, 4, 1, 9, 9, 0, 3, 5, 4};
    vector<int> test2{1, 4, 2, 3, 5, 0};
    vector<int> test3{5, 5, 5, 5, 5};
    vector<int> test4{5, 5, 5, 5, 5};
    tester(test1, 3, 8, 1);
    tester(test2, 2, 5, 2);
    tester(test3, 1, 5, 3);
    tester(test4, 5, 24, 4);
    return 0;
}
