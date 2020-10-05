#include<iostream>
using namespace std;
int main(){
    int i,m,number,count=0;
    cout<<"Enter the number of elements:";
    cin>>m;
    int arr[m];
    for (i=0;i<m;i++){
        cout<<"Enter the "<<i+1<<" element:";
        cin>>arr[i];
    }
    cout<<"Enter the number:";
    cin>>number;
    for (i=0;i<m;i++){
        if(number==arr[i]){
            count++;
        }
    }
    cout<<"The number "<<number<<" occurs "<<count<<" times in array";
    return 0;
}
