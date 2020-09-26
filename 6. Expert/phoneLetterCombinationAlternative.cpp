#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void dfs(string digits, unordered_map<char, string> myMap, int idx, vector<char> path, vector<string>& res) {
    if (!path.empty() && path.size() == digits.size()) {
        string s = "";
        for (auto& c: path)
            s += c;
        res.push_back(s);
        return;
    }
    for (auto& c: myMap[digits[idx]]) {
        path.push_back(c);
        dfs(digits, myMap, idx+1, path, res);
        path.pop_back();
    }
}
void letterCombinations(string digits) {
	unordered_map<char, string> myMap = {{'2',"abc"}, {'3',"def"}, {'4',"ghi"},
    {'5',"jkl"}, {'6',"mno"}, {'7',"pqrs"}, {'8',"tuv"}, {'9',"wxyz"}};
    vector<string> res;
    dfs(digits, myMap, 0, {}, res);
    for(auto a:res)
    cout<<a<<endl;
}
int main()
{
    string digits;
    getline(cin,digits);
    letterCombinations(digits);
    return 0;
}