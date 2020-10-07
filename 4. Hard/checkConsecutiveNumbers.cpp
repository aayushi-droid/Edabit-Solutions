/* Problem-Task : This program checks whether numbers are 
consecutive
Problem Link : https://edabit.com/challenge/TMxknsmodKM3HDbYt
*/

#include <bits/stdc++.h>
using namespace std;

bool consecutive(priority_queue<int> pq){
	int start=pq.top();
	pq.pop();
	while(!pq.empty()){
		if(start-1!=pq.top()){
			return false;
		}
		start--;
		pq.pop();
	}
	return true;
}


int main(){
    int n;
    cin>>n;
    priority_queue<int> pq;
    for(int i=0;i<n;i++){
    	int x;
        cin>>x;
        pq.push(x);
    }
    if(consecutive(pq)){
    	cout<<"True";
	}
	else{
		cout<<"False";
	}
	return 0;
}
