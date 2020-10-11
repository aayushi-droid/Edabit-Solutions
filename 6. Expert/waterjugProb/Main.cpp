// #include<waterjugProb.h>
#include<iostream>
#include"waterjugProb.h"
using namespace std;

void printPath(std::list<States> states)
{
    for(auto state:states)
        std::cout << state.x << " " << state.y << " " << state.z << '\n';
}

int main()
{
    States s1{3, 5, 8},s2{0, 3, 5};
    // States s1{4, 17, 22},s2{2, 5, 15};

   auto MinOperations = waterjug(s1,s2);
   if(MinOperations)
        std::cout << MinOperations << '\n';
   else      
        std::cout << "No solution.\n";


}

