#include <iostream>
#include <string>

using namespace std;
void position(string str){
    for(int i=0; i<str.length(); i++){
        if(i%2==0){
            cout<<"Evenly Position: "<<str[i]<<endl;
        }
        else{
            cout<<"Evenly Position: "<<str[i]<<endl;
        }
    }
}

int main()
{
  string mystr;
  cout << "What's your string? ";
  getline (cin, mystr);
  position(mystr);
   
   return 0;
}