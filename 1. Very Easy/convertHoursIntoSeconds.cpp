/*
Problem Link
https://edabit.com/challenge/y9Jhs33vdts5GPMW7

*/




#include<bits/stdc++.h>
using namespace std;
long howManySeconds(int hours){
	return 60*60*hours;
}
int main(){
	long hours;
	cin>>hours;
	cout<<howManySeconds(hours)<<"\n";
}