/* 
    Problem-Task : This program will solve Water Jug Problem
    Problem Link : https://edabit.com/challenge/BMujCYCkTowit85Wq
*/
#include<vector>
#include<list>
struct States{
    int x,y,z;
    int &operator[]( int i){       
    if(i == 0)
        return x;
    else if(i == 1)
        return y;
    else if(i==2)
        return z;   
    return z;}
};
bool operator==(States& a,States& b){
    return a.x == b.x && a.y == b.y && a.z==b.z;
}
bool IsHere(std::list<States> states,States element)
{
    for(auto state:states)
        if((state==element))
            return true;
    return false;        
}

int waterjug(States Capacities, States Goal){
    std::list<std::pair<States,std::list<States>>> Queue;
    std::list<States> deadends;
    Queue.push_back(std::make_pair(States{0,0,Capacities.z},std::list<States>{{}}));
    Queue.front().second.pop_front();
    while(Queue.size()>0){
        auto currentItem = Queue.front();
        Queue.pop_front();
        auto state = currentItem.first;

        if (!(state==Goal)){
            for (int i = 0; i < 3; i++)
            {
                if(state[i] != 0)
                {
                    for (int j = 1; j < 3; j++)
                    {
                        int index = (i+j)%3;
                        int val = state[index];
                        if(val < Capacities[index])
                        {   
                            States NewState(state);
                            int remain = Capacities[index] - val;
                            if(state[i] > remain){
                                NewState[i] = state[i] - remain;
                                NewState[index] = Capacities[index];  
                            }
                            else{
                                NewState[index] += state[i];
                                NewState[i] = 0;
                            }

                            if(!IsHere(currentItem.second,NewState))
                            {
                                if(!IsHere(deadends,NewState))
                                {
                                    currentItem.second.push_back(NewState);
                                    Queue.push_back(make_pair(NewState,currentItem.second));
                                }
                            }else {
                                deadends.push_back(NewState);
                            }
                        }
                    }
                    
                }
            }
        }
        else 
           {    
                return currentItem.second.size();
        }
    }
    return 0;
}