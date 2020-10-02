/*Problem Task - This problem will create an array of multiples
Problem Link: https://edabit.com/challenge/ebcd4Xu8TLizaj6dm
*/

#include<iostream>
#include<vector> //done using new int but below code can also be executed using vector <int>
using namespace std;

// Required function to accomplesh the task
//Pointer function is required as it expects to return an array as address passed
int *arrayOfMultiples(int num, int length)
{
    int *array = new int[length]; //decalring array as a pointer 
                                  //new int[length] will create obkect spaces for 'length' elements and intialize them to 0
    int i = 0; //For iteration
    while(i<length){
        array[i] = (num *(i+1)); //actual computation
        i+=1;
    }
    return array;  //passing an array as a pointer(address passing)

}

//main function begins here
int main()
{
    int num, length; // As per given question identifier names
    //Getting values
    cout<<"Enter the number value of num: ";
    cin>>num;
    cout<<"Enter the value of length of array: ";
    cin>>length;


    int *arr; // This is the pointer that will store the address of first elemnent address

    //Function calling
    arr = arrayOfMultiples(num, length);
    
    //Displaying elements for finalized array
    int i = 0;
    while(i<length){
        cout<<*(arr+i);
        if(i != length-1){
            cout<<", ";
        }
        i+=1;
    }
    cout<<"\n";

    return 0; //successfull completion
}