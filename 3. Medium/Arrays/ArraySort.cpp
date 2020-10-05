#include<iostream>
using namespace std;
int main(){
int i,m;
cout<<"Enter the length of array";
cin>>m;
int arr[m];
for (i=0;i<m;i++){
    cout<<"Enter the "<<i+1<<" th element";
    cin>>arr[i];
}
int max=arr[0],temp,loc,j=0,high=m-1,n;
n=m;
while(j<n){
    for (i=0;i<m;i++){
        if (max<=arr[i]){
            max=arr[i];
            loc=i;}
        else{
            continue;
        }
    }
    temp=arr[loc];
    arr[loc]=arr[high];
    arr[high]=temp;
    high--;
    m=m-1;
    max=arr[m-1];
    j++;
}
for (i=0;i<n;i++){
    cout<<"The "<<i+1<<" element is:"<<arr[i]<<endl;
}
return 0;
system("pause");
}
