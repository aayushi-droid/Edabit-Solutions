/*
Given a string s, find the longest palindromic subsequence's length in s. You may assume that the maximum length of s is 1000.
Problem Link: https://leetcode.com/problems/longest-palindromic-subsequence/
*/

class Solution {
public:
    int lcs(string X, string Y, int m, int n ) {  
        int L[m + 1][n + 1];  
        int i, j;  
        for (i = 0; i <= m; i++) {  
            for (j = 0; j <= n; j++) {  
            if (i == 0 || j == 0)  
                L[i][j] = 0;  
            else if (X[i - 1] == Y[j - 1])  
                L[i][j] = L[i - 1][j - 1] + 1;  
            else
                L[i][j] = max(L[i - 1][j], L[i][j - 1]);  
            }  
        }
        return L[m][n];  
    }   
    int longestPalindromeSubseq(string s) {
        string srev = s;
        reverse(srev.begin(), srev.end());
        return lcs(s, srev, s.length(), s.length());
    }
};
