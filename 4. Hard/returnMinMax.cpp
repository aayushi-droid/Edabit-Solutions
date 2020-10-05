/* Problem-Task : This program will return a vector with maximum and minimum element from the provided input array
 * Problem Link : https://edabit.com/challenge/N5P6d6CipYyDg9w2M
*/
#include <iostream>
#include <vector>
using namespace std;

vector<float> minMax(vector<float> arr)
{
    float mini = arr[0];
    float maxi = arr[0];
    vector<float> result;
    for (int i = 0; i < arr.size(); i++)
    {
        mini = min(mini, arr[i]);
        maxi = max(maxi, arr[i]);
    }
    result.push_back(mini);
    result.push_back(maxi);
    return result;
}

int main()
{

    int numberOfEle;
    cin >> numberOfEle;

    vector<float> arr;
    float ele;

    for (int i = 0; i < numberOfEle; i++)
    {
        cin >> ele;
        arr.push_back(ele);
    }

    vector<float> result;

    result = minMax(arr);
    cout << result[0] << " " << result[1];
    return 0;
}
knln
    vhjbvmnklsdknasd
        sdsad
            sdasd