/* Problem-Task : This program will add two numbers
 * Problem Link : https://edabit.com/challenge/SFzHtm63XT6EYNHWY
*/

#include <iostream>
#include <cmath>
#include <vector>
#include <sstream>


int absoluteSum(std::vector<int> arr)
{
    int sum=0;
    for(int x:arr){
        sum+=std::abs(x);
    }
    return sum;
}

int main()
{
    std::vector<int> n;
    std::string input;
    int x;

    std::getline(std::cin,input);
    std::istringstream is(input);

    while(is>>x){
        n.push_back(x);
    }
    
    int sum=absoluteSum(n);
    std::cout<<sum<<std::endl;
    return 0;
}