/* Problem-Task : Create a function that takes a name and returns a greeting in the form of a string.
    * Problem : https://edabit.com/challenge/56XXwAkLJGbEccYfn
*/
#include <bits/stdc++.h>
using namespace std;

string helloName(string name){
    return "Hello " + name + "!";
}

int main(){
	string name;
	cin>>name;
    cout << helloName(name);
    //helloName("Ed") ➞ "Hello Ed!"
    return 0;
}
