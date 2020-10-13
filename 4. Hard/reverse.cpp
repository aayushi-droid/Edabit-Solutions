/* Problem-Task : This program to reverse only charecters not digits
*  Problem Link : https://edabit.com/challenge/7MB4iAGx53BMgHAC6
*/
#include <iostream>
#include <locale>

using namespace std;

string reverse(string str) {
    string ans = "";
 int j = str.size() - 1;
 for (int i = 0; i < str.size(); i ++){
     if(isdigit(str[i])){
         ans += str[i];
     }else{
         while(j >= 0 && isdigit(str[j]) && j - 1 >= 0) j --;
         if(j >= 0)
             ans += str[j];
         j --;
     }
 }
 return ans;
}

int main()
{
    cout<<reverse("cb89a") << '\n';
    cout<<reverse("onm5lk923j") << '\n';
    cout<<reverse("123a45") << '\n';
    return 0;
}
