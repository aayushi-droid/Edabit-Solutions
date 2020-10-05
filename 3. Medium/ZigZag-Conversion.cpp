/* Problem Title - Zigzag-Conversion
   Problem Link  - https://leetcode.com/problems/zigzag-conversion/
   Problem Statement - The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

P   A   H   N
A P L S I I G
Y   I   R

*/



// Solution

class Solution {
public:
string convert(string s, int numRows) {
    string apt;
    int tie1 = (numRows-1)*2;
    int n = s.size();
    if(numRows >= s.size() || numRows <= 1){
        return s;
    }
    for(int i = 0; i < numRows; ++i){
        int con = i;
        while(con < n){
            apt.push_back(s[con]);
            if(i > 0 && i < numRows-1){
                int tie2 = (numRows - i - 1)*2;
                if(con+tie2 < n)
                    apt.push_back(s[con+tie2]);
            }
            con += tie1;
        }
    }
    return apt;
}
};
